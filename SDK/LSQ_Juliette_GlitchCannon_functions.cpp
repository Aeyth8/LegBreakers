#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LSQ_Juliette_GlitchCannon

#include "Basic.hpp"

#include "LSQ_Juliette_GlitchCannon_classes.hpp"
#include "LSQ_Juliette_GlitchCannon_parameters.hpp"


namespace SDK
{

// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.EnableCameraInterpolator
// (BlueprintCallable, BlueprintEvent)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::EnableCameraInterpolator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "EnableCameraInterpolator");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.EnableGlitchLaserCameraCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewEnable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterRenderer_Base_C*        Character_Renderer_Base                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::EnableGlitchLaserCameraCamera(bool NewEnable, class ACharacterRenderer_Base_C* Character_Renderer_Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "EnableGlitchLaserCameraCamera");

	Params::LSQ_Juliette_GlitchCannon_DirectorBP_C_EnableGlitchLaserCameraCamera Parms{};

	Parms.NewEnable = NewEnable;
	Parms.Character_Renderer_Base = Character_Renderer_Base;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.ExecuteUbergraph_LSQ_Juliette_GlitchCannon_DirectorBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::ExecuteUbergraph_LSQ_Juliette_GlitchCannon_DirectorBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "ExecuteUbergraph_LSQ_Juliette_GlitchCannon_DirectorBP");

	Params::LSQ_Juliette_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_Juliette_GlitchCannon_DirectorBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.GlitchCannonWindupSFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACR_Juliette_C*                   Character_Renderer_Base                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::GlitchCannonWindupSFX(class ACR_Juliette_C* Character_Renderer_Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "GlitchCannonWindupSFX");

	Params::LSQ_Juliette_GlitchCannon_DirectorBP_C_GlitchCannonWindupSFX Parms{};

	Parms.Character_Renderer_Base = Character_Renderer_Base;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.GlitchLaserCamera_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACineCameraActor*                 GlitchLaserCamera                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::GlitchLaserCamera_Event(class ACineCameraActor* GlitchLaserCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "GlitchLaserCamera_Event");

	Params::LSQ_Juliette_GlitchCannon_DirectorBP_C_GlitchLaserCamera_Event Parms{};

	Parms.GlitchLaserCamera = GlitchLaserCamera;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.OverrideIntangibleGlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterRenderer_Base_C*        Character_Renderer_Base                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::OverrideIntangibleGlow(class ACharacterRenderer_Base_C* Character_Renderer_Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "OverrideIntangibleGlow");

	Params::LSQ_Juliette_GlitchCannon_DirectorBP_C_OverrideIntangibleGlow Parms{};

	Parms.Character_Renderer_Base = Character_Renderer_Base;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.RotateMeshToCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterRenderer_Base_C*        Character_Renderer_Base                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::RotateMeshToCamera(class ACharacterRenderer_Base_C* Character_Renderer_Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "RotateMeshToCamera");

	Params::LSQ_Juliette_GlitchCannon_DirectorBP_C_RotateMeshToCamera Parms{};

	Parms.Character_Renderer_Base = Character_Renderer_Base;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "SequenceEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP
// (Public, BlueprintCallable, BlueprintEvent)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterRenderer_Base_C*        Character_Renderer_Base                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_0(class ACharacterRenderer_Base_C* Character_Renderer_Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_0");

	Params::LSQ_Juliette_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_0 Parms{};

	Parms.Character_Renderer_Base = Character_Renderer_Base;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterRenderer_Base_C*        Character_Renderer_Base                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_1(class ACharacterRenderer_Base_C* Character_Renderer_Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_1");

	Params::LSQ_Juliette_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_1 Parms{};

	Parms.Character_Renderer_Base = Character_Renderer_Base;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACineCameraActor*                 GlitchLaserCamera                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_2(class ACineCameraActor* GlitchLaserCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_2");

	Params::LSQ_Juliette_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_2 Parms{};

	Parms.GlitchLaserCamera = GlitchLaserCamera;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterRenderer_Base_C*        Character_Renderer_Base                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_3(class ACharacterRenderer_Base_C* Character_Renderer_Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_3");

	Params::LSQ_Juliette_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_3 Parms{};

	Parms.Character_Renderer_Base = Character_Renderer_Base;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterRenderer_Base_C*        Character_Renderer_Base                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_4(class ACharacterRenderer_Base_C* Character_Renderer_Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_4");

	Params::LSQ_Juliette_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_4 Parms{};

	Parms.Character_Renderer_Base = Character_Renderer_Base;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_5
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACR_Juliette_C*                   Character_Renderer_Base                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_5(class ACR_Juliette_C* Character_Renderer_Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_5");

	Params::LSQ_Juliette_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_5 Parms{};

	Parms.Character_Renderer_Base = Character_Renderer_Base;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C.SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_6
// (Public, BlueprintCallable, BlueprintEvent)

void ULSQ_Juliette_GlitchCannon_DirectorBP_C::SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LSQ_Juliette_GlitchCannon_DirectorBP_C", "SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_6");

	UObject::ProcessEvent(Func, nullptr);
}

}
