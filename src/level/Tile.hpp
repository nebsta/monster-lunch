#pragma once

#include "TileLayer.hpp"
#include <grumble/core/Object.hpp>
#include <memory>

namespace ml {
class Tile : grumble::Object {
public:
  typedef std::unique_ptr<Tile> unique_ptr;

  Tile();
  ~Tile();

  void update(double dt);

private:
  TileLayer::unique_array _layers;
};
} // namespace ml
