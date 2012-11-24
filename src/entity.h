#ifndef ENTITY_H_
#define ENTITY_H_

#include <iostream>

// abstract Entity superclass
class Entity {

protected:
	unsigned entityID;
	static unsigned nextID;

public:
	Entity();
//	~Entity();
	unsigned getEntityID();

};

#endif

