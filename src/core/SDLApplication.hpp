#pragma once
#include "../rendering/SokolState.hpp"
#include "../rendering/_gen_shader/shader_view.h"
#include "../rendering/sokol.hpp"
#include <SDL.h>
#include <SDL_video.h>
#include <glm/gtx/string_cast.hpp>
#include <grumble/logging/Logger.hpp>
#include <ostream>
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
  SokolState _state;
  sg_desc _sg_desc;
};
