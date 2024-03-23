#pragma once

#include "Level.hpp"
#include <grumble/core/System.hpp>

namespace ml {
class LevelSystem : public grumble::System {
public:
  LevelSystem(Level::unique_ptr level);
  ~LevelSystem();

  void update(double dt) override;

private:
  Level::unique_ptr _level;
};
} // namespace ml
