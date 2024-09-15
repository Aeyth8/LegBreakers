#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Pickup_Common_Placeable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_Pickup_Common_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass E_Pickup_Common_Placeable.E_Pickup_Common_Placeable_C
// 0x0008 (0x03E0 - 0x03D8)
class AE_Pickup_Common_Placeable_C final : public AE_Pickup_Common_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_E_Pickup_Common_Placeable_C;        // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_E_Pickup_Common_Placeable(int32 EntryPoint);
	void HandleReset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"E_Pickup_Common_Placeable_C">();
	}
	static class AE_Pickup_Common_Placeable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AE_Pickup_Common_Placeable_C>();
	}
};
static_assert(alignof(AE_Pickup_Common_Placeable_C) == 0x000008, "Wrong alignment on AE_Pickup_Common_Placeable_C");
static_assert(sizeof(AE_Pickup_Common_Placeable_C) == 0x0003E0, "Wrong size on AE_Pickup_Common_Placeable_C");
static_assert(offsetof(AE_Pickup_Common_Placeable_C, UberGraphFrame_E_Pickup_Common_Placeable_C) == 0x0003D8, "Member 'AE_Pickup_Common_Placeable_C::UberGraphFrame_E_Pickup_Common_Placeable_C' has a wrong offset!");

}

