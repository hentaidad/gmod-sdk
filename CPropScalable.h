//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CPropScalable.h
//***********************************************

#pragma once

#include "CBaseAnimating.h"

#pragma pack(push,1)
	class CPropScalable : 
		 public CBaseAnimating // 0x1778
	{
	public:
		unsigned char _0x1778[0x48];
		float  	m_flScaleX; // 0x17c0
		float  	m_flScaleY; // 0x17c4
		float  	m_flScaleZ; // 0x17c8
		float  	m_flLerpTimeX; // 0x17cc
		float  	m_flLerpTimeY; // 0x17d0
		float  	m_flLerpTimeZ; // 0x17d4
		float  	m_flGoalTimeX; // 0x17d8
		float  	m_flGoalTimeY; // 0x17dc
		float  	m_flGoalTimeZ; // 0x17e0
	};
#pragma pack(pop)