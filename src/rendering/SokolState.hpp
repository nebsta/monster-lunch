#pragma once

#include "instance/ViewInstance.hpp"
#include "sokol.hpp"
struct SokolState {
  sg_pipeline pipeline;
  sg_pass_action pass_action;
  sg_bindings bindings;
  ViewInstance instances[4];
  float cameraOffset;
};
