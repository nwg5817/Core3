/*
 *	server/zone/objects/scene/SceneObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef SCENEOBJECT_H_
#define SCENEOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

namespace server {
namespace zone {

class ZoneProcessServerImplementation;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneClientSession;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/scene/variables/StringId.h"

#include "engine/core/ManagedObject.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

#include "engine/util/Coordinate.h"

#include "engine/util/QuadTreeEntry.h"

#include "system/io/Serializable.h"

#include "engine/lua/Lua.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

#include "system/util/VectorMap.h"

#include "engine/util/Quaternion.h"

#include "engine/service/proto/BaseMessage.h"

#include "engine/core/ManagedReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject : public ManagedObject {
public:
	SceneObject(LuaObject* templateData);

	void wlock();

	void unlock();

	void redeploy();

	void scheduleUndeploy();

	void undeploy();

	void removeUndeploymentEvent();

	bool isPlayerCreature();

	bool addObject(SceneObject* object);

	bool removeObject(SceneObject* object);

	void create(ZoneClientSession* client);

	void destroy(ZoneClientSession* client);

	void close(ZoneClientSession* client);

	void link(ZoneClientSession* client, unsigned int containmentType);

	void sendTo(SceneObject* player, bool doClose);

	void sendBaselinesTo(SceneObject* player);

	void sendToOwner(bool doClose);

	void insertToZone(Zone* zone);

	void sendMessage(BaseMessage* msg);

	unsigned long long getObjectID();

	float getPositionX();

	float getPositionZ();

	float getPositionY();

	float getDirectionX();

	float getDirectionZ();

	float getDirectionY();

	float getDirectionW();

	unsigned int getObjectCRC();

	StringId* getObjectName();

	int getArrangementDescriptorSize();

	String getArrangementDescriptor(int idx);

	String getSlotDescriptor(int idx);

	SceneObject* getSlot(String& slot);

	int getSlotDescriptorSize();

	ZoneClientSession* getClient();

	unsigned int getGameObjectType();

	Zone* getZone();

	void setPosition(float x, float z, float y);

	void setGameObjectType(unsigned int type);

	void setObjectCRC(unsigned int objCRC);

	void setParent(SceneObject* par);

	void setZoneProcessServer(ZoneProcessServerImplementation* srv);

	void setObjectID(unsigned long long objectid);

	void setObjectName(UnicodeString& name);

	void setZone(Zone* zon);

protected:
	SceneObject(DummyConstructorParameter* param);

	virtual ~SceneObject();

	String _return_getArrangementDescriptor;
	String _return_getSlotDescriptor;

	friend class SceneObjectHelper;
};

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObjectImplementation : public ManagedObjectImplementation, public QuadTreeEntry, public Logger {
protected:
	ZoneProcessServerImplementation* server;

	Zone* zone;

	SceneObject* parent;

	VectorMap<String, SceneObject* >* containmentSlots;

	unsigned int objectCRC;

	Quaternion* direction;

	Vector<String >* arrangementDescriptors;

	Vector<String >* slotDescriptors;

	StringId* objectName;

	StringId* detailedDescription;

	unsigned int containerType;

	unsigned int containerVolumeLimit;

	unsigned int gameObjectType;

public:
	static const int CELLOBJECT = 0x11;

	static const int ARMOR = 0x100;

	static const int BODYARMOR = 0x101;

	static const int HEADARMOR = 0x102;

	static const int MISCARMOR = 0x103;

	static const int LEGARMOR = 0x104;

	static const int ARMARMOR = 0x105;

	static const int HANDARMOR = 0x106;

	static const int FOOTARMOR = 0x107;

	static const int SHIELDGENERATOR = 0x108;

	static const int BUILDING = 0x200;

	static const int MUNICIPALBUILDING = 0x201;

	static const int FACTIONPERKBUILDING = 0x203;

	static const int CREATURE = 0x400;

	static const int NPCCREATURE = 0x401;

	static const int DROIDCREATURE = 0x402;

	static const int PROBOTCREATURE = 0x403;

	static const int PLAYERCREATURE = 0x409;

	static const int INTANGIBLE = 0x800;

	static const int DRAFTSCHEMATIC = 0x801;

	static const int MANUFACTURINGSCHEMATIC = 0x802;

	static const int MISSIONOBJECT = 0x803;

	static const int TOKEN = 0x804;

	static const int WAYPOINT = 0x805;

	static const int DATA2 = 0x806;

	static const int PETCONTROLDEVICE = 0x807;

	static const int VEHICLECONTROLDEVICE = 0x808;

	static const int SHIPCONTROLDEVICE = 0x80A;

	static const int DROIDCONTROLDEVICE = 0x80B;

	static const int INSTALLATION = 0x1000;

	static const int FACTORY = 0x1001;

	static const int GENERATOR = 0x1002;

	static const int HARVESTER = 0x1003;

	static const int TURRET = 0x1004;

	static const int MINEFIELD = 0x1005;

	static const int TANGIBLE = 0x2000;

	static const int AMMUNITION = 0x2001;

	static const int CHEMICAL = 0x2002;

	static const int CONTAINER = 0x2005;

	static const int CRAFTINGSTATION = 0x2006;

	static const int ELECTRONICS = 0x2008;

	static const int FLORA = 0x2009;

	static const int FOOD = 0x200A;

	static const int FURNITURE = 0x200B;

	static const int INSTRUMENT = 0x200C;

	static const int PHARMACEUTICAL = 0x200D;

	static const int SIGN = 0x200F;

	static const int COUNTER = 0x2010;

	static const int FACTORYCRATE = 0x2011;

	static const int TRAVELTICKET = 0x2012;

	static const int GENERICITEM = 0x2013;

	static const int TRAP = 0x2014;

	static const int WEARABLECONTAINER = 0x2015;

	static const int FISHINGPOLE = 0x2016;

	static const int FISHINGBAIT = 0x2017;

	static const int DRINK = 0x2018;

	static const int FIREWORK = 0x2019;

	static const int ITEM = 0x201A;

	static const int PETMEDECINE = 0x201B;

	static const int FIREWORKSHOW = 0x201C;

	static const int CLOTHINGATTACHMENT = 0x201D;

	static const int LIVESAMPLE = 0x201E;

	static const int ARMORATTACHMENT = 0x201F;

	static const int COMMUNITYCRAFTINGPROJECT = 0x2020;

	static const int CRYSTAL = 0x2021;

	static const int DROIDPROGRAMMINGCHIP = 0x2022;

	static const int ASTEROID = 0x2023;

	static const int PILOTCHAIR = 0x2024;

	static const int OPERATIONSCHAIR = 0x2025;

	static const int TURRETACCESSLADDER = 0x2026;

	static const int CONTAINER2 = 0x2027;

	static const int CAMOKIT = 0x2028;

	static const int TERMINAL = 0x4000;

	static const int BANK = 0x4001;

	static const int BAZAAR = 0x4002;

	static const int CLONING = 0x4003;

	static const int INSURANCE = 0x4004;

	static const int MISSIONTERMINAL = 0x4006;

	static const int PLAYERTERMINALSTRUCTURE = 0x4008;

	static const int SHIPPINGTERMINAL = 0x4009;

	static const int SPACETERMINAL = 0x400B;

	static const int INTERACTIVETERMINAL = 0x400C;

	static const int TOOL = 0x8000;

	static const int CRAFTINGTOOL = 0x8001;

	static const int SURVEYTOOL = 0x8002;

	static const int REPAIRTOOL = 0x8003;

	static const int CAMPKIT = 0x8004;

	static const int SHIPCOMPONENTREPAIRITEM = 0x8005;

	static const int VEHICLE = 0x10000;

	static const int HOVERVEHICLE = 0x10001;

	static const int WEAPON = 0x20000;

	static const int MELEEWEAPON = 0x20001;

	static const int RANGEDWEAPON = 0x20002;

	static const int THROWNWEAPON = 0x20003;

	static const int HEAVYWEAPON = 0x20004;

	static const int MINE = 0x20005;

	static const int SPECIALHEAVYWEAPON = 0x20006;

	static const int ONEHANDMELEEWEAPON = 0x20007;

	static const int TWOHANDMELEEWEAPON = 0x20008;

	static const int POLEARM = 0x20009;

	static const int PISTOL = 0x2000A;

	static const int CARBINE = 0x2000B;

	static const int RIFLE = 0x2000C;

	static const int GRENADE = 0x2000E;

	static const int COMPONENT = 0x40000;

	static const int ARMORCOMPONENT = 0x40001;

	static const int CHEMISTRYCOMPONENT = 0x40002;

	static const int CLOTHINGCOMPONENT = 0x40003;

	static const int COMMUNITYCRAFTINGCOMPONENT = 0x40004;

	static const int DROIDCOMPONENT = 0x40005;

	static const int ELECTRONICSCOMPONENT = 0x40006;

	static const int GENETICCOMPONENT = 0x40007;

	static const int LIGHTSABERCRYSTAL = 0x40008;

	static const int MELEEWEAPONCOMPONENT = 0x40009;

	static const int MUNITIONCOMPONENT = 0x4000A;

	static const int RANGEDWEAPONCOMPONENT = 0x4000B;

	static const int STRUVTURECOMPONENT = 0x4000C;

	static const int TISSUECOMPONENT = 0x4000D;

	static const int WEAPONPOWERUP = 0x80000;

	static const int MELEEWEAPONPOWERUP = 0x80001;

	static const int RANGEDWEAPONPOWERUP = 0x80002;

	static const int THROWNWEAPONPOWERUP = 0x80003;

	static const int HEAVYWEAPONPOWERUP = 0x80004;

	static const int MINEPOWERUP = 0x80005;

	static const int SPECIALHEAVYWEAPONPOWERUP = 0x80006;

	static const int WEARABLE = 0x200000;

	static const int RING = 0x200001;

	static const int BRACELET = 0x200002;

	static const int NECKLACE = 0x200003;

	static const int EARRING = 0x200004;

	static const int RESOURCECONTAINER = 0x400000;

	static const int ENERGYGAS = 0x400001;

	static const int ENERGYLIQUID = 0x400002;

	static const int ENERGYRADIOACTIVE = 0x400003;

	static const int ENERGYSOLID = 0x400004;

	static const int INORGANICCHEMICAL = 0x400005;

	static const int INORGANICGAS = 0x400006;

	static const int INORGANICMINERAL = 0x400007;

	static const int WATER = 0x400008;

	static const int ORGANICFOOD = 0x400009;

	static const int ORGANICHIDE = 0x40000A;

	static const int ORGANICSTRUCTURAL = 0x40000B;

	static const int QUESTREOURCE = 0x40000C;

	static const int DEED = 0x800000;

	static const int BUILDINGDEED = 0x800001;

	static const int INSTALLATIONDEED = 0x800002;

	static const int PETDEED = 0x800003;

	static const int DROIDDEED = 0x800004;

	static const int VEHICLEDEED = 0x800005;

	static const int RESOURCEDEED = 0x800006;

	static const int CLOTHING = 0x1000000;

	static const int BANDOLIER = 0x1000001;

	static const int BELT = 0x1000002;

	static const int BODYSUIT = 0x1000003;

	static const int CAPE = 0x1000004;

	static const int CLOAK = 0x1000005;

	static const int FOOTWEAR = 0x1000006;

	static const int DRESS = 0x1000007;

	static const int HANDWEAR = 0x1000008;

	static const int EYEWEAR = 0x1000009;

	static const int HEADWEAR = 0x100000A;

	static const int JACKET = 0x100000B;

	static const int PANTS = 0x100000C;

	static const int ROBE = 0x100000D;

	static const int SHIRT = 0x100000E;

	static const int VEST = 0x100000F;

	static const int WOOKIEGARB = 0x1000010;

	static const int MISCCLOTHING = 0x1000011;

	static const int SKIRT = 0x1000012;

	static const int ITHOGARB = 0x1000013;

	SceneObjectImplementation(LuaObject* templateData);

	void wlock();

	void unlock();

	void redeploy();

	void scheduleUndeploy();

	void undeploy();

	void removeUndeploymentEvent();

	bool isPlayerCreature();

	virtual bool addObject(SceneObject* object);

	virtual bool removeObject(SceneObject* object);

	void create(ZoneClientSession* client);

	void destroy(ZoneClientSession* client);

	void close(ZoneClientSession* client);

	void link(ZoneClientSession* client, unsigned int containmentType);

	virtual void sendTo(SceneObject* player, bool doClose);

	virtual void sendBaselinesTo(SceneObject* player);

	virtual void sendToOwner(bool doClose);

	virtual void insertToZone(Zone* zone);

	virtual void sendMessage(BaseMessage* msg);

	unsigned long long getObjectID();

	float getPositionX();

	float getPositionZ();

	float getPositionY();

	float getDirectionX();

	float getDirectionZ();

	float getDirectionY();

	float getDirectionW();

	unsigned int getObjectCRC();

	StringId* getObjectName();

	int getArrangementDescriptorSize();

	String getArrangementDescriptor(int idx);

	String getSlotDescriptor(int idx);

	SceneObject* getSlot(String& slot);

	int getSlotDescriptorSize();

	virtual ZoneClientSession* getClient();

	unsigned int getGameObjectType();

	Zone* getZone();

	void setPosition(float x, float z, float y);

	void setGameObjectType(unsigned int type);

	void setObjectCRC(unsigned int objCRC);

	void setParent(SceneObject* par);

	void setZoneProcessServer(ZoneProcessServerImplementation* srv);

	void setObjectID(unsigned long long objectid);

	void setObjectName(UnicodeString& name);

	void setZone(Zone* zon);

	SceneObject* _this;

	operator const SceneObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~SceneObjectImplementation();

	void _setStub(DistributedObjectStub* stub);

	void _serializationHelperMethod();

	friend class SceneObject;
};

class SceneObjectAdapter : public ManagedObjectAdapter {
public:
	SceneObjectAdapter(SceneObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void wlock();

	void unlock();

	void redeploy();

	void scheduleUndeploy();

	void undeploy();

	void removeUndeploymentEvent();

	bool isPlayerCreature();

	bool addObject(SceneObject* object);

	bool removeObject(SceneObject* object);

	void create(ZoneClientSession* client);

	void destroy(ZoneClientSession* client);

	void close(ZoneClientSession* client);

	void link(ZoneClientSession* client, unsigned int containmentType);

	void sendTo(SceneObject* player, bool doClose);

	void sendBaselinesTo(SceneObject* player);

	void sendToOwner(bool doClose);

	void insertToZone(Zone* zone);

	void sendMessage(BaseMessage* msg);

	unsigned long long getObjectID();

	float getPositionX();

	float getPositionZ();

	float getPositionY();

	float getDirectionX();

	float getDirectionZ();

	float getDirectionY();

	float getDirectionW();

	unsigned int getObjectCRC();

	int getArrangementDescriptorSize();

	String getArrangementDescriptor(int idx);

	String getSlotDescriptor(int idx);

	SceneObject* getSlot(String& slot);

	int getSlotDescriptorSize();

	ZoneClientSession* getClient();

	unsigned int getGameObjectType();

	Zone* getZone();

	void setPosition(float x, float z, float y);

	void setGameObjectType(unsigned int type);

	void setObjectCRC(unsigned int objCRC);

	void setParent(SceneObject* par);

	void setObjectID(unsigned long long objectid);

	void setZone(Zone* zon);

protected:
	String _param0_getSlot__String_;
};

class SceneObjectHelper : public DistributedObjectClassHelper, public Singleton<SceneObjectHelper> {
	static SceneObjectHelper* staticInitializer;

public:
	SceneObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SceneObjectHelper>;
};

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#endif /*SCENEOBJECT_H_*/
