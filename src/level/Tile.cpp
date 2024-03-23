#include "Tile.hpp"
#include "TileLayerType.hpp"
#include <memory>

namespace ml {
Tile::Tile() {
  for (int i = 0; i < MAX_TILE_LAYER_TYPES; i++) {
    _layers[0] = std::make_unique<TileLayer>();
  }
}

Tile::~Tile() {}

void Tile::update(double dt) {
  for (int i = 0; i < MAX_TILE_LAYER_TYPES; i++) {
    _layers[i]->update(dt);
  }
}
} // namespace ml
