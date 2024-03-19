#pragma once
#include "../core/SDLApplication.hpp"
#include "../rendering/SokolState.hpp"
#include <SDL.h>
#include <SDL_video.h>
#include <fmt/core.h>
#include <grumble/debug/FrameStats.hpp>
#include <grumble/font/FontManager.hpp>
#include <grumble/input/InputManager.hpp>
#include <grumble/io/FileManager.hpp>
#include <grumble/logging/Logger.hpp>
#include <grumble/render/Renderer.hpp>
#include <grumble/render/RendererManager.hpp>
#include <grumble/render/RendererManagerConfiguration.hpp>
#include <grumble/sprite/SpriteManager.hpp>
#include <grumble/ui/Transform.hpp>
#include <grumble/util/HandmadeMath.h>
#include <memory>

class SokolRendererManager : public grumble::RendererManager {
public:
  typedef std::shared_ptr<SokolRendererManager> shared_ptr;

  SokolRendererManager(grumble::RendererManagerConfiguration configuration,
                       grumble::FileManager::shared_ptr fileManager,
                       grumble::SpriteManager::shared_ptr spriteManager,
                       grumble::FontManager::shared_ptr fontManager,
                       grumble::InputManager::shared_ptr inputManager,
                       SDLApplication::shared_ptr sdlApplication);
  ~SokolRendererManager() override;

  void teardown() override;

protected:
  void setup() override;

  void prepareMainLayer(double t) override;
  void updateBuffer(grumble::View::shared_ptr view, double t) override;
  void drawMainLayer() override;

  void drawDebugGrid(grumble::GridResolution resolution, double t) override;
  void drawDebugStats(grumble::DebugState::shared_ptr state) override;
  void drawDebugMenu(grumble::DebugState::shared_ptr state, double t) override;
  void commitFrame() override;

private:
  grumble::FileManager::shared_ptr _fileManager;
  grumble::SpriteManager::shared_ptr _spriteManager;
  grumble::FontManager::shared_ptr _fontManager;
  grumble::InputManager::shared_ptr _inputManager;
  SDLApplication::shared_ptr _sdlApplication;

  void setupViewBindings();
  void setupDebugGridBindings();

  SokolState _state;
};
