#pragma once

#include "TileCoordinate.hpp"
#include "TileLayer.hpp"
#include <grumble/core/Object.hpp>
#include <grumble/render/InstanceBufferCollection.hpp>
#include <grumble/render/RendererManager.hpp>
#include <grumble/ui/ViewFactory.hpp>
#include <grumble/util/HandmadeMath.h>
#include <memory>

#define TILE_DIMENSION 64
#define TILE_SIZE                                                              \
  { TILE_DIMENSION, TILE_DIMENSION }

namespace ml {
class Tile : grumble::Object {
public:
  typedef std::unique_ptr<Tile> unique_ptr;

  Tile(grumble::ViewFactory::shared_ptr viewFactory, TileCoordinate coords);
  ~Tile();

  void update(double dt);
  void pushBuffer(grumble::InstanceBufferCollection &collection, double t);
  bool tryHandleTouch(HMM_Vec2 position);

private:
  TileLayer::unique_array _layers;
};
} // namespace ml
