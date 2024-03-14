
#include "SokolRendererManager.hpp"
#include "SokolFactory.hpp"
#include "_gen_shader/shader_debug.h"
#include "_gen_shader/shader_view.h"
#include "instance/ViewInstance.hpp"
#include <grumble/debug/GridResolution.hpp>
#include <imgui.h>

void sokol_log(const char *tag, uint32_t log_level, uint32_t log_item_id,
               const char *message_or_null, uint32_t line_nr,
               const char *filename_or_null, void *user_data) {

  grumble::Logger::info(fmt::format("{}: {}", log_item_id, message_or_null));
}

SokolRendererManager::SokolRendererManager(
    grumble::RendererManagerConfiguration configuration,
    grumble::SpriteManager::shared_ptr spriteManager,
    grumble::FontManager::shared_ptr fontMananger,
    grumble::InputManager::shared_ptr inputManager,
    SDLApplication::shared_ptr sdlApplication)
    : _spriteManager(spriteManager), _fontManager(fontMananger),
      _sdlApplication(sdlApplication), _inputManager(inputManager),
      _debugMenuVisible(false), grumble::RendererManager(configuration) {

  _state = {};
}

SokolRendererManager::~SokolRendererManager() {}

void SokolRendererManager::setup() {

  // loading glad
  int version = gladLoadGLLoader((GLADloadproc)SDL_GL_GetProcAddress);
  if (version == 0) {
    logError("Error when loading glad");
    return;
  }
  logDebug("Glad GL Loader Version: " + std::to_string(version));

  SDL_GL_SetSwapInterval(-1);

  // setting up sokol
  sg_setup((sg_desc){.logger = (sg_logger){.func = sokol_log}});
  assert(sg_isvalid());

  setupViewBindings();

  // setting up the buffer layout for the view pipeline
  sg_vertex_layout_state view_layout = {};
  view_layout.buffers[1].step_func = SG_VERTEXSTEP_PER_INSTANCE;
  view_layout.attrs[ATTR_view_vs_pos].format = SG_VERTEXFORMAT_FLOAT3;
  view_layout.attrs[ATTR_view_vs_pos].buffer_index = 0;
  view_layout.attrs[ATTR_view_vs_inst_mod_colx].format = SG_VERTEXFORMAT_FLOAT4;
  view_layout.attrs[ATTR_view_vs_inst_mod_colx].buffer_index = 1;
  view_layout.attrs[ATTR_view_vs_inst_mod_coly].format = SG_VERTEXFORMAT_FLOAT4;
  view_layout.attrs[ATTR_view_vs_inst_mod_coly].buffer_index = 1;
  view_layout.attrs[ATTR_view_vs_inst_mod_colz].format = SG_VERTEXFORMAT_FLOAT4;
  view_layout.attrs[ATTR_view_vs_inst_mod_colz].buffer_index = 1;
  view_layout.attrs[ATTR_view_vs_inst_mod_colw].format = SG_VERTEXFORMAT_FLOAT4;
  view_layout.attrs[ATTR_view_vs_inst_mod_colw].buffer_index = 1;
  view_layout.attrs[ATTR_view_vs_inst_tint].format = SG_VERTEXFORMAT_FLOAT4;
  view_layout.attrs[ATTR_view_vs_inst_tint].buffer_index = 1;

  // setting up view pipeline
  sg_shader view_shader = sg_make_shader(view_shader_desc(sg_query_backend()));
  sg_pipeline_desc pipeline_desc = {};
  pipeline_desc.shader = view_shader;
  pipeline_desc.label = "main-pipeline";
  pipeline_desc.index_type = SG_INDEXTYPE_UINT16;
  pipeline_desc.layout = view_layout;
  _state.pipeline = sg_make_pipeline(&pipeline_desc);

  setupDebugGridBindings();

  // setting up the buffer layout for the debug pipeline
  sg_vertex_layout_state debug_layout = {};
  debug_layout.buffers[1].step_func = SG_VERTEXSTEP_PER_INSTANCE;
  debug_layout.attrs[ATTR_debug_vs_pos].format = SG_VERTEXFORMAT_FLOAT3;
  debug_layout.attrs[ATTR_debug_vs_pos].buffer_index = 0;
  debug_layout.attrs[ATTR_debug_vs_inst_ori].format = SG_VERTEXFORMAT_SHORT2;
  debug_layout.attrs[ATTR_debug_vs_inst_ori].buffer_index = 1;
  debug_layout.attrs[ATTR_debug_vs_inst_off].format = SG_VERTEXFORMAT_FLOAT;
  debug_layout.attrs[ATTR_debug_vs_inst_off].buffer_index = 1;

  // setting up debug pipeline
  sg_shader debug_shader =
      sg_make_shader(debug_shader_desc(sg_query_backend()));
  sg_pipeline_desc debug_pipeline_desc = {};
  debug_pipeline_desc.shader = debug_shader;
  debug_pipeline_desc.label = "debug-pipeline";
  debug_pipeline_desc.index_type = SG_INDEXTYPE_UINT16;
  debug_pipeline_desc.primitive_type = SG_PRIMITIVETYPE_LINES;
  debug_pipeline_desc.layout = debug_layout;
  _state.debug_pipeline = sg_make_pipeline(debug_pipeline_desc);
  updateDebugGridInstances();

  // a pass action to clear framebuffer to black
  _state.pass_action =
      (sg_pass_action){.colors = {{.load_action = SG_LOADACTION_CLEAR,
                                   .clear_value = {0.0f, 0.0f, 0.0f, 1.0f}}}

      };

  // setting up imgui
  simgui_setup((simgui_desc_t){.logger = {.func = sokol_log}});
}

