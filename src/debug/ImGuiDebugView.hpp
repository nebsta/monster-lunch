#pragma once

#include "../rendering/sokol.hpp"
#include <grumble/debug/DebugState.hpp>
#include <grumble/util/HandmadeMath.h>

class ImGuiDebugView {
public:
  static void draw(HMM_Vec2 screenSize, HMM_Vec2 cameraPos,
                   grumble::DebugState::shared_ptr state);

private:
};
