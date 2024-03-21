@header #include <grumble/util/HandmadeMath.h>

@ctype mat4 HMM_Mat4

@block mat_utils
void combine_to_mat4(in vec4 col1, in vec4 col2, in vec4 col3, in vec4 col4, out mat4 mat) {
  mat[0] = col1;
  mat[1] = col2;
  mat[2] = col3;
  mat[3] = col4;
}
@end

@vs view_vs
uniform view_vs_uni {
  mat4 pv;
};
in vec3 pos;
in int uv_index;
in vec2 inst_uv0;
in vec2 inst_uv1;
in vec2 inst_uv2;
in vec2 inst_uv3;
in vec4 inst_mod_colx;
in vec4 inst_mod_coly;
in vec4 inst_mod_colz;
in vec4 inst_mod_colw;
out vec2 uv;
@include_block mat_utils

void main() {
  mat4 m;
  combine_to_mat4(inst_mod_colx, inst_mod_coly, inst_mod_colz, inst_mod_colw, m);
  gl_Position = pv * m * vec4(pos, 1.0);
  if (uv_index == 0) { // top right
    uv = inst_uv0;
  } else if (uv_index == 1) { // top left
    uv = inst_uv1;
  } else if (uv_index == 2) { // bottom left
    uv = inst_uv2;
  } else { // bottom right
    uv = inst_uv3;
  }
}
@end

@fs view_fs
uniform texture2D tex;
uniform sampler smp;

in vec2 uv;
out vec4 frag_color;

void main() {
  vec2 reworkedUv = vec2(mod(uv.x, 0.35f), 1.0f - mod(uv.y, 0.24f));
  frag_color = texture(sampler2D(tex, smp), reworkedUv);
}
@end

@program view view_vs view_fs
