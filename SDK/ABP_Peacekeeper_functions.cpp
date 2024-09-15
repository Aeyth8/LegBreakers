#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Peacekeeper

#include "Basic.hpp"

#include "ABP_Peacekeeper_classes.hpp"
#include "ABP_Peacekeeper_parameters.hpp"


namespace SDK
{

// Function ABP_Peacekeeper.ABP_Peacekeeper_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Peacekeeper_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Peacekeeper_C", "AnimGraph");

	Params::ABP_Peacekeeper_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_Peacekeeper.ABP_Peacekeeper_C.ExecuteUbergraph_ABP_Peacekeeper
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Peacekeeper_C::ExecuteUbergraph_ABP_Peacekeeper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Peacekeeper_C", "ExecuteUbergraph_ABP_Peacekeeper");

	Params::ABP_Peacekeeper_C_ExecuteUbergraph_ABP_Peacekeeper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
