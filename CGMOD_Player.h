//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CGMOD_Player.h
//***********************************************

#pragma once

#include "CHL2MP_Player.h"

#pragma pack(push,1)
	class CGMOD_Player : 
		 public CHL2MP_Player // 0x2c78
	{
	public:
		int    	m_nWaterLevel; // 0x17c
		unsigned char _0x180[0x2afc];
		int    	m_iGModPlayerFlags; // 0x2c7c
		unsigned char _0x2c80[0x110];
		int    	m_HoveredWidget; // 0x2d90
		int    	m_PressedWidget; // 0x2d94
		int    	m_Driving; // 0x2d98
		int    	m_DrivingMode; // 0x2d9c
		int    	m_Hands; // 0x2da0
		int    	m_PlayerClass; // 0x2da4
		int    	m_bCanZoom; // 0x2da8
		int    	m_bCanWalk; // 0x2da9
		int    	m_bIsTyping; // 0x2daa
		float  	m_StepSize; // 0x2dac
		float  	m_JumpPower; // 0x2db0
		vector3	m_ViewOffset; // 0x2db4
		vector3	m_ViewOffsetDucked; // 0x2dc0
		float  	m_fGestureEndTime; // 0x2dcc
		vector3	m_PlayerColor; // 0x2dd0
		vector3	m_WeaponColor; // 0x2ddc
	};
#pragma pack(pop)
