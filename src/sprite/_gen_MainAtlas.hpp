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
        .tl = { 0.4889705882352941f, 0.003676470588235294f },
        .tr = { 0.6066176470588235f, 0.003676470588235294f },
        .bl = { 0.4889705882352941f, 0.16544117647058823f },
        .br = { 0.6066176470588235f, 0.16544117647058823f }
      }
    };
    static auto idle_left = (grumble::SpriteDefinition) {
      .name = "idle_left",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.23897058823529413f, 0.5110294117647058f },
        .tr = { 0.34191176470588236f, 0.5110294117647058f },
        .bl = { 0.23897058823529413f, 0.6727941176470589f },
        .br = { 0.34191176470588236f, 0.6727941176470589f }
      }
    };
    static auto idle_right = (grumble::SpriteDefinition) {
      .name = "idle_right",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.003676470588235294f, 0.5183823529411765f },
        .tr = { 0.10661764705882353f, 0.5183823529411765f },
        .bl = { 0.003676470588235294f, 0.6801470588235294f },
        .br = { 0.10661764705882353f, 0.6801470588235294f }
      }
    };
    static auto idle_up = (grumble::SpriteDefinition) {
      .name = "idle_up",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.4889705882352941f, 0.17279411764705882f },
        .tr = { 0.6066176470588235f, 0.17279411764705882f },
        .bl = { 0.4889705882352941f, 0.33455882352941174f },
        .br = { 0.6066176470588235f, 0.33455882352941174f }
      }
    };
    static auto phone_1 = (grumble::SpriteDefinition) {
      .name = "phone_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.003676470588235294f, 0.1801470588235294f },
        .tr = { 0.11397058823529412f, 0.1801470588235294f },
        .bl = { 0.003676470588235294f, 0.34191176470588236f },
        .br = { 0.11397058823529412f, 0.34191176470588236f }
      }
    };
    static auto phone_2 = (grumble::SpriteDefinition) {
      .name = "phone_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.1213235294117647f, 0.1801470588235294f },
        .tr = { 0.23161764705882354f, 0.1801470588235294f },
        .bl = { 0.1213235294117647f, 0.34191176470588236f },
        .br = { 0.23161764705882354f, 0.34191176470588236f }
      }
    };
    static auto phone_3 = (grumble::SpriteDefinition) {
      .name = "phone_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.23897058823529413f, 0.34191176470588236f },
        .tr = { 0.3492647058823529f, 0.34191176470588236f },
        .bl = { 0.23897058823529413f, 0.5036764705882353f },
        .br = { 0.3492647058823529f, 0.5036764705882353f }
      }
    };
    static auto phone_4 = (grumble::SpriteDefinition) {
      .name = "phone_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.003676470588235294f, 0.3492647058823529f },
        .tr = { 0.11397058823529412f, 0.3492647058823529f },
        .bl = { 0.003676470588235294f, 0.5110294117647058f },
        .br = { 0.11397058823529412f, 0.5110294117647058f }
      }
    };
    static auto phone_5 = (grumble::SpriteDefinition) {
      .name = "phone_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.003676470588235294f, 0.3492647058823529f },
        .tr = { 0.11397058823529412f, 0.3492647058823529f },
        .bl = { 0.003676470588235294f, 0.5110294117647058f },
        .br = { 0.11397058823529412f, 0.5110294117647058f }
      }
    };
    static auto phone_6 = (grumble::SpriteDefinition) {
      .name = "phone_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.2536764705882353f, 0.003676470588235294f },
        .tr = { 0.3639705882352941f, 0.003676470588235294f },
        .bl = { 0.2536764705882353f, 0.17279411764705882f },
        .br = { 0.3639705882352941f, 0.17279411764705882f }
      }
    };
    static auto phone_7 = (grumble::SpriteDefinition) {
      .name = "phone_7",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.3713235294117647f, 0.003676470588235294f },
        .tr = { 0.48161764705882354f, 0.003676470588235294f },
        .bl = { 0.3713235294117647f, 0.17279411764705882f },
        .br = { 0.48161764705882354f, 0.17279411764705882f }
      }
    };
    static auto phone_8 = (grumble::SpriteDefinition) {
      .name = "phone_8",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.1213235294117647f, 0.3492647058823529f },
        .tr = { 0.23161764705882354f, 0.3492647058823529f },
        .bl = { 0.1213235294117647f, 0.5110294117647058f },
        .br = { 0.23161764705882354f, 0.5110294117647058f }
      }
    };
    static auto phone_9 = (grumble::SpriteDefinition) {
      .name = "phone_9",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.35661764705882354f, 0.34191176470588236f },
        .tr = { 0.46691176470588236f, 0.34191176470588236f },
        .bl = { 0.35661764705882354f, 0.5036764705882353f },
        .br = { 0.46691176470588236f, 0.5036764705882353f }
      }
    };
    static auto sit_left_1 = (grumble::SpriteDefinition) {
      .name = "sit_left_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.23897058823529413f, 0.1801470588235294f },
        .tr = { 0.34191176470588236f, 0.1801470588235294f },
        .bl = { 0.23897058823529413f, 0.33455882352941174f },
        .br = { 0.34191176470588236f, 0.33455882352941174f }
      }
    };
    static auto sit_left_2 = (grumble::SpriteDefinition) {
      .name = "sit_left_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.23897058823529413f, 0.1801470588235294f },
        .tr = { 0.34191176470588236f, 0.1801470588235294f },
        .bl = { 0.23897058823529413f, 0.33455882352941174f },
        .br = { 0.34191176470588236f, 0.33455882352941174f }
      }
    };
    static auto sit_left_3 = (grumble::SpriteDefinition) {
      .name = "sit_left_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.11397058823529412f, 0.5183823529411765f },
        .tr = { 0.21691176470588236f, 0.5183823529411765f },
        .bl = { 0.11397058823529412f, 0.6801470588235294f },
        .br = { 0.21691176470588236f, 0.6801470588235294f }
      }
    };
    static auto sit_left_4 = (grumble::SpriteDefinition) {
      .name = "sit_left_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.3492647058823529f, 0.5110294117647058f },
        .tr = { 0.4522058823529412f, 0.5110294117647058f },
        .bl = { 0.3492647058823529f, 0.6727941176470589f },
        .br = { 0.4522058823529412f, 0.6727941176470589f }
      }
    };
    static auto sit_left_5 = (grumble::SpriteDefinition) {
      .name = "sit_left_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.3492647058823529f, 0.1801470588235294f },
        .tr = { 0.4522058823529412f, 0.1801470588235294f },
        .bl = { 0.3492647058823529f, 0.33455882352941174f },
        .br = { 0.4522058823529412f, 0.33455882352941174f }
      }
    };
    static auto sit_left_6 = (grumble::SpriteDefinition) {
      .name = "sit_left_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7757352941176471f, 0.6801470588235294f },
        .tr = { 0.8786764705882353f, 0.6801470588235294f },
        .bl = { 0.7757352941176471f, 0.8345588235294118f },
        .br = { 0.8786764705882353f, 0.8345588235294118f }
      }
    };
    static auto sit_right_1 = (grumble::SpriteDefinition) {
      .name = "sit_right_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7757352941176471f, 0.8419117647058824f },
        .tr = { 0.8786764705882353f, 0.8419117647058824f },
        .bl = { 0.7757352941176471f, 0.9963235294117647f },
        .br = { 0.8786764705882353f, 0.9963235294117647f }
      }
    };
    static auto sit_right_2 = (grumble::SpriteDefinition) {
      .name = "sit_right_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7757352941176471f, 0.8419117647058824f },
        .tr = { 0.8786764705882353f, 0.8419117647058824f },
        .bl = { 0.7757352941176471f, 0.9963235294117647f },
        .br = { 0.8786764705882353f, 0.9963235294117647f }
      }
    };
    static auto sit_right_3 = (grumble::SpriteDefinition) {
      .name = "sit_right_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.45955882352941174f, 0.5110294117647058f },
        .tr = { 0.5625f, 0.5110294117647058f },
        .bl = { 0.45955882352941174f, 0.6727941176470589f },
        .br = { 0.5625f, 0.6727941176470589f }
      }
    };
    static auto sit_right_4 = (grumble::SpriteDefinition) {
      .name = "sit_right_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.5698529411764706f, 0.5110294117647058f },
        .tr = { 0.6727941176470589f, 0.5110294117647058f },
        .bl = { 0.5698529411764706f, 0.6727941176470589f },
        .br = { 0.6727941176470589f, 0.6727941176470589f }
      }
    };
    static auto sit_right_5 = (grumble::SpriteDefinition) {
      .name = "sit_right_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.8860294117647058f, 0.6801470588235294f },
        .tr = { 0.9889705882352942f, 0.6801470588235294f },
        .bl = { 0.8860294117647058f, 0.8345588235294118f },
        .br = { 0.9889705882352942f, 0.8345588235294118f }
      }
    };
    static auto sit_right_6 = (grumble::SpriteDefinition) {
      .name = "sit_right_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.8860294117647058f, 0.8419117647058824f },
        .tr = { 0.9889705882352942f, 0.8419117647058824f },
        .bl = { 0.8860294117647058f, 0.9963235294117647f },
        .br = { 0.9889705882352942f, 0.9963235294117647f }
      }
    };
    static auto walk_down_1 = (grumble::SpriteDefinition) {
      .name = "walk_down_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.4742647058823529f, 0.34191176470588236f },
        .tr = { 0.5845588235294118f, 0.34191176470588236f },
        .bl = { 0.4742647058823529f, 0.5036764705882353f },
        .br = { 0.5845588235294118f, 0.5036764705882353f }
      }
    };
    static auto walk_down_2 = (grumble::SpriteDefinition) {
      .name = "walk_down_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.5919117647058824f, 0.34191176470588236f },
        .tr = { 0.7022058823529411f, 0.34191176470588236f },
        .bl = { 0.5919117647058824f, 0.5036764705882353f },
        .br = { 0.7022058823529411f, 0.5036764705882353f }
      }
    };
    static auto walk_down_3 = (grumble::SpriteDefinition) {
      .name = "walk_down_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.6139705882352942f, 0.003676470588235294f },
        .tr = { 0.7242647058823529f, 0.003676470588235294f },
        .bl = { 0.6139705882352942f, 0.16544117647058823f },
        .br = { 0.7242647058823529f, 0.16544117647058823f }
      }
    };
    static auto walk_down_4 = (grumble::SpriteDefinition) {
      .name = "walk_down_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.6139705882352942f, 0.17279411764705882f },
        .tr = { 0.7242647058823529f, 0.17279411764705882f },
        .bl = { 0.6139705882352942f, 0.33455882352941174f },
        .br = { 0.7242647058823529f, 0.33455882352941174f }
      }
    };
    static auto walk_down_5 = (grumble::SpriteDefinition) {
      .name = "walk_down_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7095588235294118f, 0.34191176470588236f },
        .tr = { 0.8198529411764706f, 0.34191176470588236f },
        .bl = { 0.7095588235294118f, 0.5036764705882353f },
        .br = { 0.8198529411764706f, 0.5036764705882353f }
      }
    };
    static auto walk_down_6 = (grumble::SpriteDefinition) {
      .name = "walk_down_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7316176470588235f, 0.003676470588235294f },
        .tr = { 0.8419117647058824f, 0.003676470588235294f },
        .bl = { 0.7316176470588235f, 0.16544117647058823f },
        .br = { 0.8419117647058824f, 0.16544117647058823f }
      }
    };
    static auto walk_left_1 = (grumble::SpriteDefinition) {
      .name = "walk_left_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.9007352941176471f, 0.5110294117647058f },
        .tr = { 0.9963235294117647f, 0.5110294117647058f },
        .bl = { 0.9007352941176471f, 0.6727941176470589f },
        .br = { 0.9963235294117647f, 0.6727941176470589f }
      }
    };
    static auto walk_left_2 = (grumble::SpriteDefinition) {
      .name = "walk_left_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.6801470588235294f, 0.5110294117647058f },
        .tr = { 0.7830882352941176f, 0.5110294117647058f },
        .bl = { 0.6801470588235294f, 0.6727941176470589f },
        .br = { 0.7830882352941176f, 0.6727941176470589f }
      }
    };
    static auto walk_left_3 = (grumble::SpriteDefinition) {
      .name = "walk_left_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7904411764705882f, 0.5110294117647058f },
        .tr = { 0.8933823529411765f, 0.5110294117647058f },
        .bl = { 0.7904411764705882f, 0.6727941176470589f },
        .br = { 0.8933823529411765f, 0.6727941176470589f }
      }
    };
    static auto walk_left_4 = (grumble::SpriteDefinition) {
      .name = "walk_left_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.22426470588235295f, 0.6801470588235294f },
        .tr = { 0.3272058823529412f, 0.6801470588235294f },
        .bl = { 0.22426470588235295f, 0.8419117647058824f },
        .br = { 0.3272058823529412f, 0.8419117647058824f }
      }
    };
    static auto walk_left_5 = (grumble::SpriteDefinition) {
      .name = "walk_left_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.003676470588235294f, 0.6875f },
        .tr = { 0.10661764705882353f, 0.6875f },
        .bl = { 0.003676470588235294f, 0.8492647058823529f },
        .br = { 0.10661764705882353f, 0.8492647058823529f }
      }
    };
    static auto walk_left_6 = (grumble::SpriteDefinition) {
      .name = "walk_left_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.23897058823529413f, 0.5110294117647058f },
        .tr = { 0.34191176470588236f, 0.5110294117647058f },
        .bl = { 0.23897058823529413f, 0.6727941176470589f },
        .br = { 0.34191176470588236f, 0.6727941176470589f }
      }
    };
    static auto walk_right_1 = (grumble::SpriteDefinition) {
      .name = "walk_right_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.11397058823529412f, 0.6875f },
        .tr = { 0.21691176470588236f, 0.6875f },
        .bl = { 0.11397058823529412f, 0.8492647058823529f },
        .br = { 0.21691176470588236f, 0.8492647058823529f }
      }
    };
    static auto walk_right_2 = (grumble::SpriteDefinition) {
      .name = "walk_right_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.33455882352941174f, 0.6801470588235294f },
        .tr = { 0.4375f, 0.6801470588235294f },
        .bl = { 0.33455882352941174f, 0.8419117647058824f },
        .br = { 0.4375f, 0.8419117647058824f }
      }
    };
    static auto walk_right_3 = (grumble::SpriteDefinition) {
      .name = "walk_right_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.003676470588235294f, 0.5183823529411765f },
        .tr = { 0.10661764705882353f, 0.5183823529411765f },
        .bl = { 0.003676470588235294f, 0.6801470588235294f },
        .br = { 0.10661764705882353f, 0.6801470588235294f }
      }
    };
    static auto walk_right_4 = (grumble::SpriteDefinition) {
      .name = "walk_right_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.44485294117647056f, 0.6801470588235294f },
        .tr = { 0.5477941176470589f, 0.6801470588235294f },
        .bl = { 0.44485294117647056f, 0.8419117647058824f },
        .br = { 0.5477941176470589f, 0.8419117647058824f }
      }
    };
    static auto walk_right_5 = (grumble::SpriteDefinition) {
      .name = "walk_right_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.5551470588235294f, 0.6801470588235294f },
        .tr = { 0.6580882352941176f, 0.6801470588235294f },
        .bl = { 0.5551470588235294f, 0.8419117647058824f },
        .br = { 0.6580882352941176f, 0.8419117647058824f }
      }
    };
    static auto walk_right_6 = (grumble::SpriteDefinition) {
      .name = "walk_right_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.6654411764705882f, 0.6801470588235294f },
        .tr = { 0.7683823529411765f, 0.6801470588235294f },
        .bl = { 0.6654411764705882f, 0.8419117647058824f },
        .br = { 0.7683823529411765f, 0.8419117647058824f }
      }
    };
    static auto walk_up_1 = (grumble::SpriteDefinition) {
      .name = "walk_up_1",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.7316176470588235f, 0.17279411764705882f },
        .tr = { 0.8419117647058824f, 0.17279411764705882f },
        .bl = { 0.7316176470588235f, 0.33455882352941174f },
        .br = { 0.8419117647058824f, 0.33455882352941174f }
      }
    };
    static auto walk_up_2 = (grumble::SpriteDefinition) {
      .name = "walk_up_2",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.003676470588235294f, 0.003676470588235294f },
        .tr = { 0.1213235294117647f, 0.003676470588235294f },
        .bl = { 0.003676470588235294f, 0.17279411764705882f },
        .br = { 0.1213235294117647f, 0.17279411764705882f }
      }
    };
    static auto walk_up_3 = (grumble::SpriteDefinition) {
      .name = "walk_up_3",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.8272058823529411f, 0.34191176470588236f },
        .tr = { 0.9375f, 0.34191176470588236f },
        .bl = { 0.8272058823529411f, 0.5036764705882353f },
        .br = { 0.9375f, 0.5036764705882353f }
      }
    };
    static auto walk_up_4 = (grumble::SpriteDefinition) {
      .name = "walk_up_4",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.8492647058823529f, 0.003676470588235294f },
        .tr = { 0.9595588235294118f, 0.003676470588235294f },
        .bl = { 0.8492647058823529f, 0.16544117647058823f },
        .br = { 0.9595588235294118f, 0.16544117647058823f }
      }
    };
    static auto walk_up_5 = (grumble::SpriteDefinition) {
      .name = "walk_up_5",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.12867647058823528f, 0.003676470588235294f },
        .tr = { 0.24632352941176472f, 0.003676470588235294f },
        .bl = { 0.12867647058823528f, 0.17279411764705882f },
        .br = { 0.24632352941176472f, 0.17279411764705882f }
      }
    };
    static auto walk_up_6 = (grumble::SpriteDefinition) {
      .name = "walk_up_6",
      .atlas = "main",
      .region = (grumble::SpriteRegion) {
        .tl = { 0.8492647058823529f, 0.17279411764705882f },
        .tr = { 0.9595588235294118f, 0.17279411764705882f },
        .bl = { 0.8492647058823529f, 0.33455882352941174f },
        .br = { 0.9595588235294118f, 0.33455882352941174f }
      }
    };
  }
}
// clang-format on