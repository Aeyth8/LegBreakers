#include "Hooks/Hooks.hpp"

namespace A8CL
{
namespace OFF
{
	// Basic UE Functions

	OFFSET FFree("FMemory::Free", 0x0FF6A10);

	OFFSET UConsole("UConsole::ConsoleCommand", 0x3DEE470);
	OFFSET PreLogin("AGameModeBase::PreLogin", 0x372DC80);
	OFFSET Browse("UEngine::Browse", 0x3D9E8F0);
	OFFSET AppPreExit("FEngineLoop::AppPreExit", 0x3EF7E30);
	OFFSET SpawnActor("UWorld::SpawnActor", 0x38BDD80);

	OFFSET WorldGetNetMode("UWorld::InternalGetNetMode", 0x3E38980);
	OFFSET ActorGetNetMode("AActor::InternalGetNetMode", 0x3315170);

	// Native Game Functions


	// Imported DLL Functions

	//OFFSET IsSnapNetLicenseValid("IsSnapNetLicenseValid", 0x00825C0);
}
}