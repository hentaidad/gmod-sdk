//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CSmokeStack.h
//***********************************************

#pragma once

#include "CBaseParticleEntity.h"

#pragma pack(push,1)
	class CSmokeStack : 
		 public CBaseParticleEntity // 0x0
	{
	public:
		unsigned char _0x0[0x14c4];
		float  	m_SpreadSpeed; // 0x14c4
		float  	m_Speed; // 0x14c8
		float  	m_StartSize; // 0x14cc
		float  	m_EndSize; // 0x14d0
		float  	m_Rate; // 0x14d4
		float  	m_JetLength; // 0x14d8
		int    	m_bEmit; // 0x14dc
		float  	m_flBaseSpread; // 0x14e0
		vector3	m_AmbientLight_m_vPos; // 0x14e4
		vector3	m_AmbientLight_m_vColor; // 0x14f0
		float  	m_AmbientLight_m_flIntensity; // 0x14fc
		vector3	m_DirLight_m_vPos; // 0x1500
		vector3	m_DirLight_m_vColor; // 0x150c
		float  	m_DirLight_m_flIntensity; // 0x1518
		unsigned char _0x151c[0xc];
		vector3	m_vWind; // 0x1528
		float  	m_flTwist; // 0x1534
		int    	m_iMaterialModel; // 0x1538
		unsigned char _0x153c[0x34];
		float  	m_flRollSpeed; // 0x1570
	};
#pragma pack(pop)
