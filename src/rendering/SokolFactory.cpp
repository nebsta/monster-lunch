#include "SokolFactory.hpp"

sg_swapchain SokolFactory::createSwapchain(HMM_Vec2 size) {
  return (sg_swapchain){.width = (int)size.Width,
                        .height = (int)size.Height,
                        .color_format = SG_PIXELFORMAT_RGBA8,
                        .gl = {
                            .framebuffer = 0,
                        }};
}

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

sg_bindings SokolFactory::createBindings(sg_range vertices, sg_range indices,
                                         int instanceCount, size_t instanceSize,
                                         std::string label) {
  sg_bindings bindings = {};
  bindings.vertex_buffers[0] =
      SokolFactory::createVertexBuffer(vertices, label);
  bindings.vertex_buffers[1] =
      SokolFactory::createInstanceBuffer(instanceCount, instanceSize, label);
  bindings.index_buffer = SokolFactory::createIndexBuffer(indices, label);
  return bindings;
}
