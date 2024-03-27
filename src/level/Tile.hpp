#pragma once

#include "TileCoordinate.hpp"
#include <grumble/core/Object.hpp>
#include <grumble/render/InstanceBufferCollection.hpp>
#include <grumble/render/RendererManager.hpp>
#include <grumble/ui/StackLayout.hpp>
#include <grumble/ui/ViewFactory.hpp>
#include <grumble/util/HandmadeMath.h>
#include <memory>

#define TILE_DIMENSION 64
#define TILE_SIZE                                                              \
  { TILE_DIMENSION, TILE_DIMENSION }

namespace ml {
class Tile : public grumble::StackLayout {
public:
  typedef std::unique_ptr<Tile> unique_ptr;

  Tile(const std::string &id, TileCoordinate coords);
  ~Tile();
};
} // namespace ml
