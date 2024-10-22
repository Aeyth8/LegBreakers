#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_CharacterPassive_Base

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_CharacterPassive_Base.BUF_CharacterPassive_Base_C
// 0x0000 (0x0028 - 0x0028)
class UBUF_CharacterPassive_Base_C final : public UMatchaCharacterBuff
{
public:
	void OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;
	void OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;
	void OnCharacterShieldStateChanged(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EMatchaShieldState PreviousShieldState, EMatchaShieldState NewShieldState, EObjectRarity BuffRarity) const;
	void OnKnockedOutAnEnemyCharacter(class AMatchaSnapNetCharacterEntity* BuffedCharacter, class AActor* EnemyCharacter, EObjectRarity BuffRarity) const;
	void OnPostApplyOutgoingHit(class AMatchaSnapNetCharacterEntity* BuffedCharacter, class AActor* TargetHit, class AActor* PreviousTargetHit, const struct FMatchaHitData& HitData, uint8 AppliedHitFlags, EMatchaCharacterMontageType MontageDuringHit, EObjectRarity BuffRarity) const;
	void OnShieldBlockedAHit(class AMatchaSnapNetCharacterEntity* BuffedCharacter, class AActor* HitInstigator, float PreHitShieldHealth, bool bDidShieldBreak, float DamageShielded, bool bDidPerfectShieldHit, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_CharacterPassive_Base_C">();
	}
	static class UBUF_CharacterPassive_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_CharacterPassive_Base_C>();
	}
};
static_assert(alignof(UBUF_CharacterPassive_Base_C) == 0x000008, "Wrong alignment on UBUF_CharacterPassive_Base_C");
static_assert(sizeof(UBUF_CharacterPassive_Base_C) == 0x000028, "Wrong size on UBUF_CharacterPassive_Base_C");

}

