#include "LevelEditorView.hpp"
#include "../rendering/sokol.hpp"
#include <grumble/util/HandmadeMath.h>

namespace ml {
LevelEditorView::LevelEditorView(SDLApplication::shared_ptr sdlApplication,
                                 SDLInputManager::shared_ptr inputManager,
                                 MLEditorState::shared_ptr state)
    : _sdlApplication(sdlApplication), _inputManager(inputManager),
      _state(state) {}

LevelEditorView::~LevelEditorView() {}

void LevelEditorView::draw() {
  HMM_Vec2 screenSize = _sdlApplication->screenSize();
  simgui_new_frame({(int)screenSize.Width, (int)screenSize.Height,
                    ImGui::GetIO().DeltaTime});

  ImGui::Spacing();

  if (ImGui::BeginTabBar("Editor")) {

    ImGui::EndTabBar();
  }

  simgui_render();
}

void LevelEditorView::drawTilePallete() {}

bool LevelEditorView::isActive() const { return _state->isActive(); }

} // namespace ml
