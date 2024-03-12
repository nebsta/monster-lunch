@header #include "../../utils/HandmadeMath.h"

@ctype mat4 HMM_Mat4

@vs vs
uniform vs_params {
  mat4 mvp;
};

in vec3 pos;
out vec4 color;

void main() {
  gl_Position = mvp * vec4(pos, 1.0);
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
