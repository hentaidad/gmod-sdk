//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CShadowControl.h
//***********************************************

#pragma once

#include "CBaseEntity.h"

#pragma pack(push,1)
	class CShadowControl : 
		 public CBaseEntity // 0x1340
	{
	public:
		unsigned char _0x1340[0x48];
		vector3	m_shadowDirection; // 0x1388
		int    	m_shadowColor; // 0x1394
		float  	m_flShadowMaxDist; // 0x1398
		int    	m_bDisableShadows; // 0x139c
	};
#pragma pack(pop)
