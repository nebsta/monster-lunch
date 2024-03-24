#include "TileLayer.hpp"

namespace ml {
TileLayer::TileLayer(grumble::View::unique_ptr view) : _view(std::move(view)) {}

TileLayer::~TileLayer() {}

void TileLayer::update(double dt) { _view->update(dt); }

void TileLayer::updateInstanceBuffer(
    grumble::RendererManager::shared_ptr rendererManager, double t) {}

} // namespace ml
