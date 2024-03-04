#include "rendering/SDLRendererManager.hpp"
#include <SDL2/SDL.h>
#include <SDL_render.h>
#include <SDL_surface.h>
#include <SDL_video.h>
#include <grumble/core/Game.hpp>
#include <grumble/font/FontManagerConfiguration.hpp>
#include <grumble/io/FileManager.hpp>
#include <grumble/io/FileManagerConfiguration.hpp>
#include <grumble/logging/Logger.hpp>
#include <grumble/sprite/SpriteManager.hpp>
#include <grumble/sprite/SpriteManagerConfiguration.hpp>
#include <grumble/ui/View.hpp>
#include <memory>

SDL_Window *window;
SDL_Surface *surface;
SDL_Renderer *renderer;

void close() {
  SDL_FreeSurface(surface);
  surface = NULL;

  SDL_DestroyWindow(window);
  window = NULL;

  SDL_Quit();
}

void prepareScene() {
  SDL_SetRenderDrawColor(renderer, 96, 128, 255, 255);
  SDL_RenderClear(renderer);
}

bool handleInput() {
  SDL_Event e;
  bool quit = false;
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
  return quit;
}

int main() {
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    grumble::Logger::error("Failed to initialize the SDL2 library");
    return -1;
  }

  Uint32 rendererFlags = SDL_RENDERER_ACCELERATED;

  window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_CENTERED,
                            SDL_WINDOWPOS_CENTERED, 680, 480, 0);

  if (!window) {
    grumble::Logger::error("Failed to create window");
    return -1;
  }

  surface = SDL_GetWindowSurface(window);
  if (!surface) {
    grumble::Logger::error("Failed to get the surface from the window");
    return -1;
  }

  renderer = SDL_CreateRenderer(window, -1, rendererFlags);
  if (!renderer) {
    grumble::Logger::error("Failed to create the renderer");
    return -1;
  }

  // file manager
  grumble::FileManagerConfiguration fileManangerConf = {"", ""};
  grumble::FileManager::shared_ptr fileManager =
      std::make_shared<grumble::FileManager>(fileManangerConf);

  // sprite manager
  grumble::SpriteManagerConfiguration spriteConf = {"", {}};
  grumble::SpriteManager::shared_ptr spriteManager =
      std::make_shared<grumble::SpriteManager>(spriteConf, fileManager);

  // font manager
  grumble::FontManagerConfiguration fontConfig = {"", "", {}};
  grumble::FontManager::shared_ptr fontManager =
      std::make_shared<grumble::FontManager>(fontConfig, fileManager);

  // renderer manager
  SDLRendererManager::shared_ptr rendererManager =
      std::make_shared<SDLRendererManager>(spriteManager, fontManager);

  // game instance
  grumble::Game game =
      grumble::Game(rendererManager, fileManager, spriteManager, fontManager);

  // main rendering loop
  SDL_UpdateWindowSurface(window);
  SDL_Event e;
  bool quit = false;
  while (!quit) {
    prepareScene();
    handleInput();
  }

  close();
  return 0;
}
