#include "Tile.hpp"
#include "../sprite/_gen_MainAtlas.hpp"
#include "TileLayer.hpp"
#include "TileLayerType.hpp"
#include <grumble/render/InstanceBufferCollection.hpp>
#include <grumble/ui/StackLayout.hpp>

namespace ml {
Tile::Tile(const std::string &id, TileCoordinate coords)
    : grumble::StackLayout(id) {
  HMM_Vec2 position = {(float)(coords.x * TILE_DIMENSION),
                       float(coords.y * TILE_DIMENSION)};

  for (int i = 0; i < MAX_TILE_LAYER_TYPES; i++) {
    auto layerType = static_cast<TileLayerType>(i);
    std::string id =
        fmt::format("{}_{}", id, TileLayerType_toString(layerType));
    auto layer = std::make_unique<TileLayer>(id);
    if (i == 0) {
      layer->setSprite(atlas::main::floor_tiled);
    }

    addView(std::move(layer));
  }
}

Tile::~Tile() {}

#pragma mark getters

} // namespace ml
