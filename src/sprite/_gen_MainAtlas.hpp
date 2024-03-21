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
        .tl = { 0.0f, 1.0f },
        .tr = { 0.35f, 1.0f },
        .bl = { 0.0f, 0.76f },
        .br = { 0.35f, 0.76f }
      }
    };
    static auto idle_down = (grumble::SpriteDefinition) {
      .name = "idle_down",
      .atlas = "main",
      .size = { 32, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.58f },
        .tr = { 0.12f, 0.58f },
        .bl = { 0.0f, 0.42f },
        .br = { 0.12f, 0.42f }
      }
    };
    static auto idle_left = (grumble::SpriteDefinition) {
      .name = "idle_left",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.25f, 0.76f },
        .tr = { 0.35f, 0.76f },
        .bl = { 0.25f, 0.6f },
        .br = { 0.35f, 0.6f }
      }
    };
    static auto idle_right = (grumble::SpriteDefinition) {
      .name = "idle_right",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.59f, 0.82f },
        .tr = { 0.69f, 0.82f },
        .bl = { 0.59f, 0.66f },
        .br = { 0.69f, 0.66f }
      }
    };
    static auto idle_up = (grumble::SpriteDefinition) {
      .name = "idle_up",
      .atlas = "main",
      .size = { 32, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.13f, 0.76f },
        .tr = { 0.24f, 0.76f },
        .bl = { 0.13f, 0.6f },
        .br = { 0.24f, 0.6f }
      }
    };
    static auto phone_1 = (grumble::SpriteDefinition) {
      .name = "phone_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.13f, 0.59f },
        .tr = { 0.24f, 0.59f },
        .bl = { 0.13f, 0.43f },
        .br = { 0.24f, 0.43f }
      }
    };
    static auto phone_2 = (grumble::SpriteDefinition) {
      .name = "phone_2",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.6f, 1.0f },
        .tr = { 0.71f, 1.0f },
        .bl = { 0.6f, 0.84f },
        .br = { 0.71f, 0.84f }
      }
    };
    static auto phone_3 = (grumble::SpriteDefinition) {
      .name = "phone_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.24f },
        .tr = { 0.11f, 0.24f },
        .bl = { 0.0f, 0.08f },
        .br = { 0.11f, 0.08f }
      }
    };
    static auto phone_4 = (grumble::SpriteDefinition) {
      .name = "phone_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.71f, 1.0f },
        .tr = { 0.82f, 1.0f },
        .bl = { 0.71f, 0.84f },
        .br = { 0.82f, 0.84f }
      }
    };
    static auto phone_5 = (grumble::SpriteDefinition) {
      .name = "phone_5",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.71f, 1.0f },
        .tr = { 0.82f, 1.0f },
        .bl = { 0.71f, 0.84f },
        .br = { 0.82f, 0.84f }
      }
    };
    static auto phone_6 = (grumble::SpriteDefinition) {
      .name = "phone_6",
      .atlas = "main",
      .size = { 30, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.48f, 1.0f },
        .tr = { 0.59f, 1.0f },
        .bl = { 0.48f, 0.83f },
        .br = { 0.59f, 0.83f }
      }
    };
    static auto phone_7 = (grumble::SpriteDefinition) {
      .name = "phone_7",
      .atlas = "main",
      .size = { 30, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.42f },
        .tr = { 0.11f, 0.42f },
        .bl = { 0.0f, 0.25f },
        .br = { 0.11f, 0.25f }
      }
    };
    static auto phone_8 = (grumble::SpriteDefinition) {
      .name = "phone_8",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.83f, 1.0f },
        .tr = { 0.94f, 1.0f },
        .bl = { 0.83f, 0.84f },
        .br = { 0.94f, 0.84f }
      }
    };
    static auto phone_9 = (grumble::SpriteDefinition) {
      .name = "phone_9",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.36f, 0.82f },
        .tr = { 0.47f, 0.82f },
        .bl = { 0.36f, 0.66f },
        .br = { 0.47f, 0.66f }
      }
    };
    static auto sit_left_1 = (grumble::SpriteDefinition) {
      .name = "sit_left_1",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.34f, 0.16f },
        .tr = { 0.44f, 0.16f },
        .bl = { 0.34f, 0.0f },
        .br = { 0.44f, 0.0f }
      }
    };
    static auto sit_left_2 = (grumble::SpriteDefinition) {
      .name = "sit_left_2",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.34f, 0.16f },
        .tr = { 0.44f, 0.16f },
        .bl = { 0.34f, 0.0f },
        .br = { 0.44f, 0.0f }
      }
    };
    static auto sit_left_3 = (grumble::SpriteDefinition) {
      .name = "sit_left_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.59f, 0.66f },
        .tr = { 0.69f, 0.66f },
        .bl = { 0.59f, 0.5f },
        .br = { 0.69f, 0.5f }
      }
    };
    static auto sit_left_4 = (grumble::SpriteDefinition) {
      .name = "sit_left_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.59f, 0.49f },
        .tr = { 0.69f, 0.49f },
        .bl = { 0.59f, 0.33f },
        .br = { 0.69f, 0.33f }
      }
    };
    static auto sit_left_5 = (grumble::SpriteDefinition) {
      .name = "sit_left_5",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.45f, 0.16f },
        .tr = { 0.55f, 0.16f },
        .bl = { 0.45f, 0.0f },
        .br = { 0.55f, 0.0f }
      }
    };
    static auto sit_left_6 = (grumble::SpriteDefinition) {
      .name = "sit_left_6",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.55f, 0.16f },
        .tr = { 0.66f, 0.16f },
        .bl = { 0.55f, 0.0f },
        .br = { 0.66f, 0.0f }
      }
    };
    static auto sit_right_1 = (grumble::SpriteDefinition) {
      .name = "sit_right_1",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.66f, 0.16f },
        .tr = { 0.76f, 0.16f },
        .bl = { 0.66f, 0.0f },
        .br = { 0.76f, 0.0f }
      }
    };
    static auto sit_right_2 = (grumble::SpriteDefinition) {
      .name = "sit_right_2",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.66f, 0.16f },
        .tr = { 0.76f, 0.16f },
        .bl = { 0.66f, 0.0f },
        .br = { 0.76f, 0.0f }
      }
    };
    static auto sit_right_3 = (grumble::SpriteDefinition) {
      .name = "sit_right_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.82f, 0.66f },
        .tr = { 0.92f, 0.66f },
        .bl = { 0.82f, 0.5f },
        .br = { 0.92f, 0.5f }
      }
    };
    static auto sit_right_4 = (grumble::SpriteDefinition) {
      .name = "sit_right_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.82f, 0.5f },
        .tr = { 0.92f, 0.5f },
        .bl = { 0.82f, 0.34f },
        .br = { 0.92f, 0.34f }
      }
    };
    static auto sit_right_5 = (grumble::SpriteDefinition) {
      .name = "sit_right_5",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.88f, 0.33f },
        .tr = { 0.98f, 0.33f },
        .bl = { 0.88f, 0.18f },
        .br = { 0.98f, 0.18f }
      }
    };
    static auto sit_right_6 = (grumble::SpriteDefinition) {
      .name = "sit_right_6",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.88f, 0.17f },
        .tr = { 0.98f, 0.17f },
        .bl = { 0.88f, 0.02f },
        .br = { 0.98f, 0.02f }
      }
    };
    static auto walk_down_1 = (grumble::SpriteDefinition) {
      .name = "walk_down_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.24f, 0.59f },
        .tr = { 0.35f, 0.59f },
        .bl = { 0.24f, 0.43f },
        .br = { 0.35f, 0.43f }
      }
    };
    static auto walk_down_2 = (grumble::SpriteDefinition) {
      .name = "walk_down_2",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.36f, 0.66f },
        .tr = { 0.47f, 0.66f },
        .bl = { 0.36f, 0.5f },
        .br = { 0.47f, 0.5f }
      }
    };
    static auto walk_down_3 = (grumble::SpriteDefinition) {
      .name = "walk_down_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.47f, 0.82f },
        .tr = { 0.58f, 0.82f },
        .bl = { 0.47f, 0.66f },
        .br = { 0.58f, 0.66f }
      }
    };
    static auto walk_down_4 = (grumble::SpriteDefinition) {
      .name = "walk_down_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.47f, 0.66f },
        .tr = { 0.58f, 0.66f },
        .bl = { 0.47f, 0.5f },
        .br = { 0.58f, 0.5f }
      }
    };
    static auto walk_down_5 = (grumble::SpriteDefinition) {
      .name = "walk_down_5",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.36f, 0.49f },
        .tr = { 0.47f, 0.49f },
        .bl = { 0.36f, 0.33f },
        .br = { 0.47f, 0.33f }
      }
    };
    static auto walk_down_6 = (grumble::SpriteDefinition) {
      .name = "walk_down_6",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.47f, 0.49f },
        .tr = { 0.58f, 0.49f },
        .bl = { 0.47f, 0.33f },
        .br = { 0.58f, 0.33f }
      }
    };
    static auto walk_left_1 = (grumble::SpriteDefinition) {
      .name = "walk_left_1",
      .atlas = "main",
      .size = { 26, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.12f, 0.42f },
        .tr = { 0.21f, 0.42f },
        .bl = { 0.12f, 0.26f },
        .br = { 0.21f, 0.26f }
      }
    };
    static auto walk_left_2 = (grumble::SpriteDefinition) {
      .name = "walk_left_2",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.12f, 0.25f },
        .tr = { 0.22f, 0.25f },
        .bl = { 0.12f, 0.09f },
        .br = { 0.22f, 0.09f }
      }
    };
    static auto walk_left_3 = (grumble::SpriteDefinition) {
      .name = "walk_left_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.22f, 0.42f },
        .tr = { 0.32f, 0.42f },
        .bl = { 0.22f, 0.26f },
        .br = { 0.32f, 0.26f }
      }
    };
    static auto walk_left_4 = (grumble::SpriteDefinition) {
      .name = "walk_left_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.23f, 0.26f },
        .tr = { 0.33f, 0.26f },
        .bl = { 0.23f, 0.1f },
        .br = { 0.33f, 0.1f }
      }
    };
    static auto walk_left_5 = (grumble::SpriteDefinition) {
      .name = "walk_left_5",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.34f, 0.32f },
        .tr = { 0.44f, 0.32f },
        .bl = { 0.34f, 0.16f },
        .br = { 0.44f, 0.16f }
      }
    };
    static auto walk_left_6 = (grumble::SpriteDefinition) {
      .name = "walk_left_6",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.25f, 0.76f },
        .tr = { 0.35f, 0.76f },
        .bl = { 0.25f, 0.6f },
        .br = { 0.35f, 0.6f }
      }
    };
    static auto walk_right_1 = (grumble::SpriteDefinition) {
      .name = "walk_right_1",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.45f, 0.32f },
        .tr = { 0.55f, 0.32f },
        .bl = { 0.45f, 0.16f },
        .br = { 0.55f, 0.16f }
      }
    };
    static auto walk_right_2 = (grumble::SpriteDefinition) {
      .name = "walk_right_2",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.55f, 0.32f },
        .tr = { 0.66f, 0.32f },
        .bl = { 0.55f, 0.16f },
        .br = { 0.66f, 0.16f }
      }
    };
    static auto walk_right_3 = (grumble::SpriteDefinition) {
      .name = "walk_right_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.59f, 0.82f },
        .tr = { 0.69f, 0.82f },
        .bl = { 0.59f, 0.66f },
        .br = { 0.69f, 0.66f }
      }
    };
    static auto walk_right_4 = (grumble::SpriteDefinition) {
      .name = "walk_right_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.66f, 0.32f },
        .tr = { 0.76f, 0.32f },
        .bl = { 0.66f, 0.16f },
        .br = { 0.76f, 0.16f }
      }
    };
    static auto walk_right_5 = (grumble::SpriteDefinition) {
      .name = "walk_right_5",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.77f, 0.33f },
        .tr = { 0.87f, 0.33f },
        .bl = { 0.77f, 0.17f },
        .br = { 0.87f, 0.17f }
      }
    };
    static auto walk_right_6 = (grumble::SpriteDefinition) {
      .name = "walk_right_6",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.77f, 0.16f },
        .tr = { 0.87f, 0.16f },
        .bl = { 0.77f, 0.0f },
        .br = { 0.87f, 0.0f }
      }
    };
    static auto walk_up_1 = (grumble::SpriteDefinition) {
      .name = "walk_up_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7f, 0.83f },
        .tr = { 0.81f, 0.83f },
        .bl = { 0.7f, 0.67f },
        .br = { 0.81f, 0.67f }
      }
    };
    static auto walk_up_2 = (grumble::SpriteDefinition) {
      .name = "walk_up_2",
      .atlas = "main",
      .size = { 32, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.76f },
        .tr = { 0.12f, 0.76f },
        .bl = { 0.0f, 0.59f },
        .br = { 0.12f, 0.59f }
      }
    };
    static auto walk_up_3 = (grumble::SpriteDefinition) {
      .name = "walk_up_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7f, 0.66f },
        .tr = { 0.81f, 0.66f },
        .bl = { 0.7f, 0.5f },
        .br = { 0.81f, 0.5f }
      }
    };
    static auto walk_up_4 = (grumble::SpriteDefinition) {
      .name = "walk_up_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.82f, 0.83f },
        .tr = { 0.92f, 0.83f },
        .bl = { 0.82f, 0.67f },
        .br = { 0.92f, 0.67f }
      }
    };
    static auto walk_up_5 = (grumble::SpriteDefinition) {
      .name = "walk_up_5",
      .atlas = "main",
      .size = { 32, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.36f, 1.0f },
        .tr = { 0.47f, 1.0f },
        .bl = { 0.36f, 0.83f },
        .br = { 0.47f, 0.83f }
      }
    };
    static auto walk_up_6 = (grumble::SpriteDefinition) {
      .name = "walk_up_6",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7f, 0.5f },
        .tr = { 0.81f, 0.5f },
        .bl = { 0.7f, 0.34f },
        .br = { 0.81f, 0.34f }
      }
    };
  }
}
// clang-format on