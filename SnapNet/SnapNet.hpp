#pragma once
#include "../pch.h"
#include "../Aeyth8/Config/Global.hpp"

class SnapNet
{
private:

	inline static bool IsSnapNetLicenseValid() { LogA("SnapNet", "Checking if license is valid.."); return true; }

public:

	// Global Base Address [GBA] FOR SNAPNET ONLY!
	inline static uintptr_t GBA{0};

	inline static void InitBase() {
		GBA = (uintptr_t)GetModuleHandleA("SnapNetCore.dll");

		GBA != 0 ? Global::bSnapNetCoreLoaded = true : Global::bSnapNetCoreLoaded = false;
	}

	inline static bool HookIsLicenseValid() {
		return Hooks::CreateAndEnableHook((GBA + Offsets::IsSnapNetLicenseValid), IsSnapNetLicenseValid, 0, "IsSnapNetLicenseValid");
	}





};