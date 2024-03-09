#include "SDLApplication.hpp"
#include <ostream>

void sokol_log(const char *tag, uint32_t log_level, uint32_t log_item_id,
               const char *message_or_null, uint32_t line_nr,
               const char *filename_or_null, void *user_data) {
  std::cout << log_item_id << ":" << message_or_null << std::endl;
}

SDLApplication::SDLApplication() {
  sg_logger logger = {};
  logger.func = sokol_log;

  _sg_desc = {};
  _sg_desc.logger = logger;

  _state = {};
}

SDLApplication::~SDLApplication() {}

void SDLApplication::setup() {

  Uint32 windowFlags =
      SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN;
  Uint32 sdlFlags = SDL_INIT_VIDEO;

  // setting up sdl
  int result = SDL_Init(sdlFlags);
  if (result != 0) {
    grumble::Logger::error("SDLinit failed with result: " +
                           std::to_string(result));
    return;
  }

  // setting up the window
  _window = SDL_CreateWindow("Monster Lunch", SDL_WINDOWPOS_CENTERED,
                             SDL_WINDOWPOS_CENTERED, 680, 480, windowFlags);
  if (!_window) {
    grumble::Logger::error("Error when trying to make SDL window");
    return;
  }

  // setting SDL GL attributes
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);

  // creating SDL GL context
  _context = SDL_GL_CreateContext(_window);
  if (!_context) {
    grumble::Logger::error("Error when trying to create SDL context");
    return;
  }
  SDL_GL_MakeCurrent(_window, _context);

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

  sg_buffer_desc buffer_desc;
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

void SDLApplication::prepareFrame() const {}

bool SDLApplication::handleInput() const {
  SDL_Event e;
  bool terminate = false;
  while (SDL_PollEvent(&e)) {
    if (e.type == SDL_QUIT) {
      terminate = true;
    } else if (e.type == SDL_WINDOWEVENT) {
      if (e.window.event == SDL_WINDOWEVENT_RESIZED) {
        Sint32 width = e.window.data1;
        Sint32 height = e.window.data2;
        glm::vec2 size = glm::vec2(width, height);
        grumble::Logger::debug("Resizing window " + glm::to_string(size));
      }
    }
  }
  return terminate;
}

void SDLApplication::presentFrame() const {

  int cur_width, cur_height;
  SDL_GetWindowSize(_window, &cur_width, &cur_height);

  sg_begin_default_pass(_state.pass_action, cur_width, cur_height);
  sg_apply_pipeline(_state.pipeline);
  sg_apply_bindings(&_state.bindings);
  sg_draw(0, 3, 1);
  sg_end_pass();
  sg_commit();

  SDL_GL_SwapWindow(_window);
}

void SDLApplication::teardown() {
  SDL_DestroyWindow(_window);
  SDL_Quit();
  sg_shutdown();
}

bool SDLApplication::isSetup() const {
  return _window != nullptr && _context != nullptr;
}
