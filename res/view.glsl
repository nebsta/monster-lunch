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
in vec4 inst_mod_colx;
in vec4 inst_mod_coly;
in vec4 inst_mod_colz;
in vec4 inst_mod_colw;
in vec4 inst_tint;
out vec4 color;


@include_block mat_utils

void main() {
  mat4 m;
  combine_to_mat4(inst_mod_colx, inst_mod_coly, inst_mod_colz, inst_mod_colw, m);
  gl_Position = pv * m * vec4(pos, 1.0);
  color = inst_tint;
}
@end

@fs view_fs
in vec4 color;
out vec4 frag_color;

void main() {
    frag_color = color;
}
@end

@program view view_vs view_fs
