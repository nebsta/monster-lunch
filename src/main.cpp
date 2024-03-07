
#include "core/GLFWApplication.hpp"
#include <grumble/core/Game.hpp>
#include <grumble/font/FontManagerConfiguration.hpp>
#include <grumble/io/FileManager.hpp>
#include <grumble/io/FileManagerConfiguration.hpp>
#include <grumble/logging/Logger.hpp>
#include <grumble/sprite/SpriteManager.hpp>
#include <grumble/sprite/SpriteManagerConfiguration.hpp>
#include <grumble/ui/View.hpp>
#include <memory>

#include <GLFW/glfw3.h>

int main() {
  GLFWApplication application;
  application.setup();

  // file manager
  grumble::FileManagerConfiguration fileManangerConf = {"", ""};
  auto fileManager = std::make_shared<grumble::FileManager>(fileManangerConf);

  // sprite manager
  grumble::SpriteManagerConfiguration spriteConf = {"", {}};
  auto spriteManager =
      std::make_shared<grumble::SpriteManager>(spriteConf, fileManager);

  // font manager
  grumble::FontManagerConfiguration fontConfig = {"", "", {}};
  auto fontManager =
      std::make_shared<grumble::FontManager>(fontConfig, fileManager);

  // renderer manager auto rendererManager =
  // std::make_shared<SDLRendererManager>(spriteManager, fontManager);

  // game instance
  // auto game =
  // grumble::Game(rendererManager, fileManager, spriteManager, fontManager);
  // game.setup(1.0);
  // game.rootView()->renderer()->setTint(COLOR_RED);

  // main rendering loop
  while (!application.shouldTerminate()) {
    application.prepareFrame();
    application.handleInput();
    // game.render();
    application.presentFrame();
  }
  application.teardown();
  return 0;
}
