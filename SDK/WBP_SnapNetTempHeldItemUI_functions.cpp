#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SnapNetTempHeldItemUI

#include "Basic.hpp"

#include "WBP_SnapNetTempHeldItemUI_classes.hpp"
#include "WBP_SnapNetTempHeldItemUI_parameters.hpp"


namespace SDK
{

// Function WBP_SnapNetTempHeldItemUI.WBP_SnapNetTempHeldItemUI_C.ExecuteUbergraph_WBP_SnapNetTempHeldItemUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SnapNetTempHeldItemUI_C::ExecuteUbergraph_WBP_SnapNetTempHeldItemUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SnapNetTempHeldItemUI_C", "ExecuteUbergraph_WBP_SnapNetTempHeldItemUI");

	Params::WBP_SnapNetTempHeldItemUI_C_ExecuteUbergraph_WBP_SnapNetTempHeldItemUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SnapNetTempHeldItemUI.WBP_SnapNetTempHeldItemUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SnapNetTempHeldItemUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SnapNetTempHeldItemUI_C", "Tick");

	Params::WBP_SnapNetTempHeldItemUI_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SnapNetTempHeldItemUI.WBP_SnapNetTempHeldItemUI_C.UnHoldItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SnapNetTempHeldItemUI_C::UnHoldItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SnapNetTempHeldItemUI_C", "UnHoldItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SnapNetTempHeldItemUI.WBP_SnapNetTempHeldItemUI_C.UpdateHeldItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMatchaItemAsset*                 ItemAssetData                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SnapNetTempHeldItemUI_C::UpdateHeldItem(class UMatchaItemAsset* ItemAssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SnapNetTempHeldItemUI_C", "UpdateHeldItem");

	Params::WBP_SnapNetTempHeldItemUI_C_UpdateHeldItem Parms{};

	Parms.ItemAssetData = ItemAssetData;

	UObject::ProcessEvent(Func, &Parms);
}

}
