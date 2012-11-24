#include "ukta.h"
#include "monster.h"

Monster::Monster() : Character::Character () {

	if (DEBUG)
		std::cout << "called Monster constructor. ROAR!\n";

}

