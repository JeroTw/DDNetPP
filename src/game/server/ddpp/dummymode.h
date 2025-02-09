#ifndef GAME_SERVER_DDPP_DUMMYMODE_H
#define GAME_SERVER_DDPP_DUMMYMODE_H

enum EDummyMode
{
	DUMMYMODE_MINIGAME_BALANCE1 = -1,
	DUMMYMODE_MINIGAME_BALANCE2 = -2,
	DUMMYMODE_BLOCKWAVE = -3,
	DUMMYMODE_RIFLE_FNG = -4,
	DUMMYMODE_GRENADE_FNG = -5,
	DUMMYMODE_BLMAPV3_ARENA = -6,
	DUMMYMODE_ADVENTURE = -7, /* vanilla are pvp bot */
	DUMMYMODE_DEFAULT = 0,
	DUMMYMODE_CHILLBLOCK5_BLOCKER_TRYHARD = 18,
	DUMMYMODE_CHILLBLOCK5_RACER = 23,
	DUMMYMODE_FNN = 25, /* testy fake nural network lol (2.0 revived) */
	DUMMYMODE_CHILLBLOCK5_RACE = 28,
	DUMMYMODE_CHILLBLOCK5_BLOCKER = 29,
	DUMMYMODE_CHILLBLOCK5_BALANCE = 30,
	DUMMYMODE_CHILLBLOCK5_POLICE = 31,
	DUMMYMODE_BLMAPCHILL_POLICE = 32,
	DUMMYMODE_CHILLINTELLIGENCE = 33,
	DUMMYMODE_SURVIVAL = 34,
	DUMMYMODE_QUEST = 36,
	DUMMYMODE_SHOPBOT = 99,
	DUMMYMODE_CTF5_PVP = 103,
	DUMMYMODE_BLMAPV5_LOWER_BLOCKER = 104,
	DUMMYMODE_BLMAPV5_UPPER_BLOCKER = 105,

	DUMMYMODE_TWBL_START = 106, // define your twbl mode below
	DUMMYMODE_TWBL_TEST = 107,
	DUMMYMODE_TWBL_END, // define your twbl mode above

};

#endif
