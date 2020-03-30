#include <iostream>
#include "window.h"
#include "maths.h"

int main()
{
	using namespace engine;
	using namespace graphics;

	Window window("test", 800, 600);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	while (!window.closed()) {

		
		double x, y; 
		window.getMousePosition(x, y);
		std::cout << x << "," << y << std::endl;

		window.clear();
		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.0f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();
		window.update();
	}

	return 0;
}
