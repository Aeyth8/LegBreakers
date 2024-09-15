#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Hack_CrystalRose

#include "Basic.hpp"

#include "BUF_Hack_CrystalRose_classes.hpp"
#include "BUF_Hack_CrystalRose_parameters.hpp"


namespace SDK
{

// Function BUF_Hack_CrystalRose.BUF_Hack_CrystalRose_C.OnPostApplyOutgoingHit
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           PreviousTargetHit                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMatchaHitData                   HitData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// uint8                                   AppliedHitFlags                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMatchaCharacterMontageType             MontageDuringHit                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_Hack_CrystalRose_C::OnPostApplyOutgoingHit(class AMatchaSnapNetCharacterEntity* BuffedCharacter, class AActor* TargetHit, class AActor* PreviousTargetHit, const struct FMatchaHitData& HitData, uint8 AppliedHitFlags, EMatchaCharacterMontageType MontageDuringHit, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_Hack_CrystalRose_C", "OnPostApplyOutgoingHit");

	Params::BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.TargetHit = TargetHit;
	Parms.PreviousTargetHit = PreviousTargetHit;
	Parms.HitData = std::move(HitData);
	Parms.AppliedHitFlags = AppliedHitFlags;
	Parms.MontageDuringHit = MontageDuringHit;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BUF_Hack_CrystalRose.BUF_Hack_CrystalRose_C.OnSpawnedOwnedEntity
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           SpawnedEntity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_Hack_CrystalRose_C::OnSpawnedOwnedEntity(class AMatchaSnapNetCharacterEntity* BuffedCharacter, class AActor* SpawnedEntity, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_Hack_CrystalRose_C", "OnSpawnedOwnedEntity");

	Params::BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.SpawnedEntity = SpawnedEntity;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}

}

