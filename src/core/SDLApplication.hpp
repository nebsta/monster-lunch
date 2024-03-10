#pragma once

#include <SDL.h>
#include <SDL_video.h>
#include <glm/gtx/string_cast.hpp>
#include <grumble/logging/Logger.hpp>
class SDLApplication {
public:
  SDLApplication();
  ~SDLApplication();

  void setup();
  bool handleInput() const;
  void teardown();

  SDL_Window *window() const;

private:
  SDL_Window *_window;
  SDL_GLContext _context;
};
