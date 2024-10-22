#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TeammateUI

#include "Basic.hpp"

#include "WBP_TeammateUI_classes.hpp"
#include "WBP_TeammateUI_parameters.hpp"


namespace SDK
{

// Function WBP_TeammateUI.WBP_TeammateUI_C.BindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       NewUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TeammateUI_C::BindData(class UOdyUIData* NewUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeammateUI_C", "BindData");

	Params::WBP_TeammateUI_C_BindData Parms{};

	Parms.NewUIData = NewUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TeammateUI.WBP_TeammateUI_C.ExecuteUbergraph_WBP_TeammateUI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TeammateUI_C::ExecuteUbergraph_WBP_TeammateUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeammateUI_C", "ExecuteUbergraph_WBP_TeammateUI");

	Params::WBP_TeammateUI_C_ExecuteUbergraph_WBP_TeammateUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TeammateUI.WBP_TeammateUI_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TeammateUI_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeammateUI_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TeammateUI.WBP_TeammateUI_C.ResetToEmptyTeam
// (BlueprintCallable, BlueprintEvent)

void UWBP_TeammateUI_C::ResetToEmptyTeam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeammateUI_C", "ResetToEmptyTeam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TeammateUI.WBP_TeammateUI_C.Set Player UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PlayerUI_C*                  PlayerUIRef                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AllyNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMatchaPlayerUIData*              InputUIData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TeammateUI_C::Set_Player_UI(class UWBP_PlayerUI_C* PlayerUIRef, bool IsValid, int32 AllyNum, class UMatchaPlayerUIData* InputUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeammateUI_C", "Set Player UI");

	Params::WBP_TeammateUI_C_Set_Player_UI Parms{};

	Parms.PlayerUIRef = PlayerUIRef;
	Parms.IsValid = IsValid;
	Parms.AllyNum = AllyNum;
	Parms.InputUIData = InputUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TeammateUI.WBP_TeammateUI_C.UnbindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       OldUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TeammateUI_C::UnbindData(class UOdyUIData* OldUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeammateUI_C", "UnbindData");

	Params::WBP_TeammateUI_C_UnbindData Parms{};

	Parms.OldUIData = OldUIData;

	UObject::ProcessEvent(Func, &Parms);
}

}

