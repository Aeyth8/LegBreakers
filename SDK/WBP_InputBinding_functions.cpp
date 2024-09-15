#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InputBinding

#include "Basic.hpp"

#include "WBP_InputBinding_classes.hpp"
#include "WBP_InputBinding_parameters.hpp"


namespace SDK
{

// Function WBP_InputBinding.WBP_InputBinding_C.ExecuteUbergraph_WBP_InputBinding
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InputBinding_C::ExecuteUbergraph_WBP_InputBinding(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputBinding_C", "ExecuteUbergraph_WBP_InputBinding");

	Params::WBP_InputBinding_C_ExecuteUbergraph_WBP_InputBinding Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputBinding.WBP_InputBinding_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     InInputAction                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FKey                             InKey                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// double                                  InSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InputBinding_C::Init(class UInputAction* InInputAction, const struct FKey& InKey, double InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputBinding_C", "Init");

	Params::WBP_InputBinding_C_Init Parms{};

	Parms.InInputAction = InInputAction;
	Parms.InKey = std::move(InKey);
	Parms.InSize = InSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputBinding.WBP_InputBinding_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InputBinding_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputBinding_C", "PreConstruct");

	Params::WBP_InputBinding_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputBinding.WBP_InputBinding_C.SetInputAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     InputAction_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InputBinding_C::SetInputAction(class UInputAction* InputAction_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputBinding_C", "SetInputAction");

	Params::WBP_InputBinding_C_SetInputAction Parms{};

	Parms.InputAction_0 = InputAction_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InputBinding.WBP_InputBinding_C.UpdateBinding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InputBinding_C::UpdateBinding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputBinding_C", "UpdateBinding");

	UObject::ProcessEvent(Func, nullptr);
}

}

