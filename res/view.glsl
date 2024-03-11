@vs vs
uniform vs_params {
  mat4 ortho;
};

in vec4 pos;
out vec4 color;

void main() {
  gl_Position = pos;
  color = vec4(1.0, 0.0, 0.0, 1.0);
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
