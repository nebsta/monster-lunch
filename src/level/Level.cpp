#include "Level.hpp"
#include "Tile.hpp"
#include "TileCoordinate.hpp"
#include <grumble/core/CameraRange.hpp>
#include <grumble/render/InstanceBufferCollection.hpp>
#include <grumble/util/HandmadeMath.h>
#include <memory>

namespace ml {
Level::Level(grumble::ViewFactory::shared_ptr viewFactory)
    : View("level_view") {
  for (int i = 0; i < MAX_LEVEL_WIDTH; i++) {
    for (int j = 0; j < MAX_LEVEL_HEIGHT; j++) {
      auto coordinate = (TileCoordinate){.x = i, .y = j};
      _tiles[i][j] = std::make_unique<Tile>(viewFactory, coordinate);
    }
  }
}

Level::~Level() {}

void Level::update(double dt) {
  for (int i = 0; i < MAX_LEVEL_WIDTH; i++) {
    for (int j = 0; j < MAX_LEVEL_HEIGHT; j++) {
      _tiles[i][j]->update(dt);
    }
  }
}

void Level::pushBuffer(grumble::InstanceBufferCollection &collection,
                       double t) {
  for (int i = 0; i < MAX_LEVEL_WIDTH; i++) {
    for (int j = 0; j < MAX_LEVEL_HEIGHT; j++) {
      _tiles[i][j]->pushBuffer(collection, t);
    }
  }
}

#pragma mark getters

HMM_Vec2 Level::levelSize() const {
  return (HMM_Vec2){.Width = TILE_DIMENSION * MAX_LEVEL_WIDTH,
                    .Height = TILE_DIMENSION * MAX_LEVEL_HEIGHT};
}

} // namespace ml
