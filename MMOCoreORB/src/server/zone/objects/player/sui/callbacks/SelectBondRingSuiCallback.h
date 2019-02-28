/*
 * SelectBondRingSuiCallback.h
 *
 *  Created on: 5/3/2014
 *      Author: Klivian
 */

#ifndef SELECTBONDRINGSUICALLBACK_H_
#define SELECTBONDRINGSUICALLBACK_H_

#include "server/zone/objects/player/sui/SuiCallback.h"

class SelectBondRingSuiCallback : public SuiCallback {

public:
	SelectBondRingSuiCallback(ZoneServer* serv) :
		SuiCallback(serv) {

	}

	void run(CreatureObject* player, SuiBox* suiBox, uint32 eventIndex, Vector<UnicodeString>* args) {
		bool cancelPressed = (eventIndex == 1);

		PlayerManager* playerManager = player->getZoneServer()->getPlayerManager();
		if( !suiBox->isListBox() || playerManager == NULL )
			return;

		if( cancelPressed ){
			playerManager->denyBond( player );
			return;
		}

		if (args->size() < 1)
			return;

		int index = Integer::valueOf(args->get(0).toString());

		SuiListBox* listBox = cast<SuiListBox*>( suiBox);
		uint64 itemId = listBox->getMenuObjectID(index);

		// Finalize bond proposal
		playerManager->completeBond( player, itemId );

	}
};


#endif /* SELECTBONDRINGSUICALLBACK_H_ */
