#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PE_Item_AOE_TaserGrenade

#include "Basic.hpp"

#include "PE_Item_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PE_Item_AOE_TaserGrenade.PE_Item_AOE_TaserGrenade_C
// 0x0000 (0x0628 - 0x0628)
class APE_Item_AOE_TaserGrenade_C final : public APE_Item_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PE_Item_AOE_TaserGrenade_C">();
	}
	static class APE_Item_AOE_TaserGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APE_Item_AOE_TaserGrenade_C>();
	}
};
static_assert(alignof(APE_Item_AOE_TaserGrenade_C) == 0x000008, "Wrong alignment on APE_Item_AOE_TaserGrenade_C");
static_assert(sizeof(APE_Item_AOE_TaserGrenade_C) == 0x000628, "Wrong size on APE_Item_AOE_TaserGrenade_C");

}

