//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CBreakableSurface.h
//***********************************************

#pragma once

#include "CBaseEntity.h"

#pragma pack(push,1)
	class CBreakableSurface : 
		 public CBaseEntity // 0x1340
	{
	public:
		unsigned char _0x1340[0x4c];
		int    	m_nNumWide; // 0x138c
		int    	m_nNumHigh; // 0x1390
		float  	m_flPanelWidth; // 0x1394
		float  	m_flPanelHeight; // 0x1398
		vector3	m_vNormal; // 0x139c
		vector3	m_vCorner; // 0x13a8
		int    	m_bIsBroken; // 0x13b4
		int    	m_nSurfaceType; // 0x13b8
		unsigned char _0x13bc[0x20];
		bool   	m_RawPanelBitVec[256]; // 0x13dc
	};
#pragma pack(pop)
