#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerNameAndTeam

#include "Basic.hpp"

#include "WBP_PlayerNameAndTeam_classes.hpp"
#include "WBP_PlayerNameAndTeam_parameters.hpp"


namespace SDK
{

// Function WBP_PlayerNameAndTeam.WBP_PlayerNameAndTeam_C.ExecuteUbergraph_WBP_PlayerNameAndTeam
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerNameAndTeam_C::ExecuteUbergraph_WBP_PlayerNameAndTeam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerNameAndTeam_C", "ExecuteUbergraph_WBP_PlayerNameAndTeam");

	Params::WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerNameAndTeam.WBP_PlayerNameAndTeam_C.UpdateInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   TeamNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerNameAndTeam_C::UpdateInfo(const class FText& PlayerName, int32 TeamNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerNameAndTeam_C", "UpdateInfo");

	Params::WBP_PlayerNameAndTeam_C_UpdateInfo Parms{};

	Parms.PlayerName = std::move(PlayerName);
	Parms.TeamNumber = TeamNumber;

	UObject::ProcessEvent(Func, &Parms);
}

}

