/*
 *	server/zone/objects/creature/aigroup/AiGroup.cpp generated by engine3 IDL compiler 0.60
 */

#include "AiGroup.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/creature/AiAgent.h"

#include "server/zone/managers/creature/StaticSpawnGroup.h"

#include "server/zone/managers/creature/DynamicSpawnGroup.h"

#include "server/zone/objects/creature/aigroup/AiGroupObserver.h"

/*
 *	AiGroupStub
 */

enum {RPC_SETPATROLPOINTS__ = 6,RPC_SETPATROLPOINT__AIAGENT_,RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_,RPC_ISHERDGROUP__,RPC_ISPACKGROUP__,RPC_ISLAIRGROUP__};

AiGroup::AiGroup() : SceneObject(DummyConstructorParameter::instance()) {
	AiGroupImplementation* _implementation = new AiGroupImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("AiGroup");
}

AiGroup::AiGroup(DummyConstructorParameter* param) : SceneObject(param) {
	_setClassName("AiGroup");
}

AiGroup::~AiGroup() {
}



void AiGroup::setPatrolPoints() {
	AiGroupImplementation* _implementation = static_cast<AiGroupImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETPATROLPOINTS__);

		method.executeWithVoidReturn();
	} else
		_implementation->setPatrolPoints();
}

void AiGroup::setPatrolPoint(AiAgent* member) {
	AiGroupImplementation* _implementation = static_cast<AiGroupImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETPATROLPOINT__AIAGENT_);
		method.addObjectParameter(member);

		method.executeWithVoidReturn();
	} else
		_implementation->setPatrolPoint(member);
}

void AiGroup::setup(StaticSpawnGroup* templ) {
	AiGroupImplementation* _implementation = static_cast<AiGroupImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setup(templ);
}

void AiGroup::setup(DynamicSpawnGroup* templ) {
	AiGroupImplementation* _implementation = static_cast<AiGroupImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setup(templ);
}

int AiGroup::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	AiGroupImplementation* _implementation = static_cast<AiGroupImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(eventType, observable, arg1, arg2);
}

bool AiGroup::isHerdGroup() {
	AiGroupImplementation* _implementation = static_cast<AiGroupImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISHERDGROUP__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isHerdGroup();
}

bool AiGroup::isPackGroup() {
	AiGroupImplementation* _implementation = static_cast<AiGroupImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISPACKGROUP__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isPackGroup();
}

bool AiGroup::isLairGroup() {
	AiGroupImplementation* _implementation = static_cast<AiGroupImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISLAIRGROUP__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isLairGroup();
}

DistributedObjectServant* AiGroup::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void AiGroup::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	AiGroupImplementation
 */

AiGroupImplementation::AiGroupImplementation(DummyConstructorParameter* param) : SceneObjectImplementation(param) {
	_initializeImplementation();
}


AiGroupImplementation::~AiGroupImplementation() {
}


void AiGroupImplementation::finalize() {
}

