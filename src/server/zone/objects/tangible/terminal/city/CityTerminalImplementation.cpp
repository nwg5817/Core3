/*
 * CityTerminalImplementation.cpp
 *
 *  Created on: Aug 23, 2010
 *      Author: crush
 */

#include "CityTerminal.h"
#include "server/zone/objects/player/PlayerCreature.h"
#include "server/zone/packets/object/ObjectMenuResponse.h"
#include "server/zone/objects/building/city/CityHallObject.h"

void CityTerminalImplementation::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {

	Locker _locker(cityHallObject);

	//Could non-citizens still use the terminal?
	if (!cityHallObject->isMayorOf(player) && !cityHallObject->isCitizenOf(player))
		return;

	menuResponse->addRadialMenuItem(211, 3, "@city/city:city_info"); //City Info
	menuResponse->addRadialMenuItemToRadialID(211, 212, 3, "@city/city:city_status"); //Status Report
	menuResponse->addRadialMenuItemToRadialID(211, 213, 3, "@city/city:city_citizens"); //Citizenship Report
	menuResponse->addRadialMenuItemToRadialID(211, 214, 3, "@city/city:city_structures"); //Structure Report
	menuResponse->addRadialMenuItemToRadialID(211, 215, 3, "@city/city:treasury_status"); //Treasury Report

	menuResponse->addRadialMenuItem(216, 3, "@city/city:city_management"); //City Management
	menuResponse->addRadialMenuItemToRadialID(216, 217, 3, "@city/city:city_name"); //Change City Name

	//TODO: This should be a toggle.
	menuResponse->addRadialMenuItemToRadialID(216, 222, 3, "@city/city:city_unregister"); //Unregister City
	//menuResponse->addRadialMenuItemToRadialID(216, 222, 3, "@city/city:city_register"); //Register City

	menuResponse->addRadialMenuItemToRadialID(216, 218, 3, "@city/city:city_militia"); //Manage Militia

	menuResponse->addRadialMenuItemToRadialID(216, 219, 3, "@city/city:treasury_taxes"); //Adjust Taxes

	menuResponse->addRadialMenuItemToRadialID(216, 220, 3, "@city/city:treasury_deposit"); //Treasury Deposit
	menuResponse->addRadialMenuItemToRadialID(216, 221, 3, "@city/city:treasury_withdraw"); //Treasury Withdraw

	menuResponse->addRadialMenuItemToRadialID(216, 223, 3, "@city/city:city_specializations"); //City Specialization
}

int CityTerminalImplementation::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {

	Locker _locker(cityHallObject);

	if (!cityHallObject->isMayorOf(player) && !cityHallObject->isCitizenOf(player))
		return 0;

	switch (selectedID) {
	case 211:
	case 212: //Status Report
		cityHallObject->sendStatusTo(player);
		break;

	case 213: //Citizenship Report
		cityHallObject->sendCitizenshipReportTo(player);
		break;

	case 214: //Structure Report
		cityHallObject->sendStructureReportTo(player);
		break;

	case 215: //Treasury Report
		cityHallObject->sendTreasuryReportTo(player);
		break;

	case 216:
	case 217: //Change City Name
		cityHallObject->sendChangeCityNameTo(player);
		break;

	case 222: //Unregister/Register
		cityHallObject->toggleCityRegistration();
		break;

	case 218: //Manage Militia
		cityHallObject->sendManageMilitiaTo(player);
		break;

	case 219: //Adjust Taxes
		cityHallObject->sendAdjustTaxesTo(player);
		break;

	case 220: //Treasury Deposit
		cityHallObject->sendTreasuryDepositTo(player);
		break;

	case 221: //Treasure Withdrawal
		cityHallObject->sendTreasuryWithdrawalTo(player);
		break;

	case 223: //City Specialization
		cityHallObject->sendCitySpecializationSelectionTo(player);
		break;

	default:
		TerminalImplementation::handleObjectMenuSelect(player, selectedID);
		break;
	}

	return 0;
}
