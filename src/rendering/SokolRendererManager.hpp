#pragma once
#include "../rendering/SokolState.hpp"
#include "../rendering/_gen_shader/shader_view.h"
#include "../rendering/sokol.hpp"
#include <SDL.h>
#include <SDL_video.h>
#include <grumble/font/FontManager.hpp>
#include <grumble/logging/Logger.hpp>
#include <grumble/render/ImageRenderer.hpp>
#include <grumble/render/Renderer.hpp>
#include <grumble/render/RendererManager.hpp>
#include <grumble/sprite/SpriteManager.hpp>
#include <grumble/ui/Transform.hpp>
#include <memory>
class SokolRendererManager : public grumble::RendererManager {
public:
  typedef std::shared_ptr<SokolRendererManager> shared_ptr;

  SokolRendererManager(grumble::SpriteManager::shared_ptr spriteManager,
                       grumble::FontManager::shared_ptr fontManager,
                       SDL_Window *_sdlWindow);
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
  SDL_Window *_sdlWindow;

  SokolState _state;
  sg_desc _sg_desc;
};