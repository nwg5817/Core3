
#ifndef REMOVEBONDTASK_H_
#define REMOVEBONDTASK_H_

#include "server/zone/objects/player/PlayerObject.h"

class RemoveBondTask : public Task {
	ManagedReference<CreatureObject*> creature;

public:
	RemoveBondTask(CreatureObject* creatureObject) : Task() {
		creature = creatureObject;
	}

	void run() {
		if (creature == NULL)
			return;

		Locker locker(creature);

		PlayerObject* ghost = creature->getPlayerObject().get();
		if (ghost == NULL)
			return;

		ghost->removeMaster();
		ghost->removePadawan();
	}
};

#endif /* REMOVEBONDTASK_H_ */
