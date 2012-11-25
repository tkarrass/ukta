#include "includeall.h"

void Ukta::Event(SDL_Event* sdl_event) {
	
	if(sdl_event->type == SDL_QUIT) {
		gameRunning = false;
	}
	if(sdl_event->type == SDL_KEYDOWN) {
		if(sdl_event->key.keysym.sym == SDLK_DOWN) {
			fprintf(stderr, "Key DOWN");
		}
	}
	if(sdl_event->type == SDL_KEYUP) {
	}

}

