#pragma once
#include <lua.h>
enum EActorProp
{
	PROP_ID,
	PROP_DIR,
	PROP_RACE,
	PROP_SCHOOL,
	PROP_SCHOOL_SKILL_LV_TARGETHIT,
	PROP_SCHOOL_SKILL_LV_DAMAGE,
	PROP_SCHOOL_SKILL_LV_DEFEND,
	PROP_SCHOOL_SKILL_LV_SPEED,
	PROP_SCHOOL_SKILL_LV_DODGE,
	PROP_SCHOOL_SKILL_LV_SPIRITUAL,
	PROP_SCHOOL_SKILL_LV_HP,
	PROP_SCHOOL_SKILL_LV_MP,
	PROP_EQUIP_HP,
	PROP_EQUIP_MP,
	PROP_EQUIP_TARGET,
	PROP_EQUIP_DAMAGE,
	PROP_EQUIP_DEFEND,
	PROP_EQUIP_SPIRITUAL,
	PROP_EQUIP_AGILE,
	PROP_AUXI_SKILL_LV_HP,
	PROP_AUXI_SKILL_LV_MP,
	PROP_SHOW_BOUNDINGBOX,
	PROP_SHOW_AVATAR_INFO,
	PROP_IS_AUTORUN,
	PROP_IS_DEAD,
	PROP_FRAME_SPEED,
	PROP_ACTOR_TYPE,
	PROP_NAME,
	PROP_AVATAR_ID,
	PROP_WEAPON_AVATAR_ID,
	PROP_SCENE_ID,
	PROP_ROLE_ID,
	PROP_WEAPON_ID,
	PROP_WEAPON_TYPE,
	PROP_ACTION_ID,
	PROP_POS,
	PROP_MOVE_TO_POS,
	PROP_DIR_COUNT,
	PROP_IS_MOVE,
	PROP_MOVE_VELOCITY,
	PROP_CAN_MOVE,
	PROP_IS_COMBAT,
	PROP_TARGET_ID,
	PROP_CAST_ID,
	PROP_IS_CALC_MOVE_LIST,
	PROP_SAY_DURATION,
	PROP_IS_LOCAL,
	PROP_COMBAT_POS,
	PROP_COMBAT_DIR,
	PROP_COMBAT_BACKUP_POS,
	PROP_COMBAT_TARGET_POS,
	PROP_COMBAT_ACTING,
	PROP_COMBAT_BATTLE_ID,
	PROP_TEAM_TYPE,
	PROP_TEAM_ID,
	PROP_USING_SKILL,
	PROP_CAST_SKILL_TID,
	PROP_TURN_READY,
	PROP_ASM_ATK_COMBO,
	PROP_ASM_BEHIT_ANIM,
	PROP_ASM_DAMAGE,
	PROP_ASM_HEAL,
	PROP_ASM_BUFF_ANIM,
	PROP_ASM_PLAY_BEHIT,
	PROP_ASM_RUNTO_X,
	PROP_ASM_RUNTO_Y,
	PROP_HP,
	PROP_MP,
	PROP_SP,
	PROP_LV,
	PROP_ADD_PROP_PLAN,
	PROP_EXP,
	PROP_BASE_FORCE,
	PROP_BASE_HEALTH,
	PROP_BASE_STAMINA,
	PROP_BASE_AGILITY,
	PROP_BASE_MAGIC,
	PROP_SUMMON_TAKE_LEVEL,
	PROP_SUMMON_BATTLE_LEVEL,
	PROP_SUMMON_ATK_QUAL,
	PROP_SUMMON_DEF_QUAL,
	PROP_SUMMON_HEALTH_QUAL,
	PROP_SUMMON_MAGIC_QUAL,
	PROP_SUMMON_SPEED_QUAL,
	PROP_SUMMON_DODGE_QUAL,
	PROP_SUMMON_GROW_COEF,
	PROP_IS_USING_SKILL,
	PROP_COMBAT_SKILL_BAN_ATK,
	PROP_COMBAT_SKILL_BAN_SPELL,
	PROP_SUMMON_UIDS,
	PROP_SUMMON_HAS_OWNER,
	PROP_SUMMON_OWNER,
	PROP_COMBAT_POS_ID,
	PROP_DAMAGE_EXTRA,
	PROP_DEFEND_EXTRA,
	PROP_SPEED_EXTRA,
	PROP_SPIRITUAL_EXTRA,
	PROP_TARGETHIT_EXTRA,
	PROP_DODGE_EXTRA,
	PROP_ASSIGN_FORCE,
	PROP_ASSIGN_HEALTH,
	PROP_ASSIGN_STAMINA,
	PROP_ASSIGN_AGILITY,
	PROP_ASSIGN_MAGIC,
	PROP_ATK_PRACTICE_SKILL_LV,
	PROP_ATK_RESISTANCE_SKILL_LV,
	PROP_SPELL_PRACTICE_SKILL_LV,
	PROP_SPELL_RESISTANCE_SKILL_LV,
	PROP_PAL_MATRIX,
	PROP_IS_AUTO_COMMAND,
	PROP_SETTING_BGM,
	PROP_COUNT
};
enum EActorPropType
{
	PROP_TYPE_BOOL,
	PROP_TYPE_FLOAT,
	PROP_TYPE_INT,
	PROP_TYPE_STR,
	PROP_TYPE_UINT64,
	PROP_TYPE_VEC2
};
void luaopen_actor_enum(lua_State* L);
