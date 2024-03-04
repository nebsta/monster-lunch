#include <SDL2/SDL.h>
#include <SDL_render.h>
#include <SDL_video.h>
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

  const SDL_Window *window() const;
  const SDL_Renderer *renderer() const;

private:
  SDL_Window *_window;
  SDL_Renderer *_renderer;
};
