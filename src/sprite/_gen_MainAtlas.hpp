// clang-format off
#pragma once

#include <string>
#include <grumble/sprite/SpriteDefinition.hpp>

namespace Atlas {
  struct MainAtlasDefinition {
    std::string name;
    
    grumble::SpriteDefinition idle_down;
    grumble::SpriteDefinition idle_left;
    grumble::SpriteDefinition idle_right;
    grumble::SpriteDefinition idle_up;
    grumble::SpriteDefinition phone_1;
    grumble::SpriteDefinition phone_2;
    grumble::SpriteDefinition phone_3;
    grumble::SpriteDefinition phone_4;
    grumble::SpriteDefinition phone_5;
    grumble::SpriteDefinition phone_6;
    grumble::SpriteDefinition phone_7;
    grumble::SpriteDefinition phone_8;
    grumble::SpriteDefinition phone_9;
    grumble::SpriteDefinition sit_left_1;
    grumble::SpriteDefinition sit_left_2;
    grumble::SpriteDefinition sit_left_3;
    grumble::SpriteDefinition sit_left_4;
    grumble::SpriteDefinition sit_left_5;
    grumble::SpriteDefinition sit_left_6;
    grumble::SpriteDefinition sit_right_1;
    grumble::SpriteDefinition sit_right_2;
    grumble::SpriteDefinition sit_right_3;
    grumble::SpriteDefinition sit_right_4;
    grumble::SpriteDefinition sit_right_5;
    grumble::SpriteDefinition sit_right_6;
    grumble::SpriteDefinition walk_down_1;
    grumble::SpriteDefinition walk_down_2;
    grumble::SpriteDefinition walk_down_3;
    grumble::SpriteDefinition walk_down_4;
    grumble::SpriteDefinition walk_down_5;
    grumble::SpriteDefinition walk_down_6;
    grumble::SpriteDefinition walk_left_1;
    grumble::SpriteDefinition walk_left_2;
    grumble::SpriteDefinition walk_left_3;
    grumble::SpriteDefinition walk_left_4;
    grumble::SpriteDefinition walk_left_5;
    grumble::SpriteDefinition walk_left_6;
    grumble::SpriteDefinition walk_right_1;
    grumble::SpriteDefinition walk_right_2;
    grumble::SpriteDefinition walk_right_3;
    grumble::SpriteDefinition walk_right_4;
    grumble::SpriteDefinition walk_right_5;
    grumble::SpriteDefinition walk_right_6;
    grumble::SpriteDefinition walk_up_1;
    grumble::SpriteDefinition walk_up_2;
    grumble::SpriteDefinition walk_up_3;
    grumble::SpriteDefinition walk_up_4;
    grumble::SpriteDefinition walk_up_5;
    grumble::SpriteDefinition walk_up_6;
  };

