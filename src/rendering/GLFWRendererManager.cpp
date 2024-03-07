
#include "GLFWRendererManager.hpp"

GLFWRendererManager::GLFWRendererManager(
    grumble::SpriteManager::shared_ptr spriteManager,
    grumble::FontManager::shared_ptr fontMananger)
    : _spriteManager(spriteManager), _fontManager(fontMananger) {}

GLFWRendererManager::~GLFWRendererManager() {}

void GLFWRendererManager::setup() {}

void GLFWRendererManager::renderView(grumble::Transform::shared_ptr transform,
                                     grumble::Renderer::shared_ptr renderer) {}

void GLFWRendererManager::renderImageView(
    grumble::Transform::shared_ptr transform,
    grumble::ImageRenderer::shared_ptr renderer) {}

void GLFWRendererManager::renderLabel(
    grumble::Transform::shared_ptr transform,
    grumble::TextRenderer::shared_ptr renderer) {}
