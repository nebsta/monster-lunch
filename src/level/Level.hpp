#pragma once

#include "Tile.hpp"
#include <grumble/core/CameraRange.hpp>
#include <grumble/core/Object.hpp>
#include <grumble/render/InstanceBufferCollection.hpp>
#include <grumble/render/RendererManager.hpp>
#include <grumble/ui/ViewFactory.hpp>
#include <grumble/util/HandmadeMath.h>
#include <memory>

#define MAX_LEVEL_WIDTH 50
#define MAX_LEVEL_HEIGHT 50

namespace ml {
class Level : public grumble::View {
public:
  typedef std::unique_ptr<Level> unique_ptr;

  Level(grumble::ViewFactory::shared_ptr viewFactory);
  ~Level();

  void update(double dt) override;
  void pushBuffer(grumble::InstanceBufferCollection &collection,
                  double t) override;

  HMM_Vec2 levelSize() const;

protected:
  bool tryHandleTouchInternal(HMM_Vec2 position) override;

private:
  Tile::unique_ptr _tiles[MAX_LEVEL_WIDTH][MAX_LEVEL_HEIGHT];
};
} // namespace ml
