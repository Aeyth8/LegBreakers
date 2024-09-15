#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_GrantExtraAirJump_Rarity

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Matcha_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_GrantExtraAirJump_Rarity.BUF_GrantExtraAirJump_Rarity_C
// 0x0008 (0x0030 - 0x0028)
class UBUF_GrantExtraAirJump_Rarity_C : public UMatchaCharacterBuff
{
public:
	class UClass*                                 AirJumpGameplayEffect;                             // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;
	void OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_GrantExtraAirJump_Rarity_C">();
	}
	static class UBUF_GrantExtraAirJump_Rarity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_GrantExtraAirJump_Rarity_C>();
	}
};
static_assert(alignof(UBUF_GrantExtraAirJump_Rarity_C) == 0x000008, "Wrong alignment on UBUF_GrantExtraAirJump_Rarity_C");
static_assert(sizeof(UBUF_GrantExtraAirJump_Rarity_C) == 0x000030, "Wrong size on UBUF_GrantExtraAirJump_Rarity_C");
static_assert(offsetof(UBUF_GrantExtraAirJump_Rarity_C, AirJumpGameplayEffect) == 0x000028, "Member 'UBUF_GrantExtraAirJump_Rarity_C::AirJumpGameplayEffect' has a wrong offset!");

}

