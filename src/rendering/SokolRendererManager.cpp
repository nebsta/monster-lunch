#include "SokolRendererManager.hpp"
#include "../debug/ImGuiDebugView.hpp"
#include "../rendering/sokol.hpp"
#include "Shapes.hpp"
#include "SokolFactory.hpp"
#include <grumble/io/FileManager.hpp>
#include <memory>

void sokol_log(const char *tag, uint32_t log_level, uint32_t log_item_id,
               const char *message_or_null, uint32_t line_nr,
               const char *filename_or_null, void *user_data) {

  grumble::Logger::info(fmt::format("{}: {}", log_item_id, message_or_null));
}

SokolRendererManager::SokolRendererManager(
    grumble::RendererManagerConfiguration configuration,
    grumble::FileManager::shared_ptr fileManager,
    grumble::SpriteManager::shared_ptr spriteManager,
    grumble::FontManager::shared_ptr fontMananger,
    grumble::InputManager::shared_ptr inputManager,
    SDLApplication::shared_ptr sdlApplication)
    : _fileManager(fileManager), _spriteManager(spriteManager),
      _fontManager(fontMananger), _sdlApplication(sdlApplication),
      _inputManager(inputManager), grumble::RendererManager(configuration) {
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

  // setup sokol-debugtext
  sdtx_setup((sdtx_desc_t){
      .fonts = {sdtx_font_kc853()},
      .logger = {.func = sokol_log},
  });

  setupViewBindings();

  // setting up the buffer layout for the view pipeline
  sg_vertex_layout_state view_layout = {};
  view_layout.buffers[1].step_func = SG_VERTEXSTEP_PER_INSTANCE;
  view_layout.attrs[ATTR_view_vs_pos].format = SG_VERTEXFORMAT_FLOAT3;
  view_layout.attrs[ATTR_view_vs_pos].buffer_index = 0;
  view_layout.attrs[ATTR_view_vs_texcoord0].format = SG_VERTEXFORMAT_SHORT2;
  view_layout.attrs[ATTR_view_vs_texcoord0].buffer_index = 0;
  view_layout.attrs[ATTR_view_vs_inst_mod_colx].format = SG_VERTEXFORMAT_FLOAT4;
  view_layout.attrs[ATTR_view_vs_inst_mod_colx].buffer_index = 1;
  view_layout.attrs[ATTR_view_vs_inst_mod_coly].format = SG_VERTEXFORMAT_FLOAT4;
  view_layout.attrs[ATTR_view_vs_inst_mod_coly].buffer_index = 1;
  view_layout.attrs[ATTR_view_vs_inst_mod_colz].format = SG_VERTEXFORMAT_FLOAT4;
  view_layout.attrs[ATTR_view_vs_inst_mod_colz].buffer_index = 1;
  view_layout.attrs[ATTR_view_vs_inst_mod_colw].format = SG_VERTEXFORMAT_FLOAT4;
  view_layout.attrs[ATTR_view_vs_inst_mod_colw].buffer_index = 1;
  // view_layout.attrs[ATTR_view_vs_inst_tint].format = SG_VERTEXFORMAT_FLOAT4;
  // view_layout.attrs[ATTR_view_vs_inst_tint].buffer_index = 1;

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

  // a pass action to clear framebuffer to black
  _state.pass_action =
      (sg_pass_action){.colors = {{.load_action = SG_LOADACTION_CLEAR,
                                   .clear_value = {0.0f, 0.0f, 0.0f, 1.0f}}}

      };

  // setting up imgui
  simgui_setup((simgui_desc_t){.logger = {.func = sokol_log}});

  if (auto imageFile = _spriteManager->getAtlasData("main").lock()) {
    if (auto data = imageFile->data().lock()) {
      _state.view_bindings.fs.images[SLOT_tex] = sg_alloc_image();
      _state.view_bindings.fs.samplers[SLOT_smp] =
          sg_make_sampler((sg_sampler_desc){
              .min_filter = SG_FILTER_LINEAR,
              .mag_filter = SG_FILTER_LINEAR,
          });

      sg_image_data image_data;
      sg_range subimage[SG_CUBEFACE_NUM][SG_MAX_MIPMAPS];
      image_data.subimage[0][0] = {
          .ptr = data.get(),
          .size = (size_t)(imageFile->width() * imageFile->height() * 4),
      };

      sg_init_image(_state.view_bindings.fs.images[SLOT_tex],
                    (sg_image_desc){.width = imageFile->width(),
                                    .height = imageFile->height(),
                                    .pixel_format = SG_PIXELFORMAT_RGBA8,
                                    .data = image_data});
    }
  }
}

void SokolRendererManager::setupViewBindings() {
  vertex vertices[] = QUAD_VERTICES;
  uint16_t indices[] = QUAD_INDICES;

  _state.view_bindings = SokolFactory::createBindings(
      SG_RANGE(vertices), SG_RANGE(indices), MAX_VIEW_INSTANCES,
      sizeof(ViewInstance), "view");
}

void SokolRendererManager::setupDebugGridBindings() {
  float vertices[] = HORIZONTAL_LINE;
  uint16_t indices[] = {0, 1};

  _state.debug_grid_bindings = SokolFactory::createBindings(
      SG_RANGE(vertices), SG_RANGE(indices), MAX_DEBUG_LINE_INSTANCES,
      sizeof(DebugLineInstance), "debug-grid");
}

void SokolRendererManager::teardown() {
  sdtx_shutdown();
  simgui_shutdown();
  sg_shutdown();
}

