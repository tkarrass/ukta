#ifndef MONSTER_H_
#define MONSTER_H_

#include "character.h"
class Playfield;
class CharacterList;

class Monster : public Character {

private:

public:
	Monster();

	void action(Playfield*, CharacterList*);


};

#endif

