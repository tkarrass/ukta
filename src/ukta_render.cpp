#include "Ukta.h"

void Ukta::Render() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glBegin(GL_TRIANGLES);
		glColor3f(1, 0, 0); glVertex3f(0,     0,   0);
		glColor3f(0, 0, 1); glVertex3f(100,   0,   19);
		glColor3f(0, 1, 0); glVertex3f(100, 100,   32);
	glEnd();
	
	SDL_GL_SwapBuffers();
	
}
