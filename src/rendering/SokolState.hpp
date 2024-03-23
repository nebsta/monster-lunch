#pragma once

#include "instance/DebugLineInstance.hpp"
#include "sokol.hpp"

#include <grumble/render/ViewInstance.hpp>

#define MAX_VIEW_INSTANCES 2000

struct SokolState {
  sg_pass_action pass_action;

  sg_pipeline pipeline;
  sg_bindings view_bindings;
  grumble::ViewInstance view_instances[MAX_VIEW_INSTANCES];

  sg_pipeline debug_pipeline;
  sg_bindings debug_grid_bindings;
  DebugLineInstance debug_grid_instances[MAX_DEBUG_LINE_INSTANCES];
  int debug_line_instance_count;
};
