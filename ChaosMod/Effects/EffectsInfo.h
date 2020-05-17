#pragma once

#include <map>
#include <vector>

enum EffectType
{
	EFFECT_PLAYER_SUICIDE,
	EFFECT_PLUS_2_STARS,
	EFFECT_5_STARS,
	EFFECT_CLEAR_STARS,
	EFFECT_NEVER_WANTED,
	EFFECT_STRIP_WEAPONS,
	EFFECT_GIVE_RPG,
	EFFECT_GIVE_MINIGUN,
	EFFECT_GIVE_PARACHUTE,
	EFFECT_GIVE_PISTOL,
	EFFECT_GIVE_TAZER,
	EFFECT_GIVE_RAILGUN,
	EFFECT_GIVE_KNIFE,
	EFFECT_GIVE_BATTLEAXE,
	EFFECT_HEAL,
	EFFECT_ARMOR,
	EFFECT_IGNITE,
	EFFECT_ANGRY_JESUS,
	EFFECT_SPAWN_IMPOTENTRAGE,
	EFFECT_ANGRY_JESUS2,
	EFFECT_IGNITE_PEDS,
	EFFECT_EXPLODE_VEHS,
	EFFECT_PLAYER_LAUNCH,
	EFFECT_VEHS_LAUNCH,
	EFFECT_PLAYER_VEH_LOCK,
	EFFECT_NOTHING,
	EFFECT_KILL_ENGINE,
	EFFECT_TIME_MORNING,
	EFFECT_TIME_DAY,
	EFFECT_TIME_EVENING,
	EFFECT_TIME_NIGHT,
	EFFECT_WEATHER_SUNNY,
	EFFECT_WEATHER_EXTRASUNNY,
	EFFECT_WEATHER_RAINY,
	EFFECT_WEATHER_THUNDER,
	EFFECT_WEATHER_FOGGY,
	EFFECT_WEATHER_NEUTRAL,
	EFFECT_WEATHER_XMAS,
	EFFECT_TP_LSAIRPORT,
	EFFECT_TP_MAZETOWER,
	EFFECT_TP_FORTZANCUDO,
	EFFECT_TP_MOUNTCHILLIAD,
	EFFECT_TP_SKYFALL,
	EFFECT_NO_PHONE,
	EFFECT_SET_INTO_CLOSEST_VEH,
	EFFECT_EXIT_CURRENT_VEH,
	EFFECT_GAMESPEED_X05,
	EFFECT_GAMESPEED_X02,
	EFFECT_GAMESPEED_LAG,
	EFFECT_PEDS_RIOT,
	EFFECT_RED_VEHS,
	EFFECT_BLUE_VEHS,
	EFFECT_GREEN_VEHS,
	EFFECT_BLACK_VEHS,
	EFFECT_CHROME_VEHS,
	EFFECT_PINK_VEHS,
	EFFECT_RAINBOW_VEHS,
	EFFECT_FORCED_FP,
	EFFECT_SLIPPERY_VEHS,
	EFFECT_NO_GRAV_VEHS,
	EFFECT_PLAYER_INVINCIBLE,
	EFFECT_2XENGINE_VEHS,
	EFFECT_10XENGINE_VEHS,
	EFFECT_05XENGINE_VEHS,
	EFFECT_SPAWN_TANK,
	EFFECT_SPAWN_ADDER,
	EFFECT_SPAWN_DUMP,
	EFFECT_SPAWN_MONSTER,
	EFFECT_SPAWN_BMX,
	EFFECT_SPAWN_TUG,
	EFFECT_SPAWN_CARGO,
	EFFECT_SPAWN_BUS,
	EFFECT_SPAWN_BLIMP,
	EFFECT_SPAWN_BUZZARD,
	EFFECT_SPAWN_FAGGIO,
	EFFECT_SPAWN_RUINER3,
	EFFECT_SPAWN_BALETRAILER,
	EFFECT_SPAWN_RANDOM,
	EFFECT_NO_VEHS,
	EFFECT_EXPLODE_CUR_VEH,
	EFFECT_PEDS_INVISIBLE,
	EFFECT_VEHS_INVISIBLE,
	EFFECT_NO_RADAR,
	EFFECT_NO_HUD,
	EFFECT_SUPER_RUN,
	EFFECT_SUPER_JUMP,
	EFFECT_PLAYER_RAGDOLL,
	EFFECT_PEDS_RAGDOLL,
	EFFECT_PEDS_RAGDOLL_ON_TOUCH,
	EFFECT_PLUS_100K,
	EFFECT_MINUS_100K,
	EFFECT_PEDS_FOLLOW_PLAYER,
	EFFECT_PLAYER_DRUNK,
	EFFECT_PEDS_OHKO,
	EFFECT_PEDS_NO_FEAR,
	EFFECT_SCREEN_BLOOM,
	EFFECT_SCREEN_LSD,
	EFFECT_SCREEN_REALLSD,
	EFFECT_SCREEN_CHOPVISION,
	EFFECT_SCREEN_RENDERDIST,
	EFFECT_SCREEN_FOG,
	EFFECT_SCREEN_BRIGHT,
	EFFECT_SCREEN_MEXICO,
	EFFECT_SCREEN_FULLBRIGHT,
	EFFECT_PEDS_IGNORE_PLAYER,
	EFFECT_HONK_BOOSTING,
	EFFECT_MIN_DAMAGE,
	EFFECT_NO_HEADSHOTS,
	EFFECT_PEDS_FROZEN,
	EFFECT_LOW_GRAV,
	EFFECT_VERY_LOW_GRAV,
	EFFECT_INSANE_GRAV,
	EFFECT_VEH_REPAIR,
	EFFECT_VEH_POP_TIRES,
	EFFECT_ALL_VEH_POP_TIRES,
	EFFECT_NO_SPECIAL_ABILITY,
	EFFECT_IN_THE_HOOD,
	EFFECT_FORCED_CINEMATIC,
	EFFECT_PEDS_FLEE,
	EFFECT_BREAK_VEH_DOORS,
	EFFECT_ZOMBIES,
	EFFECT_METEOR_RAIN,
	EFFECT_BLIND,
	EFFECT_BLACKOUT,
	EFFECT_QUICK_TIME,
	EFFECT_MOV_NO_UD,
	EFFECT_MOV_NO_LR,
	EFFECT_BREAK,
	EFFECT_EVERYONE_RPG,
	EFFECT_EVERYONE_TAZER,
	EFFECT_EVERYONE_MINIGUN,
	EFFECT_EVERYONE_UPNATOMIZER,
	EFFECT_EVERYONE_RANDOMWEP,
	EFFECT_NO_SPRINT,
	EFFECT_NO_JUMP,
	EFFECT_EVERYONE_INVINCIBLE,
	EFFECT_VEHS_INVINCIBLE,
	EFFECT_PLAYER_SHOT_RAGDOLL,
	EFFECT_JUMPY_VEHS,
	EFFECT_LOCK_VEHS,
	EFFECT_TOTAL_CHAOS,
	EFFECT_NO_RAGDOLL,
	EFFECT_VEHS_HORN,
	EFFECT_TP_WAYPOINT,
	EFFECT_PEDS_SAY_HI,
	EFFECT_PEDS_INSULT,
	EFFECT_EXPLOSIVE_BULLETS,
	EFFECT_EXPLOSIVE_PUNCH,
	EFFECT_GIVE_ALL_WEPS,
	EFFECT_PEDS_AIMBOT,
	//EFFECT_EVERYTHING_FACE_PLAYER,
	EFFECT_PEDS_BLIND,
	EFFECT_SPAWN_COMPANION_CHOP,
	EFFECT_SPAWN_COMPANION_CHIMP,
	EFFECT_SPAWN_COMPANION_BRAD,
	EFFECT_SPAWN_COMPANION_RANDOM,
	EFFECT_PLAYER_NIGHTVISION,
	EFFECT_PLAYER_HEATVISION,
	EFFECT_PLAYER_MONEYDROPS,
	EFFECT_VEH_RAINBOWHEADLIGHTS,
	EFFECT_VEH_TPRANDOMPEDS,
	EFFECT_PEDS_REVIVE,
	EFFECT_SNOW,
	EFFECT_WHALE_RAIN,
	EFFECT_VEH_MAX_UPGRADES,
	EFFECT_VEH_RANDOM_UPGRADES,
	EFFECT_INTENSE_MUSIC,
	EFFECT_PEDS_DRIVEBY,
	EFFECT_PLAYER_RANDOMCLOTHES,
	EFFECT_PEDS_RAINBOWWEPS,
	EFFECT_GTAO_TRAFFIC,
	EFFECT_SPAWN_IE_SULTAN,
	EFFECT_PLAYER_SETINTORANDVEH,
	EFFECT_VEHS_FULLACCEL,
	EFFECT_SPAWN_UFO,
	EFFECT_EXPLOSIVE_PEDS,
	EFFECT_PEDS_ONEPUNCH,
	EFFECT_INVERTVELOCITY,
	EFFECT_PLAYER_TPEVERYTHING,
	EFFECT_WEATHER_RANDOMWEATHER,
	EFFECT_LOW_POLY,
	EFFECT_NEARBY_PEDS_OBLITERATE,
	EFFECT_VEHS_TRIGGER_ALARM,
	EFFECT_VEH_SET_RANDOM_SEAT,
	EFFECT_VEH_SET_TOPSPEED_30MPH,
	EFFECT_JESUS_TAKE_THE_WHEEL,
	EFFECT_VEH_POP_TIRE_LOOP,
	EFFECT_ANGRY_ALIEN,
	EFFECT_OHKO_VEHICLES,
	EFFECT_MISC_WAVEY,
	EFFECT_VEH_SPAM_DOORS,
	EFFECT_VEH_SPEED_MINIMUM,
	EFFECT_MISC_LESTER,
	EFFECT_MISC_CREDITS,
	EFFECT_MISC_EARTHQUAKE,
	EFFECT_TP_FRONT,
	EFFECT_SPAWN_FAN_CATS,
	EFFECT_PEDS_COPS,
	EFFECT_ROT_ALL_VEHS,
	EFFECT_LAUNCH_ALL_PEDS,
	EFFECT_PEDS_ATTACK_PLAYER,
	EFFECT_CLONE_PLAYER,
	EFFECT_SLIDY_PEDS,
	_EFFECT_ENUM_MAX
};

