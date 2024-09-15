#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FullControls

#include "Basic.hpp"

#include "WBP_FullControls_classes.hpp"
#include "WBP_FullControls_parameters.hpp"


namespace SDK
{

// Function WBP_FullControls.WBP_FullControls_C.ExecuteUbergraph_WBP_FullControls
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FullControls_C::ExecuteUbergraph_WBP_FullControls(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FullControls_C", "ExecuteUbergraph_WBP_FullControls");

	Params::WBP_FullControls_C_ExecuteUbergraph_WBP_FullControls Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FullControls.WBP_FullControls_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_FullControls_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FullControls_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FullControls.WBP_FullControls_C.OnInputMethodChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputMethod                            InputMethod                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FullControls_C::OnInputMethodChanged_Event(EInputMethod InputMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FullControls_C", "OnInputMethodChanged_Event");

	Params::WBP_FullControls_C_OnInputMethodChanged_Event Parms{};

	Parms.InputMethod = InputMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FullControls.WBP_FullControls_C.SetControllerIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamepad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FullControls_C::SetControllerIcons(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FullControls_C", "SetControllerIcons");

	Params::WBP_FullControls_C_SetControllerIcons Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FullControls.WBP_FullControls_C.SetVisibilityOnInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_FullControls_C::SetVisibilityOnInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FullControls_C", "SetVisibilityOnInput");

	UObject::ProcessEvent(Func, nullptr);
}

}

