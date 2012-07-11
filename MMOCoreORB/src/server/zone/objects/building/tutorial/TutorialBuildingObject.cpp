/*
 *	server/zone/objects/building/tutorial/TutorialBuildingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "TutorialBuildingObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/building/tutorial/events/UnloadBuildingTask.h"

#include "server/zone/objects/building/tutorial/events/StartTutorialTask.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/cell/CellObject.h"

#include "server/zone/managers/director/DirectorManager.h"

/*
 *	TutorialBuildingObjectStub
 */

enum {RPC_NOTIFYREMOVEFROMZONE__ = 6,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_ONENTER__CREATUREOBJECT_,RPC_ONEXIT__CREATUREOBJECT_,RPC_CLEARUNLOADEVENT__,};

TutorialBuildingObject::TutorialBuildingObject() : BuildingObject(DummyConstructorParameter::instance()) {
	TutorialBuildingObjectImplementation* _implementation = new TutorialBuildingObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("TutorialBuildingObject");
}

TutorialBuildingObject::TutorialBuildingObject(DummyConstructorParameter* param) : BuildingObject(param) {
	_setClassName("TutorialBuildingObject");
}

TutorialBuildingObject::~TutorialBuildingObject() {
}



void TutorialBuildingObject::notifyRemoveFromZone() {
	TutorialBuildingObjectImplementation* _implementation = static_cast<TutorialBuildingObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYREMOVEFROMZONE__);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyRemoveFromZone();
}

void TutorialBuildingObject::initializeTransientMembers() {
	TutorialBuildingObjectImplementation* _implementation = static_cast<TutorialBuildingObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void TutorialBuildingObject::onEnter(CreatureObject* player) {
	TutorialBuildingObjectImplementation* _implementation = static_cast<TutorialBuildingObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ONENTER__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->onEnter(player);
}

void TutorialBuildingObject::onExit(CreatureObject* player) {
	TutorialBuildingObjectImplementation* _implementation = static_cast<TutorialBuildingObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ONEXIT__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->onExit(player);
}

void TutorialBuildingObject::clearUnloadEvent() {
	TutorialBuildingObjectImplementation* _implementation = static_cast<TutorialBuildingObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARUNLOADEVENT__);

		method.executeWithVoidReturn();
	} else
		_implementation->clearUnloadEvent();
}

DistributedObjectServant* TutorialBuildingObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void TutorialBuildingObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	TutorialBuildingObjectImplementation
 */

TutorialBuildingObjectImplementation::TutorialBuildingObjectImplementation(DummyConstructorParameter* param) : BuildingObjectImplementation(param) {
	_initializeImplementation();
}


TutorialBuildingObjectImplementation::~TutorialBuildingObjectImplementation() {
}


void TutorialBuildingObjectImplementation::finalize() {
}

void TutorialBuildingObjectImplementation::_initializeImplementation() {
	_setClassHelper(TutorialBuildingObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void TutorialBuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<TutorialBuildingObject*>(stub);
	BuildingObjectImplementation::_setStub(stub);
}

DistributedObjectStub* TutorialBuildingObjectImplementation::_getStub() {
	return _this.get();
}

TutorialBuildingObjectImplementation::operator const TutorialBuildingObject*() {
	return _this.get();
}

void TutorialBuildingObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void TutorialBuildingObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void TutorialBuildingObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void TutorialBuildingObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void TutorialBuildingObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void TutorialBuildingObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void TutorialBuildingObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void TutorialBuildingObjectImplementation::_serializationHelperMethod() {
	BuildingObjectImplementation::_serializationHelperMethod();

	_setClassName("TutorialBuildingObject");

}

void TutorialBuildingObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(TutorialBuildingObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool TutorialBuildingObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (BuildingObjectImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void TutorialBuildingObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TutorialBuildingObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TutorialBuildingObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuildingObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

TutorialBuildingObjectImplementation::TutorialBuildingObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl():  		unloadTask = null;
	unloadTask = NULL;
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl():  		Logger.setLoggingName("TutorialBuildingObject");
	Logger::setLoggingName("TutorialBuildingObject");
}

void TutorialBuildingObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl():  		super.initializeTransientMembers();
	BuildingObjectImplementation::initializeTransientMembers();
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl():  		unloadTask = null;
	unloadTask = NULL;
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl():  		Logger.setLoggingName("TutorialBuildingObject");
	Logger::setLoggingName("TutorialBuildingObject");
}

void TutorialBuildingObjectImplementation::onEnter(CreatureObject* player) {
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl():  	}
	if (player->isPlayerCreature())	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl():  			dequeueUnloadEvent();
	dequeueUnloadEvent();
}

void TutorialBuildingObjectImplementation::onExit(CreatureObject* player) {
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl():  	}
	if (player->isPlayerCreature())	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl():  			enqueueUnloadEvent();
	enqueueUnloadEvent();
}

void TutorialBuildingObjectImplementation::clearUnloadEvent() {
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl():  		unloadTask = null;
	unloadTask = NULL;
}

void TutorialBuildingObjectImplementation::dequeueUnloadEvent() {
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl():  	}
	if (unloadTask){
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl():  			unloadTask.cancel();
	unloadTask->cancel();
	// server/zone/objects/building/tutorial/TutorialBuildingObject.idl():  			clearUnloadEvent();
	clearUnloadEvent();
}
}

/*
 *	TutorialBuildingObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


TutorialBuildingObjectAdapter::TutorialBuildingObjectAdapter(TutorialBuildingObject* obj) : BuildingObjectAdapter(obj) {
}

void TutorialBuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_NOTIFYREMOVEFROMZONE__:
		{
			notifyRemoveFromZone();
		}
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_ONENTER__CREATUREOBJECT_:
		{
			onEnter(static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_ONEXIT__CREATUREOBJECT_:
		{
			onExit(static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_CLEARUNLOADEVENT__:
		{
			clearUnloadEvent();
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void TutorialBuildingObjectAdapter::notifyRemoveFromZone() {
	(static_cast<TutorialBuildingObject*>(stub))->notifyRemoveFromZone();
}

void TutorialBuildingObjectAdapter::initializeTransientMembers() {
	(static_cast<TutorialBuildingObject*>(stub))->initializeTransientMembers();
}

void TutorialBuildingObjectAdapter::onEnter(CreatureObject* player) {
	(static_cast<TutorialBuildingObject*>(stub))->onEnter(player);
}

void TutorialBuildingObjectAdapter::onExit(CreatureObject* player) {
	(static_cast<TutorialBuildingObject*>(stub))->onExit(player);
}

void TutorialBuildingObjectAdapter::clearUnloadEvent() {
	(static_cast<TutorialBuildingObject*>(stub))->clearUnloadEvent();
}

/*
 *	TutorialBuildingObjectHelper
 */

TutorialBuildingObjectHelper* TutorialBuildingObjectHelper::staticInitializer = TutorialBuildingObjectHelper::instance();

TutorialBuildingObjectHelper::TutorialBuildingObjectHelper() {
	className = "TutorialBuildingObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void TutorialBuildingObjectHelper::finalizeHelper() {
	TutorialBuildingObjectHelper::finalize();
}

DistributedObject* TutorialBuildingObjectHelper::instantiateObject() {
	return new TutorialBuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* TutorialBuildingObjectHelper::instantiateServant() {
	return new TutorialBuildingObjectImplementation();
}

DistributedObjectAdapter* TutorialBuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TutorialBuildingObjectAdapter(static_cast<TutorialBuildingObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

