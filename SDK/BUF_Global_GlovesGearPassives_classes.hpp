#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Global_GlovesGearPassives

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_Global_GlovesGearPassives.BUF_Global_GlovesGearPassives_C
// 0x0028 (0x0050 - 0x0028)
class UBUF_Global_GlovesGearPassives_C final : public UMatchaCharacterBuff
{
public:
	class UClass*                                 EffectAmountGE;                                    // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        RareStatAmount;                                    // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EpicStatAmount;                                    // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LegendaryStatAmount;                               // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 EnergyAmountGE;                                    // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;
	void OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_Global_GlovesGearPassives_C">();
	}
	static class UBUF_Global_GlovesGearPassives_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_Global_GlovesGearPassives_C>();
	}
};
static_assert(alignof(UBUF_Global_GlovesGearPassives_C) == 0x000008, "Wrong alignment on UBUF_Global_GlovesGearPassives_C");
static_assert(sizeof(UBUF_Global_GlovesGearPassives_C) == 0x000050, "Wrong size on UBUF_Global_GlovesGearPassives_C");
static_assert(offsetof(UBUF_Global_GlovesGearPassives_C, EffectAmountGE) == 0x000028, "Member 'UBUF_Global_GlovesGearPassives_C::EffectAmountGE' has a wrong offset!");
static_assert(offsetof(UBUF_Global_GlovesGearPassives_C, RareStatAmount) == 0x000030, "Member 'UBUF_Global_GlovesGearPassives_C::RareStatAmount' has a wrong offset!");
static_assert(offsetof(UBUF_Global_GlovesGearPassives_C, EpicStatAmount) == 0x000038, "Member 'UBUF_Global_GlovesGearPassives_C::EpicStatAmount' has a wrong offset!");
static_assert(offsetof(UBUF_Global_GlovesGearPassives_C, LegendaryStatAmount) == 0x000040, "Member 'UBUF_Global_GlovesGearPassives_C::LegendaryStatAmount' has a wrong offset!");
static_assert(offsetof(UBUF_Global_GlovesGearPassives_C, EnergyAmountGE) == 0x000048, "Member 'UBUF_Global_GlovesGearPassives_C::EnergyAmountGE' has a wrong offset!");

}

