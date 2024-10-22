#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_MagLevGrab_Base

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_MagLevGrab_Base.BUF_MagLevGrab_Base_C
// 0x0018 (0x0040 - 0x0028)
class UBUF_MagLevGrab_Base_C : public UMatchaCharacterBuff
{
public:
	float                                         BasePostThrowChaseVelocity;                        // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BasePostGrabLoopLaunchZVelocity;                   // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoPostLaunchChase;                                 // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SuperArmorDurationDuringGrab;                      // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCharacterMontageStart(class AMatchaSnapNetCharacterEntity* BuffedCharacter, float MontageDuration, EMatchaCharacterMontageType MontageType, EMatchaCharacterMontageType PreviousMontageType, EObjectRarity BuffRarity) const;
	void OnPostApplyOutgoingHit(class AMatchaSnapNetCharacterEntity* BuffedCharacter, class AActor* TargetHit, class AActor* PreviousTargetHit, const struct FMatchaHitData& HitData, uint8 AppliedHitFlags, EMatchaCharacterMontageType MontageDuringHit, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_MagLevGrab_Base_C">();
	}
	static class UBUF_MagLevGrab_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_MagLevGrab_Base_C>();
	}
};
static_assert(alignof(UBUF_MagLevGrab_Base_C) == 0x000008, "Wrong alignment on UBUF_MagLevGrab_Base_C");
static_assert(sizeof(UBUF_MagLevGrab_Base_C) == 0x000040, "Wrong size on UBUF_MagLevGrab_Base_C");
static_assert(offsetof(UBUF_MagLevGrab_Base_C, BasePostThrowChaseVelocity) == 0x000028, "Member 'UBUF_MagLevGrab_Base_C::BasePostThrowChaseVelocity' has a wrong offset!");
static_assert(offsetof(UBUF_MagLevGrab_Base_C, BasePostGrabLoopLaunchZVelocity) == 0x000030, "Member 'UBUF_MagLevGrab_Base_C::BasePostGrabLoopLaunchZVelocity' has a wrong offset!");
static_assert(offsetof(UBUF_MagLevGrab_Base_C, DoPostLaunchChase) == 0x000038, "Member 'UBUF_MagLevGrab_Base_C::DoPostLaunchChase' has a wrong offset!");
static_assert(offsetof(UBUF_MagLevGrab_Base_C, SuperArmorDurationDuringGrab) == 0x00003C, "Member 'UBUF_MagLevGrab_Base_C::SuperArmorDurationDuringGrab' has a wrong offset!");

}

