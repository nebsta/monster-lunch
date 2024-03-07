from conan import ConanFile, tools
from conans.model.version import Version
from conan.tools.cmake import cmake_layout

class Generator(ConanFile):
  name = "monster-lunch"
  version = "1.0.0"
  settings = "os", "build_type", "arch"
  description = "Cooking tactics game based on grumble"
  author = "Benjamin Wallis"
  requires = [ "grumble/1.0.0", "sdl/2.28.5", "glfw/3.4", "glad/0.1.36" ]
  generators = ["CMakeDeps", "CMakeToolchain"]

  def configure(self):
    self.options['glad'].spec = 'gl'
    self.options['glad'].gl_profile = 'core'
    self.options['glad'].gl_version = '4.6'
