#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PE_Item_GlitchBomb

#include "Basic.hpp"

#include "PE_Item_GlitchBomb_classes.hpp"
#include "PE_Item_GlitchBomb_parameters.hpp"


namespace SDK
{

// Function PE_Item_GlitchBomb.PE_Item_GlitchBomb_C.ExecuteUbergraph_PE_Item_GlitchBomb
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APE_Item_GlitchBomb_C::ExecuteUbergraph_PE_Item_GlitchBomb(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_GlitchBomb_C", "ExecuteUbergraph_PE_Item_GlitchBomb");

	Params::PE_Item_GlitchBomb_C_ExecuteUbergraph_PE_Item_GlitchBomb Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PE_Item_GlitchBomb.PE_Item_GlitchBomb_C.OnProjectileExplosion
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           TargetHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APE_Item_GlitchBomb_C::OnProjectileExplosion(class AActor* TargetHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PE_Item_GlitchBomb_C", "OnProjectileExplosion");

	Params::PE_Item_GlitchBomb_C_OnProjectileExplosion Parms{};

	Parms.TargetHit = TargetHit;

	UObject::ProcessEvent(Func, &Parms);
}

}

