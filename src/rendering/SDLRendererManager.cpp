
#include "SDLRendererManager.hpp"
#include "../utils/SDL2Utils.hpp"
#include <SDL_rect.h>
#include <SDL_render.h>
#include <grumble/logging/Logger.hpp>
SDLRendererManager::SDLRendererManager(
    grumble::SpriteManager::shared_ptr spriteManager,
    grumble::FontManager::shared_ptr fontMananger, SDL_Renderer *sdlRenderer)
    : _spriteManager(spriteManager), _fontManager(fontMananger),
      _sdlRenderer(sdlRenderer) {}

SDLRendererManager::~SDLRendererManager() {}

void SDLRendererManager::setup() {}

void SDLRendererManager::renderView(grumble::Transform::shared_ptr transform,
                                    grumble::Renderer::shared_ptr renderer) {
  SDL_Rect rect = SDL2Utils::to_SDL_Rect(transform);
  SDL_SetRenderDrawColor(_sdlRenderer, renderer->tint().r, renderer->tint().g,
                         renderer->tint().b, renderer->tint().a);
  SDL_RenderFillRect(_sdlRenderer, &rect);
  SDL_RenderDrawRect(_sdlRenderer, &rect);
  grumble::Logger::info("Rendering " + SDL2Utils::SDL_Rect_to_string(rect));
}

void SDLRendererManager::renderImageView(
    grumble::Transform::shared_ptr transform,
    grumble::ImageRenderer::shared_ptr renderer) {}

void SDLRendererManager::renderLabel(
    grumble::Transform::shared_ptr transform,
    grumble::TextRenderer::shared_ptr renderer) {}
