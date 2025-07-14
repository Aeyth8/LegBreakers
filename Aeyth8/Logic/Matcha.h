#pragma once


/*

Written by Aeyth8

https://github.com/Aeyth8

*/


namespace SDK
{
	class UWorld;
	class UMatchaClientServices;
	class UMatchaSnapNetGameInstance;
	class UMatchaGameplayStatics;
}

namespace A8CL
{
namespace Matcha
{
	// SnapNet's Global Base Address [GBA]
	extern unsigned long long GBA;

	// -- Vars

	extern SDK::UMatchaSnapNetGameInstance* GameInstance;
	extern SDK::UMatchaGameplayStatics* GameplayStatics;

	// -- Initialization

	void Init_Hooks();
	void Init_Vars(SDK::UWorld* GWorld);

	// -- Pointers

	SDK::UMatchaClientServices* ClientServices();
}
}