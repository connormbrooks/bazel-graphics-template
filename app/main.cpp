#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main() {
  if (!glfwInit())
  {
      std::cerr << "GLFW failed to initialize" << std::endl;
      exit(1);
  }

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  GLFWwindow* window = glfwCreateWindow(300, 180, "Hello, Window", nullptr, nullptr);
  if (!window) {
    std::cerr << "GLFW failed to create window" << std::endl;
    glfwTerminate();
    exit(1);
  }

  glfwMakeContextCurrent(window);

  GLenum err = glewInit();
  if (GLEW_OK != err) {
      std::cerr << "GLEW failed to initialize: " << glewGetErrorString(err) << std::endl;
      glfwDestroyWindow(window);
      glfwTerminate();
      return -1;
  }

  while (!glfwWindowShouldClose(window)) {
      glfwSwapBuffers(window);
      glfwPollEvents();
  }

  glfwDestroyWindow(window);
  glfwTerminate();
  return 0;
}
