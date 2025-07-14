#include "Matcha.h"
#include "../Global.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"

#include "../Tools/Pointers.h"
#include "../Tools/UFunctions.hpp"
#include "../Tools/BytePatcher.h"

#include "../../SDK/Matcha_classes.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/


using namespace A8CL; using namespace Global;


// -- Vars

uintptr_t Matcha::GBA{0};

SDK::UMatchaSnapNetGameInstance* Matcha::GameInstance{nullptr};
SDK::UMatchaGameplayStatics* Matcha::GameplayStatics{nullptr};

// -- Constants

constexpr BYTE NOP{0x90};
constexpr BYTE JMP{0xEB};
constexpr const BYTE TheLegBreaker[8]{NOP, NOP, NOP, NOP, NOP, NOP, NOP, JMP};

static std::vector<Hooks::HookStructure> HookList =
{
	{OFF::UConsole, UFunctions::UConsole},
	{OFF::Browse, UFunctions::Browse},
	{OFF::AppPreExit, UFunctions::AppPreExit},
	{OFF::PreLogin, UFunctions::PreLogin},
};


void Matcha::Init_Hooks()
{
	if (Hooks::Init())
	{
		Hooks::CreateAndEnableHooks(HookList);

		while ((Matcha::GBA = (uintptr_t)GetModuleHandleA("SnapNetCore.dll")) == 0)
		{
			Sleep(25);
		}

		uintptr_t SnapNetLicenseFailcheck_SERVER{Matcha::GBA + 0x855B2};
		uintptr_t SnapNetLicenseFailcheck_CLIENT{Matcha::GBA + 0x7794D};

		BytePatcher::ReplaceBytes(SnapNetLicenseFailcheck_SERVER, TheLegBreaker);
		BytePatcher::ReplaceBytes(SnapNetLicenseFailcheck_CLIENT, TheLegBreaker);

		//LogA("BytePatcher", HexToString(OffsetToByte(SnapNetLicenseFailcheck_SERVER)));
	}

}

void Matcha::Init_Vars(SDK::UWorld* GWorld)
{
	if (!IsNull(GWorld))
	{
		Matcha::GameInstance = static_cast<SDK::UMatchaSnapNetGameInstance*>(GWorld->OwningGameInstance);
		Matcha::GameplayStatics = static_cast<SDK::UMatchaGameplayStatics*>(SDK::UBlueprintFunctionLibrary::GetDefaultObj());

		const SDK::FLoginResponseV1 Info{L"", L"", Pointers::FString2FName(L""), L"", L"Aeyth8", Pointers::FString2FName(L"Ok"), true};
		Matcha::ClientServices()->IdentityServiceModel->HandleSuccessfulLoginResponse(Info);
	}
}


// -- Pointers

SDK::UMatchaClientServices* Matcha::ClientServices()
{
	return Matcha::GameplayStatics->GetClientServies(Pointers::UWorld());
}