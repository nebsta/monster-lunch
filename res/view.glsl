@vs vs
uniform vs_params {
  mat4 ortho;
};

in vec3 pos;
in vec3 inst_pos;
in vec4 inst_col;

out vec4 color;

void main() {
  gl_Position = ortho * vec4(pos + inst_pos, 1.0);
  color = inst_col;
}
@end

@fs fs
in vec4 color;
out vec4 frag_color;

void main() {
    frag_color = color;
}
@end

@program view vs fs