void SokolRendererManager::prepareMainLayer(double t) {
  HMM_Vec2 size = _sdlApplication->screenSize();

  sg_begin_pass((sg_pass){.action = _state.pass_action,
                          .swapchain = SokolFactory::createSwapchain(size)});
  sg_apply_pipeline(_state.pipeline);
  sg_apply_bindings(&_state.view_bindings);

  setScreenSize({size.Width, size.Height});

  // updating the uniforms
  view_vs_uni_t view_uni;
  view_uni.pv = projectionViewMatrix(t);
  sg_apply_uniforms(SG_SHADERSTAGE_VS, SLOT_view_vs_uni, SG_RANGE(view_uni));
}

void SokolRendererManager::updateBuffer(grumble::View::shared_ptr view,
                                        double t) {
  HMM_Mat4 modelMatrix = view->transform()->modelMatrix(1.0f);
  uint32_t instanceId = view->renderer()->instanceId();
  // _state.view_instances[instanceId].tint = {
  // view->renderer()->tint().r, view->renderer()->tint().g,
  // view->renderer()->tint().b, view->renderer()->tint().a};
  _state.view_instances[instanceId].colx = modelMatrix.Columns[0];
  _state.view_instances[instanceId].coly = modelMatrix.Columns[1];
  _state.view_instances[instanceId].colz = modelMatrix.Columns[2];
  _state.view_instances[instanceId].colw = modelMatrix.Columns[3];
}

void SokolRendererManager::drawMainLayer() {
  sg_update_buffer(
      _state.view_bindings.vertex_buffers[1],
      (sg_range){.ptr = _state.view_instances,
                 .size = MAX_VIEW_INSTANCES * sizeof(ViewInstance)});

  sg_draw(0, 6, MAX_VIEW_INSTANCES);
}

void SokolRendererManager::drawDebugGrid(grumble::GridResolution resolution,
                                         double t) {
  HMM_Vec2 size = _sdlApplication->screenSize();
  float gridUnit;
  float offset = 0.1f;

  switch (resolution) {
  case grumble::GridResolution::Small:
    _state.debug_line_instance_count = 84;
    gridUnit = size.Width / 40.0f;
    offset = 0.05f;
    break;
  case grumble::GridResolution::Medium:
    _state.debug_line_instance_count = 42;
    offset = 0.1f;
    gridUnit = size.Width / 20.0f;
    break;
  case grumble::GridResolution::Large:
    _state.debug_line_instance_count = 20;
    offset = 0.2f;
    gridUnit = size.Width / 10.0f;
    break;
  }

  float gridOffsetX = -(cameraPos(t).X / (size.Width / 2.0f));
  float gridOffsetY = (cameraPos(t).Y / (size.Height / 2.0f));
  int offset_index = 0;
  for (int i = 0; i < _state.debug_line_instance_count; i += 2) {
    float inst_off = offset * offset_index;
    _state.debug_grid_instances[i].orientation = 0;
    _state.debug_grid_instances[i].offset = inst_off;
    _state.debug_grid_instances[i + 1].orientation = 1;
    _state.debug_grid_instances[i + 1].offset = inst_off;
    offset_index++;
  }

  sg_apply_pipeline(_state.debug_pipeline);
  sg_apply_bindings(&_state.debug_grid_bindings);

  debug_vs_uni_t debug_uni = {{gridOffsetX, gridOffsetY}};
  sg_apply_uniforms(SG_SHADERSTAGE_VS, SLOT_debug_vs_uni, SG_RANGE(debug_uni));

  sg_update_buffer(_state.debug_grid_bindings.vertex_buffers[1],
                   (sg_range){.ptr = _state.debug_grid_instances,
                              .size = _state.debug_line_instance_count *
                                      sizeof(DebugLineInstance)});

  sg_draw(0, 2, _state.debug_line_instance_count);
}

void SokolRendererManager::drawDebugStats(
    grumble::DebugState::shared_ptr state) {
  HMM_Vec2 size = _sdlApplication->screenSize();
  sdtx_canvas(size.Width * 0.5f, size.Height * 0.5f);
  sdtx_origin(2.0f, 2.0f);
  sdtx_home();
  sdtx_font(0);
  sdtx_color3b(0xf4, 0x43, 0x36);
  sdtx_puts(
      fmt::format("Avg Frame Time(ms): {:.0f}", state->averageFrameTimeMs())
          .c_str());
  sdtx_crlf();
  sdtx_puts(
      fmt::format("Avg Update Time(ms): {:.0f}", state->averageUpdateTimeMs())
          .c_str());
  sdtx_crlf();
  sdtx_puts(
      fmt::format("Avg Render Time(ms): {:.0f}", state->averageRenderTimeMs())
          .c_str());
  sdtx_crlf();
  sdtx_puts(fmt::format("Avg Frame Lag(ms): {:.0f}", state->averageFrameLagMs())
                .c_str());
  sdtx_crlf();
  sdtx_puts(
      fmt::format("Avg Frame Delay(ms): {:.0f}", state->averageFrameDelayMs())
          .c_str());
  sdtx_crlf();

  sdtx_puts(fmt::format("Average FPS: {:.0f}", state->averageFPS()).c_str());
  sdtx_crlf();

  sdtx_draw();
}

void SokolRendererManager::drawDebugMenu(
    grumble::DebugState::shared_ptr debugState, double t) {
  HMM_Vec2 size = _sdlApplication->screenSize();
  ImGuiDebugView::draw(size, cameraPos(t), debugState);
}

void SokolRendererManager::commitFrame() {
  sg_end_pass();
  sg_commit();
  SDL_GL_SwapWindow(_sdlApplication->window());
}
