#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_EnergyGenMod

#include "Basic.hpp"

#include "MatchaGameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_EnergyGenMod.GE_EnergyGenMod_C
// 0x0000 (0x0320 - 0x0320)
class UGE_EnergyGenMod_C final : public UMatchaGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_EnergyGenMod_C">();
	}
	static class UGE_EnergyGenMod_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_EnergyGenMod_C>();
	}
};
static_assert(alignof(UGE_EnergyGenMod_C) == 0x000008, "Wrong alignment on UGE_EnergyGenMod_C");
static_assert(sizeof(UGE_EnergyGenMod_C) == 0x000320, "Wrong size on UGE_EnergyGenMod_C");

}

