#pragma once
#include "../sokol/sokol.hpp"
#include <SDL_rect.h>
#include <SDL_render.h>
#include <grumble/font/FontManager.hpp>
#include <grumble/logging/Logger.hpp>
#include <grumble/render/ImageRenderer.hpp>
#include <grumble/render/Renderer.hpp>
#include <grumble/render/RendererManager.hpp>
#include <grumble/sprite/SpriteManager.hpp>
#include <grumble/ui/Transform.hpp>
class GLFWRendererManager : public grumble::RendererManager {
public:
  typedef std::shared_ptr<GLFWRendererManager> shared_ptr;

  GLFWRendererManager(grumble::SpriteManager::shared_ptr spriteManager,
                      grumble::FontManager::shared_ptr fontManager);
  ~GLFWRendererManager() override;

  void renderView(grumble::Transform::shared_ptr transform,
                  grumble::Renderer::shared_ptr renderer) override;
  void renderImageView(grumble::Transform::shared_ptr transform,
                       grumble::ImageRenderer::shared_ptr renderer) override;
  void renderLabel(grumble::Transform::shared_ptr transform,
                   grumble::TextRenderer::shared_ptr renderer) override;

  void setup() override;

private:
  grumble::SpriteManager::shared_ptr _spriteManager;
  grumble::FontManager::shared_ptr _fontManager;

  sg_desc sg_desc;
};
