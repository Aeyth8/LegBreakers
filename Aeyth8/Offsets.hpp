#pragma once
#include <cstdint>

#ifndef OFFSET
#define OFFSET inline static const uintptr_t 
#endif

class Offsets
{
public:

	// Basic UE Functions
	OFFSET Browse{0x3D9E8F0};
	OFFSET UConsole{0x3DEE470};
	OFFSET AppPreExit{0x3EF7E30};

	// Game Native Functions

	OFFSET TryStartingPracticeRoom{0x48E45A0};
	

	// Imported DLL Functions

	OFFSET IsSnapNetLicenseValid{0x00825C0}; // In SnapNetCore.dll || Found via xref of it being called from snapnet_server_start (which is a DLL export function)

};