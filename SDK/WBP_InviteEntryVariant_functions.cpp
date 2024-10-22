#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InviteEntryVariant

#include "Basic.hpp"

#include "WBP_InviteEntryVariant_classes.hpp"
#include "WBP_InviteEntryVariant_parameters.hpp"


namespace SDK
{

// Function WBP_InviteEntryVariant.WBP_InviteEntryVariant_C.BindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       NewUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InviteEntryVariant_C::BindData(class UOdyUIData* NewUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InviteEntryVariant_C", "BindData");

	Params::WBP_InviteEntryVariant_C_BindData Parms{};

	Parms.NewUIData = NewUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InviteEntryVariant.WBP_InviteEntryVariant_C.BndEvt__WBP_InviteEntry_AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InviteEntryVariant_C::BndEvt__WBP_InviteEntry_AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InviteEntryVariant_C", "BndEvt__WBP_InviteEntry_AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InviteEntryVariant.WBP_InviteEntryVariant_C.BndEvt__WBP_InviteEntry_RejectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InviteEntryVariant_C::BndEvt__WBP_InviteEntry_RejectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InviteEntryVariant_C", "BndEvt__WBP_InviteEntry_RejectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InviteEntryVariant.WBP_InviteEntryVariant_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_InviteEntryVariant_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InviteEntryVariant_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InviteEntryVariant.WBP_InviteEntryVariant_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InviteEntryVariant_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InviteEntryVariant_C", "BP_OnItemExpansionChanged");

	Params::WBP_InviteEntryVariant_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InviteEntryVariant.WBP_InviteEntryVariant_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InviteEntryVariant_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InviteEntryVariant_C", "BP_OnItemSelectionChanged");

	Params::WBP_InviteEntryVariant_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InviteEntryVariant.WBP_InviteEntryVariant_C.ExecuteUbergraph_WBP_InviteEntryVariant
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InviteEntryVariant_C::ExecuteUbergraph_WBP_InviteEntryVariant(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InviteEntryVariant_C", "ExecuteUbergraph_WBP_InviteEntryVariant");

	Params::WBP_InviteEntryVariant_C_ExecuteUbergraph_WBP_InviteEntryVariant Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InviteEntryVariant.WBP_InviteEntryVariant_C.SetAcceptable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewAcceptable                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InviteEntryVariant_C::SetAcceptable(bool NewAcceptable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InviteEntryVariant_C", "SetAcceptable");

	Params::WBP_InviteEntryVariant_C_SetAcceptable Parms{};

	Parms.NewAcceptable = NewAcceptable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InviteEntryVariant.WBP_InviteEntryVariant_C.SetRejectable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    New_Rejectable                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InviteEntryVariant_C::SetRejectable(bool New_Rejectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InviteEntryVariant_C", "SetRejectable");

	Params::WBP_InviteEntryVariant_C_SetRejectable Parms{};

	Parms.New_Rejectable = New_Rejectable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InviteEntryVariant.WBP_InviteEntryVariant_C.UnbindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       OldUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InviteEntryVariant_C::UnbindData(class UOdyUIData* OldUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InviteEntryVariant_C", "UnbindData");

	Params::WBP_InviteEntryVariant_C_UnbindData Parms{};

	Parms.OldUIData = OldUIData;

	UObject::ProcessEvent(Func, &Parms);
}

}

