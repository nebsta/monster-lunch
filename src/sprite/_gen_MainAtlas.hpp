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
        .tl = { 0.22377622f, 0.22377622f },
        .tr = { 0.44755245f, 0.22377622f },
        .bl = { 0.22377622f, 0.0f },
        .br = { 0.44755245f, 0.0f }
      }
    };
    static auto idle_down = (grumble::SpriteDefinition) {
      .name = "idle_down",
      .atlas = "main",
      .size = { 32, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.73426573f, 0.37762238f },
        .tr = { 0.84615385f, 0.37762238f },
        .bl = { 0.73426573f, 0.22377622f },
        .br = { 0.84615385f, 0.22377622f }
      }
    };
    static auto idle_left = (grumble::SpriteDefinition) {
      .name = "idle_left",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.09090909f, 1.0f },
        .tr = { 0.18881119f, 1.0f },
        .bl = { 0.09090909f, 0.84615385f },
        .br = { 0.18881119f, 0.84615385f }
      }
    };
    static auto idle_right = (grumble::SpriteDefinition) {
      .name = "idle_right",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.18881119f, 1.0f },
        .tr = { 0.28671329f, 1.0f },
        .bl = { 0.18881119f, 0.84615385f },
        .br = { 0.28671329f, 0.84615385f }
      }
    };
    static auto idle_up = (grumble::SpriteDefinition) {
      .name = "idle_up",
      .atlas = "main",
      .size = { 32, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.84615385f, 0.37762238f },
        .tr = { 0.95804196f, 0.37762238f },
        .bl = { 0.84615385f, 0.22377622f },
        .br = { 0.95804196f, 0.22377622f }
      }
    };
    static auto phone_1 = (grumble::SpriteDefinition) {
      .name = "phone_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.58741259f, 0.69230769f },
        .tr = { 0.69230769f, 0.69230769f },
        .bl = { 0.58741259f, 0.53846154f },
        .br = { 0.69230769f, 0.53846154f }
      }
    };
    static auto phone_2 = (grumble::SpriteDefinition) {
      .name = "phone_2",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.69230769f, 0.69230769f },
        .tr = { 0.7972028f, 0.69230769f },
        .bl = { 0.69230769f, 0.53846154f },
        .br = { 0.7972028f, 0.53846154f }
      }
    };
    static auto phone_3 = (grumble::SpriteDefinition) {
      .name = "phone_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7972028f, 0.69230769f },
        .tr = { 0.9020979f, 0.69230769f },
        .bl = { 0.7972028f, 0.53846154f },
        .br = { 0.9020979f, 0.53846154f }
      }
    };
    static auto phone_4 = (grumble::SpriteDefinition) {
      .name = "phone_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.53846154f },
        .tr = { 0.1048951f, 0.53846154f },
        .bl = { 0.0f, 0.38461538f },
        .br = { 0.1048951f, 0.38461538f }
      }
    };
    static auto phone_5 = (grumble::SpriteDefinition) {
      .name = "phone_5",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.1048951f, 0.53846154f },
        .tr = { 0.20979021f, 0.53846154f },
        .bl = { 0.1048951f, 0.38461538f },
        .br = { 0.20979021f, 0.38461538f }
      }
    };
    static auto phone_6 = (grumble::SpriteDefinition) {
      .name = "phone_6",
      .atlas = "main",
      .size = { 30, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.20979021f, 0.53846154f },
        .tr = { 0.31468531f, 0.53846154f },
        .bl = { 0.20979021f, 0.37762238f },
        .br = { 0.31468531f, 0.37762238f }
      }
    };
    static auto phone_7 = (grumble::SpriteDefinition) {
      .name = "phone_7",
      .atlas = "main",
      .size = { 30, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.31468531f, 0.53846154f },
        .tr = { 0.41958042f, 0.53846154f },
        .bl = { 0.31468531f, 0.37762238f },
        .br = { 0.41958042f, 0.37762238f }
      }
    };
    static auto phone_8 = (grumble::SpriteDefinition) {
      .name = "phone_8",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.41958042f, 0.53846154f },
        .tr = { 0.52447552f, 0.53846154f },
        .bl = { 0.41958042f, 0.38461538f },
        .br = { 0.52447552f, 0.38461538f }
      }
    };
    static auto phone_9 = (grumble::SpriteDefinition) {
      .name = "phone_9",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.52447552f, 0.53846154f },
        .tr = { 0.62937063f, 0.53846154f },
        .bl = { 0.52447552f, 0.38461538f },
        .br = { 0.62937063f, 0.38461538f }
      }
    };
    static auto selection = (grumble::SpriteDefinition) {
      .name = "selection",
      .atlas = "main",
      .size = { 64, 64 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.44755245f, 0.22377622f },
        .tr = { 0.67132867f, 0.22377622f },
        .bl = { 0.44755245f, 0.0f },
        .br = { 0.67132867f, 0.0f }
      }
    };
    static auto sit_left_1 = (grumble::SpriteDefinition) {
      .name = "sit_left_1",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.28671329f, 1.0f },
        .tr = { 0.38461538f, 1.0f },
        .bl = { 0.28671329f, 0.85314685f },
        .br = { 0.38461538f, 0.85314685f }
      }
    };
    static auto sit_left_2 = (grumble::SpriteDefinition) {
      .name = "sit_left_2",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.38461538f, 1.0f },
        .tr = { 0.48251748f, 1.0f },
        .bl = { 0.38461538f, 0.85314685f },
        .br = { 0.48251748f, 0.85314685f }
      }
    };
    static auto sit_left_3 = (grumble::SpriteDefinition) {
      .name = "sit_left_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.48251748f, 1.0f },
        .tr = { 0.58041958f, 1.0f },
        .bl = { 0.48251748f, 0.84615385f },
        .br = { 0.58041958f, 0.84615385f }
      }
    };
    static auto sit_left_4 = (grumble::SpriteDefinition) {
      .name = "sit_left_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.58041958f, 1.0f },
        .tr = { 0.67832168f, 1.0f },
        .bl = { 0.58041958f, 0.84615385f },
        .br = { 0.67832168f, 0.84615385f }
      }
    };
    static auto sit_left_5 = (grumble::SpriteDefinition) {
      .name = "sit_left_5",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.67832168f, 1.0f },
        .tr = { 0.77622378f, 1.0f },
        .bl = { 0.67832168f, 0.85314685f },
        .br = { 0.77622378f, 0.85314685f }
      }
    };
    static auto sit_left_6 = (grumble::SpriteDefinition) {
      .name = "sit_left_6",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.77622378f, 1.0f },
        .tr = { 0.87412587f, 1.0f },
        .bl = { 0.77622378f, 0.85314685f },
        .br = { 0.87412587f, 0.85314685f }
      }
    };
    static auto sit_right_1 = (grumble::SpriteDefinition) {
      .name = "sit_right_1",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.87412587f, 1.0f },
        .tr = { 0.97202797f, 1.0f },
        .bl = { 0.87412587f, 0.85314685f },
        .br = { 0.97202797f, 0.85314685f }
      }
    };
    static auto sit_right_2 = (grumble::SpriteDefinition) {
      .name = "sit_right_2",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.84615385f },
        .tr = { 0.0979021f, 0.84615385f },
        .bl = { 0.0f, 0.6993007f },
        .br = { 0.0979021f, 0.6993007f }
      }
    };
    static auto sit_right_3 = (grumble::SpriteDefinition) {
      .name = "sit_right_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0979021f, 0.84615385f },
        .tr = { 0.1958042f, 0.84615385f },
        .bl = { 0.0979021f, 0.69230769f },
        .br = { 0.1958042f, 0.69230769f }
      }
    };
    static auto sit_right_4 = (grumble::SpriteDefinition) {
      .name = "sit_right_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.1958042f, 0.84615385f },
        .tr = { 0.29370629f, 0.84615385f },
        .bl = { 0.1958042f, 0.69230769f },
        .br = { 0.29370629f, 0.69230769f }
      }
    };
    static auto sit_right_5 = (grumble::SpriteDefinition) {
      .name = "sit_right_5",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.29370629f, 0.84615385f },
        .tr = { 0.39160839f, 0.84615385f },
        .bl = { 0.29370629f, 0.6993007f },
        .br = { 0.39160839f, 0.6993007f }
      }
    };
    static auto sit_right_6 = (grumble::SpriteDefinition) {
      .name = "sit_right_6",
      .atlas = "main",
      .size = { 28, 42 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.39160839f, 0.84615385f },
        .tr = { 0.48951049f, 0.84615385f },
        .bl = { 0.39160839f, 0.6993007f },
        .br = { 0.48951049f, 0.6993007f }
      }
    };
    static auto walk_down_1 = (grumble::SpriteDefinition) {
      .name = "walk_down_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.62937063f, 0.53846154f },
        .tr = { 0.73426573f, 0.53846154f },
        .bl = { 0.62937063f, 0.38461538f },
        .br = { 0.73426573f, 0.38461538f }
      }
    };
    static auto walk_down_2 = (grumble::SpriteDefinition) {
      .name = "walk_down_2",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.73426573f, 0.53846154f },
        .tr = { 0.83916084f, 0.53846154f },
        .bl = { 0.73426573f, 0.38461538f },
        .br = { 0.83916084f, 0.38461538f }
      }
    };
    static auto walk_down_3 = (grumble::SpriteDefinition) {
      .name = "walk_down_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.83916084f, 0.53846154f },
        .tr = { 0.94405594f, 0.53846154f },
        .bl = { 0.83916084f, 0.38461538f },
        .br = { 0.94405594f, 0.38461538f }
      }
    };
    static auto walk_down_4 = (grumble::SpriteDefinition) {
      .name = "walk_down_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.37762238f },
        .tr = { 0.1048951f, 0.37762238f },
        .bl = { 0.0f, 0.22377622f },
        .br = { 0.1048951f, 0.22377622f }
      }
    };
    static auto walk_down_5 = (grumble::SpriteDefinition) {
      .name = "walk_down_5",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.1048951f, 0.37762238f },
        .tr = { 0.20979021f, 0.37762238f },
        .bl = { 0.1048951f, 0.22377622f },
        .br = { 0.20979021f, 0.22377622f }
      }
    };
    static auto walk_down_6 = (grumble::SpriteDefinition) {
      .name = "walk_down_6",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.20979021f, 0.37762238f },
        .tr = { 0.31468531f, 0.37762238f },
        .bl = { 0.20979021f, 0.22377622f },
        .br = { 0.31468531f, 0.22377622f }
      }
    };
    static auto walk_left_1 = (grumble::SpriteDefinition) {
      .name = "walk_left_1",
      .atlas = "main",
      .size = { 26, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 1.0f },
        .tr = { 0.09090909f, 1.0f },
        .bl = { 0.0f, 0.84615385f },
        .br = { 0.09090909f, 0.84615385f }
      }
    };
    static auto walk_left_2 = (grumble::SpriteDefinition) {
      .name = "walk_left_2",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.48951049f, 0.84615385f },
        .tr = { 0.58741259f, 0.84615385f },
        .bl = { 0.48951049f, 0.69230769f },
        .br = { 0.58741259f, 0.69230769f }
      }
    };
    static auto walk_left_3 = (grumble::SpriteDefinition) {
      .name = "walk_left_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.58741259f, 0.84615385f },
        .tr = { 0.68531469f, 0.84615385f },
        .bl = { 0.58741259f, 0.69230769f },
        .br = { 0.68531469f, 0.69230769f }
      }
    };
    static auto walk_left_4 = (grumble::SpriteDefinition) {
      .name = "walk_left_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.68531469f, 0.84615385f },
        .tr = { 0.78321678f, 0.84615385f },
        .bl = { 0.68531469f, 0.69230769f },
        .br = { 0.78321678f, 0.69230769f }
      }
    };
    static auto walk_left_5 = (grumble::SpriteDefinition) {
      .name = "walk_left_5",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.78321678f, 0.84615385f },
        .tr = { 0.88111888f, 0.84615385f },
        .bl = { 0.78321678f, 0.69230769f },
        .br = { 0.88111888f, 0.69230769f }
      }
    };
    static auto walk_left_6 = (grumble::SpriteDefinition) {
      .name = "walk_left_6",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.88111888f, 0.84615385f },
        .tr = { 0.97902098f, 0.84615385f },
        .bl = { 0.88111888f, 0.69230769f },
        .br = { 0.97902098f, 0.69230769f }
      }
    };
    static auto walk_right_1 = (grumble::SpriteDefinition) {
      .name = "walk_right_1",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.69230769f },
        .tr = { 0.0979021f, 0.69230769f },
        .bl = { 0.0f, 0.53846154f },
        .br = { 0.0979021f, 0.53846154f }
      }
    };
    static auto walk_right_2 = (grumble::SpriteDefinition) {
      .name = "walk_right_2",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0979021f, 0.69230769f },
        .tr = { 0.1958042f, 0.69230769f },
        .bl = { 0.0979021f, 0.53846154f },
        .br = { 0.1958042f, 0.53846154f }
      }
    };
    static auto walk_right_3 = (grumble::SpriteDefinition) {
      .name = "walk_right_3",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.1958042f, 0.69230769f },
        .tr = { 0.29370629f, 0.69230769f },
        .bl = { 0.1958042f, 0.53846154f },
        .br = { 0.29370629f, 0.53846154f }
      }
    };
    static auto walk_right_4 = (grumble::SpriteDefinition) {
      .name = "walk_right_4",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.29370629f, 0.69230769f },
        .tr = { 0.39160839f, 0.69230769f },
        .bl = { 0.29370629f, 0.53846154f },
        .br = { 0.39160839f, 0.53846154f }
      }
    };
    static auto walk_right_5 = (grumble::SpriteDefinition) {
      .name = "walk_right_5",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.39160839f, 0.69230769f },
        .tr = { 0.48951049f, 0.69230769f },
        .bl = { 0.39160839f, 0.53846154f },
        .br = { 0.48951049f, 0.53846154f }
      }
    };
    static auto walk_right_6 = (grumble::SpriteDefinition) {
      .name = "walk_right_6",
      .atlas = "main",
      .size = { 28, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.48951049f, 0.69230769f },
        .tr = { 0.58741259f, 0.69230769f },
        .bl = { 0.48951049f, 0.53846154f },
        .br = { 0.58741259f, 0.53846154f }
      }
    };
    static auto walk_up_1 = (grumble::SpriteDefinition) {
      .name = "walk_up_1",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.31468531f, 0.37762238f },
        .tr = { 0.41958042f, 0.37762238f },
        .bl = { 0.31468531f, 0.22377622f },
        .br = { 0.41958042f, 0.22377622f }
      }
    };
    static auto walk_up_2 = (grumble::SpriteDefinition) {
      .name = "walk_up_2",
      .atlas = "main",
      .size = { 32, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.0f, 0.22377622f },
        .tr = { 0.11188811f, 0.22377622f },
        .bl = { 0.0f, 0.06293706f },
        .br = { 0.11188811f, 0.06293706f }
      }
    };
    static auto walk_up_3 = (grumble::SpriteDefinition) {
      .name = "walk_up_3",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.41958042f, 0.37762238f },
        .tr = { 0.52447552f, 0.37762238f },
        .bl = { 0.41958042f, 0.22377622f },
        .br = { 0.52447552f, 0.22377622f }
      }
    };
    static auto walk_up_4 = (grumble::SpriteDefinition) {
      .name = "walk_up_4",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.52447552f, 0.37762238f },
        .tr = { 0.62937063f, 0.37762238f },
        .bl = { 0.52447552f, 0.22377622f },
        .br = { 0.62937063f, 0.22377622f }
      }
    };
    static auto walk_up_5 = (grumble::SpriteDefinition) {
      .name = "walk_up_5",
      .atlas = "main",
      .size = { 32, 46 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.11188811f, 0.22377622f },
        .tr = { 0.22377622f, 0.22377622f },
        .bl = { 0.11188811f, 0.06293706f },
        .br = { 0.22377622f, 0.06293706f }
      }
    };
    static auto walk_up_6 = (grumble::SpriteDefinition) {
      .name = "walk_up_6",
      .atlas = "main",
      .size = { 30, 44 },
      .region = (grumble::SpriteRegion) {
        .tl = { 0.62937063f, 0.37762238f },
        .tr = { 0.73426573f, 0.37762238f },
        .bl = { 0.62937063f, 0.22377622f },
        .br = { 0.73426573f, 0.22377622f }
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