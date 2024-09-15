#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraLethalHitCeremony

#include "Basic.hpp"

#include "BP_CameraLethalHitCeremony_classes.hpp"
#include "BP_CameraLethalHitCeremony_parameters.hpp"


namespace SDK
{

// Function BP_CameraLethalHitCeremony.BP_CameraLethalHitCeremony_C.BlueprintModifyCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ViewLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ViewRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   FOV                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NewViewLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         NewViewRotation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   NewFOV                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CameraLethalHitCeremony_C::BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraLethalHitCeremony_C", "BlueprintModifyCamera");

	Params::BP_CameraLethalHitCeremony_C_BlueprintModifyCamera Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.ViewLocation = std::move(ViewLocation);
	Parms.ViewRotation = std::move(ViewRotation);
	Parms.FOV = FOV;

	UObject::ProcessEvent(Func, &Parms);

	if (NewViewLocation != nullptr)
		*NewViewLocation = std::move(Parms.NewViewLocation);

	if (NewViewRotation != nullptr)
		*NewViewRotation = std::move(Parms.NewViewRotation);

	if (NewFOV != nullptr)
		*NewFOV = Parms.NewFOV;
}


// Function BP_CameraLethalHitCeremony.BP_CameraLethalHitCeremony_C.IsCameraZoomChangingTooFast
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ZoomingOut                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CameraLethalHitCeremony_C::IsCameraZoomChangingTooFast(bool* ZoomingOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraLethalHitCeremony_C", "IsCameraZoomChangingTooFast");

	Params::BP_CameraLethalHitCeremony_C_IsCameraZoomChangingTooFast Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ZoomingOut != nullptr)
		*ZoomingOut = Parms.ZoomingOut;
}

}
