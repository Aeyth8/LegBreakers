#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_TrackingDeviceReveal

#include "Basic.hpp"

#include "BUF_TrackingDeviceReveal_classes.hpp"
#include "BUF_TrackingDeviceReveal_parameters.hpp"


namespace SDK
{

// Function BUF_TrackingDeviceReveal.BUF_TrackingDeviceReveal_C.OnBuffApplied
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_TrackingDeviceReveal_C::OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_TrackingDeviceReveal_C", "OnBuffApplied");

	Params::BUF_TrackingDeviceReveal_C_OnBuffApplied Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BUF_TrackingDeviceReveal.BUF_TrackingDeviceReveal_C.OnBuffRemoved
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_TrackingDeviceReveal_C::OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_TrackingDeviceReveal_C", "OnBuffRemoved");

	Params::BUF_TrackingDeviceReveal_C_OnBuffRemoved Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BUF_TrackingDeviceReveal.BUF_TrackingDeviceReveal_C.OnCharacterCrouchEnd
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_TrackingDeviceReveal_C::OnCharacterCrouchEnd(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_TrackingDeviceReveal_C", "OnCharacterCrouchEnd");

	Params::BUF_TrackingDeviceReveal_C_OnCharacterCrouchEnd Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BUF_TrackingDeviceReveal.BUF_TrackingDeviceReveal_C.OnCharacterCrouchStart
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_TrackingDeviceReveal_C::OnCharacterCrouchStart(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_TrackingDeviceReveal_C", "OnCharacterCrouchStart");

	Params::BUF_TrackingDeviceReveal_C_OnCharacterCrouchStart Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BUF_TrackingDeviceReveal.BUF_TrackingDeviceReveal_C.OnPostApplyIncomingHit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitInstigator                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMatchaHitData                   TakenHitData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bDidResistWithSuperArmor                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWasStunHitInsteadOfKnockBack                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CombinedDamage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CombinedShieldDamage                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_TrackingDeviceReveal_C::OnPostApplyIncomingHit(class AMatchaSnapNetCharacterEntity* BuffedCharacter, class AActor* HitInstigator, const struct FMatchaHitData& TakenHitData, bool bDidResistWithSuperArmor, bool bWasStunHitInsteadOfKnockBack, float CombinedDamage, float CombinedShieldDamage, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_TrackingDeviceReveal_C", "OnPostApplyIncomingHit");

	Params::BUF_TrackingDeviceReveal_C_OnPostApplyIncomingHit Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.HitInstigator = HitInstigator;
	Parms.TakenHitData = std::move(TakenHitData);
	Parms.bDidResistWithSuperArmor = bDidResistWithSuperArmor;
	Parms.bWasStunHitInsteadOfKnockBack = bWasStunHitInsteadOfKnockBack;
	Parms.CombinedDamage = CombinedDamage;
	Parms.CombinedShieldDamage = CombinedShieldDamage;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}

}

