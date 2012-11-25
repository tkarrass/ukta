#ifndef PLAYFIELD_H_
#define PLAYFIELD_H_

#include "tile.h"
class Playfield;

#define playfieldSize 10
const int startx = 5;
const int starty = 5;

class Playfield {
public:
	Tile tiles[playfieldSize][playfieldSize];

	Playfield();
	virtual ~Playfield();

};

#endif /* PLAYFIELD_H_ */
