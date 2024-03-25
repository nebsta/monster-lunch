#include "LevelEditorView.hpp"
#include <grumble/util/HandmadeMath.h>
#include <imgui.h>

namespace ml {
LevelEditorView::LevelEditorView(SDLInputManager::shared_ptr inputManager,
                                 MLEditorState::shared_ptr state)
    : _inputManager(inputManager), _state(state) {}

LevelEditorView::~LevelEditorView() {}

void LevelEditorView::draw() {
  ImGui::Begin("Editor");
  ImGui::Spacing();
  if (ImGui::BeginTabBar("Editor-Main")) {

    drawTilePallete();

    ImGui::EndTabBar();
  }
  ImGui::End();
}

void LevelEditorView::drawTilePallete() {
  if (ImGui::BeginTabItem("Tile Pallete")) {
    ImGui::Text("This is some text");
    ImGui::EndTabItem();
  }
}

bool LevelEditorView::isActive() const { return _state->isActive(); }

} // namespace ml
