#pragma once

#include <grumble/editor/EditorState.hpp>

namespace ml {

class MLEditorState : public grumble::EditorState {
public:
  MLEditorState();
  ~MLEditorState() = default;
};
}; // namespace ml
