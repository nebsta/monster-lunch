
#include "SokolRendererManager.hpp"
#include <SDL_video.h>

void sokol_log(const char *tag, uint32_t log_level, uint32_t log_item_id,
               const char *message_or_null, uint32_t line_nr,
               const char *filename_or_null, void *user_data) {
  std::cout << log_item_id << ":" << message_or_null << std::endl;
}

SokolRendererManager::SokolRendererManager(
    grumble::SpriteManager::shared_ptr spriteManager,
    grumble::FontManager::shared_ptr fontMananger, SDL_Window *sdlWindow)
    : _spriteManager(spriteManager), _fontManager(fontMananger),
      _sdlWindow(sdlWindow) {

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
    grumble::Logger::error("Error when loading glad");
    return;
  }
  grumble::Logger::debug("Glad GL Loader Version: " + std::to_string(version));

  SDL_GL_SetSwapInterval(-1);

  // setting up sokol
  sg_setup(&_sg_desc);
  assert(sg_isvalid());

  // a vertex buffer with 3 vertices
  float vertices[] = {// positions            // colors
                      0.0f,  0.5f,  0.5f, 1.0f, 0.0f, 0.0f, 1.0f,
                      0.5f,  -0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 1.0f,
                      -0.5f, -0.5f, 0.5f, 0.0f, 0.0f, 1.0f, 1.0f};

  /* Coordinate space
   *     1
   * -1     1
   *    -1
   */

  sg_buffer_desc buffer_desc = {};
  buffer_desc.data = SG_RANGE(vertices);
  buffer_desc.label = "triangle-vertices";

  _state.bindings.vertex_buffers[0] = sg_make_buffer(&buffer_desc);

  sg_shader shader = sg_make_shader(triangle_shader_desc(sg_query_backend()));

  sg_pipeline_desc pipeline_desc = {};
  pipeline_desc.shader = shader;
  pipeline_desc.label = "triangle-pipeline";

  sg_vertex_layout_state layout = {};
  layout.attrs[ATTR_vs_position].format = SG_VERTEXFORMAT_FLOAT3;
  layout.attrs[ATTR_vs_color0].format = SG_VERTEXFORMAT_FLOAT4;

  pipeline_desc.layout = layout;
  _state.pipeline = sg_make_pipeline(&pipeline_desc);

  // a pass action to clear framebuffer to black
  sg_pass_action action = {};
  sg_color_attachment_action color_action = {};
  color_action.load_action = SG_LOADACTION_CLEAR;
  color_action.clear_value = {0.0f, 0.0f, 0.0f, 1.0f};
  action.colors[0] = color_action;
  _state.pass_action = action;
}

void SokolRendererManager::teardown() { sg_shutdown(); }

void SokolRendererManager::prepareFrame() {
  int cur_width, cur_height;
  SDL_GetWindowSize(_sdlWindow, &cur_width, &cur_height);

  sg_begin_default_pass(_state.pass_action, cur_width, cur_height);
  sg_apply_pipeline(_state.pipeline);
}

void SokolRendererManager::renderView(grumble::Transform::shared_ptr transform,
                                      grumble::Renderer::shared_ptr renderer) {
  sg_apply_bindings(&_state.bindings);
  sg_draw(0, 3, 1);
}

void SokolRendererManager::renderImageView(
    grumble::Transform::shared_ptr transform,
    grumble::ImageRenderer::shared_ptr renderer) {}

void SokolRendererManager::renderLabel(
    grumble::Transform::shared_ptr transform,
    grumble::TextRenderer::shared_ptr renderer) {}

void SokolRendererManager::commitFrame() {
  sg_end_pass();
  sg_commit();
  SDL_GL_SwapWindow(_sdlWindow);
}
