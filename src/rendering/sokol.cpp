// clang-format off
#define SOKOL_IMGUI_NO_SOKOL_APP
#define SOKOL_IMPL
#define SOKOL_DEBUGTEXT_IMPL
#define SOKOL_DEBUG
#define SOKOL_TRACE_HOOKS
#define SOKOL_EXTERNAL_GL_LOADER
#define SOKOL_GLCORE33
#include <glad/glad.h>
#include "../sokol/sokol_gfx.h"
#include <imgui.h>
#include "../sokol/util/sokol_imgui.h"
#include "../sokol/util/sokol_debugtext.h"
// clang-format on
