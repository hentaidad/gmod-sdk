//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CLocalActiveWeaponData.h
//***********************************************

#pragma once


#pragma pack(push,1)
	class CLocalActiveWeaponData
	{
	public:
		unsigned char _0x0[0x84];
		int    	m_nNextThinkTick; // 0x84
		unsigned char _0x88[0x1744];
		float  	m_flNextPrimaryAttack; // 0x17cc
		float  	m_flNextSecondaryAttack; // 0x17d0
		float  	m_flTimeWeaponIdle; // 0x17d4
	};
#pragma pack(pop)
