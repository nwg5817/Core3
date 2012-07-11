/*
 *	server/zone/objects/creature/aigroup/LairGroup.cpp generated by engine3 IDL compiler 0.60
 */

#include "LairGroup.h"

/*
 *	LairGroupStub
 */

enum {RPC_ISLAIRGROUP__ = 6};

LairGroup::LairGroup() : AiGroup(DummyConstructorParameter::instance()) {
	LairGroupImplementation* _implementation = new LairGroupImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("LairGroup");
}

LairGroup::LairGroup(DummyConstructorParameter* param) : AiGroup(param) {
	_setClassName("LairGroup");
}

LairGroup::~LairGroup() {
}



bool LairGroup::isLairGroup() {
	LairGroupImplementation* _implementation = static_cast<LairGroupImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISLAIRGROUP__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isLairGroup();
}

DistributedObjectServant* LairGroup::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void LairGroup::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	LairGroupImplementation
 */

LairGroupImplementation::LairGroupImplementation(DummyConstructorParameter* param) : AiGroupImplementation(param) {
	_initializeImplementation();
}


LairGroupImplementation::~LairGroupImplementation() {
}


void LairGroupImplementation::finalize() {
}

void LairGroupImplementation::_initializeImplementation() {
	_setClassHelper(LairGroupHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void LairGroupImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<LairGroup*>(stub);
	AiGroupImplementation::_setStub(stub);
}

DistributedObjectStub* LairGroupImplementation::_getStub() {
	return _this.get();
}

LairGroupImplementation::operator const LairGroup*() {
	return _this.get();
}

void LairGroupImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void LairGroupImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void LairGroupImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void LairGroupImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void LairGroupImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void LairGroupImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void LairGroupImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void LairGroupImplementation::_serializationHelperMethod() {
	AiGroupImplementation::_serializationHelperMethod();

	_setClassName("LairGroup");

}

void LairGroupImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(LairGroupImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool LairGroupImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (AiGroupImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void LairGroupImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = LairGroupImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int LairGroupImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = AiGroupImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

LairGroupImplementation::LairGroupImplementation() : AiGroupImplementation() {
	_initializeImplementation();
}

bool LairGroupImplementation::isLairGroup() {
	// server/zone/objects/creature/aigroup/LairGroup.idl():  		return true;
	return true;
}

/*
 *	LairGroupAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


LairGroupAdapter::LairGroupAdapter(LairGroup* obj) : AiGroupAdapter(obj) {
}

void LairGroupAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_ISLAIRGROUP__:
		{
			resp->insertBoolean(isLairGroup());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

bool LairGroupAdapter::isLairGroup() {
	return (static_cast<LairGroup*>(stub))->isLairGroup();
}

/*
 *	LairGroupHelper
 */

LairGroupHelper* LairGroupHelper::staticInitializer = LairGroupHelper::instance();

LairGroupHelper::LairGroupHelper() {
	className = "LairGroup";

	Core::getObjectBroker()->registerClass(className, this);
}

void LairGroupHelper::finalizeHelper() {
	LairGroupHelper::finalize();
}

DistributedObject* LairGroupHelper::instantiateObject() {
	return new LairGroup(DummyConstructorParameter::instance());
}

DistributedObjectServant* LairGroupHelper::instantiateServant() {
	return new LairGroupImplementation();
}

DistributedObjectAdapter* LairGroupHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new LairGroupAdapter(static_cast<LairGroup*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

