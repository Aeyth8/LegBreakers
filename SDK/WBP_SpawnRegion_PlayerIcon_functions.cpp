#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SpawnRegion_PlayerIcon

#include "Basic.hpp"

#include "WBP_SpawnRegion_PlayerIcon_classes.hpp"
#include "WBP_SpawnRegion_PlayerIcon_parameters.hpp"


namespace SDK
{

// Function WBP_SpawnRegion_PlayerIcon.WBP_SpawnRegion_PlayerIcon_C.BindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       NewUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_PlayerIcon_C::BindData(class UOdyUIData* NewUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_PlayerIcon_C", "BindData");

	Params::WBP_SpawnRegion_PlayerIcon_C_BindData Parms{};

	Parms.NewUIData = NewUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_PlayerIcon.WBP_SpawnRegion_PlayerIcon_C.CurrentSelectedRegionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_PlayerIcon_C::CurrentSelectedRegionChanged(int32 OldValue, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_PlayerIcon_C", "CurrentSelectedRegionChanged");

	Params::WBP_SpawnRegion_PlayerIcon_C_CurrentSelectedRegionChanged Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_PlayerIcon.WBP_SpawnRegion_PlayerIcon_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_PlayerIcon_C::CustomEvent(int32 OldValue, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_PlayerIcon_C", "CustomEvent");

	Params::WBP_SpawnRegion_PlayerIcon_C_CustomEvent Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_PlayerIcon.WBP_SpawnRegion_PlayerIcon_C.ExecuteUbergraph_WBP_SpawnRegion_PlayerIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_PlayerIcon_C::ExecuteUbergraph_WBP_SpawnRegion_PlayerIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_PlayerIcon_C", "ExecuteUbergraph_WBP_SpawnRegion_PlayerIcon");

	Params::WBP_SpawnRegion_PlayerIcon_C_ExecuteUbergraph_WBP_SpawnRegion_PlayerIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_PlayerIcon.WBP_SpawnRegion_PlayerIcon_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESpawnRegion                            SpawnRegion_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TeamNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForceShowIcon_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_PlayerIcon_C::Initialize(ESpawnRegion SpawnRegion_0, int32 TeamNumber, bool ForceShowIcon_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_PlayerIcon_C", "Initialize");

	Params::WBP_SpawnRegion_PlayerIcon_C_Initialize Parms{};

	Parms.SpawnRegion_0 = SpawnRegion_0;
	Parms.TeamNumber = TeamNumber;
	Parms.ForceShowIcon_0 = ForceShowIcon_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_PlayerIcon.WBP_SpawnRegion_PlayerIcon_C.IsPlayerOnSpectatedTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsOnSpectatedTeam                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_PlayerIcon_C::IsPlayerOnSpectatedTeam(bool* IsOnSpectatedTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_PlayerIcon_C", "IsPlayerOnSpectatedTeam");

	Params::WBP_SpawnRegion_PlayerIcon_C_IsPlayerOnSpectatedTeam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOnSpectatedTeam != nullptr)
		*IsOnSpectatedTeam = Parms.IsOnSpectatedTeam;
}


// Function WBP_SpawnRegion_PlayerIcon.WBP_SpawnRegion_PlayerIcon_C.PlayerSelectedThisRegion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsInSameRegion                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_PlayerIcon_C::PlayerSelectedThisRegion(bool* IsInSameRegion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_PlayerIcon_C", "PlayerSelectedThisRegion");

	Params::WBP_SpawnRegion_PlayerIcon_C_PlayerSelectedThisRegion Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsInSameRegion != nullptr)
		*IsInSameRegion = Parms.IsInSameRegion;
}


// Function WBP_SpawnRegion_PlayerIcon.WBP_SpawnRegion_PlayerIcon_C.Portrait Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                         NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_PlayerIcon_C::Portrait_Changed(class UTexture* OldValue, class UTexture* NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_PlayerIcon_C", "Portrait Changed");

	Params::WBP_SpawnRegion_PlayerIcon_C_Portrait_Changed Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_PlayerIcon.WBP_SpawnRegion_PlayerIcon_C.SetSpectatedPlayerTeamNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewTeamNumber                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_PlayerIcon_C::SetSpectatedPlayerTeamNumber(int32 NewTeamNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_PlayerIcon_C", "SetSpectatedPlayerTeamNumber");

	Params::WBP_SpawnRegion_PlayerIcon_C_SetSpectatedPlayerTeamNumber Parms{};

	Parms.NewTeamNumber = NewTeamNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_PlayerIcon.WBP_SpawnRegion_PlayerIcon_C.ShouldShowIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ShouldShow                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_PlayerIcon_C::ShouldShowIcon(bool* ShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_PlayerIcon_C", "ShouldShowIcon");

	Params::WBP_SpawnRegion_PlayerIcon_C_ShouldShowIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShow != nullptr)
		*ShouldShow = Parms.ShouldShow;
}


// Function WBP_SpawnRegion_PlayerIcon.WBP_SpawnRegion_PlayerIcon_C.UnbindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       OldUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SpawnRegion_PlayerIcon_C::UnbindData(class UOdyUIData* OldUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_PlayerIcon_C", "UnbindData");

	Params::WBP_SpawnRegion_PlayerIcon_C_UnbindData Parms{};

	Parms.OldUIData = OldUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpawnRegion_PlayerIcon.WBP_SpawnRegion_PlayerIcon_C.Update UI
// (BlueprintCallable, BlueprintEvent)

void UWBP_SpawnRegion_PlayerIcon_C::Update_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpawnRegion_PlayerIcon_C", "Update UI");

	UObject::ProcessEvent(Func, nullptr);
}

}

