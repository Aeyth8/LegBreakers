#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_ChallengePickupCoin

#include "Basic.hpp"

#include "E_ChallengePickupCoin_classes.hpp"
#include "E_ChallengePickupCoin_parameters.hpp"


namespace SDK
{

// Function E_ChallengePickupCoin.E_ChallengePickupCoin_C.ExecuteUbergraph_E_ChallengePickupCoin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_ChallengePickupCoin_C::ExecuteUbergraph_E_ChallengePickupCoin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_ChallengePickupCoin_C", "ExecuteUbergraph_E_ChallengePickupCoin");

	Params::E_ChallengePickupCoin_C_ExecuteUbergraph_E_ChallengePickupCoin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function E_ChallengePickupCoin.E_ChallengePickupCoin_C.GetBroadcastChannel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FGameplayTag AE_ChallengePickupCoin_C::GetBroadcastChannel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_ChallengePickupCoin_C", "GetBroadcastChannel");

	Params::E_ChallengePickupCoin_C_GetBroadcastChannel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function E_ChallengePickupCoin.E_ChallengePickupCoin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AE_ChallengePickupCoin_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_ChallengePickupCoin_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function E_ChallengePickupCoin.E_ChallengePickupCoin_C.TryPickUpBy
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_ChallengePickupCoin_C::TryPickUpBy(class AActor* Instigator_0, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("E_ChallengePickupCoin_C", "TryPickUpBy");

	Params::E_ChallengePickupCoin_C_TryPickUpBy Parms{};

	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

}

