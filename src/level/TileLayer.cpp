#include "TileLayer.hpp"

namespace ml {
TileLayer::TileLayer(grumble::ImageView::unique_ptr imageView)
    : _imageView(std::move(imageView)) {}

TileLayer::~TileLayer() {}

void TileLayer::update(double dt) { _imageView->update(dt); }

void TileLayer::updateInstanceBuffer(
    grumble::RendererManager::shared_ptr rendererManager, double t) {
  _imageView->updateInstanceBuffer(rendererManager, t);
}

} // namespace ml
