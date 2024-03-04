#include "rendering/SDLRendererManager.hpp"
#include <SDL2/SDL.h>
#include <grumble/core/Game.hpp>
#include <grumble/font/FontManagerConfiguration.hpp>
#include <grumble/io/FileManager.hpp>
#include <grumble/io/FileManagerConfiguration.hpp>
#include <grumble/logging/Logger.hpp>
#include <grumble/sprite/SpriteManager.hpp>
#include <grumble/sprite/SpriteManagerConfiguration.hpp>
#include <grumble/ui/View.hpp>
#include <iostream>
#include <memory>

int main() {
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    grumble::Logger::error("Failed to initialize the SDL2 library");
    return -1;
  }

  SDL_Window *window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_CENTERED,
                                        SDL_WINDOWPOS_CENTERED, 680, 480, 0);

  grumble::FileManagerConfiguration fileManangerConf = {"", ""};
  grumble::FileManager::shared_ptr fileManager =
      std::make_shared<grumble::FileManager>(fileManangerConf);

  grumble::SpriteManagerConfiguration spriteConf = {"", {}};
  grumble::SpriteManager::shared_ptr spriteManager =
      std::make_shared<grumble::SpriteManager>(spriteConf, fileManager);

  grumble::FontManagerConfiguration fontConfig = {"", "", {}};
  grumble::FontManager::shared_ptr fontManager =
      std::make_shared<grumble::FontManager>(fontConfig, fileManager);

  SDLRendererManager::shared_ptr rendererManager =
      std::make_shared<SDLRendererManager>(spriteManager, fontManager);

  grumble::Game game =
      grumble::Game(rendererManager, fileManager, spriteManager, fontManager);

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
