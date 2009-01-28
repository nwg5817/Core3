/*
 *	server/zone/objects/tangible/crafting/factorycrate/FactoryCrate.h generated by engine3 IDL compiler 0.55
 */

#ifndef FACTORYCRATE_H_
#define FACTORYCRATE_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/service/Message.h"

class Player;

class Component;

class CreatureObject;

class TangibleObject;

#include "../../TangibleObject.h"

class FactoryCrate : public TangibleObject {
public:
	FactoryCrate(unsigned long long oid, unsigned int tempCRC, const UnicodeString& n, const String& tempn);

	FactoryCrate(CreatureObject* creature, unsigned int tempCRC, const UnicodeString& n, const String& tempn);

	void generateAttributes(Player* player);

	int useObject(Player* player);

	void sendTo(Player* player, bool doClose);

	void sendDeltas(Player* player);

	void linkTangibleObject(TangibleObject* item);

	TangibleObject* getLinkedItem();

	void setLinkedItem(TangibleObject* item);

protected:
	FactoryCrate(DummyConstructorParameter* param);

	virtual ~FactoryCrate();

	friend class FactoryCrateHelper;
};

class FactoryCrateImplementation;

class FactoryCrateAdapter : public TangibleObjectAdapter {
public:
	FactoryCrateAdapter(FactoryCrateImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void generateAttributes(Player* player);

	int useObject(Player* player);

	void sendTo(Player* player, bool doClose);

	void sendDeltas(Player* player);

	void linkTangibleObject(TangibleObject* item);

	TangibleObject* getLinkedItem();

	void setLinkedItem(TangibleObject* item);

};

class FactoryCrateHelper : public DistributedObjectClassHelper, public Singleton<FactoryCrateHelper> {
	static FactoryCrateHelper* staticInitializer;

public:
	FactoryCrateHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<FactoryCrateHelper>;
};

#include "../../TangibleObjectImplementation.h"

class FactoryCrateServant : public TangibleObjectImplementation {
public:
	FactoryCrate* _this;

public:
	FactoryCrateServant(unsigned long long oid, unsigned int tempCRC, const UnicodeString& n, const String& tempn, int tp);
	FactoryCrateServant(CreatureObject* creature, unsigned int tempCRC, const UnicodeString& n, const String& tempn, int tp);
	virtual ~FactoryCrateServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*FACTORYCRATE_H_*/
