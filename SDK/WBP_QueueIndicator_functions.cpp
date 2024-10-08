#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QueueIndicator

#include "Basic.hpp"

#include "WBP_QueueIndicator_classes.hpp"
#include "WBP_QueueIndicator_parameters.hpp"


namespace SDK
{

// Function WBP_QueueIndicator.WBP_QueueIndicator_C.ExecuteUbergraph_WBP_QueueIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueIndicator_C::ExecuteUbergraph_WBP_QueueIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueIndicator_C", "ExecuteUbergraph_WBP_QueueIndicator");

	Params::WBP_QueueIndicator_C_ExecuteUbergraph_WBP_QueueIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QueueIndicator.WBP_QueueIndicator_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QueueIndicator_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueIndicator_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QueueIndicator.WBP_QueueIndicator_C.OnMatchPhaseChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueIndicator_C::OnMatchPhaseChanged(int32 OldValue, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueIndicator_C", "OnMatchPhaseChanged");

	Params::WBP_QueueIndicator_C_OnMatchPhaseChanged Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QueueIndicator.WBP_QueueIndicator_C.OnQueueStatusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueIndicator_C::OnQueueStatusChanged(bool OldValue, bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueIndicator_C", "OnQueueStatusChanged");

	Params::WBP_QueueIndicator_C_OnQueueStatusChanged Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QueueIndicator.WBP_QueueIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueIndicator_C", "Tick");

	Params::WBP_QueueIndicator_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

