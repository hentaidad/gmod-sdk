//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CEnvProjectedTexture.h
//***********************************************

#pragma once

#include "CBaseEntity.h"

#pragma pack(push,1)
	class CEnvProjectedTexture : 
		 public CBaseEntity // 0x1340
	{
	public:
		unsigned char _0x1340[0x4c];
		int    	m_hTargetEntity; // 0x138c
		int    	m_bState; // 0x1390
		float  	m_flLightFOV; // 0x1394
		int    	m_bEnableShadows; // 0x1398
		int    	m_bLightOnlyTarget; // 0x1399
		int    	m_bLightWorld; // 0x139a
		int    	m_bCameraSpace; // 0x139b
		vector3	m_LinearFloatLightColor; // 0x139c
		float  	m_flAmbient; // 0x13a8
		float  	m_flNearZ; // 0x13ac
		float  	m_flFarZ; // 0x13b0
		char*  	m_SpotlightTextureName; // 0x13b4
		unsigned char _0x13b8[0x100];
		int    	m_nSpotlightTextureFrame; // 0x14b8
		int    	m_nShadowQuality; // 0x14bc
	};
#pragma pack(pop)
