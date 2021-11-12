#include <iostream>
#include "App.h"

int main() {
	App app;
	app.prepare("Framebuffers");
	app.mainLoop();
	app.cleanUp();
	return EXIT_SUCCESS;
}
