
#include "GLFWRendererManager.hpp"

GLFWRendererManager::GLFWRendererManager(
    grumble::SpriteManager::shared_ptr spriteManager,
    grumble::FontManager::shared_ptr fontMananger)
    : _spriteManager(spriteManager), _fontManager(fontMananger) {}

GLFWRendererManager::~GLFWRendererManager() {}

void GLFWRendererManager::setup() { buildShaders(); }

void GLFWRendererManager::buildShaders() {
  GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
  glShaderSource(vertexShader, 1, "", NULL);
  glCompileShader(vertexShader);
}

void GLFWRendererManager::renderView(grumble::Transform::shared_ptr transform,
                                     grumble::Renderer::shared_ptr renderer) {}

void GLFWRendererManager::renderImageView(
    grumble::Transform::shared_ptr transform,
    grumble::ImageRenderer::shared_ptr renderer) {}

void GLFWRendererManager::renderLabel(
    grumble::Transform::shared_ptr transform,
    grumble::TextRenderer::shared_ptr renderer) {}
