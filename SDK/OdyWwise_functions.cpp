#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OdyWwise

#include "Basic.hpp"

#include "OdyWwise_classes.hpp"
#include "OdyWwise_parameters.hpp"


namespace SDK
{

// Function OdyWwise.OdyWwiseGameplayStatics.AddAkPlayData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*                  SceneComponent                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimNotifyState*                 NotifyState                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PlayId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkComponent*                     AudioComponent                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*                    AudioEvent                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOdyWwiseGameplayStatics::AddAkPlayData(class USceneComponent* SceneComponent, const class UAnimNotifyState* NotifyState, int32 PlayId, class UAkComponent* AudioComponent, class UAkAudioEvent* AudioEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyWwiseGameplayStatics", "AddAkPlayData");

	Params::OdyWwiseGameplayStatics_AddAkPlayData Parms{};

	Parms.SceneComponent = SceneComponent;
	Parms.NotifyState = NotifyState;
	Parms.PlayId = PlayId;
	Parms.AudioComponent = AudioComponent;
	Parms.AudioEvent = AudioEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OdyWwise.OdyWwiseGameplayStatics.AddWwiseDefaultListener
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                Controller                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOdyWwiseGameplayStatics::AddWwiseDefaultListener(class APlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyWwiseGameplayStatics", "AddWwiseDefaultListener");

	Params::OdyWwiseGameplayStatics_AddWwiseDefaultListener Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OdyWwise.OdyWwiseGameplayStatics.ClearAkPlayData
// (Final, Native, Static, Public, BlueprintCallable)

void UOdyWwiseGameplayStatics::ClearAkPlayData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyWwiseGameplayStatics", "ClearAkPlayData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function OdyWwise.OdyWwiseGameplayStatics.ExecuteActionOnPlayingId
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// EAkActionOnEventType                    ActionType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PlayingID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   TransitionDuration                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EAkCurveInterpolation                   FadeCurve                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOdyWwiseGameplayStatics::ExecuteActionOnPlayingId(EAkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, EAkCurveInterpolation FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyWwiseGameplayStatics", "ExecuteActionOnPlayingId");

	Params::OdyWwiseGameplayStatics_ExecuteActionOnPlayingId Parms{};

	Parms.ActionType = ActionType;
	Parms.PlayingID = PlayingID;
	Parms.TransitionDuration = TransitionDuration;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyWwise.OdyWwiseGameplayStatics.GetAkPlayData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USceneComponent*                  SceneComponent                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimNotifyState*                 NotifyState                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAkPlayData                      OutAkPlayData                                          (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOdyWwiseGameplayStatics::GetAkPlayData(class USceneComponent* SceneComponent, const class UAnimNotifyState* NotifyState, struct FAkPlayData* OutAkPlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyWwiseGameplayStatics", "GetAkPlayData");

	Params::OdyWwiseGameplayStatics_GetAkPlayData Parms{};

	Parms.SceneComponent = SceneComponent;
	Parms.NotifyState = NotifyState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAkPlayData != nullptr)
		*OutAkPlayData = std::move(Parms.OutAkPlayData);

	return Parms.ReturnValue;
}


// Function OdyWwise.OdyWwiseGameplayStatics.PopAkPlayData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USceneComponent*                  SceneComponent                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimNotifyState*                 NotifyState                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAkPlayData                      OutAkPlayData                                          (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOdyWwiseGameplayStatics::PopAkPlayData(class USceneComponent* SceneComponent, const class UAnimNotifyState* NotifyState, struct FAkPlayData* OutAkPlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyWwiseGameplayStatics", "PopAkPlayData");

	Params::OdyWwiseGameplayStatics_PopAkPlayData Parms{};

	Parms.SceneComponent = SceneComponent;
	Parms.NotifyState = NotifyState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAkPlayData != nullptr)
		*OutAkPlayData = std::move(Parms.OutAkPlayData);

	return Parms.ReturnValue;
}


// Function OdyWwise.OdyWwiseGameplayStatics.RemoveWwiseDefaultListener
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                Controller                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOdyWwiseGameplayStatics::RemoveWwiseDefaultListener(class APlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyWwiseGameplayStatics", "RemoveWwiseDefaultListener");

	Params::OdyWwiseGameplayStatics_RemoveWwiseDefaultListener Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

