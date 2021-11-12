#include "FrameworkHelpers.h"
#include <iostream>
#include "OpenGLHelpers.h"

void initGLEW() {
	glewExperimental = GL_TRUE;
	if (glewInit() != GLEW_OK) {
		std::cerr << "error initializing GLEW\n";
		exit(EXIT_FAILURE);
	}
}

void initGLFW() {
	if (glfwInit() != GLFW_TRUE) {
		std::cerr << "error initializing GLFW\n";
		exit(EXIT_FAILURE);
	}
}
