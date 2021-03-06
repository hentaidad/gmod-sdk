//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CTEHL2MPFireBullets.h
//***********************************************

#pragma once


#pragma pack(push,1)
	class CTEHL2MPFireBullets
	{
	public:
		unsigned char _0x0[0x10];
		int    	m_iPlayer; // 0x10
		vector3	m_vecOrigin; // 0x14
		vector3	m_vecDir; // 0x20
		int    	m_iAmmoID; // 0x2c
		int    	m_iWeaponIndex; // 0x30
		int    	m_iSeed; // 0x34
		float  	m_flSpread; // 0x38
		int    	m_iShots; // 0x3c
		int    	m_bDoImpacts; // 0x40
		int    	m_bDoTracers; // 0x41
		char*  	m_TracerType; // 0x42
	};
#pragma pack(pop)
