#pragma once
#include <cstdint>

#ifndef OFFSET
#define OFFSET inline static const uintptr_t 
#endif

class Offsets
{
public:

	// Basic UE Functions
	OFFSET Browse{0x3D9E8F0};										// UEngine::Browse
	OFFSET UConsole{0x3DEE470};										// UConsole::ConsoleCommand
	OFFSET AppPreExit{0x3EF7E30};									// FEngineLoop::AppPreExit
	OFFSET PreLogin{0x372DC80};										// AGameModeBase::PreLogin

	OFFSET WorldGetNetMode{0x3E38980};								// UWorld::InternalGetNetMode
	OFFSET ActorGetNetMode{0x3315170};								// AActor::InternalGetNetMode
	OFFSET NetDriverGetNetMode{0x3989A10};							// UNetDriver::GetNetMode

	OFFSET FreeMem{0x0FF6A10};										// FMemory::Free

	OFFSET UOnlineEngineInterfaceGet{0x39BC700};					// UOnlineEngineInterface::Get
	OFFSET FString{0x0FA01B0};										// public: class FString & FString::operator=(wchar_t const *) (I don't know enough to say what this does yet)

	// Game Native Functions

	OFFSET TryStartingPracticeRoom{0x48E45A0};
	

	// Imported DLL Functions

	OFFSET IsSnapNetLicenseValid{0x00825C0}; // In SnapNetCore.dll || Found via xref of it being called from snapnet_server_start (which is a DLL export function)

};