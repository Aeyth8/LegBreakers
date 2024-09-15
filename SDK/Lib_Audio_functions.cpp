#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lib_Audio

#include "Basic.hpp"

#include "Lib_Audio_classes.hpp"
#include "Lib_Audio_parameters.hpp"


namespace SDK
{

// Function Lib_Audio.Lib_Audio_C.AkEventComponentWithInstigator
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                     Ak_Component                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULib_Audio_C::AkEventComponentWithInstigator(class UAkAudioEvent* AkEvent, class UAkComponent* Ak_Component, class AActor* Instigator, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Lib_Audio_C", "AkEventComponentWithInstigator");

	Params::Lib_Audio_C_AkEventComponentWithInstigator Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Ak_Component = Ak_Component;
	Parms.Instigator = Instigator;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Lib_Audio.Lib_Audio_C.AkEventLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULib_Audio_C::AkEventLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, class AActor* Instigator, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Lib_Audio_C", "AkEventLocation");

	Params::Lib_Audio_C_AkEventLocation Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Location = std::move(Location);
	Parms.Instigator = Instigator;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Lib_Audio.Lib_Audio_C.AkEventRenderer
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Renderer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULib_Audio_C::AkEventRenderer(class UAkAudioEvent* AkEvent, class AActor* Renderer, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Lib_Audio_C", "AkEventRenderer");

	Params::Lib_Audio_C_AkEventRenderer Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Renderer = Renderer;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Lib_Audio.Lib_Audio_C.AkEventRendererWithInstigator
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Renderer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULib_Audio_C::AkEventRendererWithInstigator(class UAkAudioEvent* AkEvent, class AActor* Renderer, class AActor* Instigator, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Lib_Audio_C", "AkEventRendererWithInstigator");

	Params::Lib_Audio_C_AkEventRendererWithInstigator Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Renderer = Renderer;
	Parms.Instigator = Instigator;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Lib_Audio.Lib_Audio_C.AkVelocity
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                     Ak                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  VectorLengthMin                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  VectorLengthMax                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  DT                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          GetPreviousLocation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InterpTimeMs                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SetPreviousLocation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  VectorLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  VectorLengthClamped                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::AkVelocity(class UAkComponent* Ak, double VectorLengthMin, double VectorLengthMax, double DT, const struct FVector& GetPreviousLocation, int32 InterpTimeMs, class UObject* __WorldContext, struct FVector* SetPreviousLocation, double* VectorLength, double* VectorLengthClamped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Lib_Audio_C", "AkVelocity");

	Params::Lib_Audio_C_AkVelocity Parms{};

	Parms.Ak = Ak;
	Parms.VectorLengthMin = VectorLengthMin;
	Parms.VectorLengthMax = VectorLengthMax;
	Parms.DT = DT;
	Parms.GetPreviousLocation = std::move(GetPreviousLocation);
	Parms.InterpTimeMs = InterpTimeMs;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SetPreviousLocation != nullptr)
		*SetPreviousLocation = std::move(Parms.SetPreviousLocation);

	if (VectorLength != nullptr)
		*VectorLength = Parms.VectorLength;

	if (VectorLengthClamped != nullptr)
		*VectorLengthClamped = Parms.VectorLengthClamped;
}

}

