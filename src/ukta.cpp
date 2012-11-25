#include "includeall.h"

int keyboardDx, keyboardDy;

Ukta::Ukta() {
	gameRunning = true;
	surfDisplay = NULL;
}

int Ukta::Execute() {
	if(Init() == false) {
		cout << "Init failed!\n";
		return 1;
	}

	SDL_Event sdl_event;

	while(gameRunning) {
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
	if (DEBUG) {
		Entity* entity = new Entity();
		Player* player = new Player();
		Monster* monster = new Monster();
	}

	Ukta myUkta;
	return myUkta.Execute();
}

