#pragma once

#define MAX_DEBUG_LINE_INSTANCES 100

struct DebugLineInstance {
  int orientation; // 0 horizontal, 1 vertical
  int offset;
};
