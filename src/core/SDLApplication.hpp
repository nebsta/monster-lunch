#pragma once

#include "../rendering/sokol.hpp"
#include <SDL.h>
#include <SDL_video.h>
#include <glm/gtx/string_cast.hpp>
#include <grumble/logging/Logger.hpp>

class SDLApplication {
public:
  SDLApplication();
  ~SDLApplication();

  void setup();
  void prepareFrame() const;
  bool handleInput() const;
  void presentFrame() const;
  void teardown();

  bool isSetup() const;

private:
  SDL_Window *_window;
  SDL_GLContext _context;
  sg_desc _sg_desc;
};
