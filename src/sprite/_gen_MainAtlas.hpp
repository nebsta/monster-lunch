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
        .tl = { 133.0f, 1.0f },
        .tr = { 165.0f, 1.0f },
        .bl = { 133.0f, 45.0f },
        .br = { 165.0f, 45.0f }
      }
    };
    static auto idle_left = (grumble::SpriteDefinition) {
      .name = "idle_left",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 65.0f, 139.0f },
        .tr = { 93.0f, 139.0f },
        .bl = { 65.0f, 183.0f },
        .br = { 93.0f, 183.0f }
      }
    };
    static auto idle_right = (grumble::SpriteDefinition) {
      .name = "idle_right",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 1.0f, 141.0f },
        .tr = { 29.0f, 141.0f },
        .bl = { 1.0f, 185.0f },
        .br = { 29.0f, 185.0f }
      }
    };
    static auto idle_up = (grumble::SpriteDefinition) {
      .name = "idle_up",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 133.0f, 47.0f },
        .tr = { 165.0f, 47.0f },
        .bl = { 133.0f, 91.0f },
        .br = { 165.0f, 91.0f }
      }
    };
    static auto phone_1 = (grumble::SpriteDefinition) {
      .name = "phone_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 1.0f, 49.0f },
        .tr = { 31.0f, 49.0f },
        .bl = { 1.0f, 93.0f },
        .br = { 31.0f, 93.0f }
      }
    };
    static auto phone_2 = (grumble::SpriteDefinition) {
      .name = "phone_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 33.0f, 49.0f },
        .tr = { 63.0f, 49.0f },
        .bl = { 33.0f, 93.0f },
        .br = { 63.0f, 93.0f }
      }
    };
    static auto phone_3 = (grumble::SpriteDefinition) {
      .name = "phone_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 65.0f, 93.0f },
        .tr = { 95.0f, 93.0f },
        .bl = { 65.0f, 137.0f },
        .br = { 95.0f, 137.0f }
      }
    };
    static auto phone_4 = (grumble::SpriteDefinition) {
      .name = "phone_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 1.0f, 95.0f },
        .tr = { 31.0f, 95.0f },
        .bl = { 1.0f, 139.0f },
        .br = { 31.0f, 139.0f }
      }
    };
    static auto phone_5 = (grumble::SpriteDefinition) {
      .name = "phone_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 1.0f, 95.0f },
        .tr = { 31.0f, 95.0f },
        .bl = { 1.0f, 139.0f },
        .br = { 31.0f, 139.0f }
      }
    };
    static auto phone_6 = (grumble::SpriteDefinition) {
      .name = "phone_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 69.0f, 1.0f },
        .tr = { 99.0f, 1.0f },
        .bl = { 69.0f, 47.0f },
        .br = { 99.0f, 47.0f }
      }
    };
    static auto phone_7 = (grumble::SpriteDefinition) {
      .name = "phone_7",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 101.0f, 1.0f },
        .tr = { 131.0f, 1.0f },
        .bl = { 101.0f, 47.0f },
        .br = { 131.0f, 47.0f }
      }
    };
    static auto phone_8 = (grumble::SpriteDefinition) {
      .name = "phone_8",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 33.0f, 95.0f },
        .tr = { 63.0f, 95.0f },
        .bl = { 33.0f, 139.0f },
        .br = { 63.0f, 139.0f }
      }
    };
    static auto phone_9 = (grumble::SpriteDefinition) {
      .name = "phone_9",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 97.0f, 93.0f },
        .tr = { 127.0f, 93.0f },
        .bl = { 97.0f, 137.0f },
        .br = { 127.0f, 137.0f }
      }
    };
    static auto sit_left_1 = (grumble::SpriteDefinition) {
      .name = "sit_left_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 65.0f, 49.0f },
        .tr = { 93.0f, 49.0f },
        .bl = { 65.0f, 91.0f },
        .br = { 93.0f, 91.0f }
      }
    };
    static auto sit_left_2 = (grumble::SpriteDefinition) {
      .name = "sit_left_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 65.0f, 49.0f },
        .tr = { 93.0f, 49.0f },
        .bl = { 65.0f, 91.0f },
        .br = { 93.0f, 91.0f }
      }
    };
    static auto sit_left_3 = (grumble::SpriteDefinition) {
      .name = "sit_left_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 31.0f, 141.0f },
        .tr = { 59.0f, 141.0f },
        .bl = { 31.0f, 185.0f },
        .br = { 59.0f, 185.0f }
      }
    };
    static auto sit_left_4 = (grumble::SpriteDefinition) {
      .name = "sit_left_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 95.0f, 139.0f },
        .tr = { 123.0f, 139.0f },
        .bl = { 95.0f, 183.0f },
        .br = { 123.0f, 183.0f }
      }
    };
    static auto sit_left_5 = (grumble::SpriteDefinition) {
      .name = "sit_left_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 95.0f, 49.0f },
        .tr = { 123.0f, 49.0f },
        .bl = { 95.0f, 91.0f },
        .br = { 123.0f, 91.0f }
      }
    };
    static auto sit_left_6 = (grumble::SpriteDefinition) {
      .name = "sit_left_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 211.0f, 185.0f },
        .tr = { 239.0f, 185.0f },
        .bl = { 211.0f, 227.0f },
        .br = { 239.0f, 227.0f }
      }
    };
    static auto sit_right_1 = (grumble::SpriteDefinition) {
      .name = "sit_right_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 211.0f, 229.0f },
        .tr = { 239.0f, 229.0f },
        .bl = { 211.0f, 271.0f },
        .br = { 239.0f, 271.0f }
      }
    };
    static auto sit_right_2 = (grumble::SpriteDefinition) {
      .name = "sit_right_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 211.0f, 229.0f },
        .tr = { 239.0f, 229.0f },
        .bl = { 211.0f, 271.0f },
        .br = { 239.0f, 271.0f }
      }
    };
    static auto sit_right_3 = (grumble::SpriteDefinition) {
      .name = "sit_right_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 125.0f, 139.0f },
        .tr = { 153.0f, 139.0f },
        .bl = { 125.0f, 183.0f },
        .br = { 153.0f, 183.0f }
      }
    };
    static auto sit_right_4 = (grumble::SpriteDefinition) {
      .name = "sit_right_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 155.0f, 139.0f },
        .tr = { 183.0f, 139.0f },
        .bl = { 155.0f, 183.0f },
        .br = { 183.0f, 183.0f }
      }
    };
    static auto sit_right_5 = (grumble::SpriteDefinition) {
      .name = "sit_right_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 241.0f, 185.0f },
        .tr = { 269.0f, 185.0f },
        .bl = { 241.0f, 227.0f },
        .br = { 269.0f, 227.0f }
      }
    };
    static auto sit_right_6 = (grumble::SpriteDefinition) {
      .name = "sit_right_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 241.0f, 229.0f },
        .tr = { 269.0f, 229.0f },
        .bl = { 241.0f, 271.0f },
        .br = { 269.0f, 271.0f }
      }
    };
    static auto walk_down_1 = (grumble::SpriteDefinition) {
      .name = "walk_down_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 129.0f, 93.0f },
        .tr = { 159.0f, 93.0f },
        .bl = { 129.0f, 137.0f },
        .br = { 159.0f, 137.0f }
      }
    };
    static auto walk_down_2 = (grumble::SpriteDefinition) {
      .name = "walk_down_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 161.0f, 93.0f },
        .tr = { 191.0f, 93.0f },
        .bl = { 161.0f, 137.0f },
        .br = { 191.0f, 137.0f }
      }
    };
    static auto walk_down_3 = (grumble::SpriteDefinition) {
      .name = "walk_down_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 167.0f, 1.0f },
        .tr = { 197.0f, 1.0f },
        .bl = { 167.0f, 45.0f },
        .br = { 197.0f, 45.0f }
      }
    };
    static auto walk_down_4 = (grumble::SpriteDefinition) {
      .name = "walk_down_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 167.0f, 47.0f },
        .tr = { 197.0f, 47.0f },
        .bl = { 167.0f, 91.0f },
        .br = { 197.0f, 91.0f }
      }
    };
    static auto walk_down_5 = (grumble::SpriteDefinition) {
      .name = "walk_down_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 193.0f, 93.0f },
        .tr = { 223.0f, 93.0f },
        .bl = { 193.0f, 137.0f },
        .br = { 223.0f, 137.0f }
      }
    };
    static auto walk_down_6 = (grumble::SpriteDefinition) {
      .name = "walk_down_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 199.0f, 1.0f },
        .tr = { 229.0f, 1.0f },
        .bl = { 199.0f, 45.0f },
        .br = { 229.0f, 45.0f }
      }
    };
    static auto walk_left_1 = (grumble::SpriteDefinition) {
      .name = "walk_left_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 245.0f, 139.0f },
        .tr = { 271.0f, 139.0f },
        .bl = { 245.0f, 183.0f },
        .br = { 271.0f, 183.0f }
      }
    };
    static auto walk_left_2 = (grumble::SpriteDefinition) {
      .name = "walk_left_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 185.0f, 139.0f },
        .tr = { 213.0f, 139.0f },
        .bl = { 185.0f, 183.0f },
        .br = { 213.0f, 183.0f }
      }
    };
    static auto walk_left_3 = (grumble::SpriteDefinition) {
      .name = "walk_left_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 215.0f, 139.0f },
        .tr = { 243.0f, 139.0f },
        .bl = { 215.0f, 183.0f },
        .br = { 243.0f, 183.0f }
      }
    };
    static auto walk_left_4 = (grumble::SpriteDefinition) {
      .name = "walk_left_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 61.0f, 185.0f },
        .tr = { 89.0f, 185.0f },
        .bl = { 61.0f, 229.0f },
        .br = { 89.0f, 229.0f }
      }
    };
    static auto walk_left_5 = (grumble::SpriteDefinition) {
      .name = "walk_left_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 1.0f, 187.0f },
        .tr = { 29.0f, 187.0f },
        .bl = { 1.0f, 231.0f },
        .br = { 29.0f, 231.0f }
      }
    };
    static auto walk_left_6 = (grumble::SpriteDefinition) {
      .name = "walk_left_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 65.0f, 139.0f },
        .tr = { 93.0f, 139.0f },
        .bl = { 65.0f, 183.0f },
        .br = { 93.0f, 183.0f }
      }
    };
    static auto walk_right_1 = (grumble::SpriteDefinition) {
      .name = "walk_right_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 31.0f, 187.0f },
        .tr = { 59.0f, 187.0f },
        .bl = { 31.0f, 231.0f },
        .br = { 59.0f, 231.0f }
      }
    };
    static auto walk_right_2 = (grumble::SpriteDefinition) {
      .name = "walk_right_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 91.0f, 185.0f },
        .tr = { 119.0f, 185.0f },
        .bl = { 91.0f, 229.0f },
        .br = { 119.0f, 229.0f }
      }
    };
    static auto walk_right_3 = (grumble::SpriteDefinition) {
      .name = "walk_right_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 1.0f, 141.0f },
        .tr = { 29.0f, 141.0f },
        .bl = { 1.0f, 185.0f },
        .br = { 29.0f, 185.0f }
      }
    };
    static auto walk_right_4 = (grumble::SpriteDefinition) {
      .name = "walk_right_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 121.0f, 185.0f },
        .tr = { 149.0f, 185.0f },
        .bl = { 121.0f, 229.0f },
        .br = { 149.0f, 229.0f }
      }
    };
    static auto walk_right_5 = (grumble::SpriteDefinition) {
      .name = "walk_right_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 151.0f, 185.0f },
        .tr = { 179.0f, 185.0f },
        .bl = { 151.0f, 229.0f },
        .br = { 179.0f, 229.0f }
      }
    };
    static auto walk_right_6 = (grumble::SpriteDefinition) {
      .name = "walk_right_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 181.0f, 185.0f },
        .tr = { 209.0f, 185.0f },
        .bl = { 181.0f, 229.0f },
        .br = { 209.0f, 229.0f }
      }
    };
    static auto walk_up_1 = (grumble::SpriteDefinition) {
      .name = "walk_up_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 199.0f, 47.0f },
        .tr = { 229.0f, 47.0f },
        .bl = { 199.0f, 91.0f },
        .br = { 229.0f, 91.0f }
      }
    };
    static auto walk_up_2 = (grumble::SpriteDefinition) {
      .name = "walk_up_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 1.0f, 1.0f },
        .tr = { 33.0f, 1.0f },
        .bl = { 1.0f, 47.0f },
        .br = { 33.0f, 47.0f }
      }
    };
    static auto walk_up_3 = (grumble::SpriteDefinition) {
      .name = "walk_up_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 225.0f, 93.0f },
        .tr = { 255.0f, 93.0f },
        .bl = { 225.0f, 137.0f },
        .br = { 255.0f, 137.0f }
      }
    };
    static auto walk_up_4 = (grumble::SpriteDefinition) {
      .name = "walk_up_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 231.0f, 1.0f },
        .tr = { 261.0f, 1.0f },
        .bl = { 231.0f, 45.0f },
        .br = { 261.0f, 45.0f }
      }
    };
    static auto walk_up_5 = (grumble::SpriteDefinition) {
      .name = "walk_up_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 35.0f, 1.0f },
        .tr = { 67.0f, 1.0f },
        .bl = { 35.0f, 47.0f },
        .br = { 67.0f, 47.0f }
      }
    };
    static auto walk_up_6 = (grumble::SpriteDefinition) {
      .name = "walk_up_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 231.0f, 47.0f },
        .tr = { 261.0f, 47.0f },
        .bl = { 231.0f, 91.0f },
        .br = { 261.0f, 91.0f }
      }
    };
  }
}
// clang-format on