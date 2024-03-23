#pragma once

#include <string>

#define MAX_TILE_LAYER_TYPES 4

namespace ml {
enum TileLayerType { BACKGROUND = 0, OBJECT = 1, EFFECT = 2, OVERLAY = 3 };

static const std::string TileLayerType_toString(TileLayerType type) {
  switch (type) {
  case BACKGROUND:
    return "BACKGROUND";
  case OBJECT:
    return "OBJECT";
  case EFFECT:
    return "EFFECT";
  case OVERLAY:
    return "OVERLAY";
  }
}
} // namespace ml
