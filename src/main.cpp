#include "rendering/SDLRendererManager.hpp"
#include <SDL2/SDL.h>
#include <grumble/core/Game.hpp>
#include <grumble/logging/Logger.hpp>
#include <iostream>

int main() {
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    grumble::Logger::error("Failed to initialize the SDL2 library");
    return -1;
  }

  SDL_Window *window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_CENTERED,
                                        SDL_WINDOWPOS_CENTERED, 680, 480, 0);

  if (!window) {
    std::cout << "Failed to create window\n";
    return -1;
  }

  SDL_Surface *window_surface = SDL_GetWindowSurface(window);
  if (!window_surface) {
    std::cout << "Failed to get the surface from the window\n";
    return -1;
  }

  SDL_UpdateWindowSurface(window);

  SDL_Event e;
  bool quit = false;
  while (!quit) {
    while (SDL_PollEvent(&e)) {
      if (e.type == SDL_QUIT) {
        quit = true;
      }
      if (e.type == SDL_KEYDOWN) {
        quit = true;
      }
      if (e.type == SDL_MOUSEBUTTONDOWN) {
        quit = true;
      }
    }
  }

  return 0;
}
