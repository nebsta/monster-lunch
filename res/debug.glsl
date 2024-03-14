@vs debug_vs

in int inst_ori;
in float inst_off;
in vec3 pos;
out vec4 color;

void main() {
  vec3 offset_pos = vec3(pos.x, pos.y + inst_off, pos.z);
  if (inst_ori == 1) { // vertical
    offset_pos = vec3(offset_pos.y, offset_pos.x, pos.z);
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
