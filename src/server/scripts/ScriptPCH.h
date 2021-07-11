/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "CreatureAIImpl.h"
#include "InstanceScript.h"
#include "Map.h"
#include "MotionMaster.h"
#include "ObjectAccessor.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "SpellInfo.h"
#include "SpellScript.h"
#include "TemporarySummon.h"
#include "Mail.h"
#include "ScriptMgr.h"
#include "Object.h"
#include "ObjectMgr.h"
#include "Unit.h"
#include "Spell.h"
#include "Creature.h"
#include "CreatureAI.h"
#include "GameObject.h"
#include "GameEventMgr.h"
#include "ScriptedAI.h"
#include "ScriptedPetAI.h"
#include "ScriptedGameObject.h"
#include "ScriptedFollowerAI.h"
#include "ScriptedEscortAI.h"
#include "ScriptedGossip.h"
#include "GridSearchers.h"
#include "ScriptedInstance.h"
#include "SpellAuras.h"
#include "TemporarySummon.h"
#include "NullCreatureAI.h"
#include "Chat.h"
#include "BattleGroundAV.h"
#include "World.h"
#include "Weather.h"
#include "TotemAI.h"

#ifdef _WIN32
#include <windows.h>
#endif

#endif
