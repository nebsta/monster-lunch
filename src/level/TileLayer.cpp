#include "TileLayer.hpp"

namespace ml {
TileLayer::TileLayer(grumble::ImageView::unique_ptr imageView)
    : _imageView(std::move(imageView)) {}

TileLayer::~TileLayer() {}

void TileLayer::update(double dt) { _imageView->update(dt); }

void TileLayer::pushBuffer(grumble::InstanceBufferCollection &collection,
                           double t) {
  _imageView->pushBuffer(collection, t);
}

bool TileLayer::tryHandleTouch(HMM_Vec2 position) {
  return _imageView->tryHandleTouch(position);
}

} // namespace ml
