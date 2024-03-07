#pragma once

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include <glm/gtx/string_cast.hpp>
#include <grumble/logging/Logger.hpp>

class GLFWApplication {
public:
  GLFWApplication();
  ~GLFWApplication();

  void setup();
  void prepareFrame() const;
  void handleInput() const;
  void presentFrame() const;
  void teardown();

  bool isSetup() const;

  bool shouldTerminate() const;

private:
  GLFWwindow *_window;
};