void SokolRendererManager::setupViewBindings() {
  float vertices[] = QUAD_VERTICES;
  uint16_t indices[] = QUAD_INDICES;

  _state.view_bindings.vertex_buffers[0] =
      SokolFactory::createVertexBuffer(SG_RANGE(vertices), "view");

  _state.view_bindings.vertex_buffers[1] = SokolFactory::createInstanceBuffer(
      MAX_VIEW_INSTANCES, sizeof(ViewInstance), "view");

  _state.view_bindings.index_buffer =
      SokolFactory::createIndexBuffer(SG_RANGE(indices), "view");
}

void SokolRendererManager::setupDebugGridBindings() {
  float vertices[] = HORIZONTAL_LINE;

  _state.debug_grid_bindings.vertex_buffers[0] =
      sg_make_buffer((sg_buffer_desc){.type = SG_BUFFERTYPE_VERTEXBUFFER,
                                      .data = SG_RANGE(vertices),
                                      .label = "debug-grid-vertices"});

  _state.debug_grid_bindings.vertex_buffers[1] =
      sg_make_buffer((sg_buffer_desc){.size = MAX_DEBUG_LINE_INSTANCES *
                                              sizeof(DebugLineInstance),
                                      .usage = SG_USAGE_STREAM,
                                      .label = "debug-grid-instances"});

  uint16_t indices[] = {0, 1};
  _state.debug_grid_bindings.index_buffer =
      sg_make_buffer((sg_buffer_desc){.type = SG_BUFFERTYPE_INDEXBUFFER,
                                      .data = SG_RANGE(indices),
                                      .label = "debug-grid-indices"});
}

void SokolRendererManager::updateDebugGridInstances() {
  float offset = 0.1f;

  switch (debugState()->gridResolution()) {
  case grumble::GridResolution::Small:
    _state.debug_line_instance_count = 40;
    offset = 0.1f;
    break;
  case grumble::GridResolution::Medium:
    offset = 0.2f;
    _state.debug_line_instance_count = 20;
    break;
  case grumble::GridResolution::Large:
    offset = 0.25f;
    _state.debug_line_instance_count = 16;
    break;
  }

  int offset_index = 0;
  for (int i = 0; i < _state.debug_line_instance_count; i += 2) {
    float inst_off = offset * (offset_index + 1);
    _state.debug_grid_instances[i].orientation = 0;
    _state.debug_grid_instances[i].offset = inst_off;
    _state.debug_grid_instances[i + 1].orientation = 1;
    _state.debug_grid_instances[i + 1].offset = inst_off;
    offset_index++;
  }

  sg_update_buffer(
      _state.debug_grid_bindings.vertex_buffers[1],
      (sg_range){.ptr = _state.debug_grid_instances,
                 .size = MAX_DEBUG_LINE_INSTANCES * sizeof(DebugLineInstance)});
}

