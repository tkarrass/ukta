#include "ukta.h"
#include "monster.h"

Monster::Monster() : Character::Character () {

	x = (random() & 0xFFF) % (playfieldSize-2) + 1;
	y = (random() & 0xFFF) % (playfieldSize-2) + 1;

	if (DEBUG)
		std::cout << "called Monster constructor.\n";

}

void Monster::action(Playfield pf, CharacterList* chars)
{
	if (pf.tiles[x+dx][y+dy].isCrossable)
	{
		x += dx;
		y += dy;
	} else {
		int t = dx;
		dx = -dy;
		dy = t;
	}
}

