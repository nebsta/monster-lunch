
#include "SokolRendererManager.hpp"
#include "shapes.hpp"
#include <glm/ext/matrix_clip_space.hpp>
#include <glm/ext/matrix_transform.hpp>
#include <glm/fwd.hpp>
#include <glm/gtx/string_cast.hpp>

void sokol_log(const char *tag, uint32_t log_level, uint32_t log_item_id,
               const char *message_or_null, uint32_t line_nr,
               const char *filename_or_null, void *user_data) {
  std::cout << log_item_id << ":" << message_or_null << std::endl;
}

SokolRendererManager::SokolRendererManager(
    grumble::RendererManagerConfiguration configuration,
    grumble::SpriteManager::shared_ptr spriteManager,
    grumble::FontManager::shared_ptr fontMananger, SDL_Window *sdlWindow)
    : _spriteManager(spriteManager), _fontManager(fontMananger),
      _sdlWindow(sdlWindow), grumble::RendererManager(configuration) {

  sg_logger logger = {};
  logger.func = sokol_log;

  _sg_desc = {};
  _sg_desc.logger = logger;

  _state = {};
  _state.cameraOffset = 0.0f;
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

  /* Coordinate space
   *     1
   * -1     1
   *    -1
   */

  float vertices[] = QUAD_VERTICES;
  sg_buffer_desc vertex_buffer_desc = {};
  vertex_buffer_desc.type = SG_BUFFERTYPE_VERTEXBUFFER;
  vertex_buffer_desc.data = SG_RANGE(vertices);
  vertex_buffer_desc.label = fmt::format("vertex-shape-{}", 0).c_str();
  _state.bindings.vertex_buffers[0] = sg_make_buffer(&vertex_buffer_desc);

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
  layout.attrs[ATTR_vs_pos].format = SG_VERTEXFORMAT_FLOAT3;
  layout.attrs[ATTR_vs_pos].buffer_index = 0;

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

  int cur_width, cur_height;
  SDL_GetWindowSize(_sdlWindow, &cur_width, &cur_height);

  sg_apply_bindings(&_state.bindings);

  vs_params_t params;
  HMM_Mat4 ortho = HMM_Orthographic_LH_NO(0.0f, cur_width, cur_height, 0.0f,
                                          -100.0f, 100.0f);

  _state.cameraOffset += 0.01f;
  HMM_Mat4 view = HMM_LookAt_LH({_state.cameraOffset, 0.0f, -6.0f},
                                {0.0f, 0.0f, 0.0f}, {0.0f, 1.0f, 0.0f});

  auto scale = HMM_Scale({100.0f, 100.0f, 1.0f});

  params.mvp = HMM_MulM4(HMM_MulM4(ortho, view), scale);
  sg_apply_uniforms(SG_SHADERSTAGE_VS, SLOT_vs_params, SG_RANGE(params));
  sg_draw(0, 6, 1);
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
