#pragma once

#include "../input/SDLInputManager.hpp"
#include "MLEditorState.hpp"
#include <grumble/core/Object.hpp>
#include <grumble/editor/EditorState.hpp>
#include <grumble/editor/EditorView.hpp>

namespace ml {
class LevelEditorView : public grumble::EditorView {
public:
  LevelEditorView(SDLInputManager::shared_ptr inputManager,
                  MLEditorState::shared_ptr state);
  ~LevelEditorView() override;

  void draw() override;

  bool isActive() const override;

private:
  MLEditorState::shared_ptr _state;
  SDLInputManager::shared_ptr _inputManager;

  void drawTilePallete();
};
} // namespace ml
