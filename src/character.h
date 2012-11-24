#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <iostream>
#include "entity.h"

class Character : public Entity {

private:
	unsigned health;	
	
public:
	Character();
	
};

#endif

