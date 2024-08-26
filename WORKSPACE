load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "glfw_lib",
    url = "https://github.com/glfw/glfw/releases/download/3.4/glfw-3.4.zip",
    strip_prefix = "glfw-3.4",
    build_file = "@//third-party:glfw.BUILD",
    sha256 = "B5EC004B2712FD08E8861DC271428F048775200A2DF719CCF575143BA749A3E9",
)

http_archive(
    name = "glew_lib",
    url = "https://github.com/nigels-com/glew/releases/download/glew-2.2.0/glew-2.2.0.zip",
    strip_prefix = "glew-2.2.0",
    build_file = "@//third-party:glew.BUILD",
    sha256 = "A9046A913774395A095EDCC0B0AC2D81C3AACCA61787B39839B941E9BE14E0D4",
)
