#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_StartGlitchLaserCeremony

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AnimNotify_StartGlitchLaserCeremony.AnimNotify_StartGlitchLaserCeremony_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct AnimNotify_StartGlitchLaserCeremony_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_StartGlitchLaserCeremony_C_GetNotifyName) == 0x000008, "Wrong alignment on AnimNotify_StartGlitchLaserCeremony_C_GetNotifyName");
static_assert(sizeof(AnimNotify_StartGlitchLaserCeremony_C_GetNotifyName) == 0x000010, "Wrong size on AnimNotify_StartGlitchLaserCeremony_C_GetNotifyName");
static_assert(offsetof(AnimNotify_StartGlitchLaserCeremony_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'AnimNotify_StartGlitchLaserCeremony_C_GetNotifyName::ReturnValue' has a wrong offset!");

// Function AnimNotify_StartGlitchLaserCeremony.AnimNotify_StartGlitchLaserCeremony_C.Received_Notify
// 0x0060 (0x0060 - 0x0000)
struct AnimNotify_StartGlitchLaserCeremony_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacterRenderer_Base_C*              K2Node_DynamicCast_AsCharacter_Renderer_Base;      // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_StartGlitchLaserCeremony_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_StartGlitchLaserCeremony_C_Received_Notify");
static_assert(sizeof(AnimNotify_StartGlitchLaserCeremony_C_Received_Notify) == 0x000060, "Wrong size on AnimNotify_StartGlitchLaserCeremony_C_Received_Notify");
static_assert(offsetof(AnimNotify_StartGlitchLaserCeremony_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_StartGlitchLaserCeremony_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_StartGlitchLaserCeremony_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_StartGlitchLaserCeremony_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_StartGlitchLaserCeremony_C_Received_Notify, EventReference) == 0x000010, "Member 'AnimNotify_StartGlitchLaserCeremony_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotify_StartGlitchLaserCeremony_C_Received_Notify, ReturnValue) == 0x000040, "Member 'AnimNotify_StartGlitchLaserCeremony_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_StartGlitchLaserCeremony_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'AnimNotify_StartGlitchLaserCeremony_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_StartGlitchLaserCeremony_C_Received_Notify, K2Node_DynamicCast_AsCharacter_Renderer_Base) == 0x000050, "Member 'AnimNotify_StartGlitchLaserCeremony_C_Received_Notify::K2Node_DynamicCast_AsCharacter_Renderer_Base' has a wrong offset!");
static_assert(offsetof(AnimNotify_StartGlitchLaserCeremony_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'AnimNotify_StartGlitchLaserCeremony_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

