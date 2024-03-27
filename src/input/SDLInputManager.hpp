#pragma once
#include <SDL.h>
#include <grumble/input/FrameInput.hpp>
#include <grumble/input/InputManager.hpp>
class SDLInputManager : public grumble::InputManager {

public:
  SDLInputManager();
  ~SDLInputManager();

  void update() override;
};
