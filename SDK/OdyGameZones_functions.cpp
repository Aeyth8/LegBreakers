#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OdyGameZones

#include "Basic.hpp"

#include "OdyGameZones_classes.hpp"
#include "OdyGameZones_parameters.hpp"


namespace SDK
{

// Function OdyGameZones.OdyGameZone.OnZoneDefinitionChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UOdyGameZoneDefinition*           InZoneDefinition                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AOdyGameZone::OnZoneDefinitionChanged(class UOdyGameZoneDefinition* InZoneDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OdyGameZone", "OnZoneDefinitionChanged");

	Params::OdyGameZone_OnZoneDefinitionChanged Parms{};

	Parms.InZoneDefinition = InZoneDefinition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OdyGameZones.OdyGameZonePOI.GetDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName AOdyGameZonePOI::GetDisplayName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OdyGameZonePOI", "GetDisplayName");

	Params::OdyGameZonePOI_GetDisplayName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyGameZones.OdyGameZonePOI.GetRelevanceBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox AOdyGameZonePOI::GetRelevanceBounds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OdyGameZonePOI", "GetRelevanceBounds");

	Params::OdyGameZonePOI_GetRelevanceBounds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

