#ifndef CHARACTER_LIST_H_
#define CHARACTER_LIST_H_

#include "includeall.h"

#define MAX_CHARACTERS 100

class CharacterList {
public:
	Character *list[MAX_CHARACTERS];

	CharacterList();
	virtual ~CharacterList();
};

#endif /* CHARACTER_LIST_H_ */
