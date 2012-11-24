#ifndef UKTA_H_
#define UKTA_H_

#define DEBUG true

#include <iostream>
#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>

using std::cout;
using std::endl;

class Ukta {
	
	bool		gameRunning;
	SDL_Surface*	surfDisplay;
	static const int GAME_X_RES = 640;
	static const int GAME_Y_RES = 480;
	
public:
	//
	Ukta();
	int Execute();
	
	//	
	bool Init();
	void Event(SDL_Event* sdl_event);
	void Loop();
	void Render();
	void Cleanup();
	
	// util
	//void DrawPixel(SDL_Surface*, Uint8, Uint8, Uint8);
};

#endif

