/*
 *	server/zone/objects/draftschematic/DraftSchematic.cpp generated by engine3 IDL compiler 0.60
 */

#include "DraftSchematic.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	DraftSchematicStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_SENDBASELINESTO__SCENEOBJECT_,RPC_SENDDRAFTSLOTSTO__CREATUREOBJECT_,RPC_SENDRESOURCEWEIGHTSTO__CREATUREOBJECT_,RPC_CREATEMANUFACTURESCHEMATIC__SCENEOBJECT_,RPC_SETGROUPNAME__STRING_,RPC_GETGROUPNAME__,RPC_GETDRAFTSLOTCOUNT__,RPC_ISVALIDDRAFTSCHEMATIC__,RPC_GETRESOURCEWEIGHTCOUNT__,RPC_GETCOMPLEXITY__,RPC_GETTOOLTAB__,RPC_GETSIZE__,RPC_GETXPTYPE__,RPC_GETXPAMOUNT__,RPC_GETASSEMBLYSKILL__,RPC_GETEXPERIMENTATIONSKILL__,RPC_GETCUSTOMIZATIONSKILL__,RPC_GETCUSTOMNAME__,RPC_GETTANOCRC__,RPC_GETTEMPLATELISTSIZE__,RPC_GETTEMPLATE__INT_};

DraftSchematic::DraftSchematic() : IntangibleObject(DummyConstructorParameter::instance()) {
	DraftSchematicImplementation* _implementation = new DraftSchematicImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("DraftSchematic");
}

DraftSchematic::DraftSchematic(DummyConstructorParameter* param) : IntangibleObject(param) {
	_setClassName("DraftSchematic");
}

DraftSchematic::~DraftSchematic() {
}



void DraftSchematic::initializeTransientMembers() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void DraftSchematic::loadTemplateData(SharedObjectTemplate* templateData) {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void DraftSchematic::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void DraftSchematic::sendBaselinesTo(SceneObject* player) {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDBASELINESTO__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaselinesTo(player);
}

void DraftSchematic::sendDraftSlotsTo(CreatureObject* player) {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDDRAFTSLOTSTO__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendDraftSlotsTo(player);
}

void DraftSchematic::sendResourceWeightsTo(CreatureObject* player) {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDRESOURCEWEIGHTSTO__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendResourceWeightsTo(player);
}

SceneObject* DraftSchematic::createManufactureSchematic(SceneObject* craftingTool) {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEMANUFACTURESCHEMATIC__SCENEOBJECT_);
		method.addObjectParameter(craftingTool);

		return static_cast<SceneObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->createManufactureSchematic(craftingTool);
}

void DraftSchematic::setGroupName(String& name) {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETGROUPNAME__STRING_);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		_implementation->setGroupName(name);
}

String DraftSchematic::getGroupName() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETGROUPNAME__);

		String _return_getGroupName;
		method.executeWithAsciiReturn(_return_getGroupName);
		return _return_getGroupName;
	} else
		return _implementation->getGroupName();
}

int DraftSchematic::getDraftSlotCount() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDRAFTSLOTCOUNT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getDraftSlotCount();
}

bool DraftSchematic::isValidDraftSchematic() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISVALIDDRAFTSCHEMATIC__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isValidDraftSchematic();
}

DraftSlot* DraftSchematic::getDraftSlot(int i) {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getDraftSlot(i);
}

int DraftSchematic::getResourceWeightCount() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETRESOURCEWEIGHTCOUNT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getResourceWeightCount();
}

ResourceWeight* DraftSchematic::getResourceWeight(int i) {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getResourceWeight(i);
}

float DraftSchematic::getComplexity() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCOMPLEXITY__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getComplexity();
}

unsigned int DraftSchematic::getToolTab() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTOOLTAB__);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getToolTab();
}

float DraftSchematic::getSize() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSIZE__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getSize();
}

String DraftSchematic::getXpType() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETXPTYPE__);

		String _return_getXpType;
		method.executeWithAsciiReturn(_return_getXpType);
		return _return_getXpType;
	} else
		return _implementation->getXpType();
}

