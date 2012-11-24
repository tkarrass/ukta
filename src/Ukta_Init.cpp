#include "Ukta.h"

bool Ukta::Init() {

	if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		return false;
	}

/* OpenGL context begin */
	/* These settings need to be set *before* calling SDL_SetVideoMode */
	SDL_GL_SetAttribute(SDL_GL_RED_SIZE,           8);
	SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE,         8);
	SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE,          8);
	SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE,         8);

	SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE,        16);		// color depth (should be 16/32)
	SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE,       32);
	
	SDL_GL_SetAttribute(SDL_GL_ACCUM_RED_SIZE,     8);
	SDL_GL_SetAttribute(SDL_GL_ACCUM_GREEN_SIZE,   8);
	SDL_GL_SetAttribute(SDL_GL_ACCUM_BLUE_SIZE,    8);
	SDL_GL_SetAttribute(SDL_GL_ACCUM_ALPHA_SIZE,   8);
	
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER,       1);		// Activate Doublebuffering
	SDL_WM_SetCaption( "LOL", "ROFL" );						// Arguments: WindowCaption, TaskbarTitle
	
	/* BOTH of these functions cause Ukta::Init() to FAIL! */
	//	SDL_GL_SetAttribute(SDL_GL_MULTISAMPLEBUFFERS, 1);
	//	SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, 2);		// AA setting
/* OpenGL context end */

//	if((SurfDisplay = SDL_SetVideoMode(GAME_X_RES, GAME_Y_RES, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL)						// without   OpenGL
	if((SurfDisplay = SDL_SetVideoMode(GAME_X_RES, GAME_Y_RES, 32, SDL_HWSURFACE | SDL_GL_DOUBLEBUFFER | SDL_OPENGL)) == NULL)	// implement OpenGL
	{
		return false;
	}

/* Actually start OpenGL begin */
	// Parameters: R, G, B, Alpha
	glClearColor(0, 0, 0, 0);
	// The depth buffer is used to determine the Z-axis of a pixel
	glClearDepth(1.0f);		// ??
	// Viewport = Window area for OpenGL
	// Arguments: X, Y, width, height
	glViewport(0, 0, GAME_X_RES, GAME_Y_RES);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();							// "reset matrix"
	
	// Arguments: Left, Right, Bottom, Top, Near, Far
	// Set up a "2D Perspective"
	// For 2D use glOrtho; For 3D use gluPerspective
	glOrtho(0, GAME_X_RES, GAME_Y_RES, 0, 1, -1);
	
	glMatrixMode(GL_MODELVIEW);
	
	glEnable(GL_TEXTURE_2D);
	
	glLoadIdentity();
/* Actually start OpenGL end */
	
	return true;
}

