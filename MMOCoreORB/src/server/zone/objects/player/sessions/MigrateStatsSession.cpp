/*
 *	server/zone/objects/player/sessions/MigrateStatsSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "MigrateStatsSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

/*
 *	MigrateStatsSessionStub
 */

enum {RPC_INITIALIZESESSION__ = 6,RPC_CANCELSESSION__,RPC_CLEARSESSION__,RPC_GETATTRIBUTETOMODIFYCOUNT__,RPC_SETATTRIBUTETOMODIFY__INT_INT_,RPC_GETATTRIBTUETOMODIFY__INT_,RPC_MIGRATESTATS__};

MigrateStatsSession::MigrateStatsSession(CreatureObject* parent) : Facade(DummyConstructorParameter::instance()) {
	MigrateStatsSessionImplementation* _implementation = new MigrateStatsSessionImplementation(parent);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("MigrateStatsSession");
}

MigrateStatsSession::MigrateStatsSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("MigrateStatsSession");
}

MigrateStatsSession::~MigrateStatsSession() {
}



int MigrateStatsSession::initializeSession() {
	MigrateStatsSessionImplementation* _implementation = static_cast<MigrateStatsSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->initializeSession();
}

int MigrateStatsSession::cancelSession() {
	MigrateStatsSessionImplementation* _implementation = static_cast<MigrateStatsSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->cancelSession();
}

int MigrateStatsSession::clearSession() {
	MigrateStatsSessionImplementation* _implementation = static_cast<MigrateStatsSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->clearSession();
}

int MigrateStatsSession::getAttributeToModifyCount() {
	MigrateStatsSessionImplementation* _implementation = static_cast<MigrateStatsSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETATTRIBUTETOMODIFYCOUNT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getAttributeToModifyCount();
}

void MigrateStatsSession::setAttributeToModify(int attribute, int value) {
	MigrateStatsSessionImplementation* _implementation = static_cast<MigrateStatsSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETATTRIBUTETOMODIFY__INT_INT_);
		method.addSignedIntParameter(attribute);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setAttributeToModify(attribute, value);
}

int MigrateStatsSession::getAttribtueToModify(int attribute) {
	MigrateStatsSessionImplementation* _implementation = static_cast<MigrateStatsSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETATTRIBTUETOMODIFY__INT_);
		method.addSignedIntParameter(attribute);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getAttribtueToModify(attribute);
}

void MigrateStatsSession::migrateStats() {
	MigrateStatsSessionImplementation* _implementation = static_cast<MigrateStatsSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_MIGRATESTATS__);

		method.executeWithVoidReturn();
	} else
		_implementation->migrateStats();
}

DistributedObjectServant* MigrateStatsSession::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void MigrateStatsSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	MigrateStatsSessionImplementation
 */

MigrateStatsSessionImplementation::MigrateStatsSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


MigrateStatsSessionImplementation::~MigrateStatsSessionImplementation() {
}


void MigrateStatsSessionImplementation::finalize() {
}

void MigrateStatsSessionImplementation::_initializeImplementation() {
	_setClassHelper(MigrateStatsSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void MigrateStatsSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<MigrateStatsSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* MigrateStatsSessionImplementation::_getStub() {
	return _this.get();
}

MigrateStatsSessionImplementation::operator const MigrateStatsSession*() {
	return _this.get();
}

void MigrateStatsSessionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void MigrateStatsSessionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void MigrateStatsSessionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void MigrateStatsSessionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void MigrateStatsSessionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void MigrateStatsSessionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void MigrateStatsSessionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void MigrateStatsSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("MigrateStatsSession");

}

void MigrateStatsSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(MigrateStatsSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool MigrateStatsSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "MigrateStatsSession.creature") {
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&creature, stream);
		return true;
	}

	if (_name == "MigrateStatsSession.attributesToModify") {
		TypeInfo<Vector<int> >::parseFromBinaryStream(&attributesToModify, stream);
		return true;
	}


	return false;
}

void MigrateStatsSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = MigrateStatsSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int MigrateStatsSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "MigrateStatsSession.creature";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&creature, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "MigrateStatsSession.attributesToModify";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<int> >::toBinaryStream(&attributesToModify, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 2;
}

MigrateStatsSessionImplementation::MigrateStatsSessionImplementation(CreatureObject* parent) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		creature = parent;
	creature = parent;
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		Logger.setLoggingName("MigrateStatsSession");
	Logger::setLoggingName("MigrateStatsSession");
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		}
	for (	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		for (int i = 0;
	int i = 0;
	i < 9;
i = i + 1) {
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  			attributesToModify.add(0);
	(&attributesToModify)->add(0);
}
}

int MigrateStatsSessionImplementation::initializeSession() {
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		return 0;
	return 0;
}

int MigrateStatsSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		}
	if (creature == NULL){
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  			return 0;
	return 0;
}

	else {
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  			creature.dropActiveSession(SessionFacadeType.MIGRATESTATS);
	creature.get()->dropActiveSession(SessionFacadeType::MIGRATESTATS);
}
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		return 0;
	return 0;
}

int MigrateStatsSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		attributesToModify.removeAll();
	(&attributesToModify)->removeAll();
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		return 0;
	return 0;
}

int MigrateStatsSessionImplementation::getAttributeToModifyCount() {
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		return attributesToModify.size();
	return (&attributesToModify)->size();
}

void MigrateStatsSessionImplementation::setAttributeToModify(int attribute, int value) {
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		attributesToModify.set(attribute, value);
	(&attributesToModify)->set(attribute, value);
}

int MigrateStatsSessionImplementation::getAttribtueToModify(int attribute) {
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		return attributesToModify.get(attribute);
	return (&attributesToModify)->get(attribute);
}

void MigrateStatsSessionImplementation::migrateStats() {
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		}
	for (	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		for (int i = 0;
	int i = 0;
	i < 9;
i = i + 1) {
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  			int newValue = attributesToModify.get(i);
	int newValue = (&attributesToModify)->get(i);
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  			int originalAmount = creature.getBaseHAM(i);
	int originalAmount = creature.get()->getBaseHAM(i);
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  			creature.setBaseHAM(i, newValue);
	creature.get()->setBaseHAM(i, newValue);
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  			creature.setHAM(i, creature.getHAM(i) + (newValue - originalAmount));
	creature.get()->setHAM(i, creature.get()->getHAM(i) + (newValue - originalAmount));
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  			creature.setMaxHAM(i, creature.getMaxHAM(i) + (newValue - originalAmount));
	creature.get()->setMaxHAM(i, creature.get()->getMaxHAM(i) + (newValue - originalAmount));
}
	// server/zone/objects/player/sessions/MigrateStatsSession.idl():  		cancelSession();
	cancelSession();
}

/*
 *	MigrateStatsSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


MigrateStatsSessionAdapter::MigrateStatsSessionAdapter(MigrateStatsSession* obj) : FacadeAdapter(obj) {
}

void MigrateStatsSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZESESSION__:
		{
			resp->insertSignedInt(initializeSession());
		}
		break;
	case RPC_CANCELSESSION__:
		{
			resp->insertSignedInt(cancelSession());
		}
		break;
	case RPC_CLEARSESSION__:
		{
			resp->insertSignedInt(clearSession());
		}
		break;
	case RPC_GETATTRIBUTETOMODIFYCOUNT__:
		{
			resp->insertSignedInt(getAttributeToModifyCount());
		}
		break;
	case RPC_SETATTRIBUTETOMODIFY__INT_INT_:
		{
			setAttributeToModify(inv->getSignedIntParameter(), inv->getSignedIntParameter());
		}
		break;
	case RPC_GETATTRIBTUETOMODIFY__INT_:
		{
			resp->insertSignedInt(getAttribtueToModify(inv->getSignedIntParameter()));
		}
		break;
	case RPC_MIGRATESTATS__:
		{
			migrateStats();
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int MigrateStatsSessionAdapter::initializeSession() {
	return (static_cast<MigrateStatsSession*>(stub))->initializeSession();
}

int MigrateStatsSessionAdapter::cancelSession() {
	return (static_cast<MigrateStatsSession*>(stub))->cancelSession();
}

int MigrateStatsSessionAdapter::clearSession() {
	return (static_cast<MigrateStatsSession*>(stub))->clearSession();
}

int MigrateStatsSessionAdapter::getAttributeToModifyCount() {
	return (static_cast<MigrateStatsSession*>(stub))->getAttributeToModifyCount();
}

void MigrateStatsSessionAdapter::setAttributeToModify(int attribute, int value) {
	(static_cast<MigrateStatsSession*>(stub))->setAttributeToModify(attribute, value);
}

int MigrateStatsSessionAdapter::getAttribtueToModify(int attribute) {
	return (static_cast<MigrateStatsSession*>(stub))->getAttribtueToModify(attribute);
}

void MigrateStatsSessionAdapter::migrateStats() {
	(static_cast<MigrateStatsSession*>(stub))->migrateStats();
}

/*
 *	MigrateStatsSessionHelper
 */

MigrateStatsSessionHelper* MigrateStatsSessionHelper::staticInitializer = MigrateStatsSessionHelper::instance();

MigrateStatsSessionHelper::MigrateStatsSessionHelper() {
	className = "MigrateStatsSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void MigrateStatsSessionHelper::finalizeHelper() {
	MigrateStatsSessionHelper::finalize();
}

DistributedObject* MigrateStatsSessionHelper::instantiateObject() {
	return new MigrateStatsSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* MigrateStatsSessionHelper::instantiateServant() {
	return new MigrateStatsSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MigrateStatsSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MigrateStatsSessionAdapter(static_cast<MigrateStatsSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

