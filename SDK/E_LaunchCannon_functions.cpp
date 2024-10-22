#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_LaunchCannon

#include "Basic.hpp"

#include "E_LaunchCannon_classes.hpp"
#include "E_LaunchCannon_parameters.hpp"


namespace SDK
{

// Function E_LaunchCannon.E_LaunchCannon_C.ExecuteUbergraph_E_LaunchCannon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_LaunchCannon_C::ExecuteUbergraph_E_LaunchCannon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_LaunchCannon_C", "ExecuteUbergraph_E_LaunchCannon");

	Params::E_LaunchCannon_C_ExecuteUbergraph_E_LaunchCannon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_LaunchCannon.E_LaunchCannon_C.InteractionCompleted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AE_LaunchCannon_C::InteractionCompleted(class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_LaunchCannon_C", "InteractionCompleted");

	Params::E_LaunchCannon_C_InteractionCompleted Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_LaunchCannon.E_LaunchCannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AE_LaunchCannon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_LaunchCannon_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_LaunchCannon.E_LaunchCannon_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AE_LaunchCannon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_LaunchCannon_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_LaunchCannon.E_LaunchCannon_C.GetInteractionRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FMatchaInteractionRequirements   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FMatchaInteractionRequirements AE_LaunchCannon_C::GetInteractionRequirements() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_LaunchCannon_C", "GetInteractionRequirements");

	Params::E_LaunchCannon_C_GetInteractionRequirements Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

