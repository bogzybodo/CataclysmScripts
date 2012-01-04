/*
 * Copyright (C) 2005 - 2011 MaNGOS <http://www.getmangos.org/>
 *
 * Copyright (C) 2008 - 2011 TrinityCore <http://www.trinitycore.org/>
 *
 * Copyright (C) 2011 ArkCORE <http://www.arkania.net/>
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

#ifndef DEF_THE_BASTION_OF_TWILIGHT_H
#define DEF_THE_BASTION_OF_TWILIGHT_H

enum Data
{
	DATA_WYRMBREAKER_EVENT,
	DATA_VALIONA_THERALION_EVENT,
	DATA_COUNCIL_EVENT,
	DATA_CHOGALL_EVENT,
	DATA_SINESTRA_EVENT,
	DATA_TEAM_IN_INSTANCE,
};

enum Data64
{
	DATA_WYRMBREAKER,
	DATA_VALIONA,
	DATA_THERALION,
	DATA_FELUDIUS,
	DATA_IGNACIOUS,
	DATA_ARION,
	DATA_TERRASTRA,
	DATA_MONSTROSITY,
	DATA_CHOGALL,
	DATA_SINESTRA,
};

enum CreatureIds
{
	//Bosses
	BOSS_WYRMBREAKER = 44600,
	BOSS_VALIONA = 45992,
	BOSS_THERALION = 45993,
	BOSS_FELUDIUS = 43687,
	BOSS_IGNACIOUS = 43686,
	BOSS_ARION = 43688,
	BOSS_TERRASTRA = 43689,
	BOSS_MONSTROSITY = 43735,
	BOSS_CHOGALL = 43324,
	BOSS_SINESRTA = 45213,

	// Other NPC's
	NPC_SLATE_DRAKE = 44652,
	NPC_NETHER_SCION = 44645,
	NPC_STORM_RIDER = 44650,
	NPC_TWILIGHT_DRAKE = 48436,
	NPC_TIME_WARDEN = 44797,
	NPC_ORPHANED_WHELP = 44641,
	NPC_PROTO_BEHEMOTH = 44687,
	NPC_THERALION_FLIGHT_TARGET_STALKER = 46364,
	NPC_CYCLON_WIND = 45026,
};

enum Spells
{
	// Halfus Whyrmbreaker
	SPELL_FIREBALL = 83862,
	SPELL_CYCLONE_WINDS = 83612,
    SPELL_BIND_WILL = 83432,
    SPELL_DRAGON_VENGEANCE = 87683,
    SPELL_NETHER_BLINDNESS = 83611,
    SPELL_BERSERK_HALFUS = 26662,
    SPELL_DANCING_FLAMES = 84106,
    SPELL_FIREBALL_BARADGE = 83706,
	SPELL_FURIOUS_ROAR = 83710,
    SPELL_STONE_TOUCH = 83603,
    SPELL_SHADOW_NOVA = 83703,

	SPELL_MALEVOLENT_STRIKES_DEBUFF = 83908,
    SPELL_MALEVOLENT_STRIKES = 39171,
	SPELL_SHADOW_WARPED = 83952,

	// Theralion & Valiona
    SPELL_FRENZIED_ASSAULT = 83693,
    SPELL_UNRESPONSIVE_DRAKE = 86003,
    SPELL_UNRESPONSIVE_WHELP = 86022,
    SPELL_TIME_DILATION = 83601,
    SPELL_BERSERK_THERALION = 47008,
    SPELL_DAZZLING_DESTRUCTION_MISSILE = 86408,
    SPELL_DAZZLING_DESTRUCTION_SUMMON = 86385,
    SPELL_ENGULFING_MAGIC = 86622,
    SPELL_FABILOUS_FLAMES = 86505,
    SPELL_TWILIGHT_BLAST = 86369,
    SPELL_TWILIGHT_SHIFT = 86360,
    SPELL_BLACKOUT = 86788,
    SPELL_DEVOURING_FLAMES = 86840,
    SPELL_DEEP_BREATH = 86059,
    SPELL_TWILIGHT_METEORITE = 86013,
    SPELL_HYDROLANCE = 82752,
    SPELL_WATERBOMB = 82699,
    SPELL_HEART_OF_ICE = 82655,
    SPELL_GLACIATE = 92508,
    SPELL_BURNING_BLOOD = 82660,
    SPELL_FLAME_TORRENT = 82777,
    SPELL_AEGIS_OF_FLAMES = 92512,
};

enum Defines
{
	RANDOM_DRAGON_SLATE_DRAKE = 1,
	RANDOM_DRAGON_NETHER_SCION = 2,
	RANDOM_DRAGON_STORM_RIDER = 3,
	RANDOM_DRAGON_TIME_WARDEN = 1,
	RANDOM_DRAGON_ORPHANED_WHELP = 2,
};

enum DataVar
{
	DATA_PHASE,
	DATA_ENGULFING_COUNT,
	DATA_DAZZLING_DESTRUCTION,
	DATA_HB_VALIONA_THERALION = 10,
};

enum MovePoints
{
    POINT_VALIONA_TAKEOFF,
    POINT_VALIONA_PLACE,
    POINT_VALIONA_LAND,
    POINT_THERALION_TAKEOFF,
    POINT_THERALION_PLACE,
    POINT_THERALION_LAND,
    POINT_CYCLON_WIND,
};

enum Actions
{
    ACTION_VALIONA_AIRBORNE,
    ACTION_THERALION_AIRBORNE,
    ACTION_IGNACIOUS_JUMPS,
    ACTION_INGACIOUS_CHARGE,
};

static const Position Positions[2] =
{
	{5.2541615f,1.5149917f,4.9161961f,0.0000001f},
	{5.5616511f,1.1453654f,4.6541651f,0.0000001f},
};

enum Spells_Destruction
{
	SPELL_SUMMON_DESTRUCTION = 86385,
	SPELL_DESTRUCTION_VISUAL = 86383,
	SPELL_DESTRUCTION_PROCS  = 92926,
};

enum Waypoints
{
	WALK_FELUDIUS = 14,
};

enum Talks
{
	SAY_PHASE3_FELUDIUS = 4,
};

#endif