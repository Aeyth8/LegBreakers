#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_ModeOption

#include "Basic.hpp"

#include "WBP_MainMenu_ModeOption_classes.hpp"
#include "WBP_MainMenu_ModeOption_parameters.hpp"


namespace SDK
{

// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.BindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       NewUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_ModeOption_C::BindData(class UOdyUIData* NewUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_ModeOption_C", "BindData");

	Params::WBP_MainMenu_ModeOption_C_BindData Parms{};

	Parms.NewUIData = NewUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_MainMenu_ModeOption_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_ModeOption_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_ModeOption_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_ModeOption_C", "BP_OnItemExpansionChanged");

	Params::WBP_MainMenu_ModeOption_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_ModeOption_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_ModeOption_C", "BP_OnItemSelectionChanged");

	Params::WBP_MainMenu_ModeOption_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.ChangeState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_ModeOption_C::ChangeState(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_ModeOption_C", "ChangeState");

	Params::WBP_MainMenu_ModeOption_C_ChangeState Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.ExecuteUbergraph_WBP_MainMenu_ModeOption
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_ModeOption_C::ExecuteUbergraph_WBP_MainMenu_ModeOption(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_ModeOption_C", "ExecuteUbergraph_WBP_MainMenu_ModeOption");

	Params::WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.OnSelectedQueueIdChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_ModeOption_C::OnSelectedQueueIdChanged(class FName OldValue, class FName NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_ModeOption_C", "OnSelectedQueueIdChanged");

	Params::WBP_MainMenu_ModeOption_C_OnSelectedQueueIdChanged Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_ModeOption_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_ModeOption_C", "PreConstruct");

	Params::WBP_MainMenu_ModeOption_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.UnbindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       OldUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_ModeOption_C::UnbindData(class UOdyUIData* OldUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_ModeOption_C", "UnbindData");

	Params::WBP_MainMenu_ModeOption_C_UnbindData Parms{};

	Parms.OldUIData = OldUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.UpdateSelectionState
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_ModeOption_C::UpdateSelectionState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_ModeOption_C", "UpdateSelectionState");

	UObject::ProcessEvent(Func, nullptr);
}

}

