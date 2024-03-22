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
        .tl = { 0.0036f, 0.9964f },
        .tr = { 0.3514f, 0.9964f },
        .bl = { 0.0036f, 0.7645f },
        .br = { 0.3514f, 0.7645f }
      }
    };
    static auto idle_down = (grumble::SpriteDefinition) {
      .name = "idle_down",
      .atlas = "main",
      .size = { 32, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0036f, 0.5833f },
        .tr = { 0.1196f, 0.5833f },
        .bl = { 0.0036f, 0.4239f },
        .br = { 0.1196f, 0.4239f }
      }
    };
    static auto idle_left = (grumble::SpriteDefinition) {
      .name = "idle_left",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.25f, 0.7572f },
        .tr = { 0.3514f, 0.7572f },
        .bl = { 0.25f, 0.5978f },
        .br = { 0.3514f, 0.5978f }
      }
    };
    static auto idle_right = (grumble::SpriteDefinition) {
      .name = "idle_right",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.5906f, 0.8225f },
        .tr = { 0.692f, 0.8225f },
        .bl = { 0.5906f, 0.663f },
        .br = { 0.692f, 0.663f }
      }
    };
    static auto idle_up = (grumble::SpriteDefinition) {
      .name = "idle_up",
      .atlas = "main",
      .size = { 32, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.1268f, 0.7572f },
        .tr = { 0.2428f, 0.7572f },
        .bl = { 0.1268f, 0.5978f },
        .br = { 0.2428f, 0.5978f }
      }
    };
    static auto phone_1 = (grumble::SpriteDefinition) {
      .name = "phone_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.1268f, 0.5906f },
        .tr = { 0.2355f, 0.5906f },
        .bl = { 0.1268f, 0.4312f },
        .br = { 0.2355f, 0.4312f }
      }
    };
    static auto phone_2 = (grumble::SpriteDefinition) {
      .name = "phone_2",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.5978f, 0.9964f },
        .tr = { 0.7065f, 0.9964f },
        .bl = { 0.5978f, 0.837f },
        .br = { 0.7065f, 0.837f }
      }
    };
    static auto phone_3 = (grumble::SpriteDefinition) {
      .name = "phone_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0036f, 0.2428f },
        .tr = { 0.1123f, 0.2428f },
        .bl = { 0.0036f, 0.0833f },
        .br = { 0.1123f, 0.0833f }
      }
    };
    static auto phone_4 = (grumble::SpriteDefinition) {
      .name = "phone_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7138f, 0.9964f },
        .tr = { 0.8225f, 0.9964f },
        .bl = { 0.7138f, 0.837f },
        .br = { 0.8225f, 0.837f }
      }
    };
    static auto phone_5 = (grumble::SpriteDefinition) {
      .name = "phone_5",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7138f, 0.9964f },
        .tr = { 0.8225f, 0.9964f },
        .bl = { 0.7138f, 0.837f },
        .br = { 0.8225f, 0.837f }
      }
    };
    static auto phone_6 = (grumble::SpriteDefinition) {
      .name = "phone_6",
      .atlas = "main",
      .size = { 30, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.4819f, 0.9964f },
        .tr = { 0.5906f, 0.9964f },
        .bl = { 0.4819f, 0.8297f },
        .br = { 0.5906f, 0.8297f }
      }
    };
    static auto phone_7 = (grumble::SpriteDefinition) {
      .name = "phone_7",
      .atlas = "main",
      .size = { 30, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0036f, 0.4167f },
        .tr = { 0.1123f, 0.4167f },
        .bl = { 0.0036f, 0.25f },
        .br = { 0.1123f, 0.25f }
      }
    };
    static auto phone_8 = (grumble::SpriteDefinition) {
      .name = "phone_8",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.8297f, 0.9964f },
        .tr = { 0.9384f, 0.9964f },
        .bl = { 0.8297f, 0.837f },
        .br = { 0.9384f, 0.837f }
      }
    };
    static auto phone_9 = (grumble::SpriteDefinition) {
      .name = "phone_9",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.3587f, 0.8225f },
        .tr = { 0.4674f, 0.8225f },
        .bl = { 0.3587f, 0.663f },
        .br = { 0.4674f, 0.663f }
      }
    };
    static auto sit_left_1 = (grumble::SpriteDefinition) {
      .name = "sit_left_1",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.337f, 0.1558f },
        .tr = { 0.4384f, 0.1558f },
        .bl = { 0.337f, 0.0036f },
        .br = { 0.4384f, 0.0036f }
      }
    };
    static auto sit_left_2 = (grumble::SpriteDefinition) {
      .name = "sit_left_2",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.337f, 0.1558f },
        .tr = { 0.4384f, 0.1558f },
        .bl = { 0.337f, 0.0036f },
        .br = { 0.4384f, 0.0036f }
      }
    };
    static auto sit_left_3 = (grumble::SpriteDefinition) {
      .name = "sit_left_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.5906f, 0.6558f },
        .tr = { 0.692f, 0.6558f },
        .bl = { 0.5906f, 0.4964f },
        .br = { 0.692f, 0.4964f }
      }
    };
    static auto sit_left_4 = (grumble::SpriteDefinition) {
      .name = "sit_left_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.5906f, 0.4891f },
        .tr = { 0.692f, 0.4891f },
        .bl = { 0.5906f, 0.3297f },
        .br = { 0.692f, 0.3297f }
      }
    };
    static auto sit_left_5 = (grumble::SpriteDefinition) {
      .name = "sit_left_5",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.4457f, 0.1558f },
        .tr = { 0.5471f, 0.1558f },
        .bl = { 0.4457f, 0.0036f },
        .br = { 0.5471f, 0.0036f }
      }
    };
    static auto sit_left_6 = (grumble::SpriteDefinition) {
      .name = "sit_left_6",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.5543f, 0.1558f },
        .tr = { 0.6558f, 0.1558f },
        .bl = { 0.5543f, 0.0036f },
        .br = { 0.6558f, 0.0036f }
      }
    };
    static auto sit_right_1 = (grumble::SpriteDefinition) {
      .name = "sit_right_1",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.663f, 0.1558f },
        .tr = { 0.7645f, 0.1558f },
        .bl = { 0.663f, 0.0036f },
        .br = { 0.7645f, 0.0036f }
      }
    };
    static auto sit_right_2 = (grumble::SpriteDefinition) {
      .name = "sit_right_2",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.663f, 0.1558f },
        .tr = { 0.7645f, 0.1558f },
        .bl = { 0.663f, 0.0036f },
        .br = { 0.7645f, 0.0036f }
      }
    };
    static auto sit_right_3 = (grumble::SpriteDefinition) {
      .name = "sit_right_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.8152f, 0.663f },
        .tr = { 0.9167f, 0.663f },
        .bl = { 0.8152f, 0.5036f },
        .br = { 0.9167f, 0.5036f }
      }
    };
    static auto sit_right_4 = (grumble::SpriteDefinition) {
      .name = "sit_right_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.8152f, 0.4964f },
        .tr = { 0.9167f, 0.4964f },
        .bl = { 0.8152f, 0.337f },
        .br = { 0.9167f, 0.337f }
      }
    };
    static auto sit_right_5 = (grumble::SpriteDefinition) {
      .name = "sit_right_5",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.8804f, 0.3297f },
        .tr = { 0.9819f, 0.3297f },
        .bl = { 0.8804f, 0.1775f },
        .br = { 0.9819f, 0.1775f }
      }
    };
    static auto sit_right_6 = (grumble::SpriteDefinition) {
      .name = "sit_right_6",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.8804f, 0.1703f },
        .tr = { 0.9819f, 0.1703f },
        .bl = { 0.8804f, 0.0181f },
        .br = { 0.9819f, 0.0181f }
      }
    };
    static auto walk_down_1 = (grumble::SpriteDefinition) {
      .name = "walk_down_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.2428f, 0.5906f },
        .tr = { 0.3514f, 0.5906f },
        .bl = { 0.2428f, 0.4312f },
        .br = { 0.3514f, 0.4312f }
      }
    };
    static auto walk_down_2 = (grumble::SpriteDefinition) {
      .name = "walk_down_2",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.3587f, 0.6558f },
        .tr = { 0.4674f, 0.6558f },
        .bl = { 0.3587f, 0.4964f },
        .br = { 0.4674f, 0.4964f }
      }
    };
    static auto walk_down_3 = (grumble::SpriteDefinition) {
      .name = "walk_down_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.4746f, 0.8225f },
        .tr = { 0.5833f, 0.8225f },
        .bl = { 0.4746f, 0.663f },
        .br = { 0.5833f, 0.663f }
      }
    };
    static auto walk_down_4 = (grumble::SpriteDefinition) {
      .name = "walk_down_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.4746f, 0.6558f },
        .tr = { 0.5833f, 0.6558f },
        .bl = { 0.4746f, 0.4964f },
        .br = { 0.5833f, 0.4964f }
      }
    };
    static auto walk_down_5 = (grumble::SpriteDefinition) {
      .name = "walk_down_5",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.3587f, 0.4891f },
        .tr = { 0.4674f, 0.4891f },
        .bl = { 0.3587f, 0.3297f },
        .br = { 0.4674f, 0.3297f }
      }
    };
    static auto walk_down_6 = (grumble::SpriteDefinition) {
      .name = "walk_down_6",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.4746f, 0.4891f },
        .tr = { 0.5833f, 0.4891f },
        .bl = { 0.4746f, 0.3297f },
        .br = { 0.5833f, 0.3297f }
      }
    };
    static auto walk_left_1 = (grumble::SpriteDefinition) {
      .name = "walk_left_1",
      .atlas = "main",
      .size = { 26, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.1196f, 0.4167f },
        .tr = { 0.2138f, 0.4167f },
        .bl = { 0.1196f, 0.2572f },
        .br = { 0.2138f, 0.2572f }
      }
    };
    static auto walk_left_2 = (grumble::SpriteDefinition) {
      .name = "walk_left_2",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.1196f, 0.25f },
        .tr = { 0.221f, 0.25f },
        .bl = { 0.1196f, 0.0906f },
        .br = { 0.221f, 0.0906f }
      }
    };
    static auto walk_left_3 = (grumble::SpriteDefinition) {
      .name = "walk_left_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.221f, 0.4239f },
        .tr = { 0.3225f, 0.4239f },
        .bl = { 0.221f, 0.2645f },
        .br = { 0.3225f, 0.2645f }
      }
    };
    static auto walk_left_4 = (grumble::SpriteDefinition) {
      .name = "walk_left_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.2283f, 0.2572f },
        .tr = { 0.3297f, 0.2572f },
        .bl = { 0.2283f, 0.0978f },
        .br = { 0.3297f, 0.0978f }
      }
    };
    static auto walk_left_5 = (grumble::SpriteDefinition) {
      .name = "walk_left_5",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.337f, 0.3225f },
        .tr = { 0.4384f, 0.3225f },
        .bl = { 0.337f, 0.163f },
        .br = { 0.4384f, 0.163f }
      }
    };
    static auto walk_left_6 = (grumble::SpriteDefinition) {
      .name = "walk_left_6",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.25f, 0.7572f },
        .tr = { 0.3514f, 0.7572f },
        .bl = { 0.25f, 0.5978f },
        .br = { 0.3514f, 0.5978f }
      }
    };
    static auto walk_right_1 = (grumble::SpriteDefinition) {
      .name = "walk_right_1",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.4457f, 0.3225f },
        .tr = { 0.5471f, 0.3225f },
        .bl = { 0.4457f, 0.163f },
        .br = { 0.5471f, 0.163f }
      }
    };
    static auto walk_right_2 = (grumble::SpriteDefinition) {
      .name = "walk_right_2",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.5543f, 0.3225f },
        .tr = { 0.6558f, 0.3225f },
        .bl = { 0.5543f, 0.163f },
        .br = { 0.6558f, 0.163f }
      }
    };
    static auto walk_right_3 = (grumble::SpriteDefinition) {
      .name = "walk_right_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.5906f, 0.8225f },
        .tr = { 0.692f, 0.8225f },
        .bl = { 0.5906f, 0.663f },
        .br = { 0.692f, 0.663f }
      }
    };
    static auto walk_right_4 = (grumble::SpriteDefinition) {
      .name = "walk_right_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.663f, 0.3225f },
        .tr = { 0.7645f, 0.3225f },
        .bl = { 0.663f, 0.163f },
        .br = { 0.7645f, 0.163f }
      }
    };
    static auto walk_right_5 = (grumble::SpriteDefinition) {
      .name = "walk_right_5",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7717f, 0.3297f },
        .tr = { 0.8732f, 0.3297f },
        .bl = { 0.7717f, 0.1703f },
        .br = { 0.8732f, 0.1703f }
      }
    };
    static auto walk_right_6 = (grumble::SpriteDefinition) {
      .name = "walk_right_6",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7717f, 0.163f },
        .tr = { 0.8732f, 0.163f },
        .bl = { 0.7717f, 0.0036f },
        .br = { 0.8732f, 0.0036f }
      }
    };
    static auto walk_up_1 = (grumble::SpriteDefinition) {
      .name = "walk_up_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.6993f, 0.8297f },
        .tr = { 0.808f, 0.8297f },
        .bl = { 0.6993f, 0.6703f },
        .br = { 0.808f, 0.6703f }
      }
    };
    static auto walk_up_2 = (grumble::SpriteDefinition) {
      .name = "walk_up_2",
      .atlas = "main",
      .size = { 32, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0036f, 0.7572f },
        .tr = { 0.1196f, 0.7572f },
        .bl = { 0.0036f, 0.5906f },
        .br = { 0.1196f, 0.5906f }
      }
    };
    static auto walk_up_3 = (grumble::SpriteDefinition) {
      .name = "walk_up_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.6993f, 0.663f },
        .tr = { 0.808f, 0.663f },
        .bl = { 0.6993f, 0.5036f },
        .br = { 0.808f, 0.5036f }
      }
    };
    static auto walk_up_4 = (grumble::SpriteDefinition) {
      .name = "walk_up_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.8152f, 0.8297f },
        .tr = { 0.9239f, 0.8297f },
        .bl = { 0.8152f, 0.6703f },
        .br = { 0.9239f, 0.6703f }
      }
    };
    static auto walk_up_5 = (grumble::SpriteDefinition) {
      .name = "walk_up_5",
      .atlas = "main",
      .size = { 32, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.3587f, 0.9964f },
        .tr = { 0.4746f, 0.9964f },
        .bl = { 0.3587f, 0.8297f },
        .br = { 0.4746f, 0.8297f }
      }
    };
    static auto walk_up_6 = (grumble::SpriteDefinition) {
      .name = "walk_up_6",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.6993f, 0.4964f },
        .tr = { 0.808f, 0.4964f },
        .bl = { 0.6993f, 0.337f },
        .br = { 0.808f, 0.337f }
      }
    };
  }
}
// clang-format on