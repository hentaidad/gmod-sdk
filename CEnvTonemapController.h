//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CEnvTonemapController.h
//***********************************************

#pragma once

#include "CBaseEntity.h"

#pragma pack(push,1)
	class CEnvTonemapController : 
		 public CBaseEntity // 0x1340
	{
	public:
		unsigned char _0x1340[0x48];
		int    	m_bUseCustomAutoExposureMin; // 0x1388
		int    	m_bUseCustomAutoExposureMax; // 0x1389
		int    	m_bUseCustomBloomScale; // 0x138a
		float  	m_flCustomAutoExposureMin; // 0x138c
		float  	m_flCustomAutoExposureMax; // 0x1390
		float  	m_flCustomBloomScale; // 0x1394
		float  	m_flCustomBloomScaleMinimum; // 0x1398
	};
#pragma pack(pop)
