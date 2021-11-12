#include "GlfwWindow.h"
#include <iostream>

void GlfwWindow::create(int x, int y, int width, int height, const std::string& title) {
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
	if (!window)
	{
		std::cerr << "Window or context creation failed";
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);
}

void GlfwWindow::show() {
}

void GlfwWindow::swapBuffers() {
	glfwSwapBuffers(window);
}

void GlfwWindow::hide() {
}

bool GlfwWindow::shouldClose() {
	return glfwWindowShouldClose(window) != 0;
}

void GlfwWindow::cleanUp() {
	glfwDestroyWindow(window);
}
