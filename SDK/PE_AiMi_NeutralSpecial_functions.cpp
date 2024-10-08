#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PE_AiMi_NeutralSpecial

#include "Basic.hpp"

#include "PE_AiMi_NeutralSpecial_classes.hpp"
#include "PE_AiMi_NeutralSpecial_parameters.hpp"


namespace SDK
{

// Function PE_AiMi_NeutralSpecial.PE_AiMi_NeutralSpecial_C.ExecuteUbergraph_PE_AiMi_NeutralSpecial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_AiMi_NeutralSpecial_C::ExecuteUbergraph_PE_AiMi_NeutralSpecial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_AiMi_NeutralSpecial_C", "ExecuteUbergraph_PE_AiMi_NeutralSpecial");

	Params::PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_AiMi_NeutralSpecial.PE_AiMi_NeutralSpecial_C.OnProjectileHit
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMatchaHitData                   HitData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APE_AiMi_NeutralSpecial_C::OnProjectileHit(class AActor* HitActor, const struct FMatchaHitData& HitData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_AiMi_NeutralSpecial_C", "OnProjectileHit");

	Params::PE_AiMi_NeutralSpecial_C_OnProjectileHit Parms{};

	Parms.HitActor = HitActor;
	Parms.HitData = std::move(HitData);

	UObject::ProcessEvent(Func, &Parms);
}

}

