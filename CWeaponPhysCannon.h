//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CWeaponPhysCannon.h
//***********************************************

#pragma once

#include "CBaseHL2MPCombatWeapon.h"

#pragma pack(push,1)
	class CWeaponPhysCannon : 
		 public CBaseHL2MPCombatWeapon // 0x0
	{
	public:
		unsigned char _0x0[0x1898];
		float  	m_attachedAnglesPlayerSpace_0; // 0x1898
		float  	m_attachedAnglesPlayerSpace_1; // 0x189c
		float  	m_attachedAnglesPlayerSpace_2; // 0x18a0
		vector3	m_attachedPositionObjectSpace; // 0x18a4
		int    	m_hAttachedObject; // 0x18b0
		unsigned char _0x18b4[0x2fc];
		int    	m_bActive; // 0x1bb0
		int    	m_EffectState; // 0x1bb4
		int    	m_bOpen; // 0x1bb8
	};
#pragma pack(pop)