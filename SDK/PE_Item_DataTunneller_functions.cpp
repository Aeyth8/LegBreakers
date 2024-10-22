#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PE_Item_DataTunneller

#include "Basic.hpp"

#include "PE_Item_DataTunneller_classes.hpp"
#include "PE_Item_DataTunneller_parameters.hpp"


namespace SDK
{

// Function PE_Item_DataTunneller.PE_Item_DataTunneller_C.CheckIfActorArrayContainsKOVolumes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   ActorArray                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    FoundKOV                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_DataTunneller_C::CheckIfActorArrayContainsKOVolumes(TArray<class AActor*>& ActorArray, bool* FoundKOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_DataTunneller_C", "CheckIfActorArrayContainsKOVolumes");

	Params::PE_Item_DataTunneller_C_CheckIfActorArrayContainsKOVolumes Parms{};

	Parms.ActorArray = std::move(ActorArray);

	UObject::ProcessEvent(Func, &Parms);

	ActorArray = std::move(Parms.ActorArray);

	if (FoundKOV != nullptr)
		*FoundKOV = Parms.FoundKOV;
}


// Function PE_Item_DataTunneller.PE_Item_DataTunneller_C.CheckIfActorArrayContainsNonPhaseStartActors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ShouldStartPhasing                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_DataTunneller_C::CheckIfActorArrayContainsNonPhaseStartActors(TArray<class AActor*>& Array, bool* ShouldStartPhasing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_DataTunneller_C", "CheckIfActorArrayContainsNonPhaseStartActors");

	Params::PE_Item_DataTunneller_C_CheckIfActorArrayContainsNonPhaseStartActors Parms{};

	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (ShouldStartPhasing != nullptr)
		*ShouldStartPhasing = Parms.ShouldStartPhasing;
}


// Function PE_Item_DataTunneller.PE_Item_DataTunneller_C.CheckIfKOCheckerFoundNearbyKOBOXes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    FoundKOV                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_DataTunneller_C::CheckIfKOCheckerFoundNearbyKOBOXes(bool* FoundKOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_DataTunneller_C", "CheckIfKOCheckerFoundNearbyKOBOXes");

	Params::PE_Item_DataTunneller_C_CheckIfKOCheckerFoundNearbyKOBOXes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FoundKOV != nullptr)
		*FoundKOV = Parms.FoundKOV;
}


// Function PE_Item_DataTunneller.PE_Item_DataTunneller_C.CheckIfValidTPPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InsideWorld                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_DataTunneller_C::CheckIfValidTPPosition(bool* InsideWorld)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_DataTunneller_C", "CheckIfValidTPPosition");

	Params::PE_Item_DataTunneller_C_CheckIfValidTPPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InsideWorld != nullptr)
		*InsideWorld = Parms.InsideWorld;
}


// Function PE_Item_DataTunneller.PE_Item_DataTunneller_C.ExecuteUbergraph_PE_Item_DataTunneller
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_DataTunneller_C::ExecuteUbergraph_PE_Item_DataTunneller(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_DataTunneller_C", "ExecuteUbergraph_PE_Item_DataTunneller");

	Params::PE_Item_DataTunneller_C_ExecuteUbergraph_PE_Item_DataTunneller Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_Item_DataTunneller.PE_Item_DataTunneller_C.OnEnabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bOldEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bNewEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_DataTunneller_C::OnEnabledChanged(bool bOldEnabled, bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_DataTunneller_C", "OnEnabledChanged");

	Params::PE_Item_DataTunneller_C_OnEnabledChanged Parms{};

	Parms.bOldEnabled = bOldEnabled;
	Parms.bNewEnabled = bNewEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_Item_DataTunneller.PE_Item_DataTunneller_C.OnProjectileExplosion
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           TargetHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APE_Item_DataTunneller_C::OnProjectileExplosion(class AActor* TargetHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_DataTunneller_C", "OnProjectileExplosion");

	Params::PE_Item_DataTunneller_C_OnProjectileExplosion Parms{};

	Parms.TargetHit = TargetHit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_Item_DataTunneller.PE_Item_DataTunneller_C.OnSpawnFinished
// (Event, Protected, BlueprintEvent)

void APE_Item_DataTunneller_C::OnSpawnFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_DataTunneller_C", "OnSpawnFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PE_Item_DataTunneller.PE_Item_DataTunneller_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APE_Item_DataTunneller_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_DataTunneller_C", "ReceiveActorBeginOverlap");

	Params::PE_Item_DataTunneller_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_Item_DataTunneller.PE_Item_DataTunneller_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_DataTunneller_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_DataTunneller_C", "ReceiveTick");

	Params::PE_Item_DataTunneller_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_Item_DataTunneller.PE_Item_DataTunneller_C.TeleportTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetHit                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APE_Item_DataTunneller_C::TeleportTarget(const class AActor* TargetHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_DataTunneller_C", "TeleportTarget");

	Params::PE_Item_DataTunneller_C_TeleportTarget Parms{};

	Parms.TargetHit = TargetHit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_Item_DataTunneller.PE_Item_DataTunneller_C.TravelDirectionTerrainTraceCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    VelocityTraceHitTarget                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_DataTunneller_C::TravelDirectionTerrainTraceCheck(bool* VelocityTraceHitTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_DataTunneller_C", "TravelDirectionTerrainTraceCheck");

	Params::PE_Item_DataTunneller_C_TravelDirectionTerrainTraceCheck Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (VelocityTraceHitTarget != nullptr)
		*VelocityTraceHitTarget = Parms.VelocityTraceHitTarget;
}

}

