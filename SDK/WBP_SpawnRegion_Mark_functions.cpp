#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SpawnRegion_Mark

#include "Basic.hpp"

#include "WBP_SpawnRegion_Mark_classes.hpp"
#include "WBP_SpawnRegion_Mark_parameters.hpp"


namespace SDK
{

// Function WBP_SpawnRegion_Mark.WBP_SpawnRegion_Mark_C.BindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       NewUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_Mark_C::BindData(class UOdyUIData* NewUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_Mark_C", "BindData");

	Params::WBP_SpawnRegion_Mark_C_BindData Parms{};

	Parms.NewUIData = NewUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_Mark.WBP_SpawnRegion_Mark_C.ClearPlayersInRegion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_SpawnRegion_Mark_C::ClearPlayersInRegion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_Mark_C", "ClearPlayersInRegion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SpawnRegion_Mark.WBP_SpawnRegion_Mark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SpawnRegion_Mark_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_Mark_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SpawnRegion_Mark.WBP_SpawnRegion_Mark_C.ExecuteUbergraph_WBP_SpawnRegion_Mark
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_Mark_C::ExecuteUbergraph_WBP_SpawnRegion_Mark(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_Mark_C", "ExecuteUbergraph_WBP_SpawnRegion_Mark");

	Params::WBP_SpawnRegion_Mark_C_ExecuteUbergraph_WBP_SpawnRegion_Mark Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_Mark.WBP_SpawnRegion_Mark_C.OnUIDataSet
// (Event, Public, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       NewUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_Mark_C::OnUIDataSet(class UOdyUIData* NewUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_Mark_C", "OnUIDataSet");

	Params::WBP_SpawnRegion_Mark_C_OnUIDataSet Parms{};

	Parms.NewUIData = NewUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_Mark.WBP_SpawnRegion_Mark_C.OnWorldUIDataUpdated
// (BlueprintCallable, BlueprintEvent)

void UWBP_SpawnRegion_Mark_C::OnWorldUIDataUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_Mark_C", "OnWorldUIDataUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SpawnRegion_Mark.WBP_SpawnRegion_Mark_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_Mark_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_Mark_C", "PreConstruct");

	Params::WBP_SpawnRegion_Mark_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_Mark.WBP_SpawnRegion_Mark_C.SetVisualEnemiesCounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_Mark_C::SetVisualEnemiesCounter(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_Mark_C", "SetVisualEnemiesCounter");

	Params::WBP_SpawnRegion_Mark_C_SetVisualEnemiesCounter Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_Mark.WBP_SpawnRegion_Mark_C.TeamNumberChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_Mark_C::TeamNumberChanged(int32 OldValue, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_Mark_C", "TeamNumberChanged");

	Params::WBP_SpawnRegion_Mark_C_TeamNumberChanged Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_Mark.WBP_SpawnRegion_Mark_C.UnbindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       OldUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_Mark_C::UnbindData(class UOdyUIData* OldUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_Mark_C", "UnbindData");

	Params::WBP_SpawnRegion_Mark_C_UnbindData Parms{};

	Parms.OldUIData = OldUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_Mark.WBP_SpawnRegion_Mark_C.UpdateNumEnemiesInRegion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMatchaGameWorldUIData*           WorldUIData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_Mark_C::UpdateNumEnemiesInRegion(class UMatchaGameWorldUIData* WorldUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_Mark_C", "UpdateNumEnemiesInRegion");

	Params::WBP_SpawnRegion_Mark_C_UpdateNumEnemiesInRegion Parms{};

	Parms.WorldUIData = WorldUIData;

	UObject::ProcessEvent(Func, &Parms);
}

}