  static MainAtlasDefinition Main = {
    .name = "Main",
    
    .idle_down = (grumble::SpriteDefinition){
      .name = "idle_down",
      .region = (grumble::SpriteRegion) {
        .tl = { 323.0f, 93.0f },
        .tr = { 355.0f, 93.0f },
        .bl = { 323.0f, 137.0f },
        .br = { 355.0f, 137.0f }
      }
    },
    
    .idle_left = (grumble::SpriteDefinition){
      .name = "idle_left",
      .region = (grumble::SpriteRegion) {
        .tl = { 47.0f, 1.0f },
        .tr = { 75.0f, 1.0f },
        .bl = { 47.0f, 45.0f },
        .br = { 75.0f, 45.0f }
      }
    },
    
    .idle_right = (grumble::SpriteDefinition){
      .name = "idle_right",
      .region = (grumble::SpriteRegion) {
        .tl = { 93.0f, 1.0f },
        .tr = { 121.0f, 1.0f },
        .bl = { 93.0f, 45.0f },
        .br = { 121.0f, 45.0f }
      }
    },
    
    .idle_up = (grumble::SpriteDefinition){
      .name = "idle_up",
      .region = (grumble::SpriteRegion) {
        .tl = { 369.0f, 93.0f },
        .tr = { 401.0f, 93.0f },
        .bl = { 369.0f, 137.0f },
        .br = { 401.0f, 137.0f }
      }
    },
    
    .phone_1 = (grumble::SpriteDefinition){
      .name = "phone_1",
      .region = (grumble::SpriteRegion) {
        .tl = { 1.0f, 61.0f },
        .tr = { 31.0f, 61.0f },
        .bl = { 1.0f, 105.0f },
        .br = { 31.0f, 105.0f }
      }
    },
    
    .phone_2 = (grumble::SpriteDefinition){
      .name = "phone_2",
      .region = (grumble::SpriteRegion) {
        .tl = { 47.0f, 61.0f },
        .tr = { 77.0f, 61.0f },
        .bl = { 47.0f, 105.0f },
        .br = { 77.0f, 105.0f }
      }
    },
    
    .phone_3 = (grumble::SpriteDefinition){
      .name = "phone_3",
      .region = (grumble::SpriteRegion) {
        .tl = { 93.0f, 61.0f },
        .tr = { 123.0f, 61.0f },
        .bl = { 93.0f, 105.0f },
        .br = { 123.0f, 105.0f }
      }
    },
    
    .phone_4 = (grumble::SpriteDefinition){
      .name = "phone_4",
      .region = (grumble::SpriteRegion) {
        .tl = { 139.0f, 61.0f },
        .tr = { 169.0f, 61.0f },
        .bl = { 139.0f, 105.0f },
        .br = { 169.0f, 105.0f }
      }
    },
    
    .phone_5 = (grumble::SpriteDefinition){
      .name = "phone_5",
      .region = (grumble::SpriteRegion) {
        .tl = { 139.0f, 61.0f },
        .tr = { 169.0f, 61.0f },
        .bl = { 139.0f, 105.0f },
        .br = { 169.0f, 105.0f }
      }
    },
    
    .phone_6 = (grumble::SpriteDefinition){
      .name = "phone_6",
      .region = (grumble::SpriteRegion) {
        .tl = { 185.0f, 61.0f },
        .tr = { 215.0f, 61.0f },
        .bl = { 185.0f, 107.0f },
        .br = { 215.0f, 107.0f }
      }
    },
    
    .phone_7 = (grumble::SpriteDefinition){
      .name = "phone_7",
      .region = (grumble::SpriteRegion) {
        .tl = { 233.0f, 61.0f },
        .tr = { 263.0f, 61.0f },
        .bl = { 233.0f, 107.0f },
        .br = { 263.0f, 107.0f }
      }
    },
    
    .phone_8 = (grumble::SpriteDefinition){
      .name = "phone_8",
      .region = (grumble::SpriteRegion) {
        .tl = { 281.0f, 61.0f },
        .tr = { 311.0f, 61.0f },
        .bl = { 281.0f, 105.0f },
        .br = { 311.0f, 105.0f }
      }
    },
    
    .phone_9 = (grumble::SpriteDefinition){
      .name = "phone_9",
      .region = (grumble::SpriteRegion) {
        .tl = { 327.0f, 61.0f },
        .tr = { 357.0f, 61.0f },
        .bl = { 327.0f, 105.0f },
        .br = { 357.0f, 105.0f }
      }
    },
    
    .sit_left_1 = (grumble::SpriteDefinition){
      .name = "sit_left_1",
      .region = (grumble::SpriteRegion) {
        .tl = { 139.0f, 1.0f },
        .tr = { 167.0f, 1.0f },
        .bl = { 139.0f, 43.0f },
        .br = { 167.0f, 43.0f }
      }
    },
    
    .sit_left_2 = (grumble::SpriteDefinition){
      .name = "sit_left_2",
      .region = (grumble::SpriteRegion) {
        .tl = { 139.0f, 1.0f },
        .tr = { 167.0f, 1.0f },
        .bl = { 139.0f, 43.0f },
        .br = { 167.0f, 43.0f }
      }
    },
    
    .sit_left_3 = (grumble::SpriteDefinition){
      .name = "sit_left_3",
      .region = (grumble::SpriteRegion) {
        .tl = { 183.0f, 1.0f },
        .tr = { 211.0f, 1.0f },
        .bl = { 183.0f, 45.0f },
        .br = { 211.0f, 45.0f }
      }
    },
    
    .sit_left_4 = (grumble::SpriteDefinition){
      .name = "sit_left_4",
      .region = (grumble::SpriteRegion) {
        .tl = { 229.0f, 1.0f },
        .tr = { 257.0f, 1.0f },
        .bl = { 229.0f, 45.0f },
        .br = { 257.0f, 45.0f }
      }
    },
    
    .sit_left_5 = (grumble::SpriteDefinition){
      .name = "sit_left_5",
      .region = (grumble::SpriteRegion) {
        .tl = { 275.0f, 1.0f },
        .tr = { 303.0f, 1.0f },
        .bl = { 275.0f, 43.0f },
        .br = { 303.0f, 43.0f }
      }
    },
    
    .sit_left_6 = (grumble::SpriteDefinition){
      .name = "sit_left_6",
      .region = (grumble::SpriteRegion) {
        .tl = { 319.0f, 1.0f },
        .tr = { 347.0f, 1.0f },
        .bl = { 319.0f, 43.0f },
        .br = { 347.0f, 43.0f }
      }
    },
    
    .sit_right_1 = (grumble::SpriteDefinition){
      .name = "sit_right_1",
      .region = (grumble::SpriteRegion) {
        .tl = { 363.0f, 1.0f },
        .tr = { 391.0f, 1.0f },
        .bl = { 363.0f, 43.0f },
        .br = { 391.0f, 43.0f }
      }
    },
    
    .sit_right_2 = (grumble::SpriteDefinition){
      .name = "sit_right_2",
      .region = (grumble::SpriteRegion) {
        .tl = { 363.0f, 1.0f },
        .tr = { 391.0f, 1.0f },
        .bl = { 363.0f, 43.0f },
        .br = { 391.0f, 43.0f }
      }
    },
    
    .sit_right_3 = (grumble::SpriteDefinition){
      .name = "sit_right_3",
      .region = (grumble::SpriteRegion) {
        .tl = { 407.0f, 1.0f },
        .tr = { 435.0f, 1.0f },
        .bl = { 407.0f, 45.0f },
        .br = { 435.0f, 45.0f }
      }
    },
    
    .sit_right_4 = (grumble::SpriteDefinition){
      .name = "sit_right_4",
      .region = (grumble::SpriteRegion) {
        .tl = { 453.0f, 1.0f },
        .tr = { 481.0f, 1.0f },
        .bl = { 453.0f, 45.0f },
        .br = { 481.0f, 45.0f }
      }
    },
    
    .sit_right_5 = (grumble::SpriteDefinition){
      .name = "sit_right_5",
      .region = (grumble::SpriteRegion) {
        .tl = { 1.0f, 29.0f },
        .tr = { 29.0f, 29.0f },
        .bl = { 1.0f, 71.0f },
        .br = { 29.0f, 71.0f }
      }
    },
    
    .sit_right_6 = (grumble::SpriteDefinition){
      .name = "sit_right_6",
      .region = (grumble::SpriteRegion) {
        .tl = { 45.0f, 31.0f },
        .tr = { 73.0f, 31.0f },
        .bl = { 45.0f, 73.0f },
        .br = { 73.0f, 73.0f }
      }
    },
    
    .walk_down_1 = (grumble::SpriteDefinition){
      .name = "walk_down_1",
      .region = (grumble::SpriteRegion) {
        .tl = { 373.0f, 61.0f },
        .tr = { 403.0f, 61.0f },
        .bl = { 373.0f, 105.0f },
        .br = { 403.0f, 105.0f }
      }
    },
    
    .walk_down_2 = (grumble::SpriteDefinition){
      .name = "walk_down_2",
      .region = (grumble::SpriteRegion) {
        .tl = { 419.0f, 61.0f },
        .tr = { 449.0f, 61.0f },
        .bl = { 419.0f, 105.0f },
        .br = { 449.0f, 105.0f }
      }
    },
    
    .walk_down_3 = (grumble::SpriteDefinition){
      .name = "walk_down_3",
      .region = (grumble::SpriteRegion) {
        .tl = { 465.0f, 61.0f },
        .tr = { 495.0f, 61.0f },
        .bl = { 465.0f, 105.0f },
        .br = { 495.0f, 105.0f }
      }
    },
    
    .walk_down_4 = (grumble::SpriteDefinition){
      .name = "walk_down_4",
      .region = (grumble::SpriteRegion) {
        .tl = { 1.0f, 93.0f },
        .tr = { 31.0f, 93.0f },
        .bl = { 1.0f, 137.0f },
        .br = { 31.0f, 137.0f }
      }
    },
    
    .walk_down_5 = (grumble::SpriteDefinition){
      .name = "walk_down_5",
      .region = (grumble::SpriteRegion) {
        .tl = { 47.0f, 93.0f },
        .tr = { 77.0f, 93.0f },
        .bl = { 47.0f, 137.0f },
        .br = { 77.0f, 137.0f }
      }
    },
    
    .walk_down_6 = (grumble::SpriteDefinition){
      .name = "walk_down_6",
      .region = (grumble::SpriteRegion) {
        .tl = { 93.0f, 93.0f },
        .tr = { 123.0f, 93.0f },
        .bl = { 93.0f, 137.0f },
        .br = { 123.0f, 137.0f }
      }
    },
    
    .walk_left_1 = (grumble::SpriteDefinition){
      .name = "walk_left_1",
      .region = (grumble::SpriteRegion) {
        .tl = { 1.0f, 1.0f },
        .tr = { 27.0f, 1.0f },
        .bl = { 1.0f, 45.0f },
        .br = { 27.0f, 45.0f }
      }
    },
    
    .walk_left_2 = (grumble::SpriteDefinition){
      .name = "walk_left_2",
      .region = (grumble::SpriteRegion) {
        .tl = { 89.0f, 31.0f },
        .tr = { 117.0f, 31.0f },
        .bl = { 89.0f, 75.0f },
        .br = { 117.0f, 75.0f }
      }
    },
    
    .walk_left_3 = (grumble::SpriteDefinition){
      .name = "walk_left_3",
      .region = (grumble::SpriteRegion) {
        .tl = { 135.0f, 31.0f },
        .tr = { 163.0f, 31.0f },
        .bl = { 135.0f, 75.0f },
        .br = { 163.0f, 75.0f }
      }
    },
    
    .walk_left_4 = (grumble::SpriteDefinition){
      .name = "walk_left_4",
      .region = (grumble::SpriteRegion) {
        .tl = { 181.0f, 31.0f },
        .tr = { 209.0f, 31.0f },
        .bl = { 181.0f, 75.0f },
        .br = { 209.0f, 75.0f }
      }
    },
    
    .walk_left_5 = (grumble::SpriteDefinition){
      .name = "walk_left_5",
      .region = (grumble::SpriteRegion) {
        .tl = { 227.0f, 31.0f },
        .tr = { 255.0f, 31.0f },
        .bl = { 227.0f, 75.0f },
        .br = { 255.0f, 75.0f }
      }
    },
    
    .walk_left_6 = (grumble::SpriteDefinition){
      .name = "walk_left_6",
      .region = (grumble::SpriteRegion) {
        .tl = { 47.0f, 1.0f },
        .tr = { 75.0f, 1.0f },
        .bl = { 47.0f, 45.0f },
        .br = { 75.0f, 45.0f }
      }
    },
    
    .walk_right_1 = (grumble::SpriteDefinition){
      .name = "walk_right_1",
      .region = (grumble::SpriteRegion) {
        .tl = { 273.0f, 31.0f },
        .tr = { 301.0f, 31.0f },
        .bl = { 273.0f, 75.0f },
        .br = { 301.0f, 75.0f }
      }
    },
    
    .walk_right_2 = (grumble::SpriteDefinition){
      .name = "walk_right_2",
      .region = (grumble::SpriteRegion) {
        .tl = { 319.0f, 31.0f },
        .tr = { 347.0f, 31.0f },
        .bl = { 319.0f, 75.0f },
        .br = { 347.0f, 75.0f }
      }
    },
    
    .walk_right_3 = (grumble::SpriteDefinition){
      .name = "walk_right_3",
      .region = (grumble::SpriteRegion) {
        .tl = { 93.0f, 1.0f },
        .tr = { 121.0f, 1.0f },
        .bl = { 93.0f, 45.0f },
        .br = { 121.0f, 45.0f }
      }
    },
    
    .walk_right_4 = (grumble::SpriteDefinition){
      .name = "walk_right_4",
      .region = (grumble::SpriteRegion) {
        .tl = { 365.0f, 31.0f },
        .tr = { 393.0f, 31.0f },
        .bl = { 365.0f, 75.0f },
        .br = { 393.0f, 75.0f }
      }
    },
    
    .walk_right_5 = (grumble::SpriteDefinition){
      .name = "walk_right_5",
      .region = (grumble::SpriteRegion) {
        .tl = { 411.0f, 31.0f },
        .tr = { 439.0f, 31.0f },
        .bl = { 411.0f, 75.0f },
        .br = { 439.0f, 75.0f }
      }
    },
    
    .walk_right_6 = (grumble::SpriteDefinition){
      .name = "walk_right_6",
      .region = (grumble::SpriteRegion) {
        .tl = { 457.0f, 31.0f },
        .tr = { 485.0f, 31.0f },
        .bl = { 457.0f, 75.0f },
        .br = { 485.0f, 75.0f }
      }
    },
    
    .walk_up_1 = (grumble::SpriteDefinition){
      .name = "walk_up_1",
      .region = (grumble::SpriteRegion) {
        .tl = { 139.0f, 93.0f },
        .tr = { 169.0f, 93.0f },
        .bl = { 139.0f, 137.0f },
        .br = { 169.0f, 137.0f }
      }
    },
    
    .walk_up_2 = (grumble::SpriteDefinition){
      .name = "walk_up_2",
      .region = (grumble::SpriteRegion) {
        .tl = { 415.0f, 93.0f },
        .tr = { 447.0f, 93.0f },
        .bl = { 415.0f, 139.0f },
        .br = { 447.0f, 139.0f }
      }
    },
    
    .walk_up_3 = (grumble::SpriteDefinition){
      .name = "walk_up_3",
      .region = (grumble::SpriteRegion) {
        .tl = { 185.0f, 93.0f },
        .tr = { 215.0f, 93.0f },
        .bl = { 185.0f, 137.0f },
        .br = { 215.0f, 137.0f }
      }
    },
    
    .walk_up_4 = (grumble::SpriteDefinition){
      .name = "walk_up_4",
      .region = (grumble::SpriteRegion) {
        .tl = { 231.0f, 93.0f },
        .tr = { 261.0f, 93.0f },
        .bl = { 231.0f, 137.0f },
        .br = { 261.0f, 137.0f }
      }
    },
    
    .walk_up_5 = (grumble::SpriteDefinition){
      .name = "walk_up_5",
      .region = (grumble::SpriteRegion) {
        .tl = { 463.0f, 93.0f },
        .tr = { 495.0f, 93.0f },
        .bl = { 463.0f, 139.0f },
        .br = { 495.0f, 139.0f }
      }
    },
    
    .walk_up_6 = (grumble::SpriteDefinition){
      .name = "walk_up_6",
      .region = (grumble::SpriteRegion) {
        .tl = { 277.0f, 93.0f },
        .tr = { 307.0f, 93.0f },
        .bl = { 277.0f, 137.0f },
        .br = { 307.0f, 137.0f }
      }
    },
    
  };
}
// clang-format on