int DraftSchematic::getXpAmount() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETXPAMOUNT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getXpAmount();
}

String DraftSchematic::getAssemblySkill() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETASSEMBLYSKILL__);

		String _return_getAssemblySkill;
		method.executeWithAsciiReturn(_return_getAssemblySkill);
		return _return_getAssemblySkill;
	} else
		return _implementation->getAssemblySkill();
}

String DraftSchematic::getExperimentationSkill() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEXPERIMENTATIONSKILL__);

		String _return_getExperimentationSkill;
		method.executeWithAsciiReturn(_return_getExperimentationSkill);
		return _return_getExperimentationSkill;
	} else
		return _implementation->getExperimentationSkill();
}

String DraftSchematic::getCustomizationSkill() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCUSTOMIZATIONSKILL__);

		String _return_getCustomizationSkill;
		method.executeWithAsciiReturn(_return_getCustomizationSkill);
		return _return_getCustomizationSkill;
	} else
		return _implementation->getCustomizationSkill();
}

String DraftSchematic::getCustomName() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCUSTOMNAME__);

		String _return_getCustomName;
		method.executeWithAsciiReturn(_return_getCustomName);
		return _return_getCustomName;
	} else
		return _implementation->getCustomName();
}

unsigned int DraftSchematic::getTanoCRC() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTANOCRC__);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getTanoCRC();
}

int DraftSchematic::getTemplateListSize() {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTEMPLATELISTSIZE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getTemplateListSize();
}

String DraftSchematic::getTemplate(int i) {
	DraftSchematicImplementation* _implementation = static_cast<DraftSchematicImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTEMPLATE__INT_);
		method.addSignedIntParameter(i);

		String _return_getTemplate;
		method.executeWithAsciiReturn(_return_getTemplate);
		return _return_getTemplate;
	} else
		return _implementation->getTemplate(i);
}

DistributedObjectServant* DraftSchematic::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void DraftSchematic::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	DraftSchematicImplementation
 */

DraftSchematicImplementation::DraftSchematicImplementation(DummyConstructorParameter* param) : IntangibleObjectImplementation(param) {
	_initializeImplementation();
}


DraftSchematicImplementation::~DraftSchematicImplementation() {
}


void DraftSchematicImplementation::finalize() {
}

