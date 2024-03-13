@vs debug_vs

in vec3 pos;
out vec4 color;

void main() {
  gl_Position = vec4(pos, 1.0);
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
