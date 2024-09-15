#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Gloves_Thief

#include "Basic.hpp"

#include "BUF_Gloves_Thief_classes.hpp"
#include "BUF_Gloves_Thief_parameters.hpp"


namespace SDK
{

// Function BUF_Gloves_Thief.BUF_Gloves_Thief_C.ModifyOutGoingHitBoxDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   BaseHitBoxDamage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBUF_Gloves_Thief_C::ModifyOutGoingHitBoxDamage(class AMatchaSnapNetCharacterEntity* BuffedCharacter, float BaseHitBoxDamage, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_Gloves_Thief_C", "ModifyOutGoingHitBoxDamage");

	Params::BUF_Gloves_Thief_C_ModifyOutGoingHitBoxDamage Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.BaseHitBoxDamage = BaseHitBoxDamage;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BUF_Gloves_Thief.BUF_Gloves_Thief_C.OnPostApplyOutgoingHit
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           PreviousTargetHit                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMatchaHitData                   HitData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// uint8                                   AppliedHitFlags                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMatchaCharacterMontageType             MontageDuringHit                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_Gloves_Thief_C::OnPostApplyOutgoingHit(class AMatchaSnapNetCharacterEntity* BuffedCharacter, class AActor* TargetHit, class AActor* PreviousTargetHit, const struct FMatchaHitData& HitData, uint8 AppliedHitFlags, EMatchaCharacterMontageType MontageDuringHit, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_Gloves_Thief_C", "OnPostApplyOutgoingHit");

	Params::BUF_Gloves_Thief_C_OnPostApplyOutgoingHit Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.TargetHit = TargetHit;
	Parms.PreviousTargetHit = PreviousTargetHit;
	Parms.HitData = std::move(HitData);
	Parms.AppliedHitFlags = AppliedHitFlags;
	Parms.MontageDuringHit = MontageDuringHit;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}

}

