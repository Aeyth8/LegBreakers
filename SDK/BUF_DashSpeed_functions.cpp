#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_DashSpeed

#include "Basic.hpp"

#include "BUF_DashSpeed_classes.hpp"
#include "BUF_DashSpeed_parameters.hpp"


namespace SDK
{

// Function BUF_DashSpeed.BUF_DashSpeed_C.OnBuffApplied
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_DashSpeed_C::OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_DashSpeed_C", "OnBuffApplied");

	Params::BUF_DashSpeed_C_OnBuffApplied Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BUF_DashSpeed.BUF_DashSpeed_C.OnBuffRemoved
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_DashSpeed_C::OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_DashSpeed_C", "OnBuffRemoved");

	Params::BUF_DashSpeed_C_OnBuffRemoved Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}

}
