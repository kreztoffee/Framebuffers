#pragma once
#include "Window.h"
#include "OpenGLHelpers.h"
#include <string>

class GlfwWindow : public Window {
  public:
	void create(int x, int y, int width, int height, const std::string& title) override;
	void show() override;
	void swapBuffers() override;
	void hide() override;
	bool shouldClose() override;
	void cleanUp() override;

  private:
	GLFWwindow* window = nullptr;
};
