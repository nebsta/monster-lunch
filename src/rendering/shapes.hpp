// clang-format off
#pragma once

#include "../sokol/sokol_gfx.h"

/* Coordinate space
 *     1
 * -1     1
 *    -1
 */

typedef struct {
  float x, y, z;
  float u, v;
} vertex;

#define QUAD_VERTICES \
{ \
  { 0.0f, 0.0f, 0.5f, 1.0f, 1.0f }, \
  { 1.0f, 0.0f, 0.5f, 0.0f, 1.0f }, \
  { 1.0f, 1.0f, 0.5f, 0.0f, 0.0f }, \
  { 0.0f, 1.0f, 0.5f, 1.0f, 0.0f } \
}

#define QUAD_INDICES { 0, 1, 2, 0, 2, 3 }

#define HORIZONTAL_LINE \
{ \
  -1.0f, -1.0f, 0.5f, \
   1.0f, -1.0f, 0.5f \
}

// clang-format on
