#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MustKnock_KO_Box

#include "Basic.hpp"

#include "MustKnock_KO_Box_classes.hpp"
#include "MustKnock_KO_Box_parameters.hpp"


namespace SDK
{

// Function MustKnock_KO_Box.MustKnock_KO_Box_C.ExecuteUbergraph_MustKnock_KO_Box
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMustKnock_KO_Box_C::ExecuteUbergraph_MustKnock_KO_Box(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MustKnock_KO_Box_C", "ExecuteUbergraph_MustKnock_KO_Box");

	Params::MustKnock_KO_Box_C_ExecuteUbergraph_MustKnock_KO_Box Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MustKnock_KO_Box.MustKnock_KO_Box_C.OnRep_LayerActive
// (BlueprintCallable, BlueprintEvent)

void AMustKnock_KO_Box_C::OnRep_LayerActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MustKnock_KO_Box_C", "OnRep_LayerActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MustKnock_KO_Box.MustKnock_KO_Box_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMustKnock_KO_Box_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MustKnock_KO_Box_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
