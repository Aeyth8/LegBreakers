#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Trap_ProximityMine

#include "Basic.hpp"

#include "E_Trap_ProximityMine_classes.hpp"
#include "E_Trap_ProximityMine_parameters.hpp"


namespace SDK
{

// Function E_Trap_ProximityMine.E_Trap_ProximityMine_C.ExecuteUbergraph_E_Trap_ProximityMine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_Trap_ProximityMine_C::ExecuteUbergraph_E_Trap_ProximityMine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_ProximityMine_C", "ExecuteUbergraph_E_Trap_ProximityMine");

	Params::E_Trap_ProximityMine_C_ExecuteUbergraph_E_Trap_ProximityMine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_Trap_ProximityMine.E_Trap_ProximityMine_C.OnSpawnFinished
// (Event, Protected, BlueprintEvent)

void AE_Trap_ProximityMine_C::OnSpawnFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_ProximityMine_C", "OnSpawnFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_Trap_ProximityMine.E_Trap_ProximityMine_C.OnTriggerTrapFromOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    OverlappedCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AE_Trap_ProximityMine_C::OnTriggerTrapFromOverlap(class AMatchaSnapNetCharacterEntity* OverlappedCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_ProximityMine_C", "OnTriggerTrapFromOverlap");

	Params::E_Trap_ProximityMine_C_OnTriggerTrapFromOverlap Parms{};

	Parms.OverlappedCharacter = OverlappedCharacter;

	UObject::ProcessEvent(Func, &Parms);
}

}

