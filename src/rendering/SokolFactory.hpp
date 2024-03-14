#pragma once

#include "sokol.hpp"
#include <fmt/format.h>
#include <string>

class SokolFactory {
public:
  static sg_buffer createVertexBuffer(sg_range vertices, std::string label);
  static sg_buffer createIndexBuffer(sg_range indices, std::string label);
  static sg_buffer createInstanceBuffer(int instanceCount, size_t instanceSize,
                                        std::string label);

  static sg_bindings createBindings(sg_range vertices, sg_range indices,
                                    int instanceCount, size_t instanceSize,
                                    std::string label);
};
