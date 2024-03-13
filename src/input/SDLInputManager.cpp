#include "SDLInputManager.hpp"
#include <SDL_events.h>
#include <grumble/core/Object.hpp>

SDLInputManager::SDLInputManager() : grumble::InputManager() {}

SDLInputManager::~SDLInputManager() {}

bool SDLInputManager::update() {
  SDL_Event e;
  bool terminate = false;
  while (SDL_PollEvent(&e)) {
    if (e.type == SDL_QUIT) {
      terminate = true;
      break;
    } else if (e.type == SDL_KEYDOWN) {
      auto name = SDL_GetKeyName(e.key.keysym.sym);
      auto inputCode = SDL2Utils::SDL2_Keycode_to_InputCode(e.key.keysym.sym);
      activateInput(inputCode);
    } else if (e.type == SDL_KEYUP) {
      auto name = SDL_GetKeyName(e.key.keysym.sym);
      auto inputCode = SDL2Utils::SDL2_Keycode_to_InputCode(e.key.keysym.sym);
      deactivateInput(inputCode);
    }
  }
  return terminate;
}
