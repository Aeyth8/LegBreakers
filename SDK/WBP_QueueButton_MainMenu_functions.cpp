#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QueueButton_MainMenu

#include "Basic.hpp"

#include "WBP_QueueButton_MainMenu_classes.hpp"
#include "WBP_QueueButton_MainMenu_parameters.hpp"


namespace SDK
{

// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.BndEvt__WBP_QueueButton_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_QueueButton_MainMenu_C::BndEvt__WBP_QueueButton_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "BndEvt__WBP_QueueButton_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.BndEvt__WBP_QueueButton_MainMenu_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_QueueButton_MainMenu_C::BndEvt__WBP_QueueButton_MainMenu_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "BndEvt__WBP_QueueButton_MainMenu_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.BndEvt__WBP_QueueButton_MainMenu_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_QueueButton_MainMenu_C::BndEvt__WBP_QueueButton_MainMenu_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "BndEvt__WBP_QueueButton_MainMenu_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.ChangeEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueButton_MainMenu_C::ChangeEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "ChangeEnabled");

	Params::WBP_QueueButton_MainMenu_C_ChangeEnabled Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.ChangeState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHovering                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueButton_MainMenu_C::ChangeState(bool IsHovering)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "ChangeState");

	Params::WBP_QueueButton_MainMenu_C_ChangeState Parms{};

	Parms.IsHovering = IsHovering;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.ChangeStateVisual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    QueueStart_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueButton_MainMenu_C::ChangeStateVisual(bool QueueStart_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "ChangeStateVisual");

	Params::WBP_QueueButton_MainMenu_C_ChangeStateVisual Parms{};

	Parms.QueueStart_0 = QueueStart_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.ClickQueueButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_QueueButton_MainMenu_C::ClickQueueButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "ClickQueueButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.ExecuteUbergraph_WBP_QueueButton_MainMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueButton_MainMenu_C::ExecuteUbergraph_WBP_QueueButton_MainMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "ExecuteUbergraph_WBP_QueueButton_MainMenu");

	Params::WBP_QueueButton_MainMenu_C_ExecuteUbergraph_WBP_QueueButton_MainMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.OnAvailableQueuesChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       UIData_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueButton_MainMenu_C::OnAvailableQueuesChanged(class UOdyUIData* UIData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "OnAvailableQueuesChanged");

	Params::WBP_QueueButton_MainMenu_C_OnAvailableQueuesChanged Parms{};

	Parms.UIData_0 = UIData_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.OnChangedIsAbleToQueue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueButton_MainMenu_C::OnChangedIsAbleToQueue(bool OldValue, bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "OnChangedIsAbleToQueue");

	Params::WBP_QueueButton_MainMenu_C_OnChangedIsAbleToQueue Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QueueButton_MainMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.OnQueueStatusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueButton_MainMenu_C::OnQueueStatusChanged(bool OldValue, bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "OnQueueStatusChanged");

	Params::WBP_QueueButton_MainMenu_C_OnQueueStatusChanged Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueButton_MainMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "PreConstruct");

	Params::WBP_QueueButton_MainMenu_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C.SetSizeMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Width_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Height_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueButton_MainMenu_C::SetSizeMaterial(double Width_0, double Height_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QueueButton_MainMenu_C", "SetSizeMaterial");

	Params::WBP_QueueButton_MainMenu_C_SetSizeMaterial Parms{};

	Parms.Width_0 = Width_0;
	Parms.Height_0 = Height_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

