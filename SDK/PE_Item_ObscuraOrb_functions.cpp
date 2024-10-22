#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PE_Item_ObscuraOrb

#include "Basic.hpp"

#include "PE_Item_ObscuraOrb_classes.hpp"
#include "PE_Item_ObscuraOrb_parameters.hpp"


namespace SDK
{

// Function PE_Item_ObscuraOrb.PE_Item_ObscuraOrb_C.CheckIfActorArrayContainsKOVolumes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   ActorArray                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    FoundKOV                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_ObscuraOrb_C::CheckIfActorArrayContainsKOVolumes(TArray<class AActor*>& ActorArray, bool* FoundKOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_ObscuraOrb_C", "CheckIfActorArrayContainsKOVolumes");

	Params::PE_Item_ObscuraOrb_C_CheckIfActorArrayContainsKOVolumes Parms{};

	Parms.ActorArray = std::move(ActorArray);

	UObject::ProcessEvent(Func, &Parms);

	ActorArray = std::move(Parms.ActorArray);

	if (FoundKOV != nullptr)
		*FoundKOV = Parms.FoundKOV;
}


// Function PE_Item_ObscuraOrb.PE_Item_ObscuraOrb_C.CheckIfActorArrayContainsNonPhaseStartActors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ShouldStartPhasing                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_ObscuraOrb_C::CheckIfActorArrayContainsNonPhaseStartActors(TArray<class AActor*>& Array, bool* ShouldStartPhasing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_ObscuraOrb_C", "CheckIfActorArrayContainsNonPhaseStartActors");

	Params::PE_Item_ObscuraOrb_C_CheckIfActorArrayContainsNonPhaseStartActors Parms{};

	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (ShouldStartPhasing != nullptr)
		*ShouldStartPhasing = Parms.ShouldStartPhasing;
}


// Function PE_Item_ObscuraOrb.PE_Item_ObscuraOrb_C.CheckIfKOCheckerFoundNearbyKOBOXes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    FoundKOVOrInTerrain                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_ObscuraOrb_C::CheckIfKOCheckerFoundNearbyKOBOXes(bool* FoundKOVOrInTerrain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_ObscuraOrb_C", "CheckIfKOCheckerFoundNearbyKOBOXes");

	Params::PE_Item_ObscuraOrb_C_CheckIfKOCheckerFoundNearbyKOBOXes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FoundKOVOrInTerrain != nullptr)
		*FoundKOVOrInTerrain = Parms.FoundKOVOrInTerrain;
}


// Function PE_Item_ObscuraOrb.PE_Item_ObscuraOrb_C.CheckIfValidTPPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InsideWorld                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_ObscuraOrb_C::CheckIfValidTPPosition(bool* InsideWorld)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_ObscuraOrb_C", "CheckIfValidTPPosition");

	Params::PE_Item_ObscuraOrb_C_CheckIfValidTPPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InsideWorld != nullptr)
		*InsideWorld = Parms.InsideWorld;
}


// Function PE_Item_ObscuraOrb.PE_Item_ObscuraOrb_C.ExecuteUbergraph_PE_Item_ObscuraOrb
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_ObscuraOrb_C::ExecuteUbergraph_PE_Item_ObscuraOrb(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_ObscuraOrb_C", "ExecuteUbergraph_PE_Item_ObscuraOrb");

	Params::PE_Item_ObscuraOrb_C_ExecuteUbergraph_PE_Item_ObscuraOrb Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_Item_ObscuraOrb.PE_Item_ObscuraOrb_C.FindTargetsOnExplode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetHit                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class AActor*> APE_Item_ObscuraOrb_C::FindTargetsOnExplode(const class AActor* TargetHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_ObscuraOrb_C", "FindTargetsOnExplode");

	Params::PE_Item_ObscuraOrb_C_FindTargetsOnExplode Parms{};

	Parms.TargetHit = TargetHit;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PE_Item_ObscuraOrb.PE_Item_ObscuraOrb_C.OnEnabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bOldEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bNewEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_ObscuraOrb_C::OnEnabledChanged(bool bOldEnabled, bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_ObscuraOrb_C", "OnEnabledChanged");

	Params::PE_Item_ObscuraOrb_C_OnEnabledChanged Parms{};

	Parms.bOldEnabled = bOldEnabled;
	Parms.bNewEnabled = bNewEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_Item_ObscuraOrb.PE_Item_ObscuraOrb_C.OnProjectileExplosion
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           TargetHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APE_Item_ObscuraOrb_C::OnProjectileExplosion(class AActor* TargetHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_ObscuraOrb_C", "OnProjectileExplosion");

	Params::PE_Item_ObscuraOrb_C_OnProjectileExplosion Parms{};

	Parms.TargetHit = TargetHit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_Item_ObscuraOrb.PE_Item_ObscuraOrb_C.OnSpawnFinished
// (Event, Protected, BlueprintEvent)

void APE_Item_ObscuraOrb_C::OnSpawnFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_ObscuraOrb_C", "OnSpawnFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PE_Item_ObscuraOrb.PE_Item_ObscuraOrb_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_ObscuraOrb_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_ObscuraOrb_C", "ReceiveTick");

	Params::PE_Item_ObscuraOrb_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_Item_ObscuraOrb.PE_Item_ObscuraOrb_C.TeleportPlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetHit                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APE_Item_ObscuraOrb_C::TeleportPlayers(const class AActor* TargetHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_ObscuraOrb_C", "TeleportPlayers");

	Params::PE_Item_ObscuraOrb_C_TeleportPlayers Parms{};

	Parms.TargetHit = TargetHit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_Item_ObscuraOrb.PE_Item_ObscuraOrb_C.TravelDirectionTerrainTraceCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    VelocityTraceHitTarget                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_ObscuraOrb_C::TravelDirectionTerrainTraceCheck(bool* VelocityTraceHitTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_ObscuraOrb_C", "TravelDirectionTerrainTraceCheck");

	Params::PE_Item_ObscuraOrb_C_TravelDirectionTerrainTraceCheck Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (VelocityTraceHitTarget != nullptr)
		*VelocityTraceHitTarget = Parms.VelocityTraceHitTarget;
}

}

