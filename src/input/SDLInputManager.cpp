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
    }

    if (e.type == SDL_KEYDOWN) {
      auto inputCode = SDL2Utils::SDL2_Keycode_to_InputCode(e.key.keysym.sym);
      activateInput(inputCode);
    } else if (e.type == SDL_KEYUP) {
      auto inputCode = SDL2Utils::SDL2_Keycode_to_InputCode(e.key.keysym.sym);
      deactivateInput(inputCode);
    } else if (e.type == SDL_MOUSEBUTTONDOWN) {
      activateInput(grumble::InputCode::MouseLeft);
      simgui_add_mouse_button_event(0, true);
    } else if (e.type == SDL_MOUSEBUTTONUP) {
      deactivateInput(grumble::InputCode::MouseLeft);
      simgui_add_mouse_button_event(0, false);
    } else if (e.type == SDL_MOUSEMOTION) {
      simgui_add_mouse_pos_event(e.motion.x, e.motion.y);
    }
  }
  return terminate;
}
