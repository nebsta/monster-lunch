
#include "core/SDLApplication.hpp"
#include "rendering/SokolRendererManager.hpp"
#include <SDL_timer.h>
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

#define FRAME_RATE 60
#define CAMERA_SPEED 1
#define FIXED_DELTA_TIME 0.01f

HMM_Vec2 handleCameraMovement(grumble::InputManager::shared_ptr inputManager,
                              float dt) {
  HMM_Vec2 movement = {0.0f, 0.0f};
  float distance = dt * CAMERA_SPEED;
  if (inputManager->isInputActive(grumble::InputCode::ArrowLeft)) {
    movement += {-distance, 0.0f};
  }

  if (inputManager->isInputActive(grumble::InputCode::ArrowRight)) {
    movement += {distance, 0.0f};
  }

  if (inputManager->isInputActive(grumble::InputCode::ArrowUp)) {
    movement += {0.0f, -distance};
  }

  if (inputManager->isInputActive(grumble::InputCode::ArrowDown)) {
    movement += {0.0f, distance};
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
  Uint32 lastFrameTime = SDL_GetTicks64();
  while (true) {
    Uint32 currentFrameTime = SDL_GetTicks64();
    Uint32 frameTime = currentFrameTime - lastFrameTime;
    lastFrameTime = currentFrameTime;

    // handling any input
    if (application->handleInput()) {
      break;
    }

    // update the game as many time as what will fit in the reminaing frame time
    float remainingFrameTime = frameTime;
    while (remainingFrameTime >= FIXED_DELTA_TIME) {
      game.update(FIXED_DELTA_TIME);
      HMM_Vec2 movement = handleCameraMovement(inputManager, FIXED_DELTA_TIME);
      game.moveCameraPosition(movement);
      remainingFrameTime -= FIXED_DELTA_TIME;
    }

    // delay if there is any remaining frame time we can't fit into the dt
    SDL_Delay(remainingFrameTime);

    game.render();
  }

  application->teardown();
  game.teardown();
  return 0;
}
