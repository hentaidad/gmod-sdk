//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CEntityDissolve.h
//***********************************************

#pragma once

#include "CBaseEntity.h"

#pragma pack(push,1)
	class CEntityDissolve : 
		 public CBaseEntity // 0x1340
	{
	public:
		unsigned char _0x1340[0x4c];
		float  	m_flStartTime; // 0x138c
		float  	m_flFadeOutStart; // 0x1390
		float  	m_flFadeOutLength; // 0x1394
		float  	m_flFadeOutModelStart; // 0x1398
		float  	m_flFadeOutModelLength; // 0x139c
		float  	m_flFadeInStart; // 0x13a0
		float  	m_flFadeInLength; // 0x13a4
		int    	m_nDissolveType; // 0x13a8
		unsigned char _0x13ac[0x10];
		vector3	m_vDissolverOrigin; // 0x13bc
		int    	m_nMagnitude; // 0x13c8
	};
#pragma pack(pop)
