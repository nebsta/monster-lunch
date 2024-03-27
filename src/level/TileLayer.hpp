#pragma once

#include "TileLayerType.hpp"
#include <array>
#include <grumble/core/Object.hpp>
#include <grumble/render/InstanceBufferCollection.hpp>
#include <grumble/render/RendererManager.hpp>
#include <grumble/ui/ImageView.hpp>
#include <memory>

namespace ml {
class TileLayer : public grumble::ImageView {
public:
  typedef std::unique_ptr<TileLayer> unique_ptr;
  typedef std::array<unique_ptr, MAX_TILE_LAYER_TYPES> unique_array;

  TileLayer(const std::string &id);
  ~TileLayer();
};
} // namespace ml
