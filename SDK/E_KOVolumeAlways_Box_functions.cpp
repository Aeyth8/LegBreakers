#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_KOVolumeAlways_Box

#include "Basic.hpp"

#include "E_KOVolumeAlways_Box_classes.hpp"
#include "E_KOVolumeAlways_Box_parameters.hpp"


namespace SDK
{

// Function E_KOVolumeAlways_Box.E_KOVolumeAlways_Box_C.BndEvt__E_KOVolumeAlways_Box_EntityComponent_K2Node_ComponentBoundEvent_0_SnapNetPropertiesModifiedDynamicDelegate__DelegateSignature
// (BlueprintEvent)

void AE_KOVolumeAlways_Box_C::BndEvt__E_KOVolumeAlways_Box_EntityComponent_K2Node_ComponentBoundEvent_0_SnapNetPropertiesModifiedDynamicDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_KOVolumeAlways_Box_C", "BndEvt__E_KOVolumeAlways_Box_EntityComponent_K2Node_ComponentBoundEvent_0_SnapNetPropertiesModifiedDynamicDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_KOVolumeAlways_Box.E_KOVolumeAlways_Box_C.ExecuteUbergraph_E_KOVolumeAlways_Box
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_KOVolumeAlways_Box_C::ExecuteUbergraph_E_KOVolumeAlways_Box(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_KOVolumeAlways_Box_C", "ExecuteUbergraph_E_KOVolumeAlways_Box");

	Params::E_KOVolumeAlways_Box_C_ExecuteUbergraph_E_KOVolumeAlways_Box Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_KOVolumeAlways_Box.E_KOVolumeAlways_Box_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AE_KOVolumeAlways_Box_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_KOVolumeAlways_Box_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

