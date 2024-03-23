#include "Level.hpp"
#include <memory>

namespace ml {
Level::Level() {
  for (int i = 0; i < MAX_LEVEL_WIDTH; i++) {
    for (int j = 0; j < MAX_LEVEL_HEIGHT; j++) {
      _tiles[i][j] = std::make_unique<Tile>();
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

} // namespace ml
