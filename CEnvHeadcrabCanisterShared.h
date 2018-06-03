//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CEnvHeadcrabCanisterShared.h
//***********************************************

#pragma once


#pragma pack(push,1)
	class CEnvHeadcrabCanisterShared
	{
	public:
		unsigned char _0x0[0x4];
		vector3	m_vecStartPosition; // 0x4
		vector3	m_vecEnterWorldPosition; // 0x10
		vector3	m_vecDirection; // 0x1c
		vector3	m_vecStartAngles; // 0x28
		float  	m_flFlightTime; // 0x34
		float  	m_flFlightSpeed; // 0x38
		float  	m_flLaunchTime; // 0x3c
		float  	m_flInitialZSpeed; // 0x40
		float  	m_flZAcceleration; // 0x44
		float  	m_flHorizSpeed; // 0x48
		int    	m_bLaunchedFromWithinWorld; // 0x4c
		vector3	m_vecParabolaDirection; // 0x50
		float  	m_flWorldEnterTime; // 0x5c
		vector3	m_vecSkyboxOrigin; // 0x60
		float  	m_flSkyboxScale; // 0x6c
		int    	m_bInSkybox; // 0x70
	};
#pragma pack(pop)