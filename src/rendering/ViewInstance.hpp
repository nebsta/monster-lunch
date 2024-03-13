#pragma once
#include <grumble/util/HandmadeMath.h>

#define MAX_INSTANCES 500

struct ViewInstance {
  HMM_Vec4 colx;
  HMM_Vec4 coly;
  HMM_Vec4 colz;
  HMM_Vec4 colw;
  HMM_Vec4 tint;
};

struct DebugLineInstance {
  float x;
};
