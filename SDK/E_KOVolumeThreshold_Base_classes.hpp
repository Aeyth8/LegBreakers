#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_KOVolumeThreshold_Base

#include "Basic.hpp"

#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass E_KOVolumeThreshold_Base.E_KOVolumeThreshold_Base_C
// 0x0008 (0x0408 - 0x0400)
class AE_KOVolumeThreshold_Base_C : public AMatchaKnockoutVolume
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"E_KOVolumeThreshold_Base_C">();
	}
	static class AE_KOVolumeThreshold_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AE_KOVolumeThreshold_Base_C>();
	}
};
static_assert(alignof(AE_KOVolumeThreshold_Base_C) == 0x000008, "Wrong alignment on AE_KOVolumeThreshold_Base_C");
static_assert(sizeof(AE_KOVolumeThreshold_Base_C) == 0x000408, "Wrong size on AE_KOVolumeThreshold_Base_C");
static_assert(offsetof(AE_KOVolumeThreshold_Base_C, DefaultSceneRoot) == 0x000400, "Member 'AE_KOVolumeThreshold_Base_C::DefaultSceneRoot' has a wrong offset!");

}

