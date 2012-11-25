#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "includeall.h"

class Character : public Entity {

public:
	unsigned health;
	int x, y;
	int dx, dy;
	
	Character();
	void action(Playfield, CharacterList*);
	
};

#endif
