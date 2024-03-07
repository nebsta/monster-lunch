#include "GLFWApplication.hpp"
#include <GLFW/glfw3.h>

void error_callback(int error, const char *description) {
  grumble::Logger::error(std::string(description));
}

GLFWApplication::GLFWApplication() {}

GLFWApplication::~GLFWApplication() {}

void GLFWApplication::setup() {
  glfwSetErrorCallback(error_callback);

  if (!glfwInit()) {
    grumble::Logger::error("Unable to initialize glfw");
    return;
  }

  _window = glfwCreateWindow(640, 640, "Monster lunch", nullptr, nullptr);
  if (!_window) {
    grumble::Logger::error("Error encountered when creating windows");
    teardown();
    return;
  }

  glfwMakeContextCurrent(_window);

  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    grumble::Logger::error("Unable to load glad");
    teardown();
    return;
  }
}

void GLFWApplication::prepareFrame() const { glClear(GL_COLOR_BUFFER_BIT); }

void GLFWApplication::handleInput() const { glfwPollEvents(); }

void GLFWApplication::presentFrame() const { glfwSwapBuffers(_window); }

void GLFWApplication::teardown() { glfwTerminate(); }

bool GLFWApplication::isSetup() const { return false; }

bool GLFWApplication::shouldTerminate() const {
  return glfwWindowShouldClose(_window);
}
