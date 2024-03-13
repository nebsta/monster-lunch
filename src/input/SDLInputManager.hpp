#pragma once
#include "../utils/SDL2Utils.hpp"
#include <SDL.h>
#include <grumble/input/InputManager.hpp>
class SDLInputManager : public grumble::InputManager {

public:
  SDLInputManager();
  ~SDLInputManager();

  bool update() override;
};
