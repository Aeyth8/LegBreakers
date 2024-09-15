#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Boots_Unstoppable

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_Boots_Unstoppable.BUF_Boots_Unstoppable_C
// 0x0020 (0x0048 - 0x0028)
class UBUF_Boots_Unstoppable_C : public UMatchaCharacterBuff
{
public:
	class UClass*                                 SlowResistGE;                                      // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        RareSlowResist;                                    // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EpicSlowResist;                                    // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LegendarySlowResist;                               // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;
	void OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_Boots_Unstoppable_C">();
	}
	static class UBUF_Boots_Unstoppable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_Boots_Unstoppable_C>();
	}
};
static_assert(alignof(UBUF_Boots_Unstoppable_C) == 0x000008, "Wrong alignment on UBUF_Boots_Unstoppable_C");
static_assert(sizeof(UBUF_Boots_Unstoppable_C) == 0x000048, "Wrong size on UBUF_Boots_Unstoppable_C");
static_assert(offsetof(UBUF_Boots_Unstoppable_C, SlowResistGE) == 0x000028, "Member 'UBUF_Boots_Unstoppable_C::SlowResistGE' has a wrong offset!");
static_assert(offsetof(UBUF_Boots_Unstoppable_C, RareSlowResist) == 0x000030, "Member 'UBUF_Boots_Unstoppable_C::RareSlowResist' has a wrong offset!");
static_assert(offsetof(UBUF_Boots_Unstoppable_C, EpicSlowResist) == 0x000038, "Member 'UBUF_Boots_Unstoppable_C::EpicSlowResist' has a wrong offset!");
static_assert(offsetof(UBUF_Boots_Unstoppable_C, LegendarySlowResist) == 0x000040, "Member 'UBUF_Boots_Unstoppable_C::LegendarySlowResist' has a wrong offset!");

}