void SokolRendererManager::teardown() {
  simgui_shutdown();
  sg_shutdown();
}

void SokolRendererManager::prepareFrame() {
  HMM_Vec2 size = _sdlApplication->screenSize();
  simgui_new_frame(
      {(int)size.Width, (int)size.Height, ImGui::GetIO().DeltaTime});
  buildDebugMenu();
  sg_begin_default_pass(_state.pass_action, size.Width, size.Height);
  sg_apply_pipeline(_state.pipeline);
  sg_apply_bindings(&_state.view_bindings);

  // updating the uniforms
  view_vs_uni_t view_uni;
  view_uni.pv = projectionViewMatrix();
  sg_apply_uniforms(SG_SHADERSTAGE_VS, SLOT_view_vs_uni, SG_RANGE(view_uni));
}

void SokolRendererManager::renderView(grumble::Transform::shared_ptr transform,
                                      grumble::Renderer::shared_ptr renderer) {

  HMM_Mat4 modelMatrix = transform->modelMatrix(1.0f);
  uint32_t instanceId = renderer->instanceId();
  _state.view_instances[instanceId].tint = {
      renderer->tint().r, renderer->tint().g, renderer->tint().b,
      renderer->tint().a};
  _state.view_instances[instanceId].colx = modelMatrix.Columns[0];
  _state.view_instances[instanceId].coly = modelMatrix.Columns[1];
  _state.view_instances[instanceId].colz = modelMatrix.Columns[2];
  _state.view_instances[instanceId].colw = modelMatrix.Columns[3];
}

void SokolRendererManager::renderImageView(
    grumble::Transform::shared_ptr transform,
    grumble::ImageRenderer::shared_ptr renderer) {}

void SokolRendererManager::renderLabel(
    grumble::Transform::shared_ptr transform,
    grumble::TextRenderer::shared_ptr renderer) {}

void SokolRendererManager::buildDebugMenu() {
  if (_inputManager->isInputTriggered(grumble::InputCode::D)) {
    _debugMenuVisible = !_debugMenuVisible;
  }

  if (!_debugMenuVisible) {
    return;
  }

  ImGui::Text("Debug");
  ImGui::Text("Application average %.3f ms/frame (%.1f FPS)",
              1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);

  // setting up the debug grid menu
  if (ImGui::CollapsingHeader("Debug Grid")) {
    std ::string toggleGridOnText = debugState()->gridVisible() ? "On" : "Off";
    std::string toggleGridButtonLabel =
        fmt::format("Toggle Grid ({})", toggleGridOnText);
    if (ImGui::Button(toggleGridButtonLabel.c_str())) {
      debugState()->toggleGridVisible();
    }

    ImGui::Spacing();

    ImGui::Text("Grid Resolution");

    if (ImGui::RadioButton("Small", debugState()->gridResolution() ==
                                        grumble::GridResolution::Small)) {
      debugState()->setGridResolution(grumble::GridResolution::Small);
    }

    if (ImGui::RadioButton("Medium", debugState()->gridResolution() ==
                                         grumble::GridResolution::Medium)) {
      debugState()->setGridResolution(grumble::GridResolution::Medium);
    }

    if (ImGui::RadioButton("Large", debugState()->gridResolution() ==
                                        grumble::GridResolution::Large)) {
      debugState()->setGridResolution(grumble::GridResolution::Large);
    }
  }
}

void SokolRendererManager::commitFrame() {
  sg_update_buffer(
      _state.view_bindings.vertex_buffers[1],
      (sg_range){.ptr = _state.view_instances,
                 .size = MAX_VIEW_INSTANCES * sizeof(ViewInstance)});

  // rendering
  sg_draw(0, 6, MAX_VIEW_INSTANCES);

  if (debugState()->gridVisible()) {
    sg_apply_pipeline(_state.debug_pipeline);
    sg_apply_bindings(&_state.debug_grid_bindings);

    updateDebugGridInstances();
    sg_draw(0, 2, _state.debug_line_instance_count);
  }

  simgui_render();

  sg_end_pass();
  sg_commit();
  SDL_GL_SwapWindow(_sdlApplication->window());
}
