#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_ControlPanel

#include "Basic.hpp"

#include "E_ControlPanel_classes.hpp"
#include "E_ControlPanel_parameters.hpp"


namespace SDK
{

// Function E_ControlPanel.E_ControlPanel_C.ExecuteUbergraph_E_ControlPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_ControlPanel_C::ExecuteUbergraph_E_ControlPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_ControlPanel_C", "ExecuteUbergraph_E_ControlPanel");

	Params::E_ControlPanel_C_ExecuteUbergraph_E_ControlPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_ControlPanel.E_ControlPanel_C.HandleReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AE_ControlPanel_C::HandleReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_ControlPanel_C", "HandleReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_ControlPanel.E_ControlPanel_C.InteractionCompleted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AE_ControlPanel_C::InteractionCompleted(class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_ControlPanel_C", "InteractionCompleted");

	Params::E_ControlPanel_C_InteractionCompleted Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_ControlPanel.E_ControlPanel_C.OnEnabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bOldEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bNewEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_ControlPanel_C::OnEnabledChanged(bool bOldEnabled, bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_ControlPanel_C", "OnEnabledChanged");

	Params::E_ControlPanel_C_OnEnabledChanged Parms{};

	Parms.bOldEnabled = bOldEnabled;
	Parms.bNewEnabled = bNewEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_ControlPanel.E_ControlPanel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_ControlPanel_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_ControlPanel_C", "ReceiveTick");

	Params::E_ControlPanel_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_ControlPanel.E_ControlPanel_C.UpdateCollision
// (Public, BlueprintCallable, BlueprintEvent)

void AE_ControlPanel_C::UpdateCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_ControlPanel_C", "UpdateCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_ControlPanel.E_ControlPanel_C.CanStartInteraction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AE_ControlPanel_C::CanStartInteraction(class AActor* InteractingActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_ControlPanel_C", "CanStartInteraction");

	Params::E_ControlPanel_C_CanStartInteraction Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

