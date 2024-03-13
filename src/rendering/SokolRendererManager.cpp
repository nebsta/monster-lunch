
#include "SokolRendererManager.hpp"
#include "Shapes.hpp"
#include "ViewInstance.hpp"
#include <fmt/core.h>
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
  setupDebugGridBindings();

  sg_shader view_shader = sg_make_shader(view_shader_desc(sg_query_backend()));

  sg_pipeline_desc pipeline_desc = {};
  pipeline_desc.shader = view_shader;
  pipeline_desc.label = "main-pipeline";
  pipeline_desc.index_type = SG_INDEXTYPE_UINT16;

  // setup vertex buffer layout
  sg_vertex_layout_state layout = {};
  layout.buffers[1].step_func = SG_VERTEXSTEP_PER_INSTANCE;
  layout.attrs[ATTR_view_vs_pos].format = SG_VERTEXFORMAT_FLOAT3;
  layout.attrs[ATTR_view_vs_pos].buffer_index = 0;
  layout.attrs[ATTR_view_vs_inst_mod_colx].format = SG_VERTEXFORMAT_FLOAT4;
  layout.attrs[ATTR_view_vs_inst_mod_colx].buffer_index = 1;
  layout.attrs[ATTR_view_vs_inst_mod_coly].format = SG_VERTEXFORMAT_FLOAT4;
  layout.attrs[ATTR_view_vs_inst_mod_coly].buffer_index = 1;
  layout.attrs[ATTR_view_vs_inst_mod_colz].format = SG_VERTEXFORMAT_FLOAT4;
  layout.attrs[ATTR_view_vs_inst_mod_colz].buffer_index = 1;
  layout.attrs[ATTR_view_vs_inst_mod_colw].format = SG_VERTEXFORMAT_FLOAT4;
  layout.attrs[ATTR_view_vs_inst_mod_colw].buffer_index = 1;
  layout.attrs[ATTR_view_vs_inst_tint].format = SG_VERTEXFORMAT_FLOAT4;
  layout.attrs[ATTR_view_vs_inst_tint].buffer_index = 1;

  pipeline_desc.layout = layout;
  _state.pipeline = sg_make_pipeline(&pipeline_desc);

  sg_shader debug_shader =
      sg_make_shader(debug_shader_desc(sg_query_backend()));
  _state.debug_pipeline = sg_make_pipeline(
      (sg_pipeline_desc){.shader = debug_shader,
                         .layout = layout,
                         .primitive_type = SG_PRIMITIVETYPE_LINES,
                         .index_type = SG_INDEXTYPE_UINT16,
                         .label = "debug-pipeline"});

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
  _state.view_bindings.vertex_buffers[0] =
      sg_make_buffer((sg_buffer_desc){.type = SG_BUFFERTYPE_VERTEXBUFFER,
                                      .data = SG_RANGE(vertices),
                                      .label = "view-vertices"});

  _state.view_bindings.vertex_buffers[1] = sg_make_buffer(
      (sg_buffer_desc){.size = MAX_INSTANCES * sizeof(ViewInstance),
                       .usage = SG_USAGE_STREAM,
                       .label = "view-instances"});

  uint16_t indices[] = QUAD_INDICES;
  _state.view_bindings.index_buffer =
      sg_make_buffer((sg_buffer_desc){.type = SG_BUFFERTYPE_INDEXBUFFER,
                                      .data = SG_RANGE(indices),
                                      .label = "view-indices"});
}

void SokolRendererManager::setupDebugGridBindings() {
  float vertices[] = GRID_VERTICES;
  _state.debug_grid_bindings.vertex_buffers[0] =
      sg_make_buffer((sg_buffer_desc){.type = SG_BUFFERTYPE_VERTEXBUFFER,
                                      .data = SG_RANGE(vertices),
                                      .label = "debug-grid-vertices"}

      );

  _state.debug_grid_bindings.vertex_buffers[1] =
      sg_make_buffer((sg_buffer_desc){.size = sizeof(ViewInstance),
                                      .usage = SG_USAGE_STREAM,
                                      .label = "debug-grid-instance"});

  uint16_t indices[] = GRID_INDICES;
  _state.debug_grid_bindings.index_buffer =
      sg_make_buffer((sg_buffer_desc){.type = SG_BUFFERTYPE_INDEXBUFFER,
                                      .data = SG_RANGE(indices),
                                      .label = "debug-grid-indices"});

  _state.debug_grid_instance.tint = {1.0f, 1.0f, 0.0f, 1.0f};

  sg_update_buffer(_state.debug_grid_bindings.vertex_buffers[1],
                   (sg_range){.ptr = &_state.debug_grid_instance,
                              .size = sizeof(ViewInstance)});
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
  vs_params_t params;
  params.pv = projectionViewMatrix();
  sg_apply_uniforms(SG_SHADERSTAGE_VS, SLOT_vs_params, SG_RANGE(params));
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

  std::string toggleGridOnText = debugState()->gridVisible() ? "On" : "Off";
  std::string toggleGridButtonLabel =
      fmt::format("Toggle Grid ({})", toggleGridOnText);
  if (ImGui::Button(toggleGridButtonLabel.c_str())) {
    debugState()->toggleGridVisible();
  }
}

void SokolRendererManager::commitFrame() {
  sg_update_buffer(_state.view_bindings.vertex_buffers[1],
                   (sg_range){.ptr = _state.view_instances,
                              .size = MAX_INSTANCES * sizeof(ViewInstance)});

  // rendering
  sg_draw(0, 6, MAX_INSTANCES);

  if (debugState()->gridVisible()) {
    sg_apply_pipeline(_state.debug_pipeline);
    sg_apply_bindings(&_state.debug_grid_bindings);
    sg_draw(0, 38, 1);
  }

  simgui_render();

  sg_end_pass();
  sg_commit();
  SDL_GL_SwapWindow(_sdlApplication->window());
}
