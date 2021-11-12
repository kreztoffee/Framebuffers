#include "App.h"
#include "FrameworkHelpers.h"
#include "GlfwWindow.h"
#include "OpenGLRenderer.h"

void App::prepare(const std::string& title) {
	initGLFW();
	window = std::make_unique<GlfwWindow>();
	window->create(0, 0, 640, 480, title);
	initGLEW();
	renderer = std::make_unique<OpenGLRenderer>();
}

void App::mainLoop() {
	while (!window->shouldClose()) {
		renderer->render();
		window->swapBuffers();
		glfwPollEvents();
	}
}

void App::cleanUp() {
	renderer->cleanUp();
	window->cleanUp();
}
