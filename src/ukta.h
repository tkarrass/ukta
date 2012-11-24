#ifndef UKTA_H_
#define UKTA_H_

#include <iostream>
#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>

using std::cout;
using std::endl;

class ukta {
	
	bool		gameRunning;
	SDL_Surface*	surfDisplay;
	static const int GAME_X_RES = 800;
	static const int GAME_Y_RES = 600;
	
public:
	ukta();
	int execute();
	
	bool init();
	void event(SDL_Event* sdl_event);
	void loop();
	void render();
	void cleanup();
	
};

#endif

