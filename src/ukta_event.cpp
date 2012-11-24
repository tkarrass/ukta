#include "ukta.h"

void Ukta::Event(SDL_Event* sdl_event) {
	
	if(sdl_event->type == SDL_QUIT) {
		gameRunning = false;
	}

}

