
#include "SDLRendererManager.hpp"

SDLRendererManager::SDLRendererManager(
    grumble::SpriteManager::shared_ptr spriteManager,
    grumble::FontManager::shared_ptr fontMananger) {
  _spriteManager = spriteManager;
  _fontManager = fontMananger;
}
