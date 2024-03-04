#include <grumble/font/FontManager.hpp>
#include <grumble/render/ImageRenderer.hpp>
#include <grumble/render/Renderer.hpp>
#include <grumble/render/RendererManager.hpp>
#include <grumble/sprite/SpriteManager.hpp>
#include <grumble/ui/Transform.hpp>

class SDLRendererManager : public grumble::RendererManager {
public:
  typedef std::shared_ptr<SDLRendererManager> shared_ptr;

  SDLRendererManager(grumble::SpriteManager::shared_ptr spriteManager,
                     grumble::FontManager::shared_ptr fontManager);
  ~SDLRendererManager() override;

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
};
