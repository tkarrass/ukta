#include "player.h"

Player::Player() : Entity::Entity () {

	health = 100;
	std::cout << "called Player constructor. Health:" << health << "\n";

}

