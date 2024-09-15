#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_DV_GlitchBombDamageZone

#include "Basic.hpp"

#include "E_DV_GlitchBombDamageZone_classes.hpp"
#include "E_DV_GlitchBombDamageZone_parameters.hpp"


namespace SDK
{

// Function E_DV_GlitchBombDamageZone.E_DV_GlitchBombDamageZone_C.ExecuteUbergraph_E_DV_GlitchBombDamageZone
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_DV_GlitchBombDamageZone_C::ExecuteUbergraph_E_DV_GlitchBombDamageZone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_DV_GlitchBombDamageZone_C", "ExecuteUbergraph_E_DV_GlitchBombDamageZone");

	Params::E_DV_GlitchBombDamageZone_C_ExecuteUbergraph_E_DV_GlitchBombDamageZone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_DV_GlitchBombDamageZone.E_DV_GlitchBombDamageZone_C.OnEnabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bOldEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bNewEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_DV_GlitchBombDamageZone_C::OnEnabledChanged(bool bOldEnabled, bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_DV_GlitchBombDamageZone_C", "OnEnabledChanged");

	Params::E_DV_GlitchBombDamageZone_C_OnEnabledChanged Parms{};

	Parms.bOldEnabled = bOldEnabled;
	Parms.bNewEnabled = bNewEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_DV_GlitchBombDamageZone.E_DV_GlitchBombDamageZone_C.OnOverlapCharacter
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_DV_GlitchBombDamageZone_C::OnOverlapCharacter(class AMatchaSnapNetCharacterEntity* Character, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_DV_GlitchBombDamageZone_C", "OnOverlapCharacter");

	Params::E_DV_GlitchBombDamageZone_C_OnOverlapCharacter Parms{};

	Parms.Character = Character;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_DV_GlitchBombDamageZone.E_DV_GlitchBombDamageZone_C.OnSpawnFinished
// (Event, Protected, BlueprintEvent)

void AE_DV_GlitchBombDamageZone_C::OnSpawnFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_DV_GlitchBombDamageZone_C", "OnSpawnFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_DV_GlitchBombDamageZone.E_DV_GlitchBombDamageZone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AE_DV_GlitchBombDamageZone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_DV_GlitchBombDamageZone_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

