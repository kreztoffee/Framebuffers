#pragma once

class Renderer {
  public:
	virtual ~Renderer();
	virtual void prepare() = 0;
	virtual void render() = 0;
	virtual void cleanUp() = 0;
};
