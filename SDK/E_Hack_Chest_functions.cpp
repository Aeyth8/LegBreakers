#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Hack_Chest

#include "Basic.hpp"

#include "E_Hack_Chest_classes.hpp"
#include "E_Hack_Chest_parameters.hpp"


namespace SDK
{

// Function E_Hack_Chest.E_Hack_Chest_C.BndEvt__E_Hack_Chest_EntityComponent_K2Node_ComponentBoundEvent_0_SnapNetPropertiesModifiedDynamicDelegate__DelegateSignature
// (BlueprintEvent)

void AE_Hack_Chest_C::BndEvt__E_Hack_Chest_EntityComponent_K2Node_ComponentBoundEvent_0_SnapNetPropertiesModifiedDynamicDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Hack_Chest_C", "BndEvt__E_Hack_Chest_EntityComponent_K2Node_ComponentBoundEvent_0_SnapNetPropertiesModifiedDynamicDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_Hack_Chest.E_Hack_Chest_C.ExecuteUbergraph_E_Hack_Chest
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_Hack_Chest_C::ExecuteUbergraph_E_Hack_Chest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Hack_Chest_C", "ExecuteUbergraph_E_Hack_Chest");

	Params::E_Hack_Chest_C_ExecuteUbergraph_E_Hack_Chest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_Hack_Chest.E_Hack_Chest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AE_Hack_Chest_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Hack_Chest_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_Hack_Chest.E_Hack_Chest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AE_Hack_Chest_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Hack_Chest_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_Hack_Chest.E_Hack_Chest_C.GetScheduledObjectiveDisplayText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString AE_Hack_Chest_C::GetScheduledObjectiveDisplayText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Hack_Chest_C", "GetScheduledObjectiveDisplayText");

	Params::E_Hack_Chest_C_GetScheduledObjectiveDisplayText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function E_Hack_Chest.E_Hack_Chest_C.GetScheduledObjectiveType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EScheduledObjectiveType                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EScheduledObjectiveType AE_Hack_Chest_C::GetScheduledObjectiveType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Hack_Chest_C", "GetScheduledObjectiveType");

	Params::E_Hack_Chest_C_GetScheduledObjectiveType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
