
#include "core/CameraMovementSystem.hpp"
#include "core/SDLApplication.hpp"
#include "core/SDLApplicationConfiguration.hpp"
#include "editor/LevelEditorView.hpp"
#include "editor/MLEditorState.hpp"
#include "input/SDLInputManager.hpp"
#include "level/Level.hpp"
#include "rendering/SokolRendererManager.hpp"
#include "sprite/_gen_MainAtlas.hpp"
#include <SDL_timer.h>
#include <filesystem>
#include <grumble/anim/ReplayBehaviour.hpp>
#include <grumble/anim/SpriteAnimator.hpp>
#include <grumble/anim/SpriteAnimatorConfiguration.hpp>
#include <grumble/core/CameraRange.hpp>
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
#include <grumble/ui/ViewLayerType.hpp>
#include <grumble/util/HandmadeMath.h>
#include <grumble/util/MathUtils.hpp>
#include <mach-o/dyld.h>
#include <memory>

#define FIXED_DELTA_TIME_MS 10.0f
#define MS_PER_FRAME 12.0f

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

  // editor
  auto editorState = std::make_shared<ml::MLEditorState>();
  auto editorView =
      std::make_unique<ml::LevelEditorView>(inputManager, editorState);

  // renderer manager
  auto rendererManager = std::make_shared<SokolRendererManager>(
      rendererConfig, fileManager, spriteManager, fontManager, inputManager,
      std::move(editorView), application);

  // setting up the main game instance
  grumble::Logger::setActiveLogLevel(grumble::LogLevel::info);
  auto game = grumble::Game(rendererManager, fileManager, spriteManager,
                            fontManager, inputManager, editorState);
  game.setup();
  game.setScreenSize(application->screenSize());

  // actual floor image
  // auto floorSprite = atlas::main::floor;
  // grumble::View::unique_ptr floorView =
  //     game.viewFactory()->createView({-512, -512}, {2048, 2048});
  // floorView->setSprite(floorSprite);
  // game.addView(std::move(floorView), grumble::ViewLayerType::BACKGROUND_1);

  // ANIMATION SAMPLE
  // auto animations = {
  //     atlas::main::walk_down, atlas::main::walk_up,  atlas::main::walk_right,
  //     atlas::main::walk_left, atlas::main::sit_left, atlas::main::phone,
  // };
  //
  // auto iter = animations.begin();
  // int index = 0;
  // for (; iter != animations.end(); iter++) {
  //   auto frames = (*iter);
  //   grumble::View::unique_ptr spriteView = game.viewFactory()->createView();
  //   float x = 200 + index * 40;
  //   spriteView->setPosition({x, 200});
  //   spriteView->setSize(frames[0].size);
  //
  //   auto config = (grumble::SpriteAnimatorConfiguration){
  //       .frameDelay = 150.0f,
  //       .playImmediately = true,
  //       .replayBehaviour = grumble::ReplayBehaviour::RepeatFromBeginning};
  //   auto animator = std::make_shared<grumble::SpriteAnimator>(config,
  //   frames); spriteView->spriteAnimator = animator;
  //   game.addView(std::move(spriteView),
  //   grumble::ViewLayerType::FOREGROUND_1); index++;
  // }

  auto level = std::make_unique<ml::Level>(game.viewFactory());
  game.addView(std::move(level), grumble::ViewLayerType::FOREGROUND_1);

  // CROWD SAMPLE
  // std::vector<grumble::SpriteDefinition> spritePool = {
  //     atlas::main::walk_up_1,   atlas::main::walk_right_2,
  //     atlas::main::idle_right,  atlas::main::phone_1,
  //     atlas::main::sit_right_3, atlas::main::sit_left_3,
  //     atlas::main::walk_left_4, atlas::main::walk_down_4};
  //
  // for (int i = 0; i < 1000; i++) {
  //   int index = rand() % spritePool.size();
  //   int x = (rand() % 2048) - 512;
  //   int y = (rand() % 2048) - 512;
  //   grumble::SpriteDefinition sprite = spritePool[index];
  //   grumble::View::unique_ptr spriteView =
  //   game.viewFactory()->createView(); spriteView->setPosition({(float)x,
  //   (float)y}); spriteView->setSize(sprite.size);
  //   spriteView->setSprite(sprite);
  //   game.addView(std::move(spriteView),
  //   grumble::ViewLayerType::FOREGROUND_1);
  // }

  // calculte the range of motion for the camera
  auto levelSize = level->levelSize();
  auto cameraRange = (grumble::CameraRange){.left = 0.0,
                                            .top = 0.0,
                                            .bottom = levelSize.Height - 1024,
                                            .right = levelSize.Width - 1024};
  game.camera()->setCameraRange(cameraRange);

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
