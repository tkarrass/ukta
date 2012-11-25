#ifndef MONSTER_H_
#define MONSTER_H_

#include "includeall.h"

class Monster : public Character {

private:
	
public:
	Monster();
	
	virtual void action(Playfield, CharacterList*);

};

#endif

