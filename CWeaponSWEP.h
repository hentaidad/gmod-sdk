//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CWeaponSWEP.h
//***********************************************

#pragma once

#include "CBaseHL2MPCombatWeapon.h"
#include "CScriptedEntity.h"

#pragma pack(push,1)
	class CWeaponSWEP : 
		 public CBaseHL2MPCombatWeapon // 0x0
	{
	public:
		unsigned char _0x0[0x1898];
		CScriptedEntity	m_ScriptedEntity; // 0x1898
		unsigned char _0x18ac[0x200];
		char*  	m_strHoldType; // 0x1aac
	};
#pragma pack(pop)
