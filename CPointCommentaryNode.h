//***********************************************
// SDK Generated by ValveGen (written by Chod)
// File: CPointCommentaryNode.h
//***********************************************

#pragma once

#include "CBaseAnimating.h"

#pragma pack(push,1)
	class CPointCommentaryNode : 
		 public CBaseAnimating // 0x1778
	{
	public:
		unsigned char _0x1778[0x48];
		int    	m_bActive; // 0x17c0
		float  	m_flStartTime; // 0x17c4
		char*  	m_iszCommentaryFile; // 0x17c8
		unsigned char _0x17cc[0x100];
		char*  	m_iszCommentaryFileNoHDR; // 0x18cc
		unsigned char _0x18d0[0x100];
		char*  	m_iszSpeakers; // 0x19d0
		unsigned char _0x19d4[0xfc];
		int    	m_iNodeNumber; // 0x1ad0
		int    	m_iNodeNumberMax; // 0x1ad4
		unsigned char _0x1ad8[0x4];
		int    	m_hViewPosition; // 0x1adc
	};
#pragma pack(pop)
