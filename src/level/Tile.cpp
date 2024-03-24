#include "Tile.hpp"
#include "TileCoordinate.hpp"
#include "TileLayerType.hpp"
#include <grumble/util/HandmadeMath.h>
#include <memory>

namespace ml {
Tile::Tile(grumble::ViewFactory::shared_ptr viewFactory,
           TileCoordinate coords) {
  HMM_Vec2 position = {(float)(coords.x * TILE_DIMENSION),
                       float(coords.y * TILE_DIMENSION)};

  for (int i = 0; i < MAX_TILE_LAYER_TYPES; i++) {
    grumble::View::unique_ptr view =
        viewFactory->createView(position, TILE_SIZE);

    _layers[i] = std::make_unique<TileLayer>(std::move(view));
  }
}

Tile::~Tile() {}

void Tile::update(double dt) {
  for (int i = 0; i < MAX_TILE_LAYER_TYPES; i++) {
    _layers[i]->update(dt);
  }
}

void Tile::updateInstanceBuffer(
    grumble::RendererManager::shared_ptr rendererManager, double t) {
  for (int i = 0; i < MAX_TILE_LAYER_TYPES; i++) {
    _layers[i]->updateInstanceBuffer(rendererManager, t);
  }
}
} // namespace ml
