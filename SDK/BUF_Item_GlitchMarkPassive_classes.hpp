#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Item_GlitchMarkPassive

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_Item_GlitchMarkPassive.BUF_Item_GlitchMarkPassive_C
// 0x0008 (0x0030 - 0x0028)
class UBUF_Item_GlitchMarkPassive_C final : public UMatchaCharacterBuff
{
public:
	double                                        GlitchMarkDurationSeconds;                         // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnPostApplyOutgoingHit(class AMatchaSnapNetCharacterEntity* BuffedCharacter, class AActor* TargetHit, class AActor* PreviousTargetHit, const struct FMatchaHitData& HitData, uint8 AppliedHitFlags, EMatchaCharacterMontageType MontageDuringHit, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_Item_GlitchMarkPassive_C">();
	}
	static class UBUF_Item_GlitchMarkPassive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_Item_GlitchMarkPassive_C>();
	}
};
static_assert(alignof(UBUF_Item_GlitchMarkPassive_C) == 0x000008, "Wrong alignment on UBUF_Item_GlitchMarkPassive_C");
static_assert(sizeof(UBUF_Item_GlitchMarkPassive_C) == 0x000030, "Wrong size on UBUF_Item_GlitchMarkPassive_C");
static_assert(offsetof(UBUF_Item_GlitchMarkPassive_C, GlitchMarkDurationSeconds) == 0x000028, "Member 'UBUF_Item_GlitchMarkPassive_C::GlitchMarkDurationSeconds' has a wrong offset!");

}

