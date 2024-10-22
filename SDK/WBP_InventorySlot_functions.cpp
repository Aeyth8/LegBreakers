#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InventorySlot

#include "Basic.hpp"

#include "WBP_InventorySlot_classes.hpp"
#include "WBP_InventorySlot_parameters.hpp"


namespace SDK
{

// Function WBP_InventorySlot.WBP_InventorySlot_C.BindData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyUIData*                       NewUIData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::BindData(class UOdyUIData* NewUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "BindData");

	Params::WBP_InventorySlot_C_BindData Parms{};

	Parms.NewUIData = NewUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.ChangeFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     FillColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::ChangeFillColor(const struct FLinearColor& FillColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "ChangeFillColor");

	Params::WBP_InventorySlot_C_ChangeFillColor Parms{};

	Parms.FillColor = std::move(FillColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.ChangeItemImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                         NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::ChangeItemImage(class UTexture* OldValue, class UTexture* NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "ChangeItemImage");

	Params::WBP_InventorySlot_C_ChangeItemImage Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.ChangeOpacityOnHeld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    RestoreOpacity                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::ChangeOpacityOnHeld(bool RestoreOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "ChangeOpacityOnHeld");

	Params::WBP_InventorySlot_C_ChangeOpacityOnHeld Parms{};

	Parms.RestoreOpacity = RestoreOpacity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.ChangeStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InventorySlot_C::ChangeStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "ChangeStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.ChangeVisual_GearSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::ChangeVisual_GearSlot(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "ChangeVisual_GearSlot");

	Params::WBP_InventorySlot_C_ChangeVisual_GearSlot Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.ChangeVisual_InventorySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::ChangeVisual_InventorySlot(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "ChangeVisual_InventorySlot");

	Params::WBP_InventorySlot_C_ChangeVisual_InventorySlot Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.ConsumeOnHold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::ConsumeOnHold(bool OldValue, bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "ConsumeOnHold");

	Params::WBP_InventorySlot_C_ConsumeOnHold Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.ExecuteUbergraph_WBP_InventorySlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::ExecuteUbergraph_WBP_InventorySlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "ExecuteUbergraph_WBP_InventorySlot");

	Params::WBP_InventorySlot_C_ExecuteUbergraph_WBP_InventorySlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.Get Item Is Consumable On Hold
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIsConsumableOnHold                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::Get_Item_Is_Consumable_On_Hold(bool* bIsConsumableOnHold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "Get Item Is Consumable On Hold");

	Params::WBP_InventorySlot_C_Get_Item_Is_Consumable_On_Hold Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsConsumableOnHold != nullptr)
		*bIsConsumableOnHold = Parms.bIsConsumableOnHold;
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.Get Item Is Throwable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIsThrowable                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::Get_Item_Is_Throwable(bool* bIsThrowable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "Get Item Is Throwable");

	Params::WBP_InventorySlot_C_Get_Item_Is_Throwable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsThrowable != nullptr)
		*bIsThrowable = Parms.bIsThrowable;
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.GetItemCountAsInt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::GetItemCountAsInt(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "GetItemCountAsInt");

	Params::WBP_InventorySlot_C_GetItemCountAsInt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.GetItemIsGun
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIsGun                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::GetItemIsGun(bool* bIsGun)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "GetItemIsGun");

	Params::WBP_InventorySlot_C_GetItemIsGun Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsGun != nullptr)
		*bIsGun = Parms.bIsGun;
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.IsEnergized
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEnergized                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::IsEnergized(bool* bIsEnergized)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "IsEnergized");

	Params::WBP_InventorySlot_C_IsEnergized Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEnergized != nullptr)
		*bIsEnergized = Parms.bIsEnergized;
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.IsEnergized_Gear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnergized                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::IsEnergized_Gear(bool IsEnergized)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "IsEnergized_Gear");

	Params::WBP_InventorySlot_C_IsEnergized_Gear Parms{};

	Parms.IsEnergized = IsEnergized;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.OnBecameHeldItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_InventorySlot_C::OnBecameHeldItem__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "OnBecameHeldItem__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.OnEnergizedStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::OnEnergizedStateChange(bool OldValue, bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "OnEnergizedStateChange");

	Params::WBP_InventorySlot_C_OnEnergizedStateChange Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.OnGearSlotBecameEnergized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewEnergizedState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::OnGearSlotBecameEnergized__DelegateSignature(bool NewEnergizedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "OnGearSlotBecameEnergized__DelegateSignature");

	Params::WBP_InventorySlot_C_OnGearSlotBecameEnergized__DelegateSignature Parms{};

	Parms.NewEnergizedState = NewEnergizedState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InventorySlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.OnIsGearItemChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::OnIsGearItemChanged(bool OldValue, bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "OnIsGearItemChanged");

	Params::WBP_InventorySlot_C_OnIsGearItemChanged Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.OnItemCountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::OnItemCountChanged(int32 OldValue, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "OnItemCountChanged");

	Params::WBP_InventorySlot_C_OnItemCountChanged Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.OnItemToolTipUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_InventorySlot_C::OnItemToolTipUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "OnItemToolTipUpdated__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.OnRarityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::OnRarityChanged(int32 OldValue, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "OnRarityChanged");

	Params::WBP_InventorySlot_C_OnRarityChanged Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.OnThrowableOnlyChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::OnThrowableOnlyChanged(bool OldValue, bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "OnThrowableOnlyChanged");

	Params::WBP_InventorySlot_C_OnThrowableOnlyChanged Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.OnTooltipTextChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InventorySlot_C::OnTooltipTextChange(const class FText& OldValue, const class FText& NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "OnTooltipTextChange");

	Params::WBP_InventorySlot_C_OnTooltipTextChange Parms{};

	Parms.OldValue = std::move(OldValue);
	Parms.NewValue = std::move(NewValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "PreConstruct");

	Params::WBP_InventorySlot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.ResetUI
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventorySlot_C::ResetUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "ResetUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.SetIsHeld
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::SetIsHeld(bool OldValue, bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "SetIsHeld");

	Params::WBP_InventorySlot_C_SetIsHeld Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.SetItemImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventorySlot_C::SetItemImage(class UTexture* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "SetItemImage");

	Params::WBP_InventorySlot_C_SetItemImage Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventorySlot.WBP_InventorySlot_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InventorySlot_C::SetSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventorySlot_C", "SetSize");

	UObject::ProcessEvent(Func, nullptr);
}

}

