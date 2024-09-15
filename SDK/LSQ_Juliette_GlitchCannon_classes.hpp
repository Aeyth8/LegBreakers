#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LSQ_Juliette_GlitchCannon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LSQ_Juliette_GlitchCannon.LSQ_Juliette_GlitchCannon_DirectorBP_C
// 0x0008 (0x0050 - 0x0048)
class ULSQ_Juliette_GlitchCannon_DirectorBP_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0048(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void EnableCameraInterpolator();
	void EnableGlitchLaserCameraCamera(bool NewEnable, class ACharacterRenderer_Base_C* Character_Renderer_Base);
	void ExecuteUbergraph_LSQ_Juliette_GlitchCannon_DirectorBP(int32 EntryPoint);
	void GlitchCannonWindupSFX(class ACR_Juliette_C* Character_Renderer_Base);
	void GlitchLaserCamera_Event(class ACineCameraActor* GlitchLaserCamera);
	void OverrideIntangibleGlow(class ACharacterRenderer_Base_C* Character_Renderer_Base);
	void RotateMeshToCamera(class ACharacterRenderer_Base_C* Character_Renderer_Base);
	void SequenceEvent();
	void SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP();
	void SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_0(class ACharacterRenderer_Base_C* Character_Renderer_Base);
	void SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_1(class ACharacterRenderer_Base_C* Character_Renderer_Base);
	void SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_2(class ACineCameraActor* GlitchLaserCamera);
	void SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_3(class ACharacterRenderer_Base_C* Character_Renderer_Base);
	void SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_4(class ACharacterRenderer_Base_C* Character_Renderer_Base);
	void SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_5(class ACR_Juliette_C* Character_Renderer_Base);
	void SequenceEvent__ENTRYPOINTLSQ_Juliette_GlitchCannon_DirectorBP_6();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LSQ_Juliette_GlitchCannon_DirectorBP_C">();
	}
	static class ULSQ_Juliette_GlitchCannon_DirectorBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULSQ_Juliette_GlitchCannon_DirectorBP_C>();
	}
};
static_assert(alignof(ULSQ_Juliette_GlitchCannon_DirectorBP_C) == 0x000008, "Wrong alignment on ULSQ_Juliette_GlitchCannon_DirectorBP_C");
static_assert(sizeof(ULSQ_Juliette_GlitchCannon_DirectorBP_C) == 0x000050, "Wrong size on ULSQ_Juliette_GlitchCannon_DirectorBP_C");
static_assert(offsetof(ULSQ_Juliette_GlitchCannon_DirectorBP_C, UberGraphFrame) == 0x000048, "Member 'ULSQ_Juliette_GlitchCannon_DirectorBP_C::UberGraphFrame' has a wrong offset!");

}
