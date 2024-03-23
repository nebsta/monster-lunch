#include "LevelSystem.hpp"

namespace ml {
LevelSystem::LevelSystem(Level::unique_ptr level)
    : _level(std::move(level)), grumble::System("levelSystem") {}

LevelSystem::~LevelSystem() {}

void LevelSystem::update(double dt) { _level->update(dt); }
} // namespace ml
