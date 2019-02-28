/*
 * ConfirmDivorceSuiCallback.h
 *
 *  Created on: 6/8/2014
 *      Author: Klivian
 */

#ifndef CONFIRMUNBONDSUICALLBACK_H_
#define CONFIRMUNBONDSUICALLBACK_H_

#include "server/zone/objects/player/sui/SuiCallback.h"

class ConfirmUnbondSuiCallback : public SuiCallback {

public:

	ConfirmUnbondSuiCallback(ZoneServer* server)
		: SuiCallback(server) {
	}

	void run(CreatureObject* creature, SuiBox* sui, uint32 eventIndex, Vector<UnicodeString>* args) {
		bool cancelPressed = (eventIndex == 1);

		PlayerManager* playerManager = creature->getZoneServer()->getPlayerManager();
		if( playerManager == NULL )
			return;

		if( !cancelPressed ){
			playerManager->grantUnbond( creature );
		}

	}
};

#endif /* CONFIRMDIVORCESUICALLBACK_H_ */
