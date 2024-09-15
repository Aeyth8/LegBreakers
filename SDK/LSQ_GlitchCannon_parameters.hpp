#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LSQ_GlitchCannon

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function LSQ_GlitchCannon.LSQ_GlitchCannon_DirectorBP_C.EnableGlitchLaserCameraCamera
// 0x0010 (0x0010 - 0x0000)
struct LSQ_GlitchCannon_DirectorBP_C_EnableGlitchLaserCameraCamera final
{
public:
	bool                                          NewEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterRenderer_Base_C*              Character_Renderer_Base;                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LSQ_GlitchCannon_DirectorBP_C_EnableGlitchLaserCameraCamera) == 0x000008, "Wrong alignment on LSQ_GlitchCannon_DirectorBP_C_EnableGlitchLaserCameraCamera");
static_assert(sizeof(LSQ_GlitchCannon_DirectorBP_C_EnableGlitchLaserCameraCamera) == 0x000010, "Wrong size on LSQ_GlitchCannon_DirectorBP_C_EnableGlitchLaserCameraCamera");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_EnableGlitchLaserCameraCamera, NewEnable) == 0x000000, "Member 'LSQ_GlitchCannon_DirectorBP_C_EnableGlitchLaserCameraCamera::NewEnable' has a wrong offset!");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_EnableGlitchLaserCameraCamera, Character_Renderer_Base) == 0x000008, "Member 'LSQ_GlitchCannon_DirectorBP_C_EnableGlitchLaserCameraCamera::Character_Renderer_Base' has a wrong offset!");

// Function LSQ_GlitchCannon.LSQ_GlitchCannon_DirectorBP_C.ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP
// 0x0140 (0x0140 - 0x0000)
struct LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCameraManager_C*              K2Node_DynamicCast_AsBP_Player_Camera_Manager;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_NewEnable;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterRenderer_Base_C*              K2Node_CustomEvent_Character_Renderer_Base_2;      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                       K2Node_CustomEvent_GlitchLaserCamera;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterRenderer_Base_C*              K2Node_CustomEvent_Character_Renderer_Base_1;      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacterRenderer_Base_C*              K2Node_CustomEvent_Character_Renderer_Base;        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0048(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP) == 0x000008, "Wrong alignment on LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP");
static_assert(sizeof(LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP) == 0x000140, "Wrong size on LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP, EntryPoint) == 0x000000, "Member 'LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000008, "Member 'LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP, K2Node_DynamicCast_AsBP_Player_Camera_Manager) == 0x000010, "Member 'LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP::K2Node_DynamicCast_AsBP_Player_Camera_Manager' has a wrong offset!");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP, K2Node_CustomEvent_NewEnable) == 0x000019, "Member 'LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP::K2Node_CustomEvent_NewEnable' has a wrong offset!");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP, K2Node_CustomEvent_Character_Renderer_Base_2) == 0x000020, "Member 'LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP::K2Node_CustomEvent_Character_Renderer_Base_2' has a wrong offset!");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP, K2Node_CustomEvent_GlitchLaserCamera) == 0x000028, "Member 'LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP::K2Node_CustomEvent_GlitchLaserCamera' has a wrong offset!");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000030, "Member 'LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP, K2Node_CustomEvent_Character_Renderer_Base_1) == 0x000038, "Member 'LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP::K2Node_CustomEvent_Character_Renderer_Base_1' has a wrong offset!");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP, K2Node_CustomEvent_Character_Renderer_Base) == 0x000040, "Member 'LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP::K2Node_CustomEvent_Character_Renderer_Base' has a wrong offset!");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000048, "Member 'LSQ_GlitchCannon_DirectorBP_C_ExecuteUbergraph_LSQ_GlitchCannon_DirectorBP::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

// Function LSQ_GlitchCannon.LSQ_GlitchCannon_DirectorBP_C.GlitchLaserCamera_Event
// 0x0008 (0x0008 - 0x0000)
struct LSQ_GlitchCannon_DirectorBP_C_GlitchLaserCamera_Event final
{
public:
	class ACineCameraActor*                       GlitchLaserCamera;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LSQ_GlitchCannon_DirectorBP_C_GlitchLaserCamera_Event) == 0x000008, "Wrong alignment on LSQ_GlitchCannon_DirectorBP_C_GlitchLaserCamera_Event");
static_assert(sizeof(LSQ_GlitchCannon_DirectorBP_C_GlitchLaserCamera_Event) == 0x000008, "Wrong size on LSQ_GlitchCannon_DirectorBP_C_GlitchLaserCamera_Event");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_GlitchLaserCamera_Event, GlitchLaserCamera) == 0x000000, "Member 'LSQ_GlitchCannon_DirectorBP_C_GlitchLaserCamera_Event::GlitchLaserCamera' has a wrong offset!");

