#include "core/SDLApplication.hpp"
#include "rendering/SDLRendererManager.hpp"
#include <SDL2/SDL.h>
#include <SDL_render.h>
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

int main() {
  SDLApplication application;

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

  game.rootView()->renderer()->setTint(COLOR_RED);

  // main rendering loop
  application.setup();
  while (true) {
    application.prepareScene();
    if (application.handleInput()) {
      break;
    }
    application.presentScene();
  }

  application.teardown();
  return 0;
}
