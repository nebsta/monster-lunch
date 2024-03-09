#pragma once

#include "sokol.hpp"

struct SokolState {
  sg_pipeline pipeline;
  sg_bindings bindings;
  sg_pass_action pass_action;
};
