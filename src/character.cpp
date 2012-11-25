#include "includeall.h"

Character::Character() : Entity::Entity () {
	health = 100;
	x = y = 1;
	dx = 1;
	dy = 0;

	std::cout << "called Character constructor. Health:" << health << "\n";
}
