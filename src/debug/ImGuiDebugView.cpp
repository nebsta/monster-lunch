#include "ImGuiDebugView.hpp"

void ImGuiDebugView::draw(HMM_Vec2 screenSize, HMM_Vec2 cameraPos,
                          grumble::DebugState::shared_ptr state) {
  simgui_new_frame({(int)screenSize.Width, (int)screenSize.Height,
                    ImGui::GetIO().DeltaTime});

  ImGui::Text("Debug");
  ImGui::Text("Screen Size: %.2f, %.2f", screenSize.Width, screenSize.Height);
  ImGui::Text("Camera Position: %.2f, %.2f", cameraPos.X, cameraPos.Y);

  std ::string toggleStatsText = state->frameStatsVisible() ? "On" : "Off";
  std::string toggleFrameStatsButtonLabel =
      fmt::format("Toggle Frame Stats ({})", toggleStatsText);
  if (ImGui::Button(toggleFrameStatsButtonLabel.c_str())) {
    state->toggleFrameStatsVisible();
  }

  ImGui::Spacing();

  // setting up the debug grid menu
  if (ImGui::CollapsingHeader("Debug Grid")) {
    std::string toggleGridText = state->gridVisible() ? "On" : "Off";
    std::string toggleGridButtonLabel =
        fmt::format("Toggle Grid ({})", toggleGridText);
    if (ImGui::Button(toggleGridButtonLabel.c_str())) {
      state->toggleGridVisible();
    }

    ImGui::Spacing();

    ImGui::Text("Grid Resolution");

    if (ImGui::RadioButton("Small", state->gridResolution() ==
                                        grumble::GridResolution::Small)) {
      state->setGridResolution(grumble::GridResolution::Small);
    }

    if (ImGui::RadioButton("Medium", state->gridResolution() ==
                                         grumble::GridResolution::Medium)) {
      state->setGridResolution(grumble::GridResolution::Medium);
    }

    if (ImGui::RadioButton("Large", state->gridResolution() ==
                                        grumble::GridResolution::Large)) {
      state->setGridResolution(grumble::GridResolution::Large);
    }
  }

  simgui_render();
}
