#include "ukta.h"
#include "player.h"

Ukta::Ukta() {
	gameRunning = true;
	surfDisplay = NULL;
}

int Ukta::Execute() {
	if(Init() == false) {
		cout << "Init failed!\n";
		return -1;
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
	Player* player = new Player();
	Player* player2 = new Player();
	Player* player3 = new Player();

	Ukta myUkta;
	return myUkta.Execute();
}