void DraftSchematicImplementation::_initializeImplementation() {
	_setClassHelper(DraftSchematicHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void DraftSchematicImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<DraftSchematic*>(stub);
	IntangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* DraftSchematicImplementation::_getStub() {
	return _this.get();
}

DraftSchematicImplementation::operator const DraftSchematic*() {
	return _this.get();
}

void DraftSchematicImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void DraftSchematicImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void DraftSchematicImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void DraftSchematicImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void DraftSchematicImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void DraftSchematicImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void DraftSchematicImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void DraftSchematicImplementation::_serializationHelperMethod() {
	IntangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("DraftSchematic");

}

void DraftSchematicImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(DraftSchematicImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool DraftSchematicImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (IntangibleObjectImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void DraftSchematicImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DraftSchematicImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DraftSchematicImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = IntangibleObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

DraftSchematicImplementation::DraftSchematicImplementation() {
	_initializeImplementation();
	// server/zone/objects/draftschematic/DraftSchematic.idl():  		schematicTemplate = null;
	schematicTemplate = NULL;
	// server/zone/objects/draftschematic/DraftSchematic.idl():  		groupName = "";
	groupName = "";
	// server/zone/objects/draftschematic/DraftSchematic.idl():  		Logger.setLoggingName("DraftSchematic");
	Logger::setLoggingName("DraftSchematic");
}

void DraftSchematicImplementation::setGroupName(String& name) {
	// server/zone/objects/draftschematic/DraftSchematic.idl():  		groupName = name;
	groupName = name;
}

String DraftSchematicImplementation::getGroupName() {
	// server/zone/objects/draftschematic/DraftSchematic.idl():  		return groupName;
	return groupName;
}

bool DraftSchematicImplementation::isValidDraftSchematic() {
	// server/zone/objects/draftschematic/DraftSchematic.idl():  		return schematicTemplate != null;
	return schematicTemplate != NULL;
}

int DraftSchematicImplementation::getTemplateListSize() {
	// server/zone/objects/draftschematic/DraftSchematic.idl():  		return schematicTemplate.getTemplateListSize();
	return schematicTemplate->getTemplateListSize();
}

String DraftSchematicImplementation::getTemplate(int i) {
	// server/zone/objects/draftschematic/DraftSchematic.idl():  		return schematicTemplate.getTemplate(i);
	return schematicTemplate->getTemplate(i);
}

/*
 *	DraftSchematicAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


DraftSchematicAdapter::DraftSchematicAdapter(DraftSchematic* obj) : IntangibleObjectAdapter(obj) {
}

void DraftSchematicAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_SENDBASELINESTO__SCENEOBJECT_:
		{
			sendBaselinesTo(static_cast<SceneObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_SENDDRAFTSLOTSTO__CREATUREOBJECT_:
		{
			sendDraftSlotsTo(static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_SENDRESOURCEWEIGHTSTO__CREATUREOBJECT_:
		{
			sendResourceWeightsTo(static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_CREATEMANUFACTURESCHEMATIC__SCENEOBJECT_:
		{
			resp->insertLong(createManufactureSchematic(static_cast<SceneObject*>(inv->getObjectParameter()))->_getObjectID());
		}
		break;
	case RPC_SETGROUPNAME__STRING_:
		{
			String name; 
			setGroupName(inv->getAsciiParameter(name));
		}
		break;
	case RPC_GETGROUPNAME__:
		{
			resp->insertAscii(getGroupName());
		}
		break;
	case RPC_GETDRAFTSLOTCOUNT__:
		{
			resp->insertSignedInt(getDraftSlotCount());
		}
		break;
	case RPC_ISVALIDDRAFTSCHEMATIC__:
		{
			resp->insertBoolean(isValidDraftSchematic());
		}
		break;
	case RPC_GETRESOURCEWEIGHTCOUNT__:
		{
			resp->insertSignedInt(getResourceWeightCount());
		}
		break;
	case RPC_GETCOMPLEXITY__:
		{
			resp->insertFloat(getComplexity());
		}
		break;
	case RPC_GETTOOLTAB__:
		{
			resp->insertInt(getToolTab());
		}
		break;
	case RPC_GETSIZE__:
		{
			resp->insertFloat(getSize());
		}
		break;
	case RPC_GETXPTYPE__:
		{
			resp->insertAscii(getXpType());
		}
		break;
	case RPC_GETXPAMOUNT__:
		{
			resp->insertSignedInt(getXpAmount());
		}
		break;
	case RPC_GETASSEMBLYSKILL__:
		{
			resp->insertAscii(getAssemblySkill());
		}
		break;
	case RPC_GETEXPERIMENTATIONSKILL__:
		{
			resp->insertAscii(getExperimentationSkill());
		}
		break;
	case RPC_GETCUSTOMIZATIONSKILL__:
		{
			resp->insertAscii(getCustomizationSkill());
		}
		break;
	case RPC_GETCUSTOMNAME__:
		{
			resp->insertAscii(getCustomName());
		}
		break;
	case RPC_GETTANOCRC__:
		{
			resp->insertInt(getTanoCRC());
		}
		break;
	case RPC_GETTEMPLATELISTSIZE__:
		{
			resp->insertSignedInt(getTemplateListSize());
		}
		break;
	case RPC_GETTEMPLATE__INT_:
		{
			resp->insertAscii(getTemplate(inv->getSignedIntParameter()));
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void DraftSchematicAdapter::initializeTransientMembers() {
	(static_cast<DraftSchematic*>(stub))->initializeTransientMembers();
}

void DraftSchematicAdapter::sendBaselinesTo(SceneObject* player) {
	(static_cast<DraftSchematic*>(stub))->sendBaselinesTo(player);
}

void DraftSchematicAdapter::sendDraftSlotsTo(CreatureObject* player) {
	(static_cast<DraftSchematic*>(stub))->sendDraftSlotsTo(player);
}

void DraftSchematicAdapter::sendResourceWeightsTo(CreatureObject* player) {
	(static_cast<DraftSchematic*>(stub))->sendResourceWeightsTo(player);
}

SceneObject* DraftSchematicAdapter::createManufactureSchematic(SceneObject* craftingTool) {
	return (static_cast<DraftSchematic*>(stub))->createManufactureSchematic(craftingTool);
}

void DraftSchematicAdapter::setGroupName(String& name) {
	(static_cast<DraftSchematic*>(stub))->setGroupName(name);
}

String DraftSchematicAdapter::getGroupName() {
	return (static_cast<DraftSchematic*>(stub))->getGroupName();
}

int DraftSchematicAdapter::getDraftSlotCount() {
	return (static_cast<DraftSchematic*>(stub))->getDraftSlotCount();
}

bool DraftSchematicAdapter::isValidDraftSchematic() {
	return (static_cast<DraftSchematic*>(stub))->isValidDraftSchematic();
}

int DraftSchematicAdapter::getResourceWeightCount() {
	return (static_cast<DraftSchematic*>(stub))->getResourceWeightCount();
}

float DraftSchematicAdapter::getComplexity() {
	return (static_cast<DraftSchematic*>(stub))->getComplexity();
}

unsigned int DraftSchematicAdapter::getToolTab() {
	return (static_cast<DraftSchematic*>(stub))->getToolTab();
}

float DraftSchematicAdapter::getSize() {
	return (static_cast<DraftSchematic*>(stub))->getSize();
}

String DraftSchematicAdapter::getXpType() {
	return (static_cast<DraftSchematic*>(stub))->getXpType();
}

int DraftSchematicAdapter::getXpAmount() {
	return (static_cast<DraftSchematic*>(stub))->getXpAmount();
}

String DraftSchematicAdapter::getAssemblySkill() {
	return (static_cast<DraftSchematic*>(stub))->getAssemblySkill();
}

String DraftSchematicAdapter::getExperimentationSkill() {
	return (static_cast<DraftSchematic*>(stub))->getExperimentationSkill();
}

String DraftSchematicAdapter::getCustomizationSkill() {
	return (static_cast<DraftSchematic*>(stub))->getCustomizationSkill();
}

String DraftSchematicAdapter::getCustomName() {
	return (static_cast<DraftSchematic*>(stub))->getCustomName();
}

unsigned int DraftSchematicAdapter::getTanoCRC() {
	return (static_cast<DraftSchematic*>(stub))->getTanoCRC();
}

int DraftSchematicAdapter::getTemplateListSize() {
	return (static_cast<DraftSchematic*>(stub))->getTemplateListSize();
}

String DraftSchematicAdapter::getTemplate(int i) {
	return (static_cast<DraftSchematic*>(stub))->getTemplate(i);
}

/*
 *	DraftSchematicHelper
 */

DraftSchematicHelper* DraftSchematicHelper::staticInitializer = DraftSchematicHelper::instance();

DraftSchematicHelper::DraftSchematicHelper() {
	className = "DraftSchematic";

	Core::getObjectBroker()->registerClass(className, this);
}

void DraftSchematicHelper::finalizeHelper() {
	DraftSchematicHelper::finalize();
}

DistributedObject* DraftSchematicHelper::instantiateObject() {
	return new DraftSchematic(DummyConstructorParameter::instance());
}

DistributedObjectServant* DraftSchematicHelper::instantiateServant() {
	return new DraftSchematicImplementation();
}

DistributedObjectAdapter* DraftSchematicHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DraftSchematicAdapter(static_cast<DraftSchematic*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

