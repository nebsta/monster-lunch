#pragma once

#include <SDL2/SDL.h>
#include <SDL_render.h>
#include <glm/gtx/string_cast.hpp>
#include <grumble/logging/Logger.hpp>

class SDLApplication {
public:
  SDLApplication();
  ~SDLApplication();

  void setup();
  void prepareScene() const;
  bool handleInput() const;
  void presentScene() const;
  void teardown();

  bool isSetup() const;

  SDL_Window *window() const;

private:
  SDL_Window *_window;
  SDL_GLContext _context;
};
