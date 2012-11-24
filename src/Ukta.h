#ifndef UKTA_H_
#define UKTA_H_

#include <iostream>
#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>

using std::cout;
using std::endl;

class Ukta {
	
	bool			GameRunning;
	SDL_Surface*	SurfDisplay;
	static const int GAME_X_RES = 800;
	static const int GAME_Y_RES = 600;
	
public:
	Ukta();
	int Execute();
	
	bool Init();
	void Event(SDL_Event* sdl_event);
	void Loop();
	void Render();
	void Cleanup();
	
};

#endif

