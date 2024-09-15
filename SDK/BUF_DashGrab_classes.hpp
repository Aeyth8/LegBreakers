#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_DashGrab

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_DashGrab.BUF_DashGrab_C
// 0x0018 (0x0040 - 0x0028)
class UBUF_DashGrab_C : public UMatchaCharacterBuff
{
public:
	class UClass*                                 ProjectileClass;                                   // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DashGrabHorizontalVelocity;                        // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DashGrabZVelocity;                                 // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCharacterMontageStart(class AMatchaSnapNetCharacterEntity* BuffedCharacter, float MontageDuration, EMatchaCharacterMontageType MontageType, EMatchaCharacterMontageType PreviousMontageType, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_DashGrab_C">();
	}
	static class UBUF_DashGrab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_DashGrab_C>();
	}
};
static_assert(alignof(UBUF_DashGrab_C) == 0x000008, "Wrong alignment on UBUF_DashGrab_C");
static_assert(sizeof(UBUF_DashGrab_C) == 0x000040, "Wrong size on UBUF_DashGrab_C");
static_assert(offsetof(UBUF_DashGrab_C, ProjectileClass) == 0x000028, "Member 'UBUF_DashGrab_C::ProjectileClass' has a wrong offset!");
static_assert(offsetof(UBUF_DashGrab_C, DashGrabHorizontalVelocity) == 0x000030, "Member 'UBUF_DashGrab_C::DashGrabHorizontalVelocity' has a wrong offset!");
static_assert(offsetof(UBUF_DashGrab_C, DashGrabZVelocity) == 0x000038, "Member 'UBUF_DashGrab_C::DashGrabZVelocity' has a wrong offset!");

}

