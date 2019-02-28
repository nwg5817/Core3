/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef PROPOSEBONDEXPIREDTASK_H_
#define PROPOSEBONDEXPIREDTASK_H_

#include "server/zone/objects/creature/CreatureObject.h"
#include "server/zone/objects/player/sessions/ProposeBondSession.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace events {

class ProposeBondExpiredTask : public Task {

	ManagedReference<CreatureObject*> player;

public:
	ProposeBondExpiredTask(CreatureObject* player) : Task() {
		this->player = player;
	}

	void run() {

		if( player == NULL )
			return;

		Locker locker(player);
		player->removePendingTask("propose_bond");

		ManagedReference<ProposeUnitySession*> proposeUnitySession = player->getActiveSession(SessionFacadeType::PROPOSEBOND).castTo<ProposeUnitySession*>();
		if(proposeUnitySession != NULL) {

			if( player->getObjectID() == proposeUnitySession->getAskingPlayer() ){
				player->sendSystemMessage("@forcebond:expire_player"); // "The unity proposal you extended has expired."
			}
			else{
				player->sendSystemMessage("@forcebond:expire_target"); // "The unity proposal extended to you has expired."
			}
			player->dropActiveSession(SessionFacadeType::PROPOSEBOND);
		}
	}
};

} // events
} // creature
} // objects
} // zone
} // server

using namespace server::zone::objects::creature::events;

#endif /*PROPOSEUNITYEXPIREDTASK_H_*/
