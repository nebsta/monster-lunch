
#include "core/CameraMovementSystem.hpp"
#include "core/SDLApplication.hpp"
#include "core/SDLApplicationConfiguration.hpp"
#include "input/SDLInputManager.hpp"
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

#define FIXED_DELTA_TIME_MS 10.0f
#define MS_PER_FRAME 16.0f

void sendImguiInputs(grumble::InputManager::shared_ptr inputManager) {}

int main() {

  SDLApplicationConfiguration sdlAppConf = {{1024, 1024}};
  auto application = std::make_shared<SDLApplication>(sdlAppConf);
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

  // input manager
  auto inputManager = std::make_shared<SDLInputManager>();

  auto rendererManager = std::make_shared<SokolRendererManager>(
      rendererConfig, spriteManager, fontManager, inputManager, application);

  auto game = grumble::Game(rendererManager, fileManager, spriteManager,
                            fontManager, inputManager);
  game.setup();
  grumble::View::shared_ptr mainView = game.viewFactory()->createView();
  mainView->renderer()->setTint(COLOR_RED);

  mainView->transform()->setLocalPosition({0.0f, 0.0f});
  mainView->transform()->setSize({102.4f, 102.4f});
  game.setScreenSize(application->screenSize());
  game.getViewLayer(0)->addView(mainView);

  grumble::System::unique_ptr cameraSystem =
      std::make_unique<CameraMovementSystem>(inputManager, game.camera());
  game.registerSystem(std::move(cameraSystem));

  // main rendering loop
  Uint32 lastFrameTimeMs = SDL_GetTicks64();
  Uint32 lagMs = 0.0f;
  while (true) {
    Uint32 currentFrameTimeMs = SDL_GetTicks64();
    Uint32 frameTimeMs = currentFrameTimeMs - lastFrameTimeMs;
    lastFrameTimeMs = currentFrameTimeMs;
    lagMs += frameTimeMs;

    // handling any input
    if (game.input()) {
      break;
    }

    // update the game as many time as what will fit in the reminaing frame time
    float updateTimeMs = 0.0f;
    float remainingFrameTimeMs;
    while (lagMs >= FIXED_DELTA_TIME_MS) {
      game.update(FIXED_DELTA_TIME_MS);
      lagMs -= FIXED_DELTA_TIME_MS;
      updateTimeMs += FIXED_DELTA_TIME_MS;
    }

    game.debugState()->submitFrameStats(
        (grumble::FrameStats){.totalFrameTime = (float)frameTimeMs,
                              .updateFrameTime = (float)updateTimeMs,
                              .remainingFrameTime = remainingFrameTimeMs});

    // delay if there is any remaining frame time we can't fit into the dt
    game.render();
    game.reset();

    SDL_Delay(MS_PER_FRAME);
  }

  application->teardown();
  game.teardown();
  return 0;
}
