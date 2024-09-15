#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Global_GlovesGearPassives

#include "Basic.hpp"

#include "BUF_Global_GlovesGearPassives_classes.hpp"
#include "BUF_Global_GlovesGearPassives_parameters.hpp"


namespace SDK
{

// Function BUF_Global_GlovesGearPassives.BUF_Global_GlovesGearPassives_C.OnBuffApplied
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_Global_GlovesGearPassives_C::OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_Global_GlovesGearPassives_C", "OnBuffApplied");

	Params::BUF_Global_GlovesGearPassives_C_OnBuffApplied Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BUF_Global_GlovesGearPassives.BUF_Global_GlovesGearPassives_C.OnBuffRemoved
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_Global_GlovesGearPassives_C::OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_Global_GlovesGearPassives_C", "OnBuffRemoved");

	Params::BUF_Global_GlovesGearPassives_C_OnBuffRemoved Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}

}

