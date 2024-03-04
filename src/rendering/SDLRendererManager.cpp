
#include "SDLRendererManager.hpp"
#include <grumble/render/Renderer.hpp>
#include <grumble/render/TextRenderer.hpp>
#include <grumble/ui/Transform.hpp>

SDLRendererManager::SDLRendererManager(
    grumble::SpriteManager::shared_ptr spriteManager,
    grumble::FontManager::shared_ptr fontMananger)
    : _spriteManager(spriteManager), _fontManager(fontMananger) {}

SDLRendererManager::~SDLRendererManager() {}

void SDLRendererManager::setup() {}

void SDLRendererManager::renderView(grumble::Transform::shared_ptr transform,
                                    grumble::Renderer::shared_ptr renderer) {}

void SDLRendererManager::renderImageView(
    grumble::Transform::shared_ptr transform,
    grumble::ImageRenderer::shared_ptr renderer) {}

void SDLRendererManager::renderLabel(
    grumble::Transform::shared_ptr transform,
    grumble::TextRenderer::shared_ptr renderer) {}
