// clang-format off
#pragma once

/* Coordinate space
 *     1
 * -1     1
 *    -1
 */

typedef struct {
  float x, y, z;
} vertex;

#define QUAD_VERTICES \
{ \
  { 0.0f, 1.0f, 0.5f }, \
  { 1.0f, 1.0f, 0.5f }, \
  { 1.0f, 0.0f, 0.5f }, \
  { 0.0f, 0.0f, 0.5f } \
}

#define QUAD_INDICES { 0, 1, 2, 0, 2, 3 }

#define HORIZONTAL_LINE \
{ \
  -1.0f, -1.0f, 0.5f, \
   1.0f, -1.0f, 0.5f \
}

// clang-format on
