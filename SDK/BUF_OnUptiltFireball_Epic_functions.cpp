#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_OnUptiltFireball_Epic

#include "Basic.hpp"

#include "BUF_OnUptiltFireball_Epic_classes.hpp"
#include "BUF_OnUptiltFireball_Epic_parameters.hpp"


namespace SDK
{

// Function BUF_OnUptiltFireball_Epic.BUF_OnUptiltFireball_Epic_C.OnCharacterMontageStart
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   MontageDuration                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMatchaCharacterMontageType             MontageType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMatchaCharacterMontageType             PreviousMontageType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_OnUptiltFireball_Epic_C::OnCharacterMontageStart(class AMatchaSnapNetCharacterEntity* BuffedCharacter, float MontageDuration, EMatchaCharacterMontageType MontageType, EMatchaCharacterMontageType PreviousMontageType, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_OnUptiltFireball_Epic_C", "OnCharacterMontageStart");

	Params::BUF_OnUptiltFireball_Epic_C_OnCharacterMontageStart Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.MontageDuration = MontageDuration;
	Parms.MontageType = MontageType;
	Parms.PreviousMontageType = PreviousMontageType;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}

}

