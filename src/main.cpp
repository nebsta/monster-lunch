
#include "core/CameraMovementSystem.hpp"
#include "core/SDLApplication.hpp"
#include "core/SDLApplicationConfiguration.hpp"
#include "input/SDLInputManager.hpp"
#include "rendering/SokolRendererManager.hpp"
#include "sprite/_gen_MainAtlas.hpp"
#include <SDL_timer.h>
#include <filesystem>
#include <grumble/core/Game.hpp>
#include <grumble/font/FontManagerConfiguration.hpp>
#include <grumble/input/InputManager.hpp>
#include <grumble/io/FileManager.hpp>
#include <grumble/io/FileManagerConfiguration.hpp>
#include <grumble/logging/LogLevel.hpp>
#include <grumble/logging/Logger.hpp>
#include <grumble/render/RendererManagerConfiguration.hpp>
#include <grumble/sprite/SpriteDefinition.hpp>
#include <grumble/sprite/SpriteManager.hpp>
#include <grumble/sprite/SpriteManagerConfiguration.hpp>
#include <grumble/ui/View.hpp>
#include <grumble/util/HandmadeMath.h>
#include <mach-o/dyld.h>
#include <memory>

#define FIXED_DELTA_TIME_MS 10.0f
#define MS_PER_FRAME 12.0f

void sendImguiInputs(grumble::InputManager::shared_ptr inputManager) {}

int main() {
  SDLApplicationConfiguration sdlAppConf = {{1024, 1024}};
  auto application = std::make_shared<SDLApplication>(sdlAppConf);
  application->setup();

  // file manager
  char buf[PATH_MAX];
  uint32_t bufsize = PATH_MAX;
  _NSGetExecutablePath(buf, &bufsize);
  auto executationPath = std::filesystem::path(buf);
  auto fileManangerConf = (grumble::FileManagerConfiguration){
      .rootReadPath = executationPath.parent_path(), .rootWritePath = "/"};
  auto fileManager = std::make_shared<grumble::FileManager>(fileManangerConf);

  // sprite manager
  auto spriteConf = (grumble::SpriteManagerConfiguration){
      .atlasPath = "", .preloadedAtlases = {atlas::main::name}};
  auto spriteManager =
      std::make_shared<grumble::SpriteManager>(spriteConf, fileManager);

  // font manager
  grumble::FontManagerConfiguration fontConfig = {"", "", {}};
  auto fontManager =
      std::make_shared<grumble::FontManager>(fontConfig, fileManager);

  grumble::RendererManagerConfiguration rendererConfig = {1.0};

  // input manager
  auto inputManager = std::make_shared<SDLInputManager>();

  // renderer manager
  auto rendererManager = std::make_shared<SokolRendererManager>(
      rendererConfig, fileManager, spriteManager, fontManager, inputManager,
      application);

  // setting up the main game instance
  grumble::Logger::setActiveLogLevel(grumble::LogLevel::info);
  auto game = grumble::Game(rendererManager, fileManager, spriteManager,
                            fontManager, inputManager);
  game.setup();
  game.setScreenSize(application->screenSize());

  auto floorSprite = atlas::main::floor;
  grumble::View::shared_ptr floorView =
      game.viewFactory()->createView({100, 100}, floorSprite.size);
  floorView->renderer()->setSprite(floorSprite);
  game.getViewLayer(0)->addView(floorView);

  // creating a dummy view
  // std::vector<grumble::SpriteDefinition> spritePool = {
  //     atlas::main::walk_up_1,   atlas::main::walk_right_2,
  //     atlas::main::idle_right,  atlas::main::phone_1,
  //     atlas::main::sit_right_3, atlas::main::sit_left_3,
  //     atlas::main::walk_left_4, atlas::main::walk_down_4};
  //
  // for (int i = 0; i < 1000; i++) {
  //   int index = rand() % spritePool.size();
  //   int x = rand() % 1024;
  //   int y = rand() % 1024;
  //   grumble::SpriteDefinition sprite = spritePool[index];
  //   grumble::View::shared_ptr spriteView = game.viewFactory()->createView();
  //   spriteView->transform()->setLocalPosition({(float)x, (float)y});
  //   spriteView->transform()->setSize(sprite.size);
  //   spriteView->renderer()->setSprite(sprite);
  //   game.getViewLayer(0)->addView(spriteView);
  // }

  // registering the camera movement
  grumble::System::unique_ptr cameraSystem =
      std::make_unique<CameraMovementSystem>(inputManager, game.camera());
  game.registerSystem(std::move(cameraSystem));

  // main loop
  Uint32 lastFrameTimeMs = SDL_GetTicks64();
  Uint32 lagMs = 0;
  while (true) {
    Uint32 currentFrameTimeMs = SDL_GetTicks64();
    Uint32 frameTimeMs = currentFrameTimeMs - lastFrameTimeMs;
    lastFrameTimeMs = currentFrameTimeMs;
    lagMs += frameTimeMs;

    // handling any input
    if (game.input()) {
      break;
    }

    // update the game as many time as what will fit in the remaining frame time
    float updateTimeMs = 0.0f;
    while (lagMs >= FIXED_DELTA_TIME_MS) {
      game.update(FIXED_DELTA_TIME_MS);
      lagMs -= FIXED_DELTA_TIME_MS;
      updateTimeMs += FIXED_DELTA_TIME_MS;
    }

    // calculate the interpolation factor for the render
    double t = lagMs / FIXED_DELTA_TIME_MS;

    // render the frame
    Uint32 renderTimeStartMs = SDL_GetTicks64();
    game.render(t);
    Uint32 renderTimeMs = SDL_GetTicks64() - renderTimeStartMs;

    game.reset();

    // delay the next frame if we have time left over
    Uint32 frameDuration = SDL_GetTicks64() - currentFrameTimeMs;
    Uint32 frameDelay = MS_PER_FRAME - frameDuration;
    if (frameDelay > 0) {
      SDL_Delay(MS_PER_FRAME);
    }

    // submit the frame stats
    game.debugState()->submitFrameStats(
        (grumble::FrameStats){.frameTimeMs = (float)frameTimeMs,
                              .updateTimeMs = updateTimeMs,
                              .renderTimeMs = (float)renderTimeMs,
                              .frameLagMs = (float)lagMs,
                              .frameDelayMs = (float)frameDelay});
  }

  application->teardown();
  game.teardown();
  return 0;
}
