
#include "core/SDLApplication.hpp"
#include "rendering/SokolRendererManager.hpp"
#include <grumble/core/Game.hpp>
#include <grumble/font/FontManagerConfiguration.hpp>
#include <grumble/input/InputManager.hpp>
#include <grumble/io/FileManager.hpp>
#include <grumble/io/FileManagerConfiguration.hpp>
#include <grumble/logging/Logger.hpp>
#include <grumble/render/RendererManagerConfiguration.hpp>
#include <grumble/sprite/SpriteManager.hpp>
#include <grumble/sprite/SpriteManagerConfiguration.hpp>
#include <grumble/ui/View.hpp>
#include <grumble/util/HandmadeMath.h>
#include <memory>

HMM_Vec2 handleCameraMovement(grumble::InputManager::shared_ptr inputManager) {
  HMM_Vec2 movement = {0.0f, 0.0f};
  if (inputManager->isInputActive(grumble::InputCode::ArrowLeft)) {
    movement += {-1.0f, 0.0f};
  }

  if (inputManager->isInputActive(grumble::InputCode::ArrowRight)) {
    movement += {1.0f, 0.0f};
  }

  if (inputManager->isInputActive(grumble::InputCode::ArrowUp)) {
    movement += {0.0f, -1.0f};
  }

  if (inputManager->isInputActive(grumble::InputCode::ArrowDown)) {
    movement += {0.0f, 1.0f};
  }
  return movement;
}

int main() {
  // input manager
  auto inputManager = std::make_shared<grumble::InputManager>();

  auto application = std::make_shared<SDLApplication>(inputManager);
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

  auto game = grumble::Game(rendererManager, fileManager, spriteManager,
                            fontManager, inputManager);
  game.setup();
  game.rootView()->renderer()->setTint(COLOR_RED);
  game.setScreenSize(application->screenSize());

  // main rendering loop
  while (true) {
    if (application->handleInput()) {
      break;
    }

    HMM_Vec2 movement = handleCameraMovement(inputManager);
    game.moveCameraPosition(movement);

    game.setScreenSize(application->screenSize());
    game.render();
  }

  application->teardown();
  game.teardown();
  return 0;
}
