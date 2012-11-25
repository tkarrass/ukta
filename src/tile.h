#ifndef TILE_H_
#define TILE_H_

#include "includeall.h"

class Tile {
public:
	bool isCrossable;
	SDL_Color color;

	Tile();
	virtual ~Tile();
};

#endif /* TILE_H_ */
