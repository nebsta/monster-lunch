
@block funcs
float sawtooth_wave(in float x) {
  return 2.0f * (x/2.0f - floor(0.5f + x/2.0f));
}
@end

@vs debug_vs
uniform debug_vs_uni {
  vec2 off;
};

in int inst_ori;
in float inst_off;
in vec3 pos;
out vec4 color;

@include_block funcs

void main() {
  vec2 offset_pos = vec2(pos.x, pos.y + inst_off);
  if (inst_ori == 1) { // vertical
    offset_pos = vec2(offset_pos.y, offset_pos.x);
  }
  offset_pos = vec2(offset_pos.x + off.x, offset_pos.y + off.y);

  if (inst_ori == 0) { // horizontal
    offset_pos = vec2(pos.x, sawtooth_wave(offset_pos.y));
  } else { // vertical
    offset_pos = vec2(sawtooth_wave(offset_pos.x), pos.x);
  }

  gl_Position = vec4(offset_pos, pos.z, 1.0);
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
