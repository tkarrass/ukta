#include "character.h"

Character::Character() : Entity::Entity () {

	health = 100;
	std::cout << "called Character constructor. Health:" <<health<< "\n";

}

