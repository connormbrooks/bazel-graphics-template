package(default_visibility=["//visibility:public"])

cc_library(
  name = "glfw",
  srcs = glob([
    "src/*.c",
  ]),
  hdrs = glob([
    "include/GLFW/glfw3.h",
    "include/GLFW/glfw3native.h",
    "src/egl_context.h",
    "src/internal.h",
    "src/osmesa_context.h",
    "src/mappings.h",
    "src/xkb_unicode.h",
    "src/win32_joystick.h",
    "src/win32_platform.h",
    "src/wgl_context.h",
    "src/platform.h",
    "src/null_platform.h",
    "src/null_joystick.h",
    "src/win32_thread.h",
    "src/win32_time.h",
  ]),
  defines = [
    "_GLFW_WIN32",
  ],
  includes = ["include"],
  copts = [
      "-D_GLFW_WIN32",
      "-D_GLFW_USE_OPENGL",
      "-DGLEW_STATIC",
  ],
  linkopts = [
    "-DEFAULTLIB:user32.lib",
    "-DEFAULTLIB:gdi32.lib",
    "-DEFAULTLIB:shell32.lib",
    "-DEFAULTLIB:kernel32.lib",
  ],
)
