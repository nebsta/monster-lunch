#include "SDLApplication.hpp"
#include <SDL_events.h>
#include <SDL_video.h>
#include <glm/gtx/string_cast.hpp>
#include <grumble/core/Object.hpp>
#include <grumble/logging/LogCategory.hpp>

SDLApplication::SDLApplication(grumble::InputManager::shared_ptr inputManager)
    : grumble::Object("sdl_application"), _inputManager(inputManager) {}

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
                             SDL_WINDOWPOS_CENTERED, 500, 500, windowFlags);
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
}

bool SDLApplication::handleInput() {
  SDL_Event e;
  bool terminate = false;
  while (SDL_PollEvent(&e)) {
    if (e.type == SDL_QUIT) {
      terminate = true;
    } else if (e.type == SDL_WINDOWEVENT) {
      if (e.window.event == SDL_WINDOWEVENT_RESIZED) {
        Sint32 width = e.window.data1;
        Sint32 height = e.window.data2;
        logInfo("Window size changed w: {} h: {}", width, height);
      }
    } else if (e.type == SDL_KEYDOWN) {
      auto name = SDL_GetKeyName(e.key.keysym.sym);
      auto inputCode = SDL2Utils::SDL2_Keycode_to_InputCode(e.key.keysym.sym);
      _inputManager->activateInput(inputCode);
    } else if (e.type == SDL_KEYUP) {
      auto name = SDL_GetKeyName(e.key.keysym.sym);
      auto inputCode = SDL2Utils::SDL2_Keycode_to_InputCode(e.key.keysym.sym);
      _inputManager->deactivateInput(inputCode);
    }
  }
  return terminate;
}

void SDLApplication::teardown() {
  SDL_DestroyWindow(_window);
  SDL_Quit();
}

HMM_Vec2 SDLApplication::screenSize() const {
  int cur_width, cur_height;
  SDL_GetWindowSize(_window, &cur_width, &cur_height);
  return {(float)cur_width, (float)cur_height};
}

grumble::LogCategory SDLApplication::logCategory() const {
  return grumble::LogCategory::core;
}

SDL_Window *SDLApplication::window() const { return _window; }
