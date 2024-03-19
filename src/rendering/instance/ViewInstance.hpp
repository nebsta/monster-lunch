#pragma once
#include <grumble/util/HandmadeMath.h>

#define MAX_VIEW_INSTANCES 500

struct ViewInstance {
  HMM_Vec2 uv0;
  HMM_Vec2 uv1;
  HMM_Vec2 uv2;
  HMM_Vec2 uv3;
  HMM_Vec4 colx;
  HMM_Vec4 coly;
  HMM_Vec4 colz;
  HMM_Vec4 colw;
  // HMM_Vec4 tint;
};
