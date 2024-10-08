#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Trap_Base

#include "Basic.hpp"

#include "E_Trap_Base_classes.hpp"
#include "E_Trap_Base_parameters.hpp"


namespace SDK
{

// Function E_Trap_Base.E_Trap_Base_C.ExecuteUbergraph_E_Trap_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_Trap_Base_C::ExecuteUbergraph_E_Trap_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "ExecuteUbergraph_E_Trap_Base");

	Params::E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_Trap_Base.E_Trap_Base_C.HandleAudioOnOverlapEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    OverlappedCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AE_Trap_Base_C::HandleAudioOnOverlapEnded(class AMatchaSnapNetCharacterEntity* OverlappedCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "HandleAudioOnOverlapEnded");

	Params::E_Trap_Base_C_HandleAudioOnOverlapEnded Parms{};

	Parms.OverlappedCharacter = OverlappedCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_Trap_Base.E_Trap_Base_C.HandleAudioOnOverlapStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    OverlappedCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AE_Trap_Base_C::HandleAudioOnOverlapStarted(class AMatchaSnapNetCharacterEntity* OverlappedCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "HandleAudioOnOverlapStarted");

	Params::E_Trap_Base_C_HandleAudioOnOverlapStarted Parms{};

	Parms.OverlappedCharacter = OverlappedCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_Trap_Base.E_Trap_Base_C.HandleReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AE_Trap_Base_C::HandleReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "HandleReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_Trap_Base.E_Trap_Base_C.OnCharacterOverlapEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    OverlappedCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AE_Trap_Base_C::OnCharacterOverlapEnded(class AMatchaSnapNetCharacterEntity* OverlappedCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "OnCharacterOverlapEnded");

	Params::E_Trap_Base_C_OnCharacterOverlapEnded Parms{};

	Parms.OverlappedCharacter = OverlappedCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_Trap_Base.E_Trap_Base_C.OnCharacterOverlapStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    OverlappedCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AE_Trap_Base_C::OnCharacterOverlapStarted(class AMatchaSnapNetCharacterEntity* OverlappedCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "OnCharacterOverlapStarted");

	Params::E_Trap_Base_C_OnCharacterOverlapStarted Parms{};

	Parms.OverlappedCharacter = OverlappedCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_Trap_Base.E_Trap_Base_C.OnPeriodicEffectInterval
// (BlueprintCallable, BlueprintEvent)

void AE_Trap_Base_C::OnPeriodicEffectInterval()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "OnPeriodicEffectInterval");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_Trap_Base.E_Trap_Base_C.OnSpawnFinished
// (Event, Protected, BlueprintEvent)

void AE_Trap_Base_C::OnSpawnFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "OnSpawnFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_Trap_Base.E_Trap_Base_C.OnTriggerTrapFromOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    OverlappedCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AE_Trap_Base_C::OnTriggerTrapFromOverlap(class AMatchaSnapNetCharacterEntity* OverlappedCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "OnTriggerTrapFromOverlap");

	Params::E_Trap_Base_C_OnTriggerTrapFromOverlap Parms{};

	Parms.OverlappedCharacter = OverlappedCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_Trap_Base.E_Trap_Base_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AE_Trap_Base_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_Trap_Base.E_Trap_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_Trap_Base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "ReceiveTick");

	Params::E_Trap_Base_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_Trap_Base.E_Trap_Base_C.SFXOnDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void AE_Trap_Base_C::SFXOnDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "SFXOnDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_Trap_Base.E_Trap_Base_C.SFXOnSpawn
// (Public, BlueprintCallable, BlueprintEvent)

void AE_Trap_Base_C::SFXOnSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "SFXOnSpawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_Trap_Base.E_Trap_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AE_Trap_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_Trap_Base_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

