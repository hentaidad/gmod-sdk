//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CPoseController.h
//***********************************************

#pragma once

#include "CBaseEntity.h"

#pragma pack(push,1)
	class CPoseController : 
		 public CBaseEntity // 0x1340
	{
	public:
		unsigned char _0x1340[0x48];
		int    	m_hProps[4]; // 0x1388
		bool   	m_chPoseIndex[4]; // 0x1398
		int    	m_bPoseValueParity; // 0x139c
		float  	m_fPoseValue; // 0x13a0
		float  	m_fInterpolationTime; // 0x13a4
		int    	m_bInterpolationWrap; // 0x13a8
		float  	m_fCycleFrequency; // 0x13ac
		int    	m_nFModType; // 0x13b0
		float  	m_fFModTimeOffset; // 0x13b4
		float  	m_fFModRate; // 0x13b8
		float  	m_fFModAmplitude; // 0x13bc
	};
#pragma pack(pop)
