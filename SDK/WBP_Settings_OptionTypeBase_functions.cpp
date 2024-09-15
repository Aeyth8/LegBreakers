#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_OptionTypeBase

#include "Basic.hpp"

#include "WBP_Settings_OptionTypeBase_classes.hpp"
#include "WBP_Settings_OptionTypeBase_parameters.hpp"


namespace SDK
{

// Function WBP_Settings_OptionTypeBase.WBP_Settings_OptionTypeBase_C.ExecuteUbergraph_WBP_Settings_OptionTypeBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_OptionTypeBase_C::ExecuteUbergraph_WBP_Settings_OptionTypeBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_OptionTypeBase_C", "ExecuteUbergraph_WBP_Settings_OptionTypeBase");

	Params::WBP_Settings_OptionTypeBase_C_ExecuteUbergraph_WBP_Settings_OptionTypeBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_OptionTypeBase.WBP_Settings_OptionTypeBase_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Settings_OptionTypeBase_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_OptionTypeBase_C", "OnMouseEnter");

	Params::WBP_Settings_OptionTypeBase_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_OptionTypeBase.WBP_Settings_OptionTypeBase_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Settings_OptionTypeBase_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_OptionTypeBase_C", "OnMouseLeave");

	Params::WBP_Settings_OptionTypeBase_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_OptionTypeBase.WBP_Settings_OptionTypeBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_OptionTypeBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_OptionTypeBase_C", "PreConstruct");

	Params::WBP_Settings_OptionTypeBase_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_OptionTypeBase.WBP_Settings_OptionTypeBase_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             TitleText_0                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Settings_OptionTypeBase_C::SetTitle(const class FText& TitleText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_OptionTypeBase_C", "SetTitle");

	Params::WBP_Settings_OptionTypeBase_C_SetTitle Parms{};

	Parms.TitleText_0 = std::move(TitleText_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_OptionTypeBase.WBP_Settings_OptionTypeBase_C.SetVisual
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_OptionTypeBase_C::SetVisual(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_OptionTypeBase_C", "SetVisual");

	Params::WBP_Settings_OptionTypeBase_C_SetVisual Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}
