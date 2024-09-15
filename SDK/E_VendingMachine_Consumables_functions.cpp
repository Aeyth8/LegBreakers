#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_VendingMachine_Consumables

#include "Basic.hpp"

#include "E_VendingMachine_Consumables_classes.hpp"
#include "E_VendingMachine_Consumables_parameters.hpp"


namespace SDK
{

// Function E_VendingMachine_Consumables.E_VendingMachine_Consumables_C.AfterInteractionCancelledOrCompleted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_VendingMachine_Consumables_C::AfterInteractionCancelledOrCompleted(class AActor* InteractingActor, bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_VendingMachine_Consumables_C", "AfterInteractionCancelledOrCompleted");

	Params::E_VendingMachine_Consumables_C_AfterInteractionCancelledOrCompleted Parms{};

	Parms.InteractingActor = InteractingActor;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_VendingMachine_Consumables.E_VendingMachine_Consumables_C.AfterInteractionStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AE_VendingMachine_Consumables_C::AfterInteractionStarted(class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_VendingMachine_Consumables_C", "AfterInteractionStarted");

	Params::E_VendingMachine_Consumables_C_AfterInteractionStarted Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_VendingMachine_Consumables.E_VendingMachine_Consumables_C.ExecuteUbergraph_E_VendingMachine_Consumables
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_VendingMachine_Consumables_C::ExecuteUbergraph_E_VendingMachine_Consumables(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_VendingMachine_Consumables_C", "ExecuteUbergraph_E_VendingMachine_Consumables");

	Params::E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_VendingMachine_Consumables.E_VendingMachine_Consumables_C.CanStartInteraction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AE_VendingMachine_Consumables_C::CanStartInteraction(class AActor* InteractingActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_VendingMachine_Consumables_C", "CanStartInteraction");

	Params::E_VendingMachine_Consumables_C_CanStartInteraction Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function E_VendingMachine_Consumables.E_VendingMachine_Consumables_C.GetIsBeingInteracted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bIsBeingInteracted                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_VendingMachine_Consumables_C::GetIsBeingInteracted(bool* bIsBeingInteracted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_VendingMachine_Consumables_C", "GetIsBeingInteracted");

	Params::E_VendingMachine_Consumables_C_GetIsBeingInteracted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsBeingInteracted != nullptr)
		*bIsBeingInteracted = Parms.bIsBeingInteracted;
}

}
