//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CScriptIntro.h
//***********************************************

#pragma once

#include "CBaseEntity.h"

#pragma pack(push,1)
	class CScriptIntro : 
		 public CBaseEntity // 0x1340
	{
	public:
		bool   	m_flFadeColor[1]; // 0x0
		unsigned char _0x0[0x1388];
		int    	m_iNextFOV; // 0x1388
		int    	m_iFOV; // 0x138c
		unsigned char _0x1390[0x4];
		int    	m_iStartFOV; // 0x1394
		float  	m_flNextFOVBlendTime; // 0x1398
		float  	m_flFOVBlendStartTime; // 0x139c
		int    	m_bAlternateFOV; // 0x13a0
		unsigned char _0x13a4[0x44];
		vector3	m_vecCameraView; // 0x13e8
		vector3	m_vecCameraViewAngles; // 0x13f4
		int    	m_iBlendMode; // 0x1400
		int    	m_iNextBlendMode; // 0x1404
		float  	m_flNextBlendTime; // 0x1408
		float  	m_flBlendStartTime; // 0x140c
		int    	m_bActive; // 0x1410
		int    	m_hCameraEntity; // 0x1414
		float  	m_flFadeColor_0; // 0x1418
		unsigned char _0x141c[0x8];
		float  	m_flFadeAlpha; // 0x1424
		unsigned char _0x1428[0x4];
		float  	m_flFadeDuration; // 0x142c
	};
#pragma pack(pop)
