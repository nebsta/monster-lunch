#pragma once

#include "TileLayerType.hpp"
#include <array>
#include <grumble/core/Object.hpp>
#include <memory>

namespace ml {
class TileLayer : public grumble::Object {
public:
  typedef std::unique_ptr<TileLayer> unique_ptr;
  typedef std::array<unique_ptr, MAX_TILE_LAYER_TYPES> unique_array;

  TileLayer();
  ~TileLayer();

  void update(double dt);

private:
};
} // namespace ml
