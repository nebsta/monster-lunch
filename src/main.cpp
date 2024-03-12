
#include "core/SDLApplication.hpp"
#include "rendering/SokolRendererManager.hpp"
#include <grumble/core/Game.hpp>
#include <grumble/font/FontManagerConfiguration.hpp>
#include <grumble/io/FileManager.hpp>
#include <grumble/io/FileManagerConfiguration.hpp>
#include <grumble/logging/Logger.hpp>
#include <grumble/render/RendererManagerConfiguration.hpp>
#include <grumble/sprite/SpriteManager.hpp>
#include <grumble/sprite/SpriteManagerConfiguration.hpp>
#include <grumble/ui/View.hpp>
#include <memory>

int main() {
  auto application = std::make_shared<SDLApplication>();
  application->setup();

  // file manager
  grumble::FileManagerConfiguration fileManangerConf = {"/", "/"};
  auto fileManager = std::make_shared<grumble::FileManager>(fileManangerConf);

  // sprite manager
  grumble::SpriteManagerConfiguration spriteConf = {"", {}};
  auto spriteManager =
      std::make_shared<grumble::SpriteManager>(spriteConf, fileManager);

  // font manager
  grumble::FontManagerConfiguration fontConfig = {"", "", {}};
  auto fontManager =
      std::make_shared<grumble::FontManager>(fontConfig, fileManager);

  grumble::RendererManagerConfiguration rendererConfig = {1.0};

  auto rendererManager = std::make_shared<SokolRendererManager>(
      rendererConfig, spriteManager, fontManager, application);

  auto game =
      grumble::Game(rendererManager, fileManager, spriteManager, fontManager);
  game.setup();
  game.rootView()->renderer()->setTint(COLOR_RED);
  game.setScreenSize(application->screenSize());

  // main rendering loop
  while (true) {
    if (application->handleInput()) {
      break;
    }
    game.setScreenSize(application->screenSize());
    game.render();
  }

  application->teardown();
  game.teardown();
  return 0;
}
