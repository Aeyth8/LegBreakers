#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_ChargeGloves

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_ChargeGloves.BUF_ChargeGloves_C
// 0x0018 (0x0040 - 0x0028)
class UBUF_ChargeGloves_C : public UMatchaCharacterBuff
{
public:
	class UClass*                                 EffectAmountGE;                                    // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         RareEnergyGenAmp;                                  // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EpicEnergyGenAmp;                                  // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LegendaryEnergyGenAmp;                             // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;
	void OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_ChargeGloves_C">();
	}
	static class UBUF_ChargeGloves_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_ChargeGloves_C>();
	}
};
static_assert(alignof(UBUF_ChargeGloves_C) == 0x000008, "Wrong alignment on UBUF_ChargeGloves_C");
static_assert(sizeof(UBUF_ChargeGloves_C) == 0x000040, "Wrong size on UBUF_ChargeGloves_C");
static_assert(offsetof(UBUF_ChargeGloves_C, EffectAmountGE) == 0x000028, "Member 'UBUF_ChargeGloves_C::EffectAmountGE' has a wrong offset!");
static_assert(offsetof(UBUF_ChargeGloves_C, RareEnergyGenAmp) == 0x000030, "Member 'UBUF_ChargeGloves_C::RareEnergyGenAmp' has a wrong offset!");
static_assert(offsetof(UBUF_ChargeGloves_C, EpicEnergyGenAmp) == 0x000034, "Member 'UBUF_ChargeGloves_C::EpicEnergyGenAmp' has a wrong offset!");
static_assert(offsetof(UBUF_ChargeGloves_C, LegendaryEnergyGenAmp) == 0x000038, "Member 'UBUF_ChargeGloves_C::LegendaryEnergyGenAmp' has a wrong offset!");

}

