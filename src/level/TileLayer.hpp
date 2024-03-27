#pragma once

#include "TileLayerType.hpp"
#include <array>
#include <grumble/core/Object.hpp>
#include <grumble/render/InstanceBufferCollection.hpp>
#include <grumble/render/RendererManager.hpp>
#include <grumble/ui/ImageView.hpp>
#include <memory>

namespace ml {
class TileLayer : public grumble::Object {
public:
  typedef std::unique_ptr<TileLayer> unique_ptr;
  typedef std::array<unique_ptr, MAX_TILE_LAYER_TYPES> unique_array;

  TileLayer(grumble::ImageView::unique_ptr imageView);
  ~TileLayer();

  void update(double dt);
  void pushBuffer(grumble::InstanceBufferCollection &collection, double t);
  bool tryHandleTouch(HMM_Vec2 position);

private:
  grumble::ImageView::unique_ptr _imageView;
};
} // namespace ml
