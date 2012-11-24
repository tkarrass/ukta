#include "entity.h"

unsigned Entity::nextID = 1;

Entity::Entity() {

	entityID = nextID;
	nextID ++ ;

	std::cout << "called Entity constructor. entityID:" << entityID << " nextID:" << nextID << "\n";

}

unsigned Entity::getEntityID() {
	return entityID;
}

