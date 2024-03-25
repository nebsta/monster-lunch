#include "Tile.hpp"
#include "../sprite/_gen_MainAtlas.hpp"

namespace ml {
Tile::Tile(grumble::ViewFactory::shared_ptr viewFactory,
           TileCoordinate coords) {
  HMM_Vec2 position = {(float)(coords.x * TILE_DIMENSION),
                       float(coords.y * TILE_DIMENSION)};

  for (int i = 0; i < MAX_TILE_LAYER_TYPES; i++) {
    grumble::ImageView::unique_ptr view =
        viewFactory->createImageView(position, TILE_SIZE);
    view->setSprite(atlas::main::floor_tiled);
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