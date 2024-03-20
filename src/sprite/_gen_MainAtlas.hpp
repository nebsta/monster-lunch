// clang-format off
#pragma once

#include <grumble/sprite/SpriteDefinition.hpp>

namespace atlas {
  namespace main {
    static std::string_view name = "main";
    
    static auto idle_down = (grumble::SpriteDefinition) {
      .name = "idle_down",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.49f, 1.0f },
        .tr = { 0.61f, 1.0f },
        .bl = { 0.49f, 0.83f },
        .br = { 0.61f, 0.83f }
      }
    };
    static auto idle_left = (grumble::SpriteDefinition) {
      .name = "idle_left",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.24f, 0.49f },
        .tr = { 0.34f, 0.49f },
        .bl = { 0.24f, 0.33f },
        .br = { 0.34f, 0.33f }
      }
    };
    static auto idle_right = (grumble::SpriteDefinition) {
      .name = "idle_right",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.48f },
        .tr = { 0.11f, 0.48f },
        .bl = { 0.0f, 0.32f },
        .br = { 0.11f, 0.32f }
      }
    };
    static auto idle_up = (grumble::SpriteDefinition) {
      .name = "idle_up",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.49f, 0.83f },
        .tr = { 0.61f, 0.83f },
        .bl = { 0.49f, 0.67f },
        .br = { 0.61f, 0.67f }
      }
    };
    static auto phone_1 = (grumble::SpriteDefinition) {
      .name = "phone_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.82f },
        .tr = { 0.11f, 0.82f },
        .bl = { 0.0f, 0.66f },
        .br = { 0.11f, 0.66f }
      }
    };
    static auto phone_2 = (grumble::SpriteDefinition) {
      .name = "phone_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.12f, 0.82f },
        .tr = { 0.23f, 0.82f },
        .bl = { 0.12f, 0.66f },
        .br = { 0.23f, 0.66f }
      }
    };
    static auto phone_3 = (grumble::SpriteDefinition) {
      .name = "phone_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.24f, 0.66f },
        .tr = { 0.35f, 0.66f },
        .bl = { 0.24f, 0.5f },
        .br = { 0.35f, 0.5f }
      }
    };
    static auto phone_4 = (grumble::SpriteDefinition) {
      .name = "phone_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.65f },
        .tr = { 0.11f, 0.65f },
        .bl = { 0.0f, 0.49f },
        .br = { 0.11f, 0.49f }
      }
    };
    static auto phone_5 = (grumble::SpriteDefinition) {
      .name = "phone_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.65f },
        .tr = { 0.11f, 0.65f },
        .bl = { 0.0f, 0.49f },
        .br = { 0.11f, 0.49f }
      }
    };
    static auto phone_6 = (grumble::SpriteDefinition) {
      .name = "phone_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.25f, 1.0f },
        .tr = { 0.36f, 1.0f },
        .bl = { 0.25f, 0.83f },
        .br = { 0.36f, 0.83f }
      }
    };
    static auto phone_7 = (grumble::SpriteDefinition) {
      .name = "phone_7",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.37f, 1.0f },
        .tr = { 0.48f, 1.0f },
        .bl = { 0.37f, 0.83f },
        .br = { 0.48f, 0.83f }
      }
    };
    static auto phone_8 = (grumble::SpriteDefinition) {
      .name = "phone_8",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.12f, 0.65f },
        .tr = { 0.23f, 0.65f },
        .bl = { 0.12f, 0.49f },
        .br = { 0.23f, 0.49f }
      }
    };
    static auto phone_9 = (grumble::SpriteDefinition) {
      .name = "phone_9",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.36f, 0.66f },
        .tr = { 0.47f, 0.66f },
        .bl = { 0.36f, 0.5f },
        .br = { 0.47f, 0.5f }
      }
    };
    static auto sit_left_1 = (grumble::SpriteDefinition) {
      .name = "sit_left_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.24f, 0.82f },
        .tr = { 0.34f, 0.82f },
        .bl = { 0.24f, 0.67f },
        .br = { 0.34f, 0.67f }
      }
    };
    static auto sit_left_2 = (grumble::SpriteDefinition) {
      .name = "sit_left_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.24f, 0.82f },
        .tr = { 0.34f, 0.82f },
        .bl = { 0.24f, 0.67f },
        .br = { 0.34f, 0.67f }
      }
    };
    static auto sit_left_3 = (grumble::SpriteDefinition) {
      .name = "sit_left_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.11f, 0.48f },
        .tr = { 0.22f, 0.48f },
        .bl = { 0.11f, 0.32f },
        .br = { 0.22f, 0.32f }
      }
    };
    static auto sit_left_4 = (grumble::SpriteDefinition) {
      .name = "sit_left_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35f, 0.49f },
        .tr = { 0.45f, 0.49f },
        .bl = { 0.35f, 0.33f },
        .br = { 0.45f, 0.33f }
      }
    };
    static auto sit_left_5 = (grumble::SpriteDefinition) {
      .name = "sit_left_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35f, 0.82f },
        .tr = { 0.45f, 0.82f },
        .bl = { 0.35f, 0.67f },
        .br = { 0.45f, 0.67f }
      }
    };
    static auto sit_left_6 = (grumble::SpriteDefinition) {
      .name = "sit_left_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.78f, 0.32f },
        .tr = { 0.88f, 0.32f },
        .bl = { 0.78f, 0.17f },
        .br = { 0.88f, 0.17f }
      }
    };
    static auto sit_right_1 = (grumble::SpriteDefinition) {
      .name = "sit_right_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.78f, 0.16f },
        .tr = { 0.88f, 0.16f },
        .bl = { 0.78f, 0.0f },
        .br = { 0.88f, 0.0f }
      }
    };
    static auto sit_right_2 = (grumble::SpriteDefinition) {
      .name = "sit_right_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.78f, 0.16f },
        .tr = { 0.88f, 0.16f },
        .bl = { 0.78f, 0.0f },
        .br = { 0.88f, 0.0f }
      }
    };
    static auto sit_right_3 = (grumble::SpriteDefinition) {
      .name = "sit_right_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.46f, 0.49f },
        .tr = { 0.56f, 0.49f },
        .bl = { 0.46f, 0.33f },
        .br = { 0.56f, 0.33f }
      }
    };
    static auto sit_right_4 = (grumble::SpriteDefinition) {
      .name = "sit_right_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.57f, 0.49f },
        .tr = { 0.67f, 0.49f },
        .bl = { 0.57f, 0.33f },
        .br = { 0.67f, 0.33f }
      }
    };
    static auto sit_right_5 = (grumble::SpriteDefinition) {
      .name = "sit_right_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.89f, 0.32f },
        .tr = { 0.99f, 0.32f },
        .bl = { 0.89f, 0.17f },
        .br = { 0.99f, 0.17f }
      }
    };
    static auto sit_right_6 = (grumble::SpriteDefinition) {
      .name = "sit_right_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.89f, 0.16f },
        .tr = { 0.99f, 0.16f },
        .bl = { 0.89f, 0.0f },
        .br = { 0.99f, 0.0f }
      }
    };
    static auto walk_down_1 = (grumble::SpriteDefinition) {
      .name = "walk_down_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.47f, 0.66f },
        .tr = { 0.58f, 0.66f },
        .bl = { 0.47f, 0.5f },
        .br = { 0.58f, 0.5f }
      }
    };
    static auto walk_down_2 = (grumble::SpriteDefinition) {
      .name = "walk_down_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.59f, 0.66f },
        .tr = { 0.7f, 0.66f },
        .bl = { 0.59f, 0.5f },
        .br = { 0.7f, 0.5f }
      }
    };
    static auto walk_down_3 = (grumble::SpriteDefinition) {
      .name = "walk_down_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.61f, 1.0f },
        .tr = { 0.72f, 1.0f },
        .bl = { 0.61f, 0.83f },
        .br = { 0.72f, 0.83f }
      }
    };
    static auto walk_down_4 = (grumble::SpriteDefinition) {
      .name = "walk_down_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.61f, 0.83f },
        .tr = { 0.72f, 0.83f },
        .bl = { 0.61f, 0.67f },
        .br = { 0.72f, 0.67f }
      }
    };
    static auto walk_down_5 = (grumble::SpriteDefinition) {
      .name = "walk_down_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.71f, 0.66f },
        .tr = { 0.82f, 0.66f },
        .bl = { 0.71f, 0.5f },
        .br = { 0.82f, 0.5f }
      }
    };
    static auto walk_down_6 = (grumble::SpriteDefinition) {
      .name = "walk_down_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.73f, 1.0f },
        .tr = { 0.84f, 1.0f },
        .bl = { 0.73f, 0.83f },
        .br = { 0.84f, 0.83f }
      }
    };
    static auto walk_left_1 = (grumble::SpriteDefinition) {
      .name = "walk_left_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.9f, 0.49f },
        .tr = { 1.0f, 0.49f },
        .bl = { 0.9f, 0.33f },
        .br = { 1.0f, 0.33f }
      }
    };
    static auto walk_left_2 = (grumble::SpriteDefinition) {
      .name = "walk_left_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.68f, 0.49f },
        .tr = { 0.78f, 0.49f },
        .bl = { 0.68f, 0.33f },
        .br = { 0.78f, 0.33f }
      }
    };
    static auto walk_left_3 = (grumble::SpriteDefinition) {
      .name = "walk_left_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.79f, 0.49f },
        .tr = { 0.89f, 0.49f },
        .bl = { 0.79f, 0.33f },
        .br = { 0.89f, 0.33f }
      }
    };
    static auto walk_left_4 = (grumble::SpriteDefinition) {
      .name = "walk_left_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.22f, 0.32f },
        .tr = { 0.33f, 0.32f },
        .bl = { 0.22f, 0.16f },
        .br = { 0.33f, 0.16f }
      }
    };
    static auto walk_left_5 = (grumble::SpriteDefinition) {
      .name = "walk_left_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.31f },
        .tr = { 0.11f, 0.31f },
        .bl = { 0.0f, 0.15f },
        .br = { 0.11f, 0.15f }
      }
    };
    static auto walk_left_6 = (grumble::SpriteDefinition) {
      .name = "walk_left_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.24f, 0.49f },
        .tr = { 0.34f, 0.49f },
        .bl = { 0.24f, 0.33f },
        .br = { 0.34f, 0.33f }
      }
    };
    static auto walk_right_1 = (grumble::SpriteDefinition) {
      .name = "walk_right_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.11f, 0.31f },
        .tr = { 0.22f, 0.31f },
        .bl = { 0.11f, 0.15f },
        .br = { 0.22f, 0.15f }
      }
    };
    static auto walk_right_2 = (grumble::SpriteDefinition) {
      .name = "walk_right_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.33f, 0.32f },
        .tr = { 0.44f, 0.32f },
        .bl = { 0.33f, 0.16f },
        .br = { 0.44f, 0.16f }
      }
    };
    static auto walk_right_3 = (grumble::SpriteDefinition) {
      .name = "walk_right_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.48f },
        .tr = { 0.11f, 0.48f },
        .bl = { 0.0f, 0.32f },
        .br = { 0.11f, 0.32f }
      }
    };
    static auto walk_right_4 = (grumble::SpriteDefinition) {
      .name = "walk_right_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.44f, 0.32f },
        .tr = { 0.55f, 0.32f },
        .bl = { 0.44f, 0.16f },
        .br = { 0.55f, 0.16f }
      }
    };
    static auto walk_right_5 = (grumble::SpriteDefinition) {
      .name = "walk_right_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.56f, 0.32f },
        .tr = { 0.66f, 0.32f },
        .bl = { 0.56f, 0.16f },
        .br = { 0.66f, 0.16f }
      }
    };
    static auto walk_right_6 = (grumble::SpriteDefinition) {
      .name = "walk_right_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.67f, 0.32f },
        .tr = { 0.77f, 0.32f },
        .bl = { 0.67f, 0.16f },
        .br = { 0.77f, 0.16f }
      }
    };
    static auto walk_up_1 = (grumble::SpriteDefinition) {
      .name = "walk_up_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.73f, 0.83f },
        .tr = { 0.84f, 0.83f },
        .bl = { 0.73f, 0.67f },
        .br = { 0.84f, 0.67f }
      }
    };
    static auto walk_up_2 = (grumble::SpriteDefinition) {
      .name = "walk_up_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 1.0f },
        .tr = { 0.12f, 1.0f },
        .bl = { 0.0f, 0.83f },
        .br = { 0.12f, 0.83f }
      }
    };
    static auto walk_up_3 = (grumble::SpriteDefinition) {
      .name = "walk_up_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.83f, 0.66f },
        .tr = { 0.94f, 0.66f },
        .bl = { 0.83f, 0.5f },
        .br = { 0.94f, 0.5f }
      }
    };
    static auto walk_up_4 = (grumble::SpriteDefinition) {
      .name = "walk_up_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.85f, 1.0f },
        .tr = { 0.96f, 1.0f },
        .bl = { 0.85f, 0.83f },
        .br = { 0.96f, 0.83f }
      }
    };
    static auto walk_up_5 = (grumble::SpriteDefinition) {
      .name = "walk_up_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.13f, 1.0f },
        .tr = { 0.25f, 1.0f },
        .bl = { 0.13f, 0.83f },
        .br = { 0.25f, 0.83f }
      }
    };
    static auto walk_up_6 = (grumble::SpriteDefinition) {
      .name = "walk_up_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.85f, 0.83f },
        .tr = { 0.96f, 0.83f },
        .bl = { 0.85f, 0.67f },
        .br = { 0.96f, 0.67f }
      }
    };
  }
}
// clang-format on