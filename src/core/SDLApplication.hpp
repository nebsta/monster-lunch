#pragma once

#include <SDL.h>
#include <SDL_video.h>
#include <glm/gtx/string_cast.hpp>
#include <grumble/core/Object.hpp>
#include <grumble/logging/LogCategory.hpp>
#include <grumble/logging/Logger.hpp>
#include <grumble/util/HandmadeMath.h>
class SDLApplication : public grumble::Object {
public:
  SDLApplication();
  ~SDLApplication();

  void setup();
  bool handleInput();
  void teardown();

  SDL_Window *window() const;

  HMM_Vec2 screenSize() const;

protected:
  grumble::LogCategory logCategory() override;

private:
  SDL_Window *_window;
  SDL_GLContext _context;
};
