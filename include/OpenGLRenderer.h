#pragma once
#include "OpenGLHelpers.h"
#include "Renderer.h"

class OpenGLRenderer : public Renderer {
  public:
	OpenGLRenderer();
	void prepare() override;
	void render() override;
	void cleanUp() override;
};
