#pragma once

#include "ViewInstance.hpp"
#include "sokol.hpp"
struct SokolState {
  sg_pipeline pipeline;
  sg_pipeline debug_pipeline;
  sg_pass_action pass_action;
  sg_bindings view_bindings;
  sg_bindings debug_grid_bindings;
  ViewInstance view_instances[400];
  ViewInstance debug_grid_instance;
};
