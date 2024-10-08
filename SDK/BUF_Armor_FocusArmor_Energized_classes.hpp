#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Armor_FocusArmor_Energized

#include "Basic.hpp"

#include "BUF_Armor_FocusArmor_classes.hpp"
#include "Matcha_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_Armor_FocusArmor_Energized.BUF_Armor_FocusArmor_Energized_C
// 0x0008 (0x0048 - 0x0040)
class UBUF_Armor_FocusArmor_Energized_C final : public UBUF_Armor_FocusArmor_C
{
public:
	double                                        EnergyBurstRefundRatio;                            // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCharacterMontageStart(class AMatchaSnapNetCharacterEntity* BuffedCharacter, float MontageDuration, EMatchaCharacterMontageType MontageType, EMatchaCharacterMontageType PreviousMontageType, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_Armor_FocusArmor_Energized_C">();
	}
	static class UBUF_Armor_FocusArmor_Energized_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_Armor_FocusArmor_Energized_C>();
	}
};
static_assert(alignof(UBUF_Armor_FocusArmor_Energized_C) == 0x000008, "Wrong alignment on UBUF_Armor_FocusArmor_Energized_C");
static_assert(sizeof(UBUF_Armor_FocusArmor_Energized_C) == 0x000048, "Wrong size on UBUF_Armor_FocusArmor_Energized_C");
static_assert(offsetof(UBUF_Armor_FocusArmor_Energized_C, EnergyBurstRefundRatio) == 0x000040, "Member 'UBUF_Armor_FocusArmor_Energized_C::EnergyBurstRefundRatio' has a wrong offset!");

}

