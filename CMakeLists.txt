cmake_minimum_required(VERSION 3.20)
project(Framebuffers VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 3.3 REQUIRED)

add_executable(Framebuffers)

target_sources(Framebuffers PRIVATE
        main.cpp)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)
target_compile_definitions(Framebuffers PRIVATE
        GL_SILENCE_DEPRECATION
        )
target_compile_options(Framebuffers PUBLIC -Wall -Wextra -Wpedantic)
target_include_directories(Framebuffers PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        ${GLEW_INCLUDE_DIR}
        ${OPENGL_INCLUDE_DIR})
target_link_libraries(Framebuffers PUBLIC
        ${GLEW_LIBRARIES}
        ${OPENGL_LIBRARIES}
        glfw)
