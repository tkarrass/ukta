#include "ukta.h"

bool Ukta::Init() {

	if(SDL_Init( SDL_INIT_AUDIO | SDL_INIT_VIDEO ) < 0)		// SDL_INIT_EVERYTHING
	{
		return false;
	}

	SDL_WM_SetCaption( "UkTA", "UkTA" );	// WindowCaption, TaskbarTitle

	if((surfDisplay = SDL_SetVideoMode(GAME_X_RES, GAME_Y_RES, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL)
	{
		return false;
	}
	
	return true;
}

