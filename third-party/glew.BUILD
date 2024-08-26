package(default_visibility=["//visibility:public"])

cc_library(
  name = "glew",
  includes = [
    "include",
  ],
  srcs = [
    "src/glew.c",
    "src/glewinfo.c",
    "src/visualinfo.c",
  ],
  hdrs = [
    "include/GL/eglew.h",
    "include/GL/glew.h",
    "include/GL/glxew.h",
    "include/GL/wglew.h",
  ],
  copts = [
      "-DGLEW_STATIC",
      "-DGLEW_NO_GLU",
  ],
  linkopts = [
    "OpenGL32.Lib",
  ],
)
