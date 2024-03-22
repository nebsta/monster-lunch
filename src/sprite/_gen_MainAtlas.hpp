// clang-format off
#pragma once

#include <grumble/sprite/SpriteDefinition.hpp>

namespace atlas {
  namespace main {
    static std::string_view name = "main";
    
    static auto floor = (grumble::SpriteDefinition) {
      .name = "floor",
      .atlas = "main",
      .size = { 96, 64 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.00362319f, 0.99637681f },
        .tr = { 0.35144928f, 0.99637681f },
        .bl = { 0.00362319f, 0.76449275f },
        .br = { 0.35144928f, 0.76449275f }
      }
    };
    static auto idle_down = (grumble::SpriteDefinition) {
      .name = "idle_down",
      .atlas = "main",
      .size = { 32, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.00362319f, 0.58333333f },
        .tr = { 0.11956522f, 0.58333333f },
        .bl = { 0.00362319f, 0.42391304f },
        .br = { 0.11956522f, 0.42391304f }
      }
    };
    static auto idle_left = (grumble::SpriteDefinition) {
      .name = "idle_left",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.25f, 0.75724638f },
        .tr = { 0.35144928f, 0.75724638f },
        .bl = { 0.25f, 0.59782609f },
        .br = { 0.35144928f, 0.59782609f }
      }
    };
    static auto idle_right = (grumble::SpriteDefinition) {
      .name = "idle_right",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.59057971f, 0.82246377f },
        .tr = { 0.69202899f, 0.82246377f },
        .bl = { 0.59057971f, 0.66304348f },
        .br = { 0.69202899f, 0.66304348f }
      }
    };
    static auto idle_up = (grumble::SpriteDefinition) {
      .name = "idle_up",
      .atlas = "main",
      .size = { 32, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.12681159f, 0.75724638f },
        .tr = { 0.24275362f, 0.75724638f },
        .bl = { 0.12681159f, 0.59782609f },
        .br = { 0.24275362f, 0.59782609f }
      }
    };
    static auto phone_1 = (grumble::SpriteDefinition) {
      .name = "phone_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.12681159f, 0.59057971f },
        .tr = { 0.23550725f, 0.59057971f },
        .bl = { 0.12681159f, 0.43115942f },
        .br = { 0.23550725f, 0.43115942f }
      }
    };
    static auto phone_2 = (grumble::SpriteDefinition) {
      .name = "phone_2",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.59782609f, 0.99637681f },
        .tr = { 0.70652174f, 0.99637681f },
        .bl = { 0.59782609f, 0.83695652f },
        .br = { 0.70652174f, 0.83695652f }
      }
    };
    static auto phone_3 = (grumble::SpriteDefinition) {
      .name = "phone_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.00362319f, 0.24275362f },
        .tr = { 0.11231884f, 0.24275362f },
        .bl = { 0.00362319f, 0.08333333f },
        .br = { 0.11231884f, 0.08333333f }
      }
    };
    static auto phone_4 = (grumble::SpriteDefinition) {
      .name = "phone_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.71376812f, 0.99637681f },
        .tr = { 0.82246377f, 0.99637681f },
        .bl = { 0.71376812f, 0.83695652f },
        .br = { 0.82246377f, 0.83695652f }
      }
    };
    static auto phone_5 = (grumble::SpriteDefinition) {
      .name = "phone_5",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.71376812f, 0.99637681f },
        .tr = { 0.82246377f, 0.99637681f },
        .bl = { 0.71376812f, 0.83695652f },
        .br = { 0.82246377f, 0.83695652f }
      }
    };
    static auto phone_6 = (grumble::SpriteDefinition) {
      .name = "phone_6",
      .atlas = "main",
      .size = { 30, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.48188406f, 0.99637681f },
        .tr = { 0.59057971f, 0.99637681f },
        .bl = { 0.48188406f, 0.82971014f },
        .br = { 0.59057971f, 0.82971014f }
      }
    };
    static auto phone_7 = (grumble::SpriteDefinition) {
      .name = "phone_7",
      .atlas = "main",
      .size = { 30, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.00362319f, 0.41666667f },
        .tr = { 0.11231884f, 0.41666667f },
        .bl = { 0.00362319f, 0.25f },
        .br = { 0.11231884f, 0.25f }
      }
    };
    static auto phone_8 = (grumble::SpriteDefinition) {
      .name = "phone_8",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.82971014f, 0.99637681f },
        .tr = { 0.9384058f, 0.99637681f },
        .bl = { 0.82971014f, 0.83695652f },
        .br = { 0.9384058f, 0.83695652f }
      }
    };
    static auto phone_9 = (grumble::SpriteDefinition) {
      .name = "phone_9",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35869565f, 0.82246377f },
        .tr = { 0.4673913f, 0.82246377f },
        .bl = { 0.35869565f, 0.66304348f },
        .br = { 0.4673913f, 0.66304348f }
      }
    };
    static auto sit_left_1 = (grumble::SpriteDefinition) {
      .name = "sit_left_1",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.33695652f, 0.1557971f },
        .tr = { 0.4384058f, 0.1557971f },
        .bl = { 0.33695652f, 0.00362319f },
        .br = { 0.4384058f, 0.00362319f }
      }
    };
    static auto sit_left_2 = (grumble::SpriteDefinition) {
      .name = "sit_left_2",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.33695652f, 0.1557971f },
        .tr = { 0.4384058f, 0.1557971f },
        .bl = { 0.33695652f, 0.00362319f },
        .br = { 0.4384058f, 0.00362319f }
      }
    };
    static auto sit_left_3 = (grumble::SpriteDefinition) {
      .name = "sit_left_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.59057971f, 0.6557971f },
        .tr = { 0.69202899f, 0.6557971f },
        .bl = { 0.59057971f, 0.49637681f },
        .br = { 0.69202899f, 0.49637681f }
      }
    };
    static auto sit_left_4 = (grumble::SpriteDefinition) {
      .name = "sit_left_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.59057971f, 0.48913043f },
        .tr = { 0.69202899f, 0.48913043f },
        .bl = { 0.59057971f, 0.32971014f },
        .br = { 0.69202899f, 0.32971014f }
      }
    };
    static auto sit_left_5 = (grumble::SpriteDefinition) {
      .name = "sit_left_5",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.44565217f, 0.1557971f },
        .tr = { 0.54710145f, 0.1557971f },
        .bl = { 0.44565217f, 0.00362319f },
        .br = { 0.54710145f, 0.00362319f }
      }
    };
    static auto sit_left_6 = (grumble::SpriteDefinition) {
      .name = "sit_left_6",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.55434783f, 0.1557971f },
        .tr = { 0.6557971f, 0.1557971f },
        .bl = { 0.55434783f, 0.00362319f },
        .br = { 0.6557971f, 0.00362319f }
      }
    };
    static auto sit_right_1 = (grumble::SpriteDefinition) {
      .name = "sit_right_1",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.66304348f, 0.1557971f },
        .tr = { 0.76449275f, 0.1557971f },
        .bl = { 0.66304348f, 0.00362319f },
        .br = { 0.76449275f, 0.00362319f }
      }
    };
    static auto sit_right_2 = (grumble::SpriteDefinition) {
      .name = "sit_right_2",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.66304348f, 0.1557971f },
        .tr = { 0.76449275f, 0.1557971f },
        .bl = { 0.66304348f, 0.00362319f },
        .br = { 0.76449275f, 0.00362319f }
      }
    };
    static auto sit_right_3 = (grumble::SpriteDefinition) {
      .name = "sit_right_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.81521739f, 0.66304348f },
        .tr = { 0.91666667f, 0.66304348f },
        .bl = { 0.81521739f, 0.50362319f },
        .br = { 0.91666667f, 0.50362319f }
      }
    };
    static auto sit_right_4 = (grumble::SpriteDefinition) {
      .name = "sit_right_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.81521739f, 0.49637681f },
        .tr = { 0.91666667f, 0.49637681f },
        .bl = { 0.81521739f, 0.33695652f },
        .br = { 0.91666667f, 0.33695652f }
      }
    };
    static auto sit_right_5 = (grumble::SpriteDefinition) {
      .name = "sit_right_5",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.88043478f, 0.32971014f },
        .tr = { 0.98188406f, 0.32971014f },
        .bl = { 0.88043478f, 0.17753623f },
        .br = { 0.98188406f, 0.17753623f }
      }
    };
    static auto sit_right_6 = (grumble::SpriteDefinition) {
      .name = "sit_right_6",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.88043478f, 0.17028986f },
        .tr = { 0.98188406f, 0.17028986f },
        .bl = { 0.88043478f, 0.01811594f },
        .br = { 0.98188406f, 0.01811594f }
      }
    };
    static auto walk_down_1 = (grumble::SpriteDefinition) {
      .name = "walk_down_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.24275362f, 0.59057971f },
        .tr = { 0.35144928f, 0.59057971f },
        .bl = { 0.24275362f, 0.43115942f },
        .br = { 0.35144928f, 0.43115942f }
      }
    };
    static auto walk_down_2 = (grumble::SpriteDefinition) {
      .name = "walk_down_2",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35869565f, 0.6557971f },
        .tr = { 0.4673913f, 0.6557971f },
        .bl = { 0.35869565f, 0.49637681f },
        .br = { 0.4673913f, 0.49637681f }
      }
    };
    static auto walk_down_3 = (grumble::SpriteDefinition) {
      .name = "walk_down_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.47463768f, 0.82246377f },
        .tr = { 0.58333333f, 0.82246377f },
        .bl = { 0.47463768f, 0.66304348f },
        .br = { 0.58333333f, 0.66304348f }
      }
    };
    static auto walk_down_4 = (grumble::SpriteDefinition) {
      .name = "walk_down_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.47463768f, 0.6557971f },
        .tr = { 0.58333333f, 0.6557971f },
        .bl = { 0.47463768f, 0.49637681f },
        .br = { 0.58333333f, 0.49637681f }
      }
    };
    static auto walk_down_5 = (grumble::SpriteDefinition) {
      .name = "walk_down_5",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35869565f, 0.48913043f },
        .tr = { 0.4673913f, 0.48913043f },
        .bl = { 0.35869565f, 0.32971014f },
        .br = { 0.4673913f, 0.32971014f }
      }
    };
    static auto walk_down_6 = (grumble::SpriteDefinition) {
      .name = "walk_down_6",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.47463768f, 0.48913043f },
        .tr = { 0.58333333f, 0.48913043f },
        .bl = { 0.47463768f, 0.32971014f },
        .br = { 0.58333333f, 0.32971014f }
      }
    };
    static auto walk_left_1 = (grumble::SpriteDefinition) {
      .name = "walk_left_1",
      .atlas = "main",
      .size = { 26, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.11956522f, 0.41666667f },
        .tr = { 0.21376812f, 0.41666667f },
        .bl = { 0.11956522f, 0.25724638f },
        .br = { 0.21376812f, 0.25724638f }
      }
    };
    static auto walk_left_2 = (grumble::SpriteDefinition) {
      .name = "walk_left_2",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.11956522f, 0.25f },
        .tr = { 0.22101449f, 0.25f },
        .bl = { 0.11956522f, 0.09057971f },
        .br = { 0.22101449f, 0.09057971f }
      }
    };
    static auto walk_left_3 = (grumble::SpriteDefinition) {
      .name = "walk_left_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.22101449f, 0.42391304f },
        .tr = { 0.32246377f, 0.42391304f },
        .bl = { 0.22101449f, 0.26449275f },
        .br = { 0.32246377f, 0.26449275f }
      }
    };
    static auto walk_left_4 = (grumble::SpriteDefinition) {
      .name = "walk_left_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.22826087f, 0.25724638f },
        .tr = { 0.32971014f, 0.25724638f },
        .bl = { 0.22826087f, 0.09782609f },
        .br = { 0.32971014f, 0.09782609f }
      }
    };
    static auto walk_left_5 = (grumble::SpriteDefinition) {
      .name = "walk_left_5",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.33695652f, 0.32246377f },
        .tr = { 0.4384058f, 0.32246377f },
        .bl = { 0.33695652f, 0.16304348f },
        .br = { 0.4384058f, 0.16304348f }
      }
    };
    static auto walk_left_6 = (grumble::SpriteDefinition) {
      .name = "walk_left_6",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.25f, 0.75724638f },
        .tr = { 0.35144928f, 0.75724638f },
        .bl = { 0.25f, 0.59782609f },
        .br = { 0.35144928f, 0.59782609f }
      }
    };
    static auto walk_right_1 = (grumble::SpriteDefinition) {
      .name = "walk_right_1",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.44565217f, 0.32246377f },
        .tr = { 0.54710145f, 0.32246377f },
        .bl = { 0.44565217f, 0.16304348f },
        .br = { 0.54710145f, 0.16304348f }
      }
    };
    static auto walk_right_2 = (grumble::SpriteDefinition) {
      .name = "walk_right_2",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.55434783f, 0.32246377f },
        .tr = { 0.6557971f, 0.32246377f },
        .bl = { 0.55434783f, 0.16304348f },
        .br = { 0.6557971f, 0.16304348f }
      }
    };
    static auto walk_right_3 = (grumble::SpriteDefinition) {
      .name = "walk_right_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.59057971f, 0.82246377f },
        .tr = { 0.69202899f, 0.82246377f },
        .bl = { 0.59057971f, 0.66304348f },
        .br = { 0.69202899f, 0.66304348f }
      }
    };
    static auto walk_right_4 = (grumble::SpriteDefinition) {
      .name = "walk_right_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.66304348f, 0.32246377f },
        .tr = { 0.76449275f, 0.32246377f },
        .bl = { 0.66304348f, 0.16304348f },
        .br = { 0.76449275f, 0.16304348f }
      }
    };
    static auto walk_right_5 = (grumble::SpriteDefinition) {
      .name = "walk_right_5",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.77173913f, 0.32971014f },
        .tr = { 0.87318841f, 0.32971014f },
        .bl = { 0.77173913f, 0.17028986f },
        .br = { 0.87318841f, 0.17028986f }
      }
    };
    static auto walk_right_6 = (grumble::SpriteDefinition) {
      .name = "walk_right_6",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.77173913f, 0.16304348f },
        .tr = { 0.87318841f, 0.16304348f },
        .bl = { 0.77173913f, 0.00362319f },
        .br = { 0.87318841f, 0.00362319f }
      }
    };
    static auto walk_up_1 = (grumble::SpriteDefinition) {
      .name = "walk_up_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.69927536f, 0.82971014f },
        .tr = { 0.80797101f, 0.82971014f },
        .bl = { 0.69927536f, 0.67028986f },
        .br = { 0.80797101f, 0.67028986f }
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
        .tl = { 0.69927536f, 0.66304348f },
        .tr = { 0.80797101f, 0.66304348f },
        .bl = { 0.69927536f, 0.50362319f },
        .br = { 0.80797101f, 0.50362319f }
      }
    };
    static auto walk_up_4 = (grumble::SpriteDefinition) {
      .name = "walk_up_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.81521739f, 0.82971014f },
        .tr = { 0.92391304f, 0.82971014f },
        .bl = { 0.81521739f, 0.67028986f },
        .br = { 0.92391304f, 0.67028986f }
      }
    };
    static auto walk_up_5 = (grumble::SpriteDefinition) {
      .name = "walk_up_5",
      .atlas = "main",
      .size = { 32, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35869565f, 0.99637681f },
        .tr = { 0.47463768f, 0.99637681f },
        .bl = { 0.35869565f, 0.82971014f },
        .br = { 0.47463768f, 0.82971014f }
      }
    };
    static auto walk_up_6 = (grumble::SpriteDefinition) {
      .name = "walk_up_6",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.69927536f, 0.49637681f },
        .tr = { 0.80797101f, 0.49637681f },
        .bl = { 0.69927536f, 0.33695652f },
        .br = { 0.80797101f, 0.33695652f }
      }
    };
  }
}
// clang-format on
