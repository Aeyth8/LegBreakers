#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pickup_Base

#include "Basic.hpp"

#include "Pickup_Base_classes.hpp"
#include "Pickup_Base_parameters.hpp"


namespace SDK
{

// Function Pickup_Base.Pickup_Base_C.DisableCollision
// (BlueprintCallable, BlueprintEvent)

void APickup_Base_C::DisableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickup_Base_C", "DisableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Pickup_Base.Pickup_Base_C.DisablePickup
// (Public, BlueprintCallable, BlueprintEvent)

void APickup_Base_C::DisablePickup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickup_Base_C", "DisablePickup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Pickup_Base.Pickup_Base_C.EnableCollision
// (BlueprintCallable, BlueprintEvent)

void APickup_Base_C::EnableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickup_Base_C", "EnableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Pickup_Base.Pickup_Base_C.EnablePickup
// (Public, BlueprintCallable, BlueprintEvent)

void APickup_Base_C::EnablePickup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickup_Base_C", "EnablePickup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Pickup_Base.Pickup_Base_C.ExecuteUbergraph_Pickup_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APickup_Base_C::ExecuteUbergraph_Pickup_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickup_Base_C", "ExecuteUbergraph_Pickup_Base");

	Params::Pickup_Base_C_ExecuteUbergraph_Pickup_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Pickup_Base.Pickup_Base_C.HandleReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APickup_Base_C::HandleReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickup_Base_C", "HandleReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Pickup_Base.Pickup_Base_C.InteractionCompleted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APickup_Base_C::InteractionCompleted(class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickup_Base_C", "InteractionCompleted");

	Params::Pickup_Base_C_InteractionCompleted Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Pickup_Base.Pickup_Base_C.OnEnabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bOldEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bNewEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APickup_Base_C::OnEnabledChanged(bool bOldEnabled, bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickup_Base_C", "OnEnabledChanged");

	Params::Pickup_Base_C_OnEnabledChanged Parms{};

	Parms.bOldEnabled = bOldEnabled;
	Parms.bNewEnabled = bNewEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Pickup_Base.Pickup_Base_C.TryPickUpBy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APickup_Base_C::TryPickUpBy(class AActor* Instigator_0, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickup_Base_C", "TryPickUpBy");

	Params::Pickup_Base_C_TryPickUpBy Parms{};

	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function Pickup_Base.Pickup_Base_C.CanStartInteraction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool APickup_Base_C::CanStartInteraction(class AActor* InteractingActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickup_Base_C", "CanStartInteraction");

	Params::Pickup_Base_C_CanStartInteraction Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
