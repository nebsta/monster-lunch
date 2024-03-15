@vs debug_vs
uniform debug_vs_uni {
  vec2 off;
};

in int inst_ori;
in float inst_off;
in vec3 pos;
out vec4 color;

void main() {
  vec3 offset_pos = vec3(pos.x, pos.y + inst_off, pos.z);
  if (inst_ori == 1) { // vertical
    offset_pos = vec3(offset_pos.y, offset_pos.x, pos.z);
  }
  offset_pos = vec3(offset_pos.x + off.x, offset_pos.y + off.y, offset_pos.z);


  if (inst_ori == 0) { // horizontal
    float norm_pos_y = 2 * (offset_pos.y/2.0f - floor(0.5f + offset_pos.y/2.0f));
    offset_pos = vec3(offset_pos.x, norm_pos_y, offset_pos.z);
  } else { // vertical
    float norm_pos_x = 2 * (offset_pos.x/2.0f - floor(0.5f + offset_pos.x/2.0f));
    offset_pos = vec3(norm_pos_x, offset_pos.y, offset_pos.z);
  }

  gl_Position = vec4(offset_pos, 1.0);
  color = vec4(1.0f, 0.0f, 1.0f, 1.0f);
}
@end

@fs debug_fs
in vec4 color;
out vec4 frag_color;

void main() {
    frag_color = color;
}
@end

@program debug debug_vs debug_fs
