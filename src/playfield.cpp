#include "includeall.h"

Playfield::Playfield() {
	for (int x = 0 ; x < playfieldSize; x++)
		for (int y = 0 ; y < playfieldSize; y++) {
			tiles[x][y].isCrossable = (x!=0 && y!=0 && x!=playfieldSize-1 && y!=playfieldSize-1 && (x+y)%17!=0 );
			tiles[x][y].color.r = ((float)x / (float)playfieldSize) * 255;
			tiles[x][y].color.g = ((float)y / (float)playfieldSize) * 255;
		}

}

Playfield::~Playfield() {

}
