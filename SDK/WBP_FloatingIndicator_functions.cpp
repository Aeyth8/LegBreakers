#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FloatingIndicator

#include "Basic.hpp"

#include "WBP_FloatingIndicator_classes.hpp"
#include "WBP_FloatingIndicator_parameters.hpp"


namespace SDK
{

// Function WBP_FloatingIndicator.WBP_FloatingIndicator_C.AllyAliveStateChangedBindingEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicator_C::AllyAliveStateChangedBindingEvent(bool OldValue, bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicator_C", "AllyAliveStateChangedBindingEvent");

	Params::WBP_FloatingIndicator_C_AllyAliveStateChangedBindingEvent Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FloatingIndicator.WBP_FloatingIndicator_C.ExecuteUbergraph_WBP_FloatingIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicator_C::ExecuteUbergraph_WBP_FloatingIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicator_C", "ExecuteUbergraph_WBP_FloatingIndicator");

	Params::WBP_FloatingIndicator_C_ExecuteUbergraph_WBP_FloatingIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FloatingIndicator.WBP_FloatingIndicator_C.ReleaseIndicator
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_FloatingIndicator_C::ReleaseIndicator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicator_C", "ReleaseIndicator");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FloatingIndicator.WBP_FloatingIndicator_C.SetAllyIndicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMatchaPlayerUIData*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicator_C::SetAllyIndicator(class UMatchaPlayerUIData* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicator_C", "SetAllyIndicator");

	Params::WBP_FloatingIndicator_C_SetAllyIndicator Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FloatingIndicator.WBP_FloatingIndicator_C.SetEnemyIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMatchaPlayerUIData*              PlayerUIData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicator_C::SetEnemyIndicator(class UMatchaPlayerUIData* PlayerUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicator_C", "SetEnemyIndicator");

	Params::WBP_FloatingIndicator_C_SetEnemyIndicator Parms{};

	Parms.PlayerUIData = PlayerUIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FloatingIndicator.WBP_FloatingIndicator_C.SetHidden
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_FloatingIndicator_C::SetHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicator_C", "SetHidden");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FloatingIndicator.WBP_FloatingIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicator_C", "Tick");

	Params::WBP_FloatingIndicator_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FloatingIndicator.WBP_FloatingIndicator_C.TickIndicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicator_C::TickIndicator(const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicator_C", "TickIndicator");

	Params::WBP_FloatingIndicator_C_TickIndicator Parms{};

	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FloatingIndicator.WBP_FloatingIndicator_C.UpdateCompass
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_FloatingIndicator_C::UpdateCompass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicator_C", "UpdateCompass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FloatingIndicator.WBP_FloatingIndicator_C.UpdateEnemyDmgPercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FloatingIndicator_C::UpdateEnemyDmgPercent(int32 OldValue, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicator_C", "UpdateEnemyDmgPercent");

	Params::WBP_FloatingIndicator_C_UpdateEnemyDmgPercent Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FloatingIndicator.WBP_FloatingIndicator_C.UpdatePortrait
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_FloatingIndicator_C::UpdatePortrait()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicator_C", "UpdatePortrait");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FloatingIndicator.WBP_FloatingIndicator_C.UpdatePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_FloatingIndicator_C::UpdatePosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FloatingIndicator_C", "UpdatePosition");

	UObject::ProcessEvent(Func, nullptr);
}

}

