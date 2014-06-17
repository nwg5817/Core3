/*
 * LuaAiAgent.h
 *
 *  Created on: 21/01/2012
 *      Author: victor
 */

#ifndef LUAAIAGENT_H_
#define LUAAIAGENT_H_


#include "engine/engine.h"

#include "server/zone/objects/creature/LuaCreatureObject.h"
#include "server/zone/objects/creature/AiAgent.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
	class AiAgent;

	class LuaAiAgent : public LuaCreatureObject {
	public:
		// Constants
		static const char className[];
		static Luna<LuaAiAgent>::RegType Register[];

		// Initialize the pointer
		LuaAiAgent(lua_State *L);
		~LuaAiAgent();

		int _setObject(lua_State* L);
		int _getObject(lua_State* L);
		int setFollowObject(lua_State* L);
		int getFollowObject(lua_State* L);
		int findNextPosition(lua_State* L);
		int getMaxDistance(lua_State* L);
		int generatePatrol(lua_State* L);
		int setDestination(lua_State* L);
		int completeMove(lua_State* L);
		int setWait(lua_State* L);
		int getCurrentSpeed(lua_State* L);
		int setCurrentSpeed(lua_State* L);
		int setBehaviorStatus(lua_State* L);
		int getBehaviorStatus(lua_State* L);
		int info(lua_State* L);
		int spatialChat(lua_State* L);
	private:
		ManagedReference<AiAgent*> realObject;
	};
}
}
}
}

using namespace server::zone::objects::creature;
#endif /* LUAAIAGENT_H_ */
