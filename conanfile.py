from conan import ConanFile, tools
from conans.model.version import Version

class Generator(ConanFile):
  name = "monster-lunch"
  version = "1.0.0"
  settings = "os", "build_type", "arch"
  description = "Cooking tactics game based on grumble"
  author = "Benjamin Wallis"
  requires = [ "grumble/1.0.0", "sdl/2.28.5", "glfw/3.4" ]
  generators = ["CMakeDeps", "CMakeToolchain"]


