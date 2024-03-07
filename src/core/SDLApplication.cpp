#include "SDLApplication.hpp"

SDLApplication::SDLApplication() {}

SDLApplication::~SDLApplication() {}

void SDLApplication::setup() {
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    grumble::Logger::error("Failed to initialize the SDL2 library");
    return;
  }

  Uint32 windowFlags = SDL_WINDOW_RESIZABLE;
  Uint32 rendererFlags = SDL_WINDOW_OPENGL;

  _window = SDL_CreateWindow("Monster Lunch", SDL_WINDOWPOS_CENTERED,
                             SDL_WINDOWPOS_CENTERED, 680, 480, windowFlags);

  if (!_window) {
    grumble::Logger::error("Failed to create window");
    return;
  }

  _context = SDL_GL_CreateContext(_window);

  SDL_GL_SetSwapInterval(-1);
}

void SDLApplication::prepareScene() const {
  // SDL_SetRenderDrawColor(_renderer, 96, 128, 255, 255);
  // SDL_RenderClear(_renderer);
}

bool SDLApplication::handleInput() const {
  SDL_Event e;
  bool quit = false;
  while (SDL_PollEvent(&e)) {

    if (e.type == SDL_WINDOWEVENT) {

      if (e.window.event == SDL_WINDOWEVENT_RESIZED) {
        Sint32 width = e.window.data1;
        Sint32 height = e.window.data2;
        glm::vec2 size = glm::vec2(width, height);
        grumble::Logger::debug("Resizing window " + glm::to_string(size));
        // resizeWindow(e.window.data1, e.window.data2);
      }
      break;
    }

    if (e.type == SDL_QUIT) {
      quit = true;
    }
  }
  return quit;
}

void SDLApplication::presentScene() const {}

void SDLApplication::teardown() {
  // sg_shutdown();

  SDL_DestroyWindow(_window);
  _window = nullptr;

  SDL_Quit();
}

SDL_Window *SDLApplication::window() const { return _window; }

bool SDLApplication::isSetup() const { return _window != nullptr; }
