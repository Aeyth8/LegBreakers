#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Hack_CoreStrikeGlove

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "BUF_Hack_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_Hack_CoreStrikeGlove.BUF_Hack_CoreStrikeGlove_C
// 0x00B0 (0x00E8 - 0x0038)
class UBUF_Hack_CoreStrikeGlove_C final : public UBUF_Hack_Base_C
{
public:
	struct FMatchaHitBoxData                      HitBoxData;                                        // 0x0038(0x00A8)(Edit, BlueprintVisible)
	class FName                                   NiagaraSystemId;                                   // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void IsAnySmashAttackMontage(EMatchaCharacterMontageType MontageType, bool* IsSmashMontage) const;
	void OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;
	void OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;
	void OnCharacterMontageStart(class AMatchaSnapNetCharacterEntity* BuffedCharacter, float MontageDuration, EMatchaCharacterMontageType MontageType, EMatchaCharacterMontageType PreviousMontageType, EObjectRarity BuffRarity) const;
	void OnMontageSpawnedHitBox(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EMatchaCharacterMontageType MontageType, int32 MontageHitBoxCount, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_Hack_CoreStrikeGlove_C">();
	}
	static class UBUF_Hack_CoreStrikeGlove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_Hack_CoreStrikeGlove_C>();
	}
};
static_assert(alignof(UBUF_Hack_CoreStrikeGlove_C) == 0x000008, "Wrong alignment on UBUF_Hack_CoreStrikeGlove_C");
static_assert(sizeof(UBUF_Hack_CoreStrikeGlove_C) == 0x0000E8, "Wrong size on UBUF_Hack_CoreStrikeGlove_C");
static_assert(offsetof(UBUF_Hack_CoreStrikeGlove_C, HitBoxData) == 0x000038, "Member 'UBUF_Hack_CoreStrikeGlove_C::HitBoxData' has a wrong offset!");
static_assert(offsetof(UBUF_Hack_CoreStrikeGlove_C, NiagaraSystemId) == 0x0000E0, "Member 'UBUF_Hack_CoreStrikeGlove_C::NiagaraSystemId' has a wrong offset!");

}

