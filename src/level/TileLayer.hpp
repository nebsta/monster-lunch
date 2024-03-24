#pragma once

#include "TileLayerType.hpp"
#include <array>
#include <grumble/core/Object.hpp>
#include <grumble/render/RendererManager.hpp>
#include <grumble/ui/View.hpp>
#include <memory>

namespace ml {
class TileLayer : public grumble::Object {
public:
  typedef std::unique_ptr<TileLayer> unique_ptr;
  typedef std::array<unique_ptr, MAX_TILE_LAYER_TYPES> unique_array;

  TileLayer(grumble::View::unique_ptr view);
  ~TileLayer();

  void update(double dt);
  void
  updateInstanceBuffer(grumble::RendererManager::shared_ptr rendererManager,
                       double t);

private:
  grumble::View::unique_ptr _view;
};
} // namespace ml
