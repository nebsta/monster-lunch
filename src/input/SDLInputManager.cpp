#include "SDLInputManager.hpp"
#include "../rendering/sokol.hpp"
#include "../utils/SDL2Utils.hpp"
#include <SDL_events.h>
#include <grumble/core/Object.hpp>
#include <grumble/input/FrameInput.hpp>

SDLInputManager::SDLInputManager() : grumble::InputManager() {}

SDLInputManager::~SDLInputManager() {}

void SDLInputManager::update() {
  SDL_Event e;
  while (SDL_PollEvent(&e)) {
    if (e.type == SDL_QUIT) {
      scheduleTermination();
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
      mouseMoved({(float)e.motion.x, (float)e.motion.y});
      simgui_add_mouse_pos_event(e.motion.x, e.motion.y);
    }
  }
}
