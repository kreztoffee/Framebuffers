#pragma once
#include <memory>
#include <string>
#include "Window.h"
#include "Renderer.h"
#include "ShaderProgram.h"

class App {
  public:
	void prepare(const std::string& title);
	void mainLoop();
	void cleanUp();
  private:
	std::unique_ptr<ShaderProgram> basicShader;
	std::unique_ptr<Window> window;
	std::unique_ptr<Renderer> renderer;
};
