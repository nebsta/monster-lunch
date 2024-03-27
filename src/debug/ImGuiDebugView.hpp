#pragma once

#include <grumble/debug/DebugState.hpp>
#include <grumble/input/InputManager.hpp>
#include <grumble/util/HandmadeMath.h>

class ImGuiDebugView {
public:
  ImGuiDebugView(grumble::InputManager::shared_ptr inputManager);
  ~ImGuiDebugView();

  void draw(HMM_Vec2 screenSize, HMM_Vec2 cameraPos,
            grumble::DebugState::shared_ptr state);

private:
  grumble::InputManager::shared_ptr _inputManager;

  void drawGeneralTab(HMM_Vec2 screenSize, HMM_Vec2 cameraPos,
                      grumble::DebugState::shared_ptr state);
  void drawGridTab(grumble::DebugState::shared_ptr state);
  void drawLoggerTab();
  void drawLogCategoryButton(grumble::LogCategory category);
};
