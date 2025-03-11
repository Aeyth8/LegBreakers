#include "pch.h"
#include "SnapNet/SnapNet.hpp"
#include "Aeyth8/Hooks/UFunctions.hpp"


typedef void(__thiscall* PracticeRoom)(SDK::UMatchaLocalPlayerUIData* This);
static PracticeRoom FC_PracticeRoom{0};

static void LogMe(SDK::UMatchaLocalPlayerUIData* This)
{
	LogA("Practice Room", "Called");
	FC_PracticeRoom(This);
}

// Something to do with FString allocation 0x0F9F260

inline static std::vector<Hooks::HookStructure> HookList =
{
	{Offsets::UConsole, UFunctions::Func::UConsole, &UFunctions::Decl::FC_UConsole, "UConsole"},
	{Offsets::Browse, UFunctions::Func::Browse, &UFunctions::Decl::FC_Browse, "Browse"},
	{Offsets::AppPreExit, UFunctions::Func::AppPreExit, &UFunctions::Decl::FC_AppPreExit, "AppPreExit"},
};

SDK::UMatchaIdentityServiceModel* MatchaID;

static void Init()
{
	GBA = (uintptr_t)GetModuleHandleA("ByteBreakers-Win64-Shipping.exe");
	SnapNet::InitBase();

	LogWin();
	Hooks::Init();

	Hooks::CreateAndEnableAllHooks(HookList);
	if (Global::bSnapNetCoreLoaded) SnapNet::HookIsLicenseValid();
	
	//Hooks::CreateAndEnableHook((GBA + 0x48E45A0), LogMe, &FC_PracticeRoom, "Invoke Practice Room");
	//Hooks::CreateAndEnableHook((GBA + 0x47CC930), WebSocketURL, 0, "WebSocketURL");
	//Hooks::CreateAndEnableHook((GBA + 0x4793CD0), ReturnAPI, 0, "ReturnAPI");

	if (!(!CheckNull(UWorld()) && !CheckNull(Player0()))) Sleep(10000);

	// The proxy loads so fast that SnapNet hasn't loaded into the game at the initial attempt of retrieving it, if that is the case it reruns the code.
	if (!Global::bSnapNetCoreLoaded) SnapNet::InitBase();
	if (Global::bSnapNetCoreLoaded) SnapNet::HookIsLicenseValid();

	Log("GAME INITIALIZED"); Log("Global Base Address = " + HexToString(GBA)); Log("SnapNet Base Address = " + HexToString(SnapNet::GBA));

	// Allocates local pointers
	Engine = UEngine(); World = UWorld(); KismetSys = UKismetSys();


	if (!Global::bConstructedUConsole) { Global::bConstructedUConsole = true;
		ConstructUConsole();
	}

	SDK::FLoginResponseV1 AuthMe(L"WHOCARES", L"RefreshToken", FString2FName(L"Meaningless"), L"BeerOClock", L"Aeyth8", FString2FName(L"Initial"), true);
	MatchaID = GetLastOf<SDK::UMatchaIdentityServiceModel>();

	MatchaID->HandleSuccessfulLoginResponse(AuthMe);

}


int __stdcall DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return 1;

	Proxy::Attach(hModule);

	return 1;
}