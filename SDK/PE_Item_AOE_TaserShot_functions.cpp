#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PE_Item_AOE_TaserShot

#include "Basic.hpp"

#include "PE_Item_AOE_TaserShot_classes.hpp"
#include "PE_Item_AOE_TaserShot_parameters.hpp"


namespace SDK
{

// Function PE_Item_AOE_TaserShot.PE_Item_AOE_TaserShot_C.ExecuteUbergraph_PE_Item_AOE_TaserShot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_AOE_TaserShot_C::ExecuteUbergraph_PE_Item_AOE_TaserShot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_AOE_TaserShot_C", "ExecuteUbergraph_PE_Item_AOE_TaserShot");

	Params::PE_Item_AOE_TaserShot_C_ExecuteUbergraph_PE_Item_AOE_TaserShot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_Item_AOE_TaserShot.PE_Item_AOE_TaserShot_C.OnSpawnFinished
// (Event, Protected, BlueprintEvent)

void APE_Item_AOE_TaserShot_C::OnSpawnFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_AOE_TaserShot_C", "OnSpawnFinished");

	UObject::ProcessEvent(Func, nullptr);
}

}

