#include "SDLApplication.hpp"

SDLApplication::SDLApplication() {}

SDLApplication::~SDLApplication() {}

void SDLApplication::setup() {

  Uint32 windowFlags = SDL_WINDOW_RESIZABLE;
  Uint32 sdlFlags = SDL_INIT_VIDEO | SDL_INIT_EVENTS;

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

  _context = SDL_GL_CreateContext(_window);
  if (!_context) {
    grumble::Logger::error("Error when trying to create SDL context");
    return;
  }

  SDL_GL_SetSwapInterval(-1);

  // sg_desc desc = {};
  // sg_setup(&desc);
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

void SDLApplication::presentFrame() const {}

void SDLApplication::teardown() {
  SDL_DestroyWindow(_window);
  SDL_Quit();
  // sg_shutdown();
}

bool SDLApplication::isSetup() const {
  return _window != nullptr && _context != nullptr;
}