struct EffectInfo
{
public:
	EffectInfo(const char* name, const char* id, bool isTimed = false, std::vector<EffectType> incompatibleList = {}, bool shortDur = false)
		: Name(name), Id(id), IsTimed(isTimed), IsShortDuration(shortDur), IncompatibleWith(incompatibleList) {}

public:
	const char* Name;
	const char* Id;
	const bool IsTimed;
	const bool IsShortDuration;
	const std::vector<EffectType> IncompatibleWith;
};

const std::map<EffectType, EffectInfo> g_effectsMap =
{
	{EFFECT_PLAYER_SUICIDE, {"Suicide", "player_suicide"}},
	{EFFECT_PLUS_2_STARS, {"+2 Wanted Stars", "player_plus2stars"}},
	{EFFECT_5_STARS, {"5 Wanted Stars", "player_5stars"}},
	{EFFECT_CLEAR_STARS, {"Clear Wanted Level", "player_clearwanted"}},
	{EFFECT_NEVER_WANTED, {"Never Wanted", "player_neverwanted", true}},
	{EFFECT_STRIP_WEAPONS, {"Remove Weapons From Everyone", "peds_remweps"}},
	{EFFECT_GIVE_RPG, {"Give RPG", "player_giverpg"}},
	{EFFECT_GIVE_MINIGUN, {"Give Minigun", "player_giveminigun"}},
	{EFFECT_GIVE_PARACHUTE, {"Give Parachute", "player_giveparachute"}},
	{EFFECT_GIVE_PISTOL, {"Give Pistol", "player_givepistol"}},
	{EFFECT_GIVE_TAZER, {"Give Stungun", "player_givestungun"}},
	{EFFECT_GIVE_RAILGUN, {"Give Railgun", "player_giverailgun"}},
	{EFFECT_GIVE_KNIFE, {"Give Knife", "player_giveknife"}},
	{EFFECT_GIVE_BATTLEAXE, {"Give Battleaxe", "player_givebattleaxe"}},
	{EFFECT_HEAL, {"Heal Player", "player_heal"}},
	{EFFECT_ARMOR, {"Give Armor", "player_armor"}},
	{EFFECT_IGNITE, {"Ignite Player", "player_ignite"}},
	{EFFECT_ANGRY_JESUS, {"Spawn Griefer Jesus", "spawn_grieferjesus"}},
	{EFFECT_SPAWN_IMPOTENTRAGE, {"Spawn Impotent Rage", "peds_spawnimrage"}},
	{EFFECT_ANGRY_JESUS2, {"Spawn Extreme Griefer Jesus", "spawn_grieferjesus2"}},
	{EFFECT_IGNITE_PEDS, {"Ignite All Nearby Peds", "peds_ignite"}},
	{EFFECT_EXPLODE_VEHS, {"Explode All Nearby Vehicles", "vehs_explode"}},
	{EFFECT_PLAYER_LAUNCH, {"Launch Player Up", "player_upupaway"}},
	{EFFECT_VEHS_LAUNCH, {"Launch All Vehicles Up", "vehs_upupaway"}},
	{EFFECT_PLAYER_VEH_LOCK, {"Lock Vehicle Player Is In", "playerveh_lock"}},
	{EFFECT_NOTHING, {"Nothing", "nothing"}},
	{EFFECT_KILL_ENGINE, {"Kill Engine Of Current Vehicle", "playerveh_killengine"}},
	{EFFECT_TIME_MORNING, {"Set Time To Morning", "time_morning"}},
	{EFFECT_TIME_DAY, {"Set Time To Daytime", "time_day"}},
	{EFFECT_TIME_EVENING, {"Set Time To Evening", "time_evening"}},
	{EFFECT_TIME_NIGHT, {"Set Time To Night", "time_night"}},
	{EFFECT_WEATHER_SUNNY, {"Sunny Weather", "weather_sunny"}},
	{EFFECT_WEATHER_EXTRASUNNY, {"Extra Sunny Weather", "weather_extrasunny"}},
	{EFFECT_WEATHER_RAINY, {"Rainy Weather", "weather_rainy"}},
	{EFFECT_WEATHER_THUNDER, {"Stormy Weather", "weather_stormy"}},
	{EFFECT_WEATHER_FOGGY, {"Foggy Weather", "weather_foggy"}},
	{EFFECT_WEATHER_NEUTRAL, {"Neutral Weather", "weather_neutral"}},
	{EFFECT_WEATHER_XMAS, {"Snowy Weather", "weather_snowy"}},
	{EFFECT_TP_LSAIRPORT, {"Teleport To LS Airport", "tp_lsairport"}},
	{EFFECT_TP_MAZETOWER, {"Teleport To Top Of Maze Bank Tower", "tp_mazebanktower"}},
	{EFFECT_TP_FORTZANCUDO, {"Teleport To Fort Zancudo", "tp_fortzancudo"}},
	{EFFECT_TP_MOUNTCHILLIAD, {"Teleport To Mount Chilliad", "tp_mountchilliad"}},
	{EFFECT_TP_SKYFALL, {"Teleport To Heaven", "tp_skyfall"}},
	{EFFECT_NO_PHONE, {"No Phone", "player_nophone", true}},
	{EFFECT_SET_INTO_CLOSEST_VEH, {"Set Player Into Closest Vehicle", "player_tpclosestveh"}},
	{EFFECT_EXIT_CURRENT_VEH, {"Exit Current Vehicle", "playerveh_exit"}},
	{EFFECT_GAMESPEED_X02, {"x0.2 Gamespeed", "time_x02", true, { EFFECT_GAMESPEED_X05, EFFECT_GAMESPEED_LAG }, true}},
	{EFFECT_GAMESPEED_X05, {"x0.5 Gamespeed", "time_x05", true, { EFFECT_GAMESPEED_X02, EFFECT_GAMESPEED_LAG }, true}},
	{EFFECT_GAMESPEED_LAG, {"Lag", "time_lag", true, { EFFECT_GAMESPEED_X02, EFFECT_GAMESPEED_X05 }, true}},
	{EFFECT_PEDS_RIOT, {"Peds Riot", "peds_riot", true}},
	{EFFECT_RED_VEHS, {"Red Traffic", "vehs_red", true, { EFFECT_BLUE_VEHS, EFFECT_GREEN_VEHS, EFFECT_BLACK_VEHS, EFFECT_RAINBOW_VEHS, EFFECT_VEHS_INVISIBLE, EFFECT_PINK_VEHS }}},
	{EFFECT_BLUE_VEHS, {"Blue Traffic", "vehs_blue", true, { EFFECT_RED_VEHS, EFFECT_GREEN_VEHS, EFFECT_BLACK_VEHS, EFFECT_RAINBOW_VEHS, EFFECT_VEHS_INVISIBLE, EFFECT_PINK_VEHS }}},
	{EFFECT_GREEN_VEHS, {"Green Traffic", "vehs_green", true, { EFFECT_RED_VEHS, EFFECT_BLUE_VEHS, EFFECT_BLACK_VEHS, EFFECT_RAINBOW_VEHS, EFFECT_VEHS_INVISIBLE, EFFECT_PINK_VEHS }}},
	{EFFECT_BLACK_VEHS, {"Black Traffic", "vehs_black", true, { EFFECT_RED_VEHS, EFFECT_BLUE_VEHS, EFFECT_GREEN_VEHS, EFFECT_RAINBOW_VEHS, EFFECT_VEHS_INVISIBLE, EFFECT_PINK_VEHS }}},
	{EFFECT_CHROME_VEHS, {"Chrome Traffic", "vehs_chrome", true, { EFFECT_RED_VEHS, EFFECT_BLUE_VEHS, EFFECT_GREEN_VEHS, EFFECT_RAINBOW_VEHS, EFFECT_BLACK_VEHS, EFFECT_VEHS_INVISIBLE, EFFECT_PINK_VEHS }}},
	{EFFECT_PINK_VEHS, {"Hot Traffic", "vehs_pink", true, { EFFECT_VEHS_INVISIBLE, EFFECT_CHROME_VEHS }}},
	{EFFECT_RAINBOW_VEHS, {"Rainbow Traffic", "vehs_rainbow", true, { EFFECT_RED_VEHS, EFFECT_BLUE_VEHS, EFFECT_GREEN_VEHS, EFFECT_BLACK_VEHS, EFFECT_VEHS_INVISIBLE, EFFECT_PINK_VEHS }}},
	{EFFECT_FORCED_FP, {"First Person", "player_firstperson", true, { EFFECT_FORCED_CINEMATIC }}},
	{EFFECT_SLIPPERY_VEHS, {"Slippery Vehicles", "vehs_slippery", true}},
	{EFFECT_NO_GRAV_VEHS, {"Vehicles Have No Gravity", "vehs_nogravity", true, {}, true}},
	{EFFECT_PLAYER_INVINCIBLE, {"Invincibility", "player_invincible", true}},
	{EFFECT_2XENGINE_VEHS, {"2x Vehicle Engine Speed", "vehs_x2engine", true, { EFFECT_10XENGINE_VEHS, EFFECT_05XENGINE_VEHS }}},
	{EFFECT_10XENGINE_VEHS, {"10x Vehicle Engine Speed", "vehs_x10engine", true, { EFFECT_2XENGINE_VEHS, EFFECT_05XENGINE_VEHS }}},
	{EFFECT_05XENGINE_VEHS, {"0.5x Vehicle Engine Speed", "vehs_x05engine", true, { EFFECT_2XENGINE_VEHS, EFFECT_10XENGINE_VEHS }}},
	{EFFECT_SPAWN_TANK, {"Spawn Rhino", "spawn_rhino"}},
	{EFFECT_SPAWN_ADDER, {"Spawn Adder", "spawn_adder"}},
	{EFFECT_SPAWN_DUMP, {"Spawn Dump", "spawn_dump"}},
	{EFFECT_SPAWN_MONSTER, {"Spawn Monster", "spawn_monster"}},
	{EFFECT_SPAWN_BMX, {"Spawn BMX", "spawn_bmx"}},
	{EFFECT_SPAWN_TUG, {"Spawn Tug", "spawn_tug"}},
	{EFFECT_SPAWN_CARGO, {"Spawn Cargo Plane", "spawn_cargo"}},
	{EFFECT_SPAWN_BUS, {"Spawn Bus", "spawn_bus"}},
	{EFFECT_SPAWN_BLIMP, {"Spawn Blimp", "spawn_blimp"}},
	{EFFECT_SPAWN_BUZZARD, {"Spawn Buzzard", "spawn_buzzard"}},
	{EFFECT_SPAWN_FAGGIO, {"Spawn Faggio", "spawn_faggio"}},
	{EFFECT_SPAWN_RUINER3, {"Spawn Ruined Ruiner", "spawn_ruiner3"}},
	{EFFECT_SPAWN_BALETRAILER, {"Spawn Bale Trailer", "spawn_baletrailer"}},
	{EFFECT_SPAWN_RANDOM, {"Spawn Random Vehicle", "spawn_random"}},
	{EFFECT_NO_VEHS, {"No Traffic", "notraffic", true}},
	{EFFECT_EXPLODE_CUR_VEH, {"Explode Current Vehicle", "playerveh_explode"}},
	{EFFECT_PEDS_INVISIBLE, {"Everyone Is A Ghost", "peds_ghost", true}},
	{EFFECT_VEHS_INVISIBLE, {"Invisible Vehicles", "vehs_ghost", true, { EFFECT_RED_VEHS, EFFECT_BLUE_VEHS, EFFECT_GREEN_VEHS, EFFECT_BLACK_VEHS, EFFECT_RAINBOW_VEHS, EFFECT_RAINBOW_VEHS }}},
	{EFFECT_NO_RADAR, {"No Radar", "no_radar", true, { EFFECT_NO_HUD }}},
	{EFFECT_NO_HUD, {"No HUD", "no_hud", true, { EFFECT_NO_RADAR } }},
	{EFFECT_SUPER_RUN, {"Super Run", "player_superrun", true }},
	{EFFECT_SUPER_JUMP, {"Super Jump", "player_superjump", true }},
	{EFFECT_PLAYER_RAGDOLL, {"Ragdoll", "player_ragdoll"}},
	{EFFECT_PEDS_RAGDOLL_ON_TOUCH, {"Sensitive Touch", "peds_sensitivetouch", true}},
	{EFFECT_PLUS_100K, {"+$100.000", "richboi"}},
	{EFFECT_MINUS_100K, {"-$100.000", "poorboi"}},
	{EFFECT_PEDS_FOLLOW_PLAYER, {"You Are Famous", "player_famous"}},
	{EFFECT_PLAYER_DRUNK, {"Drunk", "player_drunk", true}},
	{EFFECT_PEDS_OHKO, {"One Hit KO", "player_ohko", true}},
	{EFFECT_PEDS_NO_FEAR, {"Peds Are Easily Provoked", "peds_nofear", true}},
	{EFFECT_SCREEN_BLOOM, {"Bloom", "screen_bloom", true, { EFFECT_SCREEN_LSD, EFFECT_SCREEN_RENDERDIST, EFFECT_SCREEN_FOG, EFFECT_SCREEN_BRIGHT, EFFECT_SCREEN_MEXICO, EFFECT_SCREEN_FULLBRIGHT }}},
	{EFFECT_SCREEN_LSD, {"LSD", "screen_lsd", true, { EFFECT_SCREEN_BLOOM, EFFECT_SCREEN_RENDERDIST, EFFECT_SCREEN_FOG, EFFECT_SCREEN_BRIGHT, EFFECT_SCREEN_MEXICO, EFFECT_SCREEN_FULLBRIGHT }}},
	{EFFECT_SCREEN_REALLSD, {"Actual LSD", "screen_lsd2", true}},
	{EFFECT_SCREEN_CHOPVISION, {"Chop Vision", "screen_chop", true}},
	{EFFECT_SCREEN_RENDERDIST, {"Where Did Everything Go?", "screen_lowrenderdist", true, { EFFECT_SCREEN_LSD, EFFECT_SCREEN_BLOOM, EFFECT_SCREEN_FOG, EFFECT_SCREEN_BRIGHT, EFFECT_SCREEN_MEXICO, EFFECT_SCREEN_FULLBRIGHT }, true}},
	{EFFECT_SCREEN_FOG, {"Extreme Fog", "screen_fog", true, { EFFECT_SCREEN_LSD, EFFECT_SCREEN_BLOOM, EFFECT_SCREEN_RENDERDIST, EFFECT_SCREEN_BRIGHT, EFFECT_SCREEN_MEXICO, EFFECT_SCREEN_FULLBRIGHT }, true}},
	{EFFECT_SCREEN_BRIGHT, {"Deep Fried", "screen_bright", true, { EFFECT_SCREEN_LSD, EFFECT_SCREEN_BLOOM, EFFECT_SCREEN_RENDERDIST, EFFECT_SCREEN_FOG, EFFECT_SCREEN_MEXICO, EFFECT_SCREEN_FULLBRIGHT }}},
	{EFFECT_SCREEN_MEXICO, {"Is This What Mexico Looks Like?", "screen_mexico", true, { EFFECT_SCREEN_LSD, EFFECT_SCREEN_BLOOM, EFFECT_SCREEN_RENDERDIST, EFFECT_SCREEN_FOG, EFFECT_SCREEN_BRIGHT, EFFECT_SCREEN_FULLBRIGHT }}},
	{EFFECT_SCREEN_FULLBRIGHT, {"mat_fullbright 1", "screen_fullbright", true, { EFFECT_SCREEN_LSD, EFFECT_SCREEN_BLOOM, EFFECT_SCREEN_RENDERDIST, EFFECT_SCREEN_FOG, EFFECT_SCREEN_BRIGHT, EFFECT_SCREEN_MEXICO }}},
	{EFFECT_PEDS_IGNORE_PLAYER, {"Peds Ignore Player", "peds_ignoreplayer", true}},
	{EFFECT_HONK_BOOSTING, {"Honk Boosting", "vehs_honkboost", true}},
	{EFFECT_MIN_DAMAGE, {"Minimal Damage", "peds_mindmg", true, { EFFECT_NO_HEADSHOTS }}},
	{EFFECT_NO_HEADSHOTS, {"No Headshots", "peds_noheadshot", true, { EFFECT_MIN_DAMAGE }}},
	{EFFECT_PEDS_FROZEN, {"Peds Are Brainless", "peds_frozen", true}},
	{EFFECT_LOW_GRAV, {"Low Gravity", "lowgravity", true, { EFFECT_VERY_LOW_GRAV, EFFECT_INSANE_GRAV }}},
	{EFFECT_VERY_LOW_GRAV, {"Very Low Gravity", "verylowgravity", true, { EFFECT_LOW_GRAV, EFFECT_INSANE_GRAV }}},
	{EFFECT_INSANE_GRAV, {"Insane Gravity", "insanegravity", true, { EFFECT_LOW_GRAV, EFFECT_VERY_LOW_GRAV }, true}},
	{EFFECT_VEH_REPAIR, {"Repair Current Vehicle", "playerveh_repair"}},
	{EFFECT_VEH_POP_TIRES, {"Pop Tires Of Current Vehicle", "playerveh_poptires"}},
	{EFFECT_ALL_VEH_POP_TIRES, {"Now This Is Some Tire Poppin'", "vehs_poptiresconstant", true}},
	{EFFECT_NO_SPECIAL_ABILITY, {"No Special Ability", "player_nospecial", true}},
	{EFFECT_IN_THE_HOOD, {"In The Hood", "peds_dance", true}},
	{EFFECT_FORCED_CINEMATIC, {"Cinematic Vehicle Cam", "player_forcedcinematiccam", true, { EFFECT_FORCED_FP }}},
	{EFFECT_PEDS_FLEE, {"All Nearby Peds Are Fleeing", "peds_flee"}},
	{EFFECT_BREAK_VEH_DOORS, {"Break All Doors Of Current Vehicle", "playerveh_breakdoors"}},
	{EFFECT_ZOMBIES, {"Zombies", "zombies", true}},
	{EFFECT_METEOR_RAIN, {"Meteor Shower", "meteorrain", true}},
	{EFFECT_BLIND, {"Blind", "screen_blind", true, {}, true}},
	{EFFECT_BLACKOUT, {"Blackout", "world_blackout", true}},
	{EFFECT_QUICK_TIME, {"Timelapse", "time_quickday", true}},
	{EFFECT_MOV_NO_UD, {"Disable Forwards / Backwards Movement", "player_noforwardbackward", true, {}, true}},
	{EFFECT_MOV_NO_LR, {"Disable Left / Right Movement", "player_noleftright", true, {}, true}},
	{EFFECT_BREAK, {"It's Time For A Break", "player_break", true, {}, true}},
	{EFFECT_EVERYONE_RPG, {"Give Everyone An RPG", "peds_giverpg"}},
	{EFFECT_EVERYONE_TAZER, {"Give Everyone A Stungun", "peds_stungun"}},
	{EFFECT_EVERYONE_MINIGUN, {"Give Everyone A Minigun", "peds_minigun"}},
	{EFFECT_EVERYONE_UPNATOMIZER, {"Give Everyone An Up-N-Atomizer", "peds_upnatomizer"}},
	{EFFECT_EVERYONE_RANDOMWEP, {"Give Everyone A Random Weapon", "peds_randomwep"}},
	{EFFECT_NO_SPRINT, {"No Sprint", "player_nosprint", true}},
	{EFFECT_NO_JUMP, {"No Jump", "player_nojump", true}},
	{EFFECT_EVERYONE_INVINCIBLE, {"Everyone Is Invincible", "peds_invincible", true}},
	{EFFECT_VEHS_INVINCIBLE, {"All Vehicles Are Invulnerable", "vehs_invincible", true}},
	{EFFECT_PLAYER_SHOT_RAGDOLL, {"Player Ragdolls When Shot", "player_ragdollondmg", true, { EFFECT_NO_RAGDOLL }}},
	{EFFECT_JUMPY_VEHS, {"Jumpy Vehicles", "vehs_jumpy", true}},
	{EFFECT_LOCK_VEHS, {"Lock All Vehicles", "vehs_lockdoors"}},
	{EFFECT_TOTAL_CHAOS, {"Doomsday", "chaosmode", true}},
	{EFFECT_NO_RAGDOLL, {"No Ragdoll", "player_noragdoll", true, { EFFECT_PLAYER_SHOT_RAGDOLL }}},
	{EFFECT_VEHS_HORN, {"All Vehicles Honk", "vehs_honkconstant", true}},
	{EFFECT_TP_WAYPOINT, {"Teleport To Waypoint", "player_tptowaypoint"}},
	{EFFECT_PEDS_SAY_HI, {"Friendly Neighborhood", "peds_sayhi", true, { EFFECT_PEDS_INSULT }}},
	{EFFECT_PEDS_INSULT, {"Unfriendly Neighborhood", "peds_insult", true, { EFFECT_PEDS_SAY_HI }}},
	{EFFECT_EXPLOSIVE_BULLETS, {"Explosive Bullets", "player_explosivebullets", true}},
	{EFFECT_EXPLOSIVE_PUNCH, {"Explosive Punch", "player_explosivepunch", true}},
	{EFFECT_GIVE_ALL_WEPS, {"Give All Weapons", "player_allweps"}},
	{EFFECT_PEDS_AIMBOT, {"Aimbot Peds", "peds_aimbot", true}},
	//{EFFECT_EVERYTHING_FACE_PLAYER, {"Everything Faces Player", "everythingfacesplayer", true}},
	{EFFECT_PEDS_BLIND, {"Peds Don't See Very Well", "peds_blind", true}},
	{EFFECT_SPAWN_COMPANION_CHOP, {"Spawn Companion Doggo", "spawn_chop"}},
	{EFFECT_SPAWN_COMPANION_CHIMP, {"Spawn Companion Chimp", "spawn_chimp"}},
	{EFFECT_SPAWN_COMPANION_BRAD, {"Spawn Companion Brad", "spawn_compbrad"}},
	{EFFECT_SPAWN_COMPANION_RANDOM, {"Spawn Random Companion", "spawn_comprnd"}},
	{EFFECT_PLAYER_NIGHTVISION, {"Night Vision", "player_nightvision", true}},
	{EFFECT_PLAYER_HEATVISION, {"Heat Vision", "player_heatvision", true, {}, true}},
	{EFFECT_PLAYER_MONEYDROPS, {"Money Rain", "player_moneydrops", true}},
	{EFFECT_VEH_RAINBOWHEADLIGHTS, {"Rainbow Headlights", "veh_rainbowheadlights", true}},
	{EFFECT_VEH_TPRANDOMPEDS, {"Teleport Random Peds Into Current Vehicle", "playerveh_tprandompeds"}},
	{EFFECT_PEDS_REVIVE, {"Revive Dead Peds", "peds_revive"}},
	{EFFECT_SNOW, {"Snow", "world_snow", true}},
	{EFFECT_WHALE_RAIN, {"Whale Rain", "world_whalerain", true}},
	{EFFECT_VEH_MAX_UPGRADES, {"Add Max Upgrades To Current Vehicle", "playerveh_maxupgrades"}},
	{EFFECT_VEH_RANDOM_UPGRADES, {"Add Random Upgrades To Current Vehicle", "playerveh_randupgrades"}},
	{EFFECT_INTENSE_MUSIC, {"Play Arena Wars Theme", "player_arenawarstheme", true}},
	{EFFECT_PEDS_DRIVEBY, {"Peds Drive-By Player", "peds_driveby", true}},
	{EFFECT_PLAYER_RANDOMCLOTHES, {"Randomize Player Clothes", "player_randclothes"}},
	{EFFECT_PEDS_RAINBOWWEPS, {"Rainbow Weapons", "peds_rainbowweps", true}},
	{EFFECT_GTAO_TRAFFIC, {"GTA Online Traffic", "traffic_gtao", true}},
	{EFFECT_SPAWN_IE_SULTAN, {"Spawn Blue Sultan", "spawn_bluesultan"}},
	{EFFECT_PLAYER_SETINTORANDVEH, {"Set Player Into Random Vehicle", "player_setintorandveh"}},
	{EFFECT_VEHS_FULLACCEL, {"Full Acceleration", "traffic_fullaccel", true, {}, true}},
	{EFFECT_SPAWN_UFO, {"Spawn UFO", "misc_spawnufo"}},
	{EFFECT_EXPLOSIVE_PEDS, {"Explosive Peds", "peds_explosive", true}},
	{EFFECT_PEDS_ONEPUNCH, {"Deadly Punches", "peds_onepunch", true}},
	{EFFECT_INVERTVELOCITY, {"Invert Current Velocity", "invertvelocity"}},
	{EFFECT_PLAYER_TPEVERYTHING, {"Teleport Everything To Player", "player_tpeverything"}},
	{EFFECT_WEATHER_RANDOMWEATHER, {"Modder Stop Changing Weather Plz", "weather_randomizer", true}},
	{EFFECT_LOW_POLY, {"Low Render Distance", "world_lowpoly", true}},
	{EFFECT_NEARBY_PEDS_OBLITERATE, {"Obliterate All Nearby Peds", "peds_obliterate"}},
	{EFFECT_VEHS_TRIGGER_ALARM, {"Alarmy Vehicles", "vehs_alarmloop", true}},
	{EFFECT_TP_FRONT, {"Teleport Player A Few Meters", "player_tpfront"}},
	{EFFECT_SPAWN_FAN_CATS, {"Spawn Fan Cats", "peds_spawnfancats"}},
	{EFFECT_PEDS_COPS, {"All Peds Are Cops", "peds_cops", true}},
	{EFFECT_ROT_ALL_VEHS, {"Flip All Vehicles", "vehs_rotall"}},
	{EFFECT_LAUNCH_ALL_PEDS, {"Launch All Nearby Peds Up", "peds_launchnearby"}},
	{EFFECT_PEDS_ATTACK_PLAYER, {"All Peds Attack Player", "peds_attackplayer", true}},
	{EFFECT_CLONE_PLAYER, {"Clone Player", "player_clone"}},
	{EFFECT_SLIDY_PEDS, {"Slidy Peds", "peds_slidy", true}},
	// Effects contributed by Lucas7yoshi
	{EFFECT_VEH_SET_RANDOM_SEAT, {"Teleport Into Random Seat", "veh_randomseat"}},
	{EFFECT_VEH_SET_TOPSPEED_30MPH, {"30MPH Speed Limit", "veh_30mphlimit", true, {}, true}},
	{EFFECT_PEDS_RAGDOLL, {"All Peds Ragdoll", "peds_ragdoll"}},
	{EFFECT_JESUS_TAKE_THE_WHEEL, {"Jesus Take The Wheel", "veh_jesustakethewheel"}},
	{EFFECT_VEH_POP_TIRE_LOOP, {"Random Tire Popping", "veh_poptire", true, {}, true}},
	{EFFECT_ANGRY_ALIEN, {"Spawn Angry Alien", "peds_angryalien"}},
	{EFFECT_OHKO_VEHICLES, {"One Hit KO Vehicles", "vehs_ohko", true}},
	{EFFECT_MISC_WAVEY, {"Things Are Getting Wavey", "misc_waves", true}},
	{EFFECT_VEH_SPAM_DOORS, {"Spam Doors", "vehs_spamdoors", true}},
	{EFFECT_VEH_SPEED_MINIMUM, {"Need For Speed", "veh_speed_goal", true, {EFFECT_VEH_SET_TOPSPEED_30MPH}}},
	{EFFECT_MISC_LESTER, {"Pwned", "misc_lester", true, {EFFECT_VEH_SPEED_MINIMUM}}},
	{EFFECT_MISC_CREDITS, {"Roll Credits", "misc_credits", true, {}, true}},
	{EFFECT_MISC_EARTHQUAKE, {"Earthquake", "misc_earthquake", true, {}, true}}
};
