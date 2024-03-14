#include "SokolFactory.hpp"

sg_buffer SokolFactory::createVertexBuffer(sg_range vertices,
                                           std::string label) {
  return sg_make_buffer(
      (sg_buffer_desc){.type = SG_BUFFERTYPE_VERTEXBUFFER,
                       .data = vertices,
                       .label = fmt::format("{}-vertices", label).c_str()});
}

sg_buffer SokolFactory::createIndexBuffer(sg_range indices, std::string label) {

  return sg_make_buffer(
      (sg_buffer_desc){.type = SG_BUFFERTYPE_INDEXBUFFER,
                       .data = indices,
                       .label = fmt::format("{}-indices", label).c_str()});
}

sg_buffer SokolFactory::createInstanceBuffer(int instanceCount,
                                             size_t instanceSize,
                                             std::string label) {
  return sg_make_buffer(
      (sg_buffer_desc){.size = instanceCount * instanceSize,
                       .usage = SG_USAGE_STREAM,
                       .label = fmt::format("{}-instances", label).c_str()});
}
