#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TeamAttackIndicators

#include "Basic.hpp"

#include "WBP_TeamAttackIndicators_classes.hpp"
#include "WBP_TeamAttackIndicators_parameters.hpp"


namespace SDK
{

// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TeamAttackIndicators_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamAttackIndicators_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.DisableTeamAttackTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TeamAttackIndicators_C::DisableTeamAttackTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamAttackIndicators_C", "DisableTeamAttackTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.EnableTeamAttackTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TeamAttackIndicators_C::EnableTeamAttackTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamAttackIndicators_C", "EnableTeamAttackTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.ExecuteUbergraph_WBP_TeamAttackIndicators
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TeamAttackIndicators_C::ExecuteUbergraph_WBP_TeamAttackIndicators(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamAttackIndicators_C", "ExecuteUbergraph_WBP_TeamAttackIndicators");

	Params::WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.HideOrShowKBMSpecificIA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputMethod                            InputMethod                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TeamAttackIndicators_C::HideOrShowKBMSpecificIA(EInputMethod InputMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamAttackIndicators_C", "HideOrShowKBMSpecificIA");

	Params::WBP_TeamAttackIndicators_C_HideOrShowKBMSpecificIA Parms{};

	Parms.InputMethod = InputMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.PlayTeamAttackWarning
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TeamAttackIndicators_C::PlayTeamAttackWarning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamAttackIndicators_C", "PlayTeamAttackWarning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.StopTeamAttackWarning
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TeamAttackIndicators_C::StopTeamAttackWarning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamAttackIndicators_C", "StopTeamAttackWarning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TeamAttackIndicators_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamAttackIndicators_C", "Tick");

	Params::WBP_TeamAttackIndicators_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.ToggleGlitchMarkIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldBeVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TeamAttackIndicators_C::ToggleGlitchMarkIndicator(bool ShouldBeVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamAttackIndicators_C", "ToggleGlitchMarkIndicator");

	Params::WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator Parms{};

	Parms.ShouldBeVisible = ShouldBeVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

