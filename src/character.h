#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "entity.h"
class Playfield;
class CharacterList;

class Character : public Entity {

private:

public:
	unsigned health;
	int x, y;
	int dx, dy;

	Character();
	void action(Playfield*, CharacterList*);

};

#endif
