//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CBaseCombatWeapon.h
//***********************************************

#pragma once

#include "CBaseAnimating.h"

#pragma pack(push,1)
	class CBaseCombatWeapon : 
		 public CBaseAnimating // 0x1778
	{
	public:
		int    	m_nNextThinkTick; // 0x84
		unsigned char _0x88[0x1738];
		int    	m_hOwner; // 0x17c0
		unsigned char _0x17c4[0x4];
		int    	m_nViewModelIndex; // 0x17c8
		float  	m_flNextPrimaryAttack; // 0x17cc
		float  	m_flNextSecondaryAttack; // 0x17d0
		float  	m_flTimeWeaponIdle; // 0x17d4
		unsigned char _0x17d8[0x4];
		int    	m_iViewModelIndex; // 0x17dc
		int    	m_iWorldModelIndex; // 0x17e0
		unsigned char _0x17e4[0x1c];
		int    	m_iState; // 0x1800
		unsigned char _0x1804[0x4];
		int    	m_iPrimaryAmmoType; // 0x1808
		int    	m_iSecondaryAmmoType; // 0x180c
		int    	m_iClip1; // 0x1810
		int    	m_iClip2; // 0x1814
		unsigned char _0x1818[0x28];
		int    	m_bFlipViewModel; // 0x1840
	};
#pragma pack(pop)
