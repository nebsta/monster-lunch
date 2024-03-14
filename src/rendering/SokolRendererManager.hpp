#pragma once
#include "../core/SDLApplication.hpp"
#include "../rendering/SokolState.hpp"
#include "../rendering/sokol.hpp"
#include "Shapes.hpp"
#include "SokolFactory.hpp"
#include "_gen_shader/shader_debug.h"
#include "_gen_shader/shader_view.h"
#include <SDL.h>
#include <SDL_video.h>
#include <fmt/core.h>
#include <grumble/font/FontManager.hpp>
#include <grumble/input/InputManager.hpp>
#include <grumble/logging/Logger.hpp>
#include <grumble/render/ImageRenderer.hpp>
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
                       grumble::SpriteManager::shared_ptr spriteManager,
                       grumble::FontManager::shared_ptr fontManager,
                       grumble::InputManager::shared_ptr inputManager,
                       SDLApplication::shared_ptr sdlApplication);
  ~SokolRendererManager() override;

  void prepareFrame() override;
  void renderView(grumble::Transform::shared_ptr transform,
                  grumble::Renderer::shared_ptr renderer) override;
  void renderImageView(grumble::Transform::shared_ptr transform,
                       grumble::ImageRenderer::shared_ptr renderer) override;
  void renderLabel(grumble::Transform::shared_ptr transform,
                   grumble::TextRenderer::shared_ptr renderer) override;
  void commitFrame() override;

  void setup() override;
  void teardown() override;

private:
  grumble::SpriteManager::shared_ptr _spriteManager;
  grumble::FontManager::shared_ptr _fontManager;
  grumble::InputManager::shared_ptr _inputManager;
  SDLApplication::shared_ptr _sdlApplication;

  void setupViewBindings();
  void setupDebugGridBindings();
  void updateDebugGridInstances();

  SokolState _state;
  bool _debugMenuVisible;

  void buildDebugMenu();
};
