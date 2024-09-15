#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Gear_Inventory

#include "Basic.hpp"

#include "WBP_Gear_Inventory_classes.hpp"
#include "WBP_Gear_Inventory_parameters.hpp"


namespace SDK
{

// Function WBP_Gear_Inventory.WBP_Gear_Inventory_C.BindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       NewUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Gear_Inventory_C::BindData(class UOdyUIData* NewUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Gear_Inventory_C", "BindData");

	Params::WBP_Gear_Inventory_C_BindData Parms{};

	Parms.NewUIData = NewUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Gear_Inventory.WBP_Gear_Inventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Gear_Inventory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Gear_Inventory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Gear_Inventory.WBP_Gear_Inventory_C.ExecuteUbergraph_WBP_Gear_Inventory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Gear_Inventory_C::ExecuteUbergraph_WBP_Gear_Inventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Gear_Inventory_C", "ExecuteUbergraph_WBP_Gear_Inventory");

	Params::WBP_Gear_Inventory_C_ExecuteUbergraph_WBP_Gear_Inventory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Gear_Inventory.WBP_Gear_Inventory_C.InitSlotTypeToWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Gear_Inventory_C::InitSlotTypeToWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Gear_Inventory_C", "InitSlotTypeToWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Gear_Inventory.WBP_Gear_Inventory_C.OnBodySlotEnergizedChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewEnergizedState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Gear_Inventory_C::OnBodySlotEnergizedChanged(bool NewEnergizedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Gear_Inventory_C", "OnBodySlotEnergizedChanged");

	Params::WBP_Gear_Inventory_C_OnBodySlotEnergizedChanged Parms{};

	Parms.NewEnergizedState = NewEnergizedState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Gear_Inventory.WBP_Gear_Inventory_C.OnCategoriesUpdated
// (BlueprintCallable, BlueprintEvent)

void UWBP_Gear_Inventory_C::OnCategoriesUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Gear_Inventory_C", "OnCategoriesUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Gear_Inventory.WBP_Gear_Inventory_C.OnFeetSlotEnergizedChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewEnergizedState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Gear_Inventory_C::OnFeetSlotEnergizedChanged(bool NewEnergizedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Gear_Inventory_C", "OnFeetSlotEnergizedChanged");

	Params::WBP_Gear_Inventory_C_OnFeetSlotEnergizedChanged Parms{};

	Parms.NewEnergizedState = NewEnergizedState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Gear_Inventory.WBP_Gear_Inventory_C.OnHackSlotUpdated
// (BlueprintCallable, BlueprintEvent)

void UWBP_Gear_Inventory_C::OnHackSlotUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Gear_Inventory_C", "OnHackSlotUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Gear_Inventory.WBP_Gear_Inventory_C.OnHandsSlotEnergizedChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewEnergizedState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Gear_Inventory_C::OnHandsSlotEnergizedChanged(bool NewEnergizedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Gear_Inventory_C", "OnHandsSlotEnergizedChanged");

	Params::WBP_Gear_Inventory_C_OnHandsSlotEnergizedChanged Parms{};

	Parms.NewEnergizedState = NewEnergizedState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Gear_Inventory.WBP_Gear_Inventory_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Gear_Inventory_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Gear_Inventory_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Gear_Inventory.WBP_Gear_Inventory_C.ResetUI
// (BlueprintCallable, BlueprintEvent)

void UWBP_Gear_Inventory_C::ResetUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Gear_Inventory_C", "ResetUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Gear_Inventory.WBP_Gear_Inventory_C.Set Hack Slot Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEmpty                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Gear_Inventory_C::Set_Hack_Slot_Visibility(bool bIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Gear_Inventory_C", "Set Hack Slot Visibility");

	Params::WBP_Gear_Inventory_C_Set_Hack_Slot_Visibility Parms{};

	Parms.bIsEmpty = bIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Gear_Inventory.WBP_Gear_Inventory_C.UnbindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       OldUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Gear_Inventory_C::UnbindData(class UOdyUIData* OldUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Gear_Inventory_C", "UnbindData");

	Params::WBP_Gear_Inventory_C_UnbindData Parms{};

	Parms.OldUIData = OldUIData;

	UObject::ProcessEvent(Func, &Parms);
}

}

