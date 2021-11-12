#pragma once
#include <string>

class Window {
  public:
	virtual ~Window();
	virtual void create(int x, int y, int width, int height, const std::string& title) = 0;
	virtual void show() = 0;
	virtual void swapBuffers() = 0;
	virtual void hide() = 0;
	virtual bool shouldClose() = 0;
	virtual void cleanUp() = 0;
};
