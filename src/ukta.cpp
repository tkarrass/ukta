#include "Ukta.h"

Ukta::Ukta() {
	GameRunning = true;
	SurfDisplay = NULL;
}

int Ukta::Execute() {
	if(Init() == false) {
		cout << "Init failed!\n";
		return -1;
	}

	SDL_Event sdl_event;

	while(GameRunning) {
		while(SDL_PollEvent(&sdl_event)) {
			Event(&sdl_event);
		}
		Loop();
		Render();
	}

	Cleanup();
	return 0;
}

int main(int argc, char* argv[]) {
	Ukta myApp;
	return myApp.Execute();
}

