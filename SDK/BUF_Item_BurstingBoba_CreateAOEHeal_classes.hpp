#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Item_BurstingBoba_CreateAOEHeal

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_Item_BurstingBoba_CreateAOEHeal.BUF_Item_BurstingBoba_CreateAOEHeal_C
// 0x0008 (0x0030 - 0x0028)
class UBUF_Item_BurstingBoba_CreateAOEHeal_C final : public UMatchaCharacterBuff
{
public:
	TSubclassOf<class AActor>                     AOEHealVolume;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;
	void OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_Item_BurstingBoba_CreateAOEHeal_C">();
	}
	static class UBUF_Item_BurstingBoba_CreateAOEHeal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_Item_BurstingBoba_CreateAOEHeal_C>();
	}
};
static_assert(alignof(UBUF_Item_BurstingBoba_CreateAOEHeal_C) == 0x000008, "Wrong alignment on UBUF_Item_BurstingBoba_CreateAOEHeal_C");
static_assert(sizeof(UBUF_Item_BurstingBoba_CreateAOEHeal_C) == 0x000030, "Wrong size on UBUF_Item_BurstingBoba_CreateAOEHeal_C");
static_assert(offsetof(UBUF_Item_BurstingBoba_CreateAOEHeal_C, AOEHealVolume) == 0x000028, "Member 'UBUF_Item_BurstingBoba_CreateAOEHeal_C::AOEHealVolume' has a wrong offset!");

}

