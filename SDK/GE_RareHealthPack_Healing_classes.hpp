#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_RareHealthPack_Healing

#include "Basic.hpp"

#include "MatchaGameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_RareHealthPack_Healing.GE_RareHealthPack_Healing_C
// 0x0000 (0x0320 - 0x0320)
class UGE_RareHealthPack_Healing_C final : public UMatchaGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_RareHealthPack_Healing_C">();
	}
	static class UGE_RareHealthPack_Healing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_RareHealthPack_Healing_C>();
	}
};
static_assert(alignof(UGE_RareHealthPack_Healing_C) == 0x000008, "Wrong alignment on UGE_RareHealthPack_Healing_C");
static_assert(sizeof(UGE_RareHealthPack_Healing_C) == 0x000320, "Wrong size on UGE_RareHealthPack_Healing_C");

}

