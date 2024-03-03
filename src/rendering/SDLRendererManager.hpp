#include <grumble/font/FontManager.hpp>
#include <grumble/render/RendererManager.hpp>
#include <grumble/sprite/SpriteManager.hpp>

class SDLRendererManager : public grumble::RendererManager {
public:
  typedef std::shared_ptr<SDLRendererManager> shared_ptr;

  SDLRendererManager(grumble::SpriteManager::shared_ptr spriteManager,
                     grumble::FontManager::shared_ptr fontManager);
  ~SDLRendererManager() override;

private:
  grumble::SpriteManager::shared_ptr _spriteManager;
  grumble::FontManager::shared_ptr _fontManager;
};