void AiGroupImplementation::_initializeImplementation() {
	_setClassHelper(AiGroupHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void AiGroupImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<AiGroup*>(stub);
	SceneObjectImplementation::_setStub(stub);
}

DistributedObjectStub* AiGroupImplementation::_getStub() {
	return _this.get();
}

AiGroupImplementation::operator const AiGroup*() {
	return _this.get();
}

void AiGroupImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void AiGroupImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void AiGroupImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void AiGroupImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void AiGroupImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void AiGroupImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void AiGroupImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void AiGroupImplementation::_serializationHelperMethod() {
	SceneObjectImplementation::_serializationHelperMethod();

	_setClassName("AiGroup");

}

void AiGroupImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(AiGroupImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool AiGroupImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (SceneObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "AiGroup.leader") {
		TypeInfo<ManagedReference<SceneObject* > >::parseFromBinaryStream(&leader, stream);
		return true;
	}

	if (_name == "AiGroup.scouts") {
		TypeInfo<SortedVector<ManagedReference<AiAgent* > > >::parseFromBinaryStream(&scouts, stream);
		return true;
	}

	if (_name == "AiGroup.scoutTemps") {
		TypeInfo<Vector<String> >::parseFromBinaryStream(&scoutTemps, stream);
		return true;
	}

	if (_name == "AiGroup.protectors") {
		TypeInfo<SortedVector<ManagedReference<AiAgent* > > >::parseFromBinaryStream(&protectors, stream);
		return true;
	}

	if (_name == "AiGroup.protectorTemps") {
		TypeInfo<Vector<String> >::parseFromBinaryStream(&protectorTemps, stream);
		return true;
	}

	if (_name == "AiGroup.babies") {
		TypeInfo<SortedVector<ManagedReference<AiAgent* > > >::parseFromBinaryStream(&babies, stream);
		return true;
	}

	if (_name == "AiGroup.babyTemps") {
		TypeInfo<Vector<String> >::parseFromBinaryStream(&babyTemps, stream);
		return true;
	}

	if (_name == "AiGroup.subgroups") {
		TypeInfo<SortedVector<ManagedReference<AiGroup* > > >::parseFromBinaryStream(&subgroups, stream);
		return true;
	}

	if (_name == "AiGroup.observers") {
		TypeInfo<SortedVector<ManagedReference<AiGroupObserver* > > >::parseFromBinaryStream(&observers, stream);
		return true;
	}

	if (_name == "AiGroup.commandLevel") {
		TypeInfo<int >::parseFromBinaryStream(&commandLevel, stream);
		return true;
	}

	if (_name == "AiGroup.wanderRadius") {
		TypeInfo<float >::parseFromBinaryStream(&wanderRadius, stream);
		return true;
	}

	if (_name == "AiGroup.size") {
		TypeInfo<int >::parseFromBinaryStream(&size, stream);
		return true;
	}

	if (_name == "AiGroup.scoutWeight") {
		TypeInfo<float >::parseFromBinaryStream(&scoutWeight, stream);
		return true;
	}

	if (_name == "AiGroup.protectorWeight") {
		TypeInfo<float >::parseFromBinaryStream(&protectorWeight, stream);
		return true;
	}

	if (_name == "AiGroup.babyWeight") {
		TypeInfo<float >::parseFromBinaryStream(&babyWeight, stream);
		return true;
	}

	if (_name == "AiGroup.isStatic") {
		TypeInfo<bool >::parseFromBinaryStream(&isStatic, stream);
		return true;
	}


	return false;
}

void AiGroupImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = AiGroupImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int AiGroupImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SceneObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "AiGroup.leader";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SceneObject* > >::toBinaryStream(&leader, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.scouts";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<SortedVector<ManagedReference<AiAgent* > > >::toBinaryStream(&scouts, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.scoutTemps";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<String> >::toBinaryStream(&scoutTemps, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.protectors";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<SortedVector<ManagedReference<AiAgent* > > >::toBinaryStream(&protectors, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.protectorTemps";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<String> >::toBinaryStream(&protectorTemps, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.babies";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<SortedVector<ManagedReference<AiAgent* > > >::toBinaryStream(&babies, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.babyTemps";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<String> >::toBinaryStream(&babyTemps, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.subgroups";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<SortedVector<ManagedReference<AiGroup* > > >::toBinaryStream(&subgroups, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.observers";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<SortedVector<ManagedReference<AiGroupObserver* > > >::toBinaryStream(&observers, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.commandLevel";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&commandLevel, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.wanderRadius";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&wanderRadius, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.size";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&size, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.scoutWeight";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&scoutWeight, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.protectorWeight";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&protectorWeight, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.babyWeight";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&babyWeight, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AiGroup.isStatic";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&isStatic, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 16;
}

AiGroupImplementation::AiGroupImplementation() {
	_initializeImplementation();
	// server/zone/objects/creature/aigroup/AiGroup.idl():  		Logger.setLoggingName("AiGroup");
	Logger::setLoggingName("AiGroup");
	// server/zone/objects/creature/aigroup/AiGroup.idl():  		commandLevel = 0;
	commandLevel = 0;
	// server/zone/objects/creature/aigroup/AiGroup.idl():  		wanderRadius = 0;
	wanderRadius = 0;
	// server/zone/objects/creature/aigroup/AiGroup.idl():  		size = 0;
	size = 0;
	// server/zone/objects/creature/aigroup/AiGroup.idl():  		isStatic = true;
	isStatic = true;
}

bool AiGroupImplementation::isHerdGroup() {
	// server/zone/objects/creature/aigroup/AiGroup.idl():  		return false;
	return false;
}

bool AiGroupImplementation::isPackGroup() {
	// server/zone/objects/creature/aigroup/AiGroup.idl():  		return false;
	return false;
}

bool AiGroupImplementation::isLairGroup() {
	// server/zone/objects/creature/aigroup/AiGroup.idl():  		return false;
	return false;
}

/*
 *	AiGroupAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


AiGroupAdapter::AiGroupAdapter(AiGroup* obj) : SceneObjectAdapter(obj) {
}

void AiGroupAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_SETPATROLPOINTS__:
		{
			setPatrolPoints();
		}
		break;
	case RPC_SETPATROLPOINT__AIAGENT_:
		{
			setPatrolPoint(static_cast<AiAgent*>(inv->getObjectParameter()));
		}
		break;
	case RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		{
			resp->insertSignedInt(notifyObserverEvent(inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		}
		break;
	case RPC_ISHERDGROUP__:
		{
			resp->insertBoolean(isHerdGroup());
		}
		break;
	case RPC_ISPACKGROUP__:
		{
			resp->insertBoolean(isPackGroup());
		}
		break;
	case RPC_ISLAIRGROUP__:
		{
			resp->insertBoolean(isLairGroup());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void AiGroupAdapter::setPatrolPoints() {
	(static_cast<AiGroup*>(stub))->setPatrolPoints();
}

void AiGroupAdapter::setPatrolPoint(AiAgent* member) {
	(static_cast<AiGroup*>(stub))->setPatrolPoint(member);
}

int AiGroupAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<AiGroup*>(stub))->notifyObserverEvent(eventType, observable, arg1, arg2);
}

bool AiGroupAdapter::isHerdGroup() {
	return (static_cast<AiGroup*>(stub))->isHerdGroup();
}

bool AiGroupAdapter::isPackGroup() {
	return (static_cast<AiGroup*>(stub))->isPackGroup();
}

bool AiGroupAdapter::isLairGroup() {
	return (static_cast<AiGroup*>(stub))->isLairGroup();
}

/*
 *	AiGroupHelper
 */

AiGroupHelper* AiGroupHelper::staticInitializer = AiGroupHelper::instance();

AiGroupHelper::AiGroupHelper() {
	className = "AiGroup";

	Core::getObjectBroker()->registerClass(className, this);
}

void AiGroupHelper::finalizeHelper() {
	AiGroupHelper::finalize();
}

DistributedObject* AiGroupHelper::instantiateObject() {
	return new AiGroup(DummyConstructorParameter::instance());
}

DistributedObjectServant* AiGroupHelper::instantiateServant() {
	return new AiGroupImplementation();
}

DistributedObjectAdapter* AiGroupHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new AiGroupAdapter(static_cast<AiGroup*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

