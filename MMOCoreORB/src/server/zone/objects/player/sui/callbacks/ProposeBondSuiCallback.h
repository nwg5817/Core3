/*
 * ProposeUnitySuiCallback.h
 *
 *  Created on: 5/2/2014
 *      Author: Klivian
 */

#ifndef PROPOSEBONDSUICALLBACK_H_
#define PROPOSEBONDSUICALLBACK_H_

#include "server/zone/objects/player/sui/SuiCallback.h"

class ProposeBondSuiCallback : public SuiCallback {

public:

	ProposeBondSuiCallback(ZoneServer* server)
		: SuiCallback(server) {
	}

	void run(CreatureObject* creature, SuiBox* sui, uint32 eventIndex, Vector<UnicodeString>* args) {
		bool cancelPressed = (eventIndex == 1);

		PlayerManager* playerManager = creature->getZoneServer()->getPlayerManager();
		if( playerManager == NULL )
			return;

		if( cancelPressed ){
			playerManager->denyBond( creature );
		}
		else{
			playerManager->acceptBond( creature );
		}

	}
};

#endif /* PROPOSEUNITYSUICALLBACK_H_ */
