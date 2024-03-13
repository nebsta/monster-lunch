
#include "SokolRendererManager.hpp"
#include "ViewInstance.hpp"

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

  sg_logger logger = {};
  logger.func = sokol_log;

  _sg_desc = {};
  _sg_desc.logger = logger;

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
  sg_setup(&_sg_desc);
  assert(sg_isvalid());

  float vertices[] = QUAD_VERTICES;
  sg_buffer_desc vertex_buffer_desc = {};
  vertex_buffer_desc.type = SG_BUFFERTYPE_VERTEXBUFFER;
  vertex_buffer_desc.data = SG_RANGE(vertices);
  vertex_buffer_desc.label = fmt::format("vertex-shape-{}", 0).c_str();
  _state.bindings.vertex_buffers[0] = sg_make_buffer(&vertex_buffer_desc);

  _state.bindings.vertex_buffers[1] = sg_make_buffer(
      (sg_buffer_desc){.size = MAX_INSTANCES * sizeof(ViewInstance),
                       .usage = SG_USAGE_STREAM,
                       .label = "instance-shape-0"});

  uint16_t indices[] = QUAD_INDICES;
  sg_buffer_desc index_buffer_desc = {};
  index_buffer_desc.type = SG_BUFFERTYPE_INDEXBUFFER;
  index_buffer_desc.data = SG_RANGE(indices);
  index_buffer_desc.label = fmt::format("index-shape-{}", 0).c_str();
  _state.bindings.index_buffer = sg_make_buffer(&index_buffer_desc);

  sg_shader shader = sg_make_shader(view_shader_desc(sg_query_backend()));

  sg_pipeline_desc pipeline_desc = {};
  pipeline_desc.shader = shader;
  pipeline_desc.label = "main-pipeline";
  pipeline_desc.index_type = SG_INDEXTYPE_UINT16;

  sg_vertex_layout_state layout = {};
  layout.buffers[1].step_func = SG_VERTEXSTEP_PER_INSTANCE;
  layout.attrs[ATTR_vs_pos].format = SG_VERTEXFORMAT_FLOAT3;
  layout.attrs[ATTR_vs_pos].buffer_index = 0;

  layout.attrs[ATTR_vs_inst_mod_colx].format = SG_VERTEXFORMAT_FLOAT4;
  layout.attrs[ATTR_vs_inst_mod_colx].buffer_index = 1;
  layout.attrs[ATTR_vs_inst_mod_coly].format = SG_VERTEXFORMAT_FLOAT4;
  layout.attrs[ATTR_vs_inst_mod_coly].buffer_index = 1;
  layout.attrs[ATTR_vs_inst_mod_colz].format = SG_VERTEXFORMAT_FLOAT4;
  layout.attrs[ATTR_vs_inst_mod_colz].buffer_index = 1;
  layout.attrs[ATTR_vs_inst_mod_colw].format = SG_VERTEXFORMAT_FLOAT4;
  layout.attrs[ATTR_vs_inst_mod_colw].buffer_index = 1;
  layout.attrs[ATTR_vs_inst_tint].format = SG_VERTEXFORMAT_FLOAT4;
  layout.attrs[ATTR_vs_inst_tint].buffer_index = 1;

  pipeline_desc.layout = layout;
  _state.pipeline = sg_make_pipeline(&pipeline_desc);

  // a pass action to clear framebuffer to black
  sg_pass_action action = {};
  sg_color_attachment_action color_action = {};
  color_action.load_action = SG_LOADACTION_CLEAR;
  color_action.clear_value = {0.0f, 0.0f, 0.0f, 1.0f};
  action.colors[0] = color_action;
  _state.pass_action = action;

  // setting up imgui
  simgui_desc_t simgui_desc = {};
  simgui_desc.logger.func = sokol_log;
  simgui_setup(simgui_desc);
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
  sg_apply_bindings(&_state.bindings);

  // updating the uniforms
  vs_params_t params;
  params.pv = projectionViewMatrix();
  sg_apply_uniforms(SG_SHADERSTAGE_VS, SLOT_vs_params, SG_RANGE(params));
}

void SokolRendererManager::renderView(grumble::Transform::shared_ptr transform,
                                      grumble::Renderer::shared_ptr renderer) {

  HMM_Mat4 modelMatrix = transform->modelMatrix(1.0f);
  uint32_t instanceId = renderer->instanceId();
  _state.instances[instanceId].tint = {renderer->tint().r, renderer->tint().g,
                                       renderer->tint().b, renderer->tint().a};
  _state.instances[instanceId].colx = modelMatrix.Columns[0];
  _state.instances[instanceId].coly = modelMatrix.Columns[1];
  _state.instances[instanceId].colz = modelMatrix.Columns[2];
  _state.instances[instanceId].colw = modelMatrix.Columns[3];
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
}

void SokolRendererManager::commitFrame() {
  sg_update_buffer(_state.bindings.vertex_buffers[1],
                   (sg_range){.ptr = _state.instances,
                              .size = MAX_INSTANCES * sizeof(ViewInstance)});

  // rendering
  sg_draw(0, 6, MAX_INSTANCES);
  simgui_render();

  sg_end_pass();
  sg_commit();
  SDL_GL_SwapWindow(_sdlApplication->window());
}