// Function LSQ_GlitchCannon.LSQ_GlitchCannon_DirectorBP_C.OverrideIntangibleGlow
// 0x0008 (0x0008 - 0x0000)
struct LSQ_GlitchCannon_DirectorBP_C_OverrideIntangibleGlow final
{
public:
	class ACharacterRenderer_Base_C*              Character_Renderer_Base;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LSQ_GlitchCannon_DirectorBP_C_OverrideIntangibleGlow) == 0x000008, "Wrong alignment on LSQ_GlitchCannon_DirectorBP_C_OverrideIntangibleGlow");
static_assert(sizeof(LSQ_GlitchCannon_DirectorBP_C_OverrideIntangibleGlow) == 0x000008, "Wrong size on LSQ_GlitchCannon_DirectorBP_C_OverrideIntangibleGlow");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_OverrideIntangibleGlow, Character_Renderer_Base) == 0x000000, "Member 'LSQ_GlitchCannon_DirectorBP_C_OverrideIntangibleGlow::Character_Renderer_Base' has a wrong offset!");

// Function LSQ_GlitchCannon.LSQ_GlitchCannon_DirectorBP_C.RotateMeshToCamera
// 0x0008 (0x0008 - 0x0000)
struct LSQ_GlitchCannon_DirectorBP_C_RotateMeshToCamera final
{
public:
	class ACharacterRenderer_Base_C*              Character_Renderer_Base;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LSQ_GlitchCannon_DirectorBP_C_RotateMeshToCamera) == 0x000008, "Wrong alignment on LSQ_GlitchCannon_DirectorBP_C_RotateMeshToCamera");
static_assert(sizeof(LSQ_GlitchCannon_DirectorBP_C_RotateMeshToCamera) == 0x000008, "Wrong size on LSQ_GlitchCannon_DirectorBP_C_RotateMeshToCamera");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_RotateMeshToCamera, Character_Renderer_Base) == 0x000000, "Member 'LSQ_GlitchCannon_DirectorBP_C_RotateMeshToCamera::Character_Renderer_Base' has a wrong offset!");

// Function LSQ_GlitchCannon.LSQ_GlitchCannon_DirectorBP_C.SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_0
// 0x0008 (0x0008 - 0x0000)
struct LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_0 final
{
public:
	class ACharacterRenderer_Base_C*              Character_Renderer_Base;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_0) == 0x000008, "Wrong alignment on LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_0");
static_assert(sizeof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_0) == 0x000008, "Wrong size on LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_0");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_0, Character_Renderer_Base) == 0x000000, "Member 'LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_0::Character_Renderer_Base' has a wrong offset!");

// Function LSQ_GlitchCannon.LSQ_GlitchCannon_DirectorBP_C.SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_1
// 0x0008 (0x0008 - 0x0000)
struct LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_1 final
{
public:
	class ACharacterRenderer_Base_C*              Character_Renderer_Base;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_1) == 0x000008, "Wrong alignment on LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_1");
static_assert(sizeof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_1) == 0x000008, "Wrong size on LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_1");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_1, Character_Renderer_Base) == 0x000000, "Member 'LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_1::Character_Renderer_Base' has a wrong offset!");

// Function LSQ_GlitchCannon.LSQ_GlitchCannon_DirectorBP_C.SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_2
// 0x0008 (0x0008 - 0x0000)
struct LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_2 final
{
public:
	class ACineCameraActor*                       GlitchLaserCamera;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_2) == 0x000008, "Wrong alignment on LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_2");
static_assert(sizeof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_2) == 0x000008, "Wrong size on LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_2");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_2, GlitchLaserCamera) == 0x000000, "Member 'LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_2::GlitchLaserCamera' has a wrong offset!");

// Function LSQ_GlitchCannon.LSQ_GlitchCannon_DirectorBP_C.SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_3
// 0x0008 (0x0008 - 0x0000)
struct LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_3 final
{
public:
	class ACharacterRenderer_Base_C*              Character_Renderer_Base;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_3) == 0x000008, "Wrong alignment on LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_3");
static_assert(sizeof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_3) == 0x000008, "Wrong size on LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_3");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_3, Character_Renderer_Base) == 0x000000, "Member 'LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_3::Character_Renderer_Base' has a wrong offset!");

// Function LSQ_GlitchCannon.LSQ_GlitchCannon_DirectorBP_C.SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_4
// 0x0008 (0x0008 - 0x0000)
struct LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_4 final
{
public:
	class ACharacterRenderer_Base_C*              Character_Renderer_Base;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_4) == 0x000008, "Wrong alignment on LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_4");
static_assert(sizeof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_4) == 0x000008, "Wrong size on LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_4");
static_assert(offsetof(LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_4, Character_Renderer_Base) == 0x000000, "Member 'LSQ_GlitchCannon_DirectorBP_C_SequenceEvent__ENTRYPOINTLSQ_GlitchCannon_DirectorBP_4::Character_Renderer_Base' has a wrong offset!");

}
