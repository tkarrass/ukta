#ifndef PLAYER_H_
#define PLAYER_H_

#include "character.h"
class Playfield;
class CharacterList;

class Player : public Character {

private:

public:
	Player();

	void action(Playfield*, CharacterList*);

};

#endif

