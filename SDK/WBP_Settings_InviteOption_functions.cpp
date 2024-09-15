#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_InviteOption

#include "Basic.hpp"

#include "WBP_Settings_InviteOption_classes.hpp"
#include "WBP_Settings_InviteOption_parameters.hpp"


namespace SDK
{

// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_InviteOption_C::BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_InviteOption_C", "BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");

	Params::WBP_Settings_InviteOption_C_BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.BndEvt__WBP_Settings_InviteOption_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Settings_InviteOption_C::BndEvt__WBP_Settings_InviteOption_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_InviteOption_C", "BndEvt__WBP_Settings_InviteOption_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.BndEvt__WBP_Settings_InviteOption_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Settings_InviteOption_C::BndEvt__WBP_Settings_InviteOption_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_InviteOption_C", "BndEvt__WBP_Settings_InviteOption_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.BndEvt__WBP_Settings_InviteOption_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Settings_InviteOption_C::BndEvt__WBP_Settings_InviteOption_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_InviteOption_C", "BndEvt__WBP_Settings_InviteOption_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.ChangeHover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHovering                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_InviteOption_C::ChangeHover(bool IsHovering)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_InviteOption_C", "ChangeHover");

	Params::WBP_Settings_InviteOption_C_ChangeHover Parms{};

	Parms.IsHovering = IsHovering;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.ExecuteUbergraph_WBP_Settings_InviteOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_InviteOption_C::ExecuteUbergraph_WBP_Settings_InviteOption(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_InviteOption_C", "ExecuteUbergraph_WBP_Settings_InviteOption");

	Params::WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Settings_InviteOption_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_InviteOption_C", "OnMouseEnter");

	Params::WBP_Settings_InviteOption_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Settings_InviteOption_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_InviteOption_C", "OnMouseLeave");

	Params::WBP_Settings_InviteOption_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_InviteOption_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_InviteOption_C", "PreConstruct");

	Params::WBP_Settings_InviteOption_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             TitleText_0                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Settings_InviteOption_C::SetTitle(const class FText& TitleText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_InviteOption_C", "SetTitle");

	Params::WBP_Settings_InviteOption_C_SetTitle Parms{};

	Parms.TitleText_0 = std::move(TitleText_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.SetVisual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_InviteOption_C::SetVisual(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_InviteOption_C", "SetVisual");

	Params::WBP_Settings_InviteOption_C_SetVisual Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

