#pragma once

#include "../glfw/glfw.hpp"
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
