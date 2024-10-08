#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FloatingIndicators_Panel

#include "Basic.hpp"

#include "WBP_FloatingIndicators_Panel_classes.hpp"
#include "WBP_FloatingIndicators_Panel_parameters.hpp"


namespace SDK
{

// Function WBP_FloatingIndicators_Panel.WBP_FloatingIndicators_Panel_C.AddTimedChestFloatingIndicator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AR_TimedChest_C*                  Timed_Chest                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_FloatingIndicator_TimedChest_C*FloatingIndicator                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_FloatingIndicator_TimedChest_C*NewParam                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicators_Panel_C::AddTimedChestFloatingIndicator(class AR_TimedChest_C* Timed_Chest, class UWBP_FloatingIndicator_TimedChest_C** FloatingIndicator, class UWBP_FloatingIndicator_TimedChest_C** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicators_Panel_C", "AddTimedChestFloatingIndicator");

	Params::WBP_FloatingIndicators_Panel_C_AddTimedChestFloatingIndicator Parms{};

	Parms.Timed_Chest = Timed_Chest;

	UObject::ProcessEvent(Func, &Parms);

	if (FloatingIndicator != nullptr)
		*FloatingIndicator = Parms.FloatingIndicator;

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function WBP_FloatingIndicators_Panel.WBP_FloatingIndicators_Panel_C.AddAllyIndicator
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMatchaPlayerUIData*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_FloatingIndicator_C*         FloatingIndicator                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicators_Panel_C::AddAllyIndicator(class UMatchaPlayerUIData* Player, class UWBP_FloatingIndicator_C** FloatingIndicator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicators_Panel_C", "AddAllyIndicator");

	Params::WBP_FloatingIndicators_Panel_C_AddAllyIndicator Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (FloatingIndicator != nullptr)
		*FloatingIndicator = Parms.FloatingIndicator;
}


// Function WBP_FloatingIndicators_Panel.WBP_FloatingIndicators_Panel_C.AddEnemyIndicator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMatchaPlayerUIData*              PlayerUIData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_FloatingIndicator_C*         FloatingIndicator                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicators_Panel_C::AddEnemyIndicator(class UMatchaPlayerUIData* PlayerUIData, class UWBP_FloatingIndicator_C** FloatingIndicator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicators_Panel_C", "AddEnemyIndicator");

	Params::WBP_FloatingIndicators_Panel_C_AddEnemyIndicator Parms{};

	Parms.PlayerUIData = PlayerUIData;

	UObject::ProcessEvent(Func, &Parms);

	if (FloatingIndicator != nullptr)
		*FloatingIndicator = Parms.FloatingIndicator;
}


// Function WBP_FloatingIndicators_Panel.WBP_FloatingIndicators_Panel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicators_Panel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicators_Panel_C", "Tick");

	Params::WBP_FloatingIndicators_Panel_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FloatingIndicators_Panel.WBP_FloatingIndicators_Panel_C.BindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       NewUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicators_Panel_C::BindData(class UOdyUIData* NewUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicators_Panel_C", "BindData");

	Params::WBP_FloatingIndicators_Panel_C_BindData Parms{};

	Parms.NewUIData = NewUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FloatingIndicators_Panel.WBP_FloatingIndicators_Panel_C.UnbindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       OldUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicators_Panel_C::UnbindData(class UOdyUIData* OldUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicators_Panel_C", "UnbindData");

	Params::WBP_FloatingIndicators_Panel_C_UnbindData Parms{};

	Parms.OldUIData = OldUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FloatingIndicators_Panel.WBP_FloatingIndicators_Panel_C.OnTeamMembersUpdated
// (BlueprintCallable, BlueprintEvent)

void UWBP_FloatingIndicators_Panel_C::OnTeamMembersUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicators_Panel_C", "OnTeamMembersUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FloatingIndicators_Panel.WBP_FloatingIndicators_Panel_C.UpdateRelevantEnemyPlayerIndicators
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           RelevantEnemyPlayerIndicesArray                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_FloatingIndicators_Panel_C::UpdateRelevantEnemyPlayerIndicators(const TArray<int32>& RelevantEnemyPlayerIndicesArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicators_Panel_C", "UpdateRelevantEnemyPlayerIndicators");

	Params::WBP_FloatingIndicators_Panel_C_UpdateRelevantEnemyPlayerIndicators Parms{};

	Parms.RelevantEnemyPlayerIndicesArray = std::move(RelevantEnemyPlayerIndicesArray);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FloatingIndicators_Panel.WBP_FloatingIndicators_Panel_C.OnRelevantEnemyPlayerIndicesChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_FloatingIndicators_Panel_C::OnRelevantEnemyPlayerIndicesChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicators_Panel_C", "OnRelevantEnemyPlayerIndicesChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FloatingIndicators_Panel.WBP_FloatingIndicators_Panel_C.ExecuteUbergraph_WBP_FloatingIndicators_Panel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicators_Panel_C::ExecuteUbergraph_WBP_FloatingIndicators_Panel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicators_Panel_C", "ExecuteUbergraph_WBP_FloatingIndicators_Panel");

	Params::WBP_FloatingIndicators_Panel_C_ExecuteUbergraph_WBP_FloatingIndicators_Panel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

