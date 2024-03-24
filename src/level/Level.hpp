#pragma once

#include "Tile.hpp"
#include <grumble/core/Object.hpp>
#include <grumble/render/RendererManager.hpp>
#include <grumble/ui/ViewFactory.hpp>
#include <memory>

#define MAX_LEVEL_WIDTH 100
#define MAX_LEVEL_HEIGHT 100

namespace ml {
class Level : public grumble::Object {
public:
  typedef std::unique_ptr<Level> unique_ptr;

  Level(grumble::ViewFactory::shared_ptr viewFactory);
  ~Level();

  void update(double dt);
  void
  updateInstanceBuffer(grumble::RendererManager::shared_ptr rendererManager,
                       double t);

private:
  Tile::unique_ptr _tiles[MAX_LEVEL_WIDTH][MAX_LEVEL_HEIGHT];
};
} // namespace ml
