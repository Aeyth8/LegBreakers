#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Pickup_RareHealth

#include "Basic.hpp"

#include "E_Pickup_RareHealth_classes.hpp"
#include "E_Pickup_RareHealth_parameters.hpp"


namespace SDK
{

// Function E_Pickup_RareHealth.E_Pickup_RareHealth_C.ExecuteUbergraph_E_Pickup_RareHealth
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_Pickup_RareHealth_C::ExecuteUbergraph_E_Pickup_RareHealth(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Pickup_RareHealth_C", "ExecuteUbergraph_E_Pickup_RareHealth");

	Params::E_Pickup_RareHealth_C_ExecuteUbergraph_E_Pickup_RareHealth Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_Pickup_RareHealth.E_Pickup_RareHealth_C.HandleReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AE_Pickup_RareHealth_C::HandleReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Pickup_RareHealth_C", "HandleReset");

	UObject::ProcessEvent(Func, nullptr);
}

}

