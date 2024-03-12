#pragma once

#include <SDL.h>
#include <SDL_video.h>
#include <glm/gtx/string_cast.hpp>
#include <grumble/core/Object.hpp>
#include <grumble/input/InputManager.hpp>
#include <grumble/logging/LogCategory.hpp>
#include <grumble/logging/Logger.hpp>
#include <grumble/util/HandmadeMath.h>
#include <memory>

#include "../utils/SDL2Utils.hpp"
class SDLApplication : public grumble::Object {
public:
  typedef std::shared_ptr<SDLApplication> shared_ptr;

  SDLApplication(grumble::InputManager::shared_ptr inputManager);
  ~SDLApplication();

  void setup();
  bool handleInput();
  void teardown();

  SDL_Window *window() const;

  HMM_Vec2 screenSize() const;

protected:
  grumble::LogCategory logCategory() const override;

private:
  grumble::InputManager::shared_ptr _inputManager;
  SDL_Window *_window;
  SDL_GLContext _context;
};
