//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CPropCannon.h
//***********************************************

#pragma once

#include "CBaseAnimating.h"

#pragma pack(push,1)
	class CPropCannon : 
		 public CBaseAnimating // 0x1778
	{
	public:
		unsigned char _0x1778[0x4c];
		int    	m_hPlayer; // 0x17c4
		unsigned char _0x17c8[0x4];
		int    	m_bEnterAnimOn; // 0x17cc
		int    	m_bExitAnimOn; // 0x17cd
		vector3	m_vecEyeExitEndpoint; // 0x17d0
	};
#pragma pack(pop)