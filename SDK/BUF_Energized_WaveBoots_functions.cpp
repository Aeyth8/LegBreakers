#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Energized_WaveBoots

#include "Basic.hpp"

#include "BUF_Energized_WaveBoots_classes.hpp"
#include "BUF_Energized_WaveBoots_parameters.hpp"


namespace SDK
{

// Function BUF_Energized_WaveBoots.BUF_Energized_WaveBoots_C.OnBuffApplied
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_Energized_WaveBoots_C::OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_Energized_WaveBoots_C", "OnBuffApplied");

	Params::BUF_Energized_WaveBoots_C_OnBuffApplied Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BUF_Energized_WaveBoots.BUF_Energized_WaveBoots_C.OnBuffRemoved
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_Energized_WaveBoots_C::OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_Energized_WaveBoots_C", "OnBuffRemoved");

	Params::BUF_Energized_WaveBoots_C_OnBuffRemoved Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BUF_Energized_WaveBoots.BUF_Energized_WaveBoots_C.OnCharacterMontageEnd
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EMatchaCharacterMontageType             MontageType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_Energized_WaveBoots_C::OnCharacterMontageEnd(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EMatchaCharacterMontageType MontageType, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_Energized_WaveBoots_C", "OnCharacterMontageEnd");

	Params::BUF_Energized_WaveBoots_C_OnCharacterMontageEnd Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.MontageType = MontageType;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BUF_Energized_WaveBoots.BUF_Energized_WaveBoots_C.OnCharacterMontageStart
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   MontageDuration                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMatchaCharacterMontageType             MontageType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMatchaCharacterMontageType             PreviousMontageType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_Energized_WaveBoots_C::OnCharacterMontageStart(class AMatchaSnapNetCharacterEntity* BuffedCharacter, float MontageDuration, EMatchaCharacterMontageType MontageType, EMatchaCharacterMontageType PreviousMontageType, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_Energized_WaveBoots_C", "OnCharacterMontageStart");

	Params::BUF_Energized_WaveBoots_C_OnCharacterMontageStart Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.MontageDuration = MontageDuration;
	Parms.MontageType = MontageType;
	Parms.PreviousMontageType = PreviousMontageType;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}

}

