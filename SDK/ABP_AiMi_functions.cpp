#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AiMi

#include "Basic.hpp"

#include "ABP_AiMi_classes.hpp"
#include "ABP_AiMi_parameters.hpp"


namespace SDK
{

// Function ABP_AiMi.ABP_AiMi_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_AiMi_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_AiMi_C", "AnimGraph");

	Params::ABP_AiMi_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_AiMi.ABP_AiMi_C.ExecuteUbergraph_ABP_AiMi
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AiMi_C::ExecuteUbergraph_ABP_AiMi(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_AiMi_C", "ExecuteUbergraph_ABP_AiMi");

	Params::ABP_AiMi_C_ExecuteUbergraph_ABP_AiMi Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
