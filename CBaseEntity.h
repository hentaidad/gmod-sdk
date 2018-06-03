//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CBaseEntity.h
//***********************************************

#pragma once

#include "CCollisionProperty.h"

#pragma pack(push,1)
	class CBaseEntity
	{
	public:
		unsigned char _0x0[0x54];
		int    	m_nRenderFX; // 0x54
		int    	m_clrRender; // 0x58
		unsigned char _0x5c[0x4];
		int    	m_flAnimTime; // 0x60
		unsigned char _0x64[0x4];
		int    	m_flSimulationTime; // 0x68
		unsigned char _0x6c[0x8];
		int    	m_ubInterpolationFrame; // 0x74
		int    	m_fEffects; // 0x78
		int    	m_nRenderMode; // 0x7c
		unsigned char _0x80[0xc];
		int    	m_nModelIndex; // 0x8c
		int    	m_takedamage; // 0x8e
		int    	m_iHealth; // 0x90
		int    	m_iMaxHealth; // 0x94
		unsigned char _0x98[0x4];
		int    	m_iTeamNum; // 0x9c
		int    	m_PredictableID; // 0xa0
		unsigned char _0xa4[0x50];
		float  	m_vecVelocity_0; // 0xf4
		float  	m_vecVelocity_1; // 0xf8
		float  	m_vecVelocity_2; // 0xfc
		unsigned char _0x100[0x7a];
		int    	m_iParentAttachment; // 0x17a
		unsigned char _0x17e[0x12];
		int    	moveparent; // 0x190
		unsigned char _0x194[0x8];
		CCollisionProperty	m_Collision; // 0x19c
		unsigned char _0x210[0x38];
		float  	m_flElasticity; // 0x248
		float  	m_flShadowCastDistance; // 0x24c
		unsigned char _0x250[0xe8];
		vector3	m_vecOrigin; // 0x338
		vector3	m_angRotation; // 0x344
		unsigned char _0x350[0x4];
		int    	m_CollisionGroup; // 0x354
		unsigned char _0x358[0x170];
		int    	m_bIsPlayerSimulated; // 0x4c8
		int    	m_bSimulatedEveryTick; // 0x4c9
		int    	m_bAnimatedEveryTick; // 0x4ca
		int    	m_bAlternateSorting; // 0x4cb
		int    	m_iTextureFrameIndex; // 0x4cc
		unsigned char _0x4d0[0x8];
		int    	m_hOwnerEntity; // 0x4d8
		int    	m_hEffectEntity; // 0x4dc
		unsigned char _0x4e0[0x35];
		int    	m_bOnFire; // 0x515
		float  	m_CreationTime; // 0x518
		int    	m_RealClassName; // 0x51c
		int    	m_OverrideMaterial; // 0x520
		unsigned char _0x524[0x4];
		int    	m_OverrideSubMaterials_0; // 0x528
		unsigned char _0x52c[0x114];
		int    	m_spawnflags; // 0x640
		int    	m_iGModFlags; // 0x644
		unsigned char _0x648[0x58];
		bool   	m_GMOD_bool[32]; // 0x6a0
		int    	m_GMOD_float[32]; // 0x6c0
		int    	m_GMOD_int[32]; // 0x740
		bool   	m_GMOD_Vector[32]; // 0x7c0
		bool   	m_GMOD_QAngle[32]; // 0x940
		int    	m_GMOD_EHANDLE[32]; // 0xac0
		char*  	m_GMOD_String0; // 0xb40
		unsigned char _0xb44[0x1fc];
		char*  	m_GMOD_String1; // 0xd40
		unsigned char _0xd44[0x1fc];
		char*  	m_GMOD_String2; // 0xf40
		unsigned char _0xf44[0x1fc];
		char*  	m_GMOD_String3; // 0x1140
		unsigned char _0x1144[0x1fc];
			m_GMOD_DataTable; // 0x1340
	};
#pragma pack(pop)