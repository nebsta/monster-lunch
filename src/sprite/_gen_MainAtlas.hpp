// clang-format off
#pragma once

#include <grumble/sprite/SpriteDefinition.hpp>

namespace atlas {
  namespace main {
    static std::string_view name = "main";
    
    static auto floor_tiled = (grumble::SpriteDefinition) {
      .name = "floor_tiled",
      .atlas = "main",
      .size = { 64, 64 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.00362319f, 0.99637681f },
        .tr = { 0.23550725f, 0.99637681f },
        .bl = { 0.00362319f, 0.76449275f },
        .br = { 0.23550725f, 0.76449275f }
      }
    };
    static auto idle_down = (grumble::SpriteDefinition) {
      .name = "idle_down",
      .atlas = "main",
      .size = { 32, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.11956522f, 0.40942029f },
        .tr = { 0.23550725f, 0.40942029f },
        .bl = { 0.11956522f, 0.25f },
        .br = { 0.23550725f, 0.25f }
      }
    };
    static auto idle_left = (grumble::SpriteDefinition) {
      .name = "idle_left",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.70652174f, 0.82971014f },
        .tr = { 0.80797101f, 0.82971014f },
        .bl = { 0.70652174f, 0.67028986f },
        .br = { 0.80797101f, 0.67028986f }
      }
    };
    static auto idle_right = (grumble::SpriteDefinition) {
      .name = "idle_right",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.81521739f, 0.82971014f },
        .tr = { 0.91666667f, 0.82971014f },
        .bl = { 0.81521739f, 0.67028986f },
        .br = { 0.91666667f, 0.67028986f }
      }
    };
    static auto idle_up = (grumble::SpriteDefinition) {
      .name = "idle_up",
      .atlas = "main",
      .size = { 32, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.11956522f, 0.24275362f },
        .tr = { 0.23550725f, 0.24275362f },
        .bl = { 0.11956522f, 0.08333333f },
        .br = { 0.23550725f, 0.08333333f }
      }
    };
    static auto phone_1 = (grumble::SpriteDefinition) {
      .name = "phone_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.12681159f, 0.75724638f },
        .tr = { 0.23550725f, 0.75724638f },
        .bl = { 0.12681159f, 0.59782609f },
        .br = { 0.23550725f, 0.59782609f }
      }
    };
    static auto phone_2 = (grumble::SpriteDefinition) {
      .name = "phone_2",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.12681159f, 0.59057971f },
        .tr = { 0.23550725f, 0.59057971f },
        .bl = { 0.12681159f, 0.43115942f },
        .br = { 0.23550725f, 0.43115942f }
      }
    };
    static auto phone_3 = (grumble::SpriteDefinition) {
      .name = "phone_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.24275362f, 0.99637681f },
        .tr = { 0.35144928f, 0.99637681f },
        .bl = { 0.24275362f, 0.83695652f },
        .br = { 0.35144928f, 0.83695652f }
      }
    };
    static auto phone_4 = (grumble::SpriteDefinition) {
      .name = "phone_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35869565f, 0.99637681f },
        .tr = { 0.4673913f, 0.99637681f },
        .bl = { 0.35869565f, 0.83695652f },
        .br = { 0.4673913f, 0.83695652f }
      }
    };
    static auto phone_5 = (grumble::SpriteDefinition) {
      .name = "phone_5",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35869565f, 0.99637681f },
        .tr = { 0.4673913f, 0.99637681f },
        .bl = { 0.35869565f, 0.83695652f },
        .br = { 0.4673913f, 0.83695652f }
      }
    };
    static auto phone_6 = (grumble::SpriteDefinition) {
      .name = "phone_6",
      .atlas = "main",
      .size = { 30, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.00362319f, 0.40942029f },
        .tr = { 0.11231884f, 0.40942029f },
        .bl = { 0.00362319f, 0.24275362f },
        .br = { 0.11231884f, 0.24275362f }
      }
    };
    static auto phone_7 = (grumble::SpriteDefinition) {
      .name = "phone_7",
      .atlas = "main",
      .size = { 30, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.00362319f, 0.23550725f },
        .tr = { 0.11231884f, 0.23550725f },
        .bl = { 0.00362319f, 0.06884058f },
        .br = { 0.11231884f, 0.06884058f }
      }
    };
    static auto phone_8 = (grumble::SpriteDefinition) {
      .name = "phone_8",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.47463768f, 0.99637681f },
        .tr = { 0.58333333f, 0.99637681f },
        .bl = { 0.47463768f, 0.83695652f },
        .br = { 0.58333333f, 0.83695652f }
      }
    };
    static auto phone_9 = (grumble::SpriteDefinition) {
      .name = "phone_9",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.59057971f, 0.99637681f },
        .tr = { 0.69927536f, 0.99637681f },
        .bl = { 0.59057971f, 0.83695652f },
        .br = { 0.69927536f, 0.83695652f }
      }
    };
    static auto sit_left_1 = (grumble::SpriteDefinition) {
      .name = "sit_left_1",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.57608696f, 0.16304348f },
        .tr = { 0.67753623f, 0.16304348f },
        .bl = { 0.57608696f, 0.01086957f },
        .br = { 0.67753623f, 0.01086957f }
      }
    };
    static auto sit_left_2 = (grumble::SpriteDefinition) {
      .name = "sit_left_2",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.57608696f, 0.16304348f },
        .tr = { 0.67753623f, 0.16304348f },
        .bl = { 0.57608696f, 0.01086957f },
        .br = { 0.67753623f, 0.01086957f }
      }
    };
    static auto sit_left_3 = (grumble::SpriteDefinition) {
      .name = "sit_left_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35869565f, 0.66304348f },
        .tr = { 0.46014493f, 0.66304348f },
        .bl = { 0.35869565f, 0.50362319f },
        .br = { 0.46014493f, 0.50362319f }
      }
    };
    static auto sit_left_4 = (grumble::SpriteDefinition) {
      .name = "sit_left_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35869565f, 0.49637681f },
        .tr = { 0.46014493f, 0.49637681f },
        .bl = { 0.35869565f, 0.33695652f },
        .br = { 0.46014493f, 0.33695652f }
      }
    };
    static auto sit_left_5 = (grumble::SpriteDefinition) {
      .name = "sit_left_5",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.68478261f, 0.49637681f },
        .tr = { 0.78623188f, 0.49637681f },
        .bl = { 0.68478261f, 0.3442029f },
        .br = { 0.78623188f, 0.3442029f }
      }
    };
    static auto sit_left_6 = (grumble::SpriteDefinition) {
      .name = "sit_left_6",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.79347826f, 0.49637681f },
        .tr = { 0.89492754f, 0.49637681f },
        .bl = { 0.79347826f, 0.3442029f },
        .br = { 0.89492754f, 0.3442029f }
      }
    };
    static auto sit_right_1 = (grumble::SpriteDefinition) {
      .name = "sit_right_1",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.68478261f, 0.33695652f },
        .tr = { 0.78623188f, 0.33695652f },
        .bl = { 0.68478261f, 0.18478261f },
        .br = { 0.78623188f, 0.18478261f }
      }
    };
    static auto sit_right_2 = (grumble::SpriteDefinition) {
      .name = "sit_right_2",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.68478261f, 0.33695652f },
        .tr = { 0.78623188f, 0.33695652f },
        .bl = { 0.68478261f, 0.18478261f },
        .br = { 0.78623188f, 0.18478261f }
      }
    };
    static auto sit_right_3 = (grumble::SpriteDefinition) {
      .name = "sit_right_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35869565f, 0.32971014f },
        .tr = { 0.46014493f, 0.32971014f },
        .bl = { 0.35869565f, 0.17028986f },
        .br = { 0.46014493f, 0.17028986f }
      }
    };
    static auto sit_right_4 = (grumble::SpriteDefinition) {
      .name = "sit_right_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35869565f, 0.16304348f },
        .tr = { 0.46014493f, 0.16304348f },
        .bl = { 0.35869565f, 0.00362319f },
        .br = { 0.46014493f, 0.00362319f }
      }
    };
    static auto sit_right_5 = (grumble::SpriteDefinition) {
      .name = "sit_right_5",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.68478261f, 0.17753623f },
        .tr = { 0.78623188f, 0.17753623f },
        .bl = { 0.68478261f, 0.02536232f },
        .br = { 0.78623188f, 0.02536232f }
      }
    };
    static auto sit_right_6 = (grumble::SpriteDefinition) {
      .name = "sit_right_6",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.79347826f, 0.33695652f },
        .tr = { 0.89492754f, 0.33695652f },
        .bl = { 0.79347826f, 0.18478261f },
        .br = { 0.89492754f, 0.18478261f }
      }
    };
    static auto walk_down_1 = (grumble::SpriteDefinition) {
      .name = "walk_down_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.70652174f, 0.99637681f },
        .tr = { 0.81521739f, 0.99637681f },
        .bl = { 0.70652174f, 0.83695652f },
        .br = { 0.81521739f, 0.83695652f }
      }
    };
    static auto walk_down_2 = (grumble::SpriteDefinition) {
      .name = "walk_down_2",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.82246377f, 0.99637681f },
        .tr = { 0.93115942f, 0.99637681f },
        .bl = { 0.82246377f, 0.83695652f },
        .br = { 0.93115942f, 0.83695652f }
      }
    };
    static auto walk_down_3 = (grumble::SpriteDefinition) {
      .name = "walk_down_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.24275362f, 0.82971014f },
        .tr = { 0.35144928f, 0.82971014f },
        .bl = { 0.24275362f, 0.67028986f },
        .br = { 0.35144928f, 0.67028986f }
      }
    };
    static auto walk_down_4 = (grumble::SpriteDefinition) {
      .name = "walk_down_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.24275362f, 0.66304348f },
        .tr = { 0.35144928f, 0.66304348f },
        .bl = { 0.24275362f, 0.50362319f },
        .br = { 0.35144928f, 0.50362319f }
      }
    };
    static auto walk_down_5 = (grumble::SpriteDefinition) {
      .name = "walk_down_5",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.24275362f, 0.49637681f },
        .tr = { 0.35144928f, 0.49637681f },
        .bl = { 0.24275362f, 0.33695652f },
        .br = { 0.35144928f, 0.33695652f }
      }
    };
    static auto walk_down_6 = (grumble::SpriteDefinition) {
      .name = "walk_down_6",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.24275362f, 0.32971014f },
        .tr = { 0.35144928f, 0.32971014f },
        .bl = { 0.24275362f, 0.17028986f },
        .br = { 0.35144928f, 0.17028986f }
      }
    };
    static auto walk_left_1 = (grumble::SpriteDefinition) {
      .name = "walk_left_1",
      .atlas = "main",
      .size = { 26, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.90217391f, 0.66304348f },
        .tr = { 0.99637681f, 0.66304348f },
        .bl = { 0.90217391f, 0.50362319f },
        .br = { 0.99637681f, 0.50362319f }
      }
    };
    static auto walk_left_2 = (grumble::SpriteDefinition) {
      .name = "walk_left_2",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.4673913f, 0.66304348f },
        .tr = { 0.56884058f, 0.66304348f },
        .bl = { 0.4673913f, 0.50362319f },
        .br = { 0.56884058f, 0.50362319f }
      }
    };
    static auto walk_left_3 = (grumble::SpriteDefinition) {
      .name = "walk_left_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.57608696f, 0.66304348f },
        .tr = { 0.67753623f, 0.66304348f },
        .bl = { 0.57608696f, 0.50362319f },
        .br = { 0.67753623f, 0.50362319f }
      }
    };
    static auto walk_left_4 = (grumble::SpriteDefinition) {
      .name = "walk_left_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.68478261f, 0.66304348f },
        .tr = { 0.78623188f, 0.66304348f },
        .bl = { 0.68478261f, 0.50362319f },
        .br = { 0.78623188f, 0.50362319f }
      }
    };
    static auto walk_left_5 = (grumble::SpriteDefinition) {
      .name = "walk_left_5",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.79347826f, 0.66304348f },
        .tr = { 0.89492754f, 0.66304348f },
        .bl = { 0.79347826f, 0.50362319f },
        .br = { 0.89492754f, 0.50362319f }
      }
    };
    static auto walk_left_6 = (grumble::SpriteDefinition) {
      .name = "walk_left_6",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.70652174f, 0.82971014f },
        .tr = { 0.80797101f, 0.82971014f },
        .bl = { 0.70652174f, 0.67028986f },
        .br = { 0.80797101f, 0.67028986f }
      }
    };
    static auto walk_right_1 = (grumble::SpriteDefinition) {
      .name = "walk_right_1",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.4673913f, 0.49637681f },
        .tr = { 0.56884058f, 0.49637681f },
        .bl = { 0.4673913f, 0.33695652f },
        .br = { 0.56884058f, 0.33695652f }
      }
    };
    static auto walk_right_2 = (grumble::SpriteDefinition) {
      .name = "walk_right_2",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.4673913f, 0.32971014f },
        .tr = { 0.56884058f, 0.32971014f },
        .bl = { 0.4673913f, 0.17028986f },
        .br = { 0.56884058f, 0.17028986f }
      }
    };
    static auto walk_right_3 = (grumble::SpriteDefinition) {
      .name = "walk_right_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.81521739f, 0.82971014f },
        .tr = { 0.91666667f, 0.82971014f },
        .bl = { 0.81521739f, 0.67028986f },
        .br = { 0.91666667f, 0.67028986f }
      }
    };
    static auto walk_right_4 = (grumble::SpriteDefinition) {
      .name = "walk_right_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.4673913f, 0.16304348f },
        .tr = { 0.56884058f, 0.16304348f },
        .bl = { 0.4673913f, 0.00362319f },
        .br = { 0.56884058f, 0.00362319f }
      }
    };
    static auto walk_right_5 = (grumble::SpriteDefinition) {
      .name = "walk_right_5",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.57608696f, 0.49637681f },
        .tr = { 0.67753623f, 0.49637681f },
        .bl = { 0.57608696f, 0.33695652f },
        .br = { 0.67753623f, 0.33695652f }
      }
    };
    static auto walk_right_6 = (grumble::SpriteDefinition) {
      .name = "walk_right_6",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.57608696f, 0.32971014f },
        .tr = { 0.67753623f, 0.32971014f },
        .bl = { 0.57608696f, 0.17028986f },
        .br = { 0.67753623f, 0.17028986f }
      }
    };
    static auto walk_up_1 = (grumble::SpriteDefinition) {
      .name = "walk_up_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.24275362f, 0.16304348f },
        .tr = { 0.35144928f, 0.16304348f },
        .bl = { 0.24275362f, 0.00362319f },
        .br = { 0.35144928f, 0.00362319f }
      }
    };
    static auto walk_up_2 = (grumble::SpriteDefinition) {
      .name = "walk_up_2",
      .atlas = "main",
      .size = { 32, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.00362319f, 0.75724638f },
        .tr = { 0.11956522f, 0.75724638f },
        .bl = { 0.00362319f, 0.59057971f },
        .br = { 0.11956522f, 0.59057971f }
      }
    };
    static auto walk_up_3 = (grumble::SpriteDefinition) {
      .name = "walk_up_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35869565f, 0.82971014f },
        .tr = { 0.4673913f, 0.82971014f },
        .bl = { 0.35869565f, 0.67028986f },
        .br = { 0.4673913f, 0.67028986f }
      }
    };
    static auto walk_up_4 = (grumble::SpriteDefinition) {
      .name = "walk_up_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.47463768f, 0.82971014f },
        .tr = { 0.58333333f, 0.82971014f },
        .bl = { 0.47463768f, 0.67028986f },
        .br = { 0.58333333f, 0.67028986f }
      }
    };
    static auto walk_up_5 = (grumble::SpriteDefinition) {
      .name = "walk_up_5",
      .atlas = "main",
      .size = { 32, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.00362319f, 0.58333333f },
        .tr = { 0.11956522f, 0.58333333f },
        .bl = { 0.00362319f, 0.41666667f },
        .br = { 0.11956522f, 0.41666667f }
      }
    };
    static auto walk_up_6 = (grumble::SpriteDefinition) {
      .name = "walk_up_6",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.59057971f, 0.82971014f },
        .tr = { 0.69927536f, 0.82971014f },
        .bl = { 0.59057971f, 0.67028986f },
        .br = { 0.69927536f, 0.67028986f }
      }
    };

    
    static const grumble::SpriteDefinition::vector phone = { 
      phone_1,
      phone_2,
      phone_3,
      phone_4,
      phone_5,
      phone_6,
      phone_7,
      phone_8,
      phone_9,
    };
    
    static const grumble::SpriteDefinition::vector sit_left = { 
      sit_left_1,
      sit_left_2,
      sit_left_3,
      sit_left_4,
      sit_left_5,
      sit_left_6,
    };
    
    static const grumble::SpriteDefinition::vector sit_right = { 
      sit_right_1,
      sit_right_2,
      sit_right_3,
      sit_right_4,
      sit_right_5,
      sit_right_6,
    };
    
    static const grumble::SpriteDefinition::vector walk_down = { 
      walk_down_1,
      walk_down_2,
      walk_down_3,
      walk_down_4,
      walk_down_5,
      walk_down_6,
    };
    
    static const grumble::SpriteDefinition::vector walk_left = { 
      walk_left_1,
      walk_left_2,
      walk_left_3,
      walk_left_4,
      walk_left_5,
      walk_left_6,
    };
    
    static const grumble::SpriteDefinition::vector walk_right = { 
      walk_right_1,
      walk_right_2,
      walk_right_3,
      walk_right_4,
      walk_right_5,
      walk_right_6,
    };
    
    static const grumble::SpriteDefinition::vector walk_up = { 
      walk_up_1,
      walk_up_2,
      walk_up_3,
      walk_up_4,
      walk_up_5,
      walk_up_6,
    };
    
  }
}
// clang-format on