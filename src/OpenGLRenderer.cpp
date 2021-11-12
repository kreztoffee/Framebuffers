#include "OpenGLRenderer.h"

OpenGLRenderer::OpenGLRenderer()
	: Renderer() {
}

void OpenGLRenderer::prepare() {

}

void OpenGLRenderer::render() {
	const GLfloat clear_color[] = {0.2f, 0.2f, 0.5f, 1.0f};
	glClearBufferfv(GL_COLOR, 0, clear_color);
}

void OpenGLRenderer::cleanUp() {

}
