#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Trap_AtlasSideSpecial

#include "Basic.hpp"

#include "E_Trap_AtlasSideSpecial_classes.hpp"
#include "E_Trap_AtlasSideSpecial_parameters.hpp"


namespace SDK
{

// Function E_Trap_AtlasSideSpecial.E_Trap_AtlasSideSpecial_C.ExecuteUbergraph_E_Trap_AtlasSideSpecial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_Trap_AtlasSideSpecial_C::ExecuteUbergraph_E_Trap_AtlasSideSpecial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_AtlasSideSpecial_C", "ExecuteUbergraph_E_Trap_AtlasSideSpecial");

	Params::E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_Trap_AtlasSideSpecial.E_Trap_AtlasSideSpecial_C.OnPeriodicEffectInterval
// (BlueprintCallable, BlueprintEvent)

void AE_Trap_AtlasSideSpecial_C::OnPeriodicEffectInterval()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_AtlasSideSpecial_C", "OnPeriodicEffectInterval");

	UObject::ProcessEvent(Func, nullptr);
}

}

