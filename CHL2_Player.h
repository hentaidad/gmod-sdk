//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CHL2_Player.h
//***********************************************

#pragma once

#include "CBasePlayer.h"
#include "CHL2Local.h"

#pragma pack(push,1)
	class CHL2_Player : 
		 public CBasePlayer // 0x2980
	{
	public:
		unsigned char _0x2980[0x1d0];
		CHL2Local	m_HL2Local; // 0x2b50
		unsigned char _0x2b84[0x34];
		int    	m_fIsSprinting; // 0x2bb8
	};
#pragma pack(pop)
