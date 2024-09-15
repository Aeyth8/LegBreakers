#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Gloves_Thief_Energized

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "BUF_Gloves_Thief_classes.hpp"
#include "Matcha_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_Gloves_Thief_Energized.BUF_Gloves_Thief_Energized_C
// 0x0008 (0x0060 - 0x0058)
class UBUF_Gloves_Thief_Energized_C final : public UBUF_Gloves_Thief_C
{
public:
	struct FGameplayTag                           InventoryCategory;                                 // 0x0058(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void OnPostApplyOutgoingHit(class AMatchaSnapNetCharacterEntity* BuffedCharacter, class AActor* TargetHit, class AActor* PreviousTargetHit, const struct FMatchaHitData& HitData, uint8 AppliedHitFlags, EMatchaCharacterMontageType MontageDuringHit, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_Gloves_Thief_Energized_C">();
	}
	static class UBUF_Gloves_Thief_Energized_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_Gloves_Thief_Energized_C>();
	}
};
static_assert(alignof(UBUF_Gloves_Thief_Energized_C) == 0x000008, "Wrong alignment on UBUF_Gloves_Thief_Energized_C");
static_assert(sizeof(UBUF_Gloves_Thief_Energized_C) == 0x000060, "Wrong size on UBUF_Gloves_Thief_Energized_C");
static_assert(offsetof(UBUF_Gloves_Thief_Energized_C, InventoryCategory) == 0x000058, "Member 'UBUF_Gloves_Thief_Energized_C::InventoryCategory' has a wrong offset!");

}

