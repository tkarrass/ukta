/*
 * character_list.cpp
 *
 *  Created on: Nov 25, 2012
 *      Author: lb
 */

#include "character_list.h"

CharacterList::CharacterList() {
	list[0] = new Player();
	for (int i=1; i<10; i++) {
		list[i] = new Monster();
	}
}

CharacterList::~CharacterList() {
	// TODO Auto-generated destructor stub
}

