#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Nao

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Matcha_classes.hpp"
#include "ABP_Nao_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Nao.ABP_Nao_C
// 0x1C00 (0x24A0 - 0x08A0)
class UABP_Nao_C final : public UMatchaCharacterAnimInstanceNao
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Nao::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x08A8(0x0060)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0908(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0910(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0918(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_48;                 // 0x0938(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_47;                 // 0x0960(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_46;                 // 0x0988(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_45;                 // 0x09B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_44;                 // 0x09D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_43;                 // 0x0A00(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_42;                 // 0x0A28(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_41;                 // 0x0A50(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_40;                 // 0x0A78(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_39;                 // 0x0AA0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_38;                 // 0x0AC8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_37;                 // 0x0AF0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_36;                 // 0x0B18(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_35;                 // 0x0B40(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_34;                 // 0x0B68(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_33;                 // 0x0B90(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_32;                 // 0x0BB8(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;                  // 0x0BE0(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_25;                      // 0x0C50(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_28;                   // 0x0C70(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_24;                      // 0x0CB8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_27;                   // 0x0CD8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_23;                      // 0x0D20(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_26;                   // 0x0D40(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_22;                      // 0x0D88(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_25;                   // 0x0DA8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_24;                   // 0x0DF0(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x0E38(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_21;                      // 0x0E80(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_23;                   // 0x0EA0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_20;                      // 0x0EE8(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0F08(0x0070)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0F78(0x0070)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0FE8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_19;                      // 0x1030(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_22;                   // 0x1050(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_18;                      // 0x1098(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x10B8(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x1180(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_31;                 // 0x1200(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_30;                 // 0x1228(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_29;                 // 0x1250(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_28;                 // 0x1278(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_27;                 // 0x12A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_26;                 // 0x12C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_25;                 // 0x12F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_24;                 // 0x1318(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_23;                 // 0x1340(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_22;                 // 0x1368(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_21;                 // 0x1390(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_20;                 // 0x13B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_19;                 // 0x13E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_18;                 // 0x1408(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_17;                 // 0x1430(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x1458(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x1480(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_21;                   // 0x14A8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_17;                      // 0x14F0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_20;                   // 0x1510(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_16;                      // 0x1558(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_19;                   // 0x1578(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_15;                      // 0x15C0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_18;                   // 0x15E0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_17;                   // 0x1628(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_16;                   // 0x1670(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_2;                   // 0x16B8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_14;                      // 0x1700(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x1720(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_15;                   // 0x1748(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_13;                      // 0x1790(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_14;                   // 0x17B0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_12;                      // 0x17F8(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x1818(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x1840(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_11;                      // 0x1888(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x18A8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_10;                      // 0x18F0(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x1910(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x1938(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x1980(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x19C8(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x1A10(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x1A58(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x1A78(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x1AC0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x1B08(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x1B50(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x1B98(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x1BB8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x1C00(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x1C20(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x1CE8(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x1D68(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x1D90(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x1DB8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x1DE0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x1E08(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x1E30(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x1E58(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x1E80(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x1EA8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x1ED0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x1EF8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x1F20(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x1F48(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x1F90(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x1FB0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x1FF8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x2018(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x2060(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x2080(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x20C8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x20E8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x2130(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x2150(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x2178(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x2198(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x21C0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x21E0(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x22A8(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x22F0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x2318(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x2340(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x2388(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x23D0(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x2418(0x0080)()

public:
	void ExecuteUbergraph_ABP_Nao(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Nao_C">();
	}
	static class UABP_Nao_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Nao_C>();
	}
};
static_assert(alignof(UABP_Nao_C) == 0x000010, "Wrong alignment on UABP_Nao_C");
static_assert(sizeof(UABP_Nao_C) == 0x0024A0, "Wrong size on UABP_Nao_C");
static_assert(offsetof(UABP_Nao_C, UberGraphFrame) == 0x0008A0, "Member 'UABP_Nao_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, __AnimBlueprintMutables) == 0x0008A8, "Member 'UABP_Nao_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimBlueprintExtension_PropertyAccess) == 0x000908, "Member 'UABP_Nao_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimBlueprintExtension_Base) == 0x000910, "Member 'UABP_Nao_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_Root) == 0x000918, "Member 'UABP_Nao_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_48) == 0x000938, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_48' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_47) == 0x000960, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_47' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_46) == 0x000988, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_46' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_45) == 0x0009B0, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_45' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_44) == 0x0009D8, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_44' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_43) == 0x000A00, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_43' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_42) == 0x000A28, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_42' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_41) == 0x000A50, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_41' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_40) == 0x000A78, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_40' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_39) == 0x000AA0, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_39' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_38) == 0x000AC8, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_38' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_37) == 0x000AF0, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_37' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_36) == 0x000B18, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_36' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_35) == 0x000B40, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_35' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_34) == 0x000B68, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_34' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_33) == 0x000B90, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_33' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_32) == 0x000BB8, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_32' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_BlendSpacePlayer_2) == 0x000BE0, "Member 'UABP_Nao_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_25) == 0x000C50, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_25' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_28) == 0x000C70, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_28' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_24) == 0x000CB8, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_24' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_27) == 0x000CD8, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_27' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_23) == 0x000D20, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_23' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_26) == 0x000D40, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_26' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_22) == 0x000D88, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_22' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_25) == 0x000DA8, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_25' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_24) == 0x000DF0, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_24' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_BlendListByBool_2) == 0x000E38, "Member 'UABP_Nao_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_21) == 0x000E80, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_21' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_23) == 0x000EA0, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_23' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_20) == 0x000EE8, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_20' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000F08, "Member 'UABP_Nao_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_BlendSpacePlayer) == 0x000F78, "Member 'UABP_Nao_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_BlendListByBool_1) == 0x000FE8, "Member 'UABP_Nao_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_19) == 0x001030, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_19' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_22) == 0x001050, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_22' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_18) == 0x001098, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_18' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateMachine_2) == 0x0010B8, "Member 'UABP_Nao_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SaveCachedPose_2) == 0x001180, "Member 'UABP_Nao_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_31) == 0x001200, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_31' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_30) == 0x001228, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_30' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_29) == 0x001250, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_29' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_28) == 0x001278, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_28' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_27) == 0x0012A0, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_27' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_26) == 0x0012C8, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_26' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_25) == 0x0012F0, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_25' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_24) == 0x001318, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_24' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_23) == 0x001340, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_23' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_22) == 0x001368, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_22' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_21) == 0x001390, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_21' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_20) == 0x0013B8, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_20' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_19) == 0x0013E0, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_19' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_18) == 0x001408, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_18' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_17) == 0x001430, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_17' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_16) == 0x001458, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_15) == 0x001480, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_21) == 0x0014A8, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_21' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_17) == 0x0014F0, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_17' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_20) == 0x001510, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_20' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_16) == 0x001558, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_16' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_19) == 0x001578, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_19' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_15) == 0x0015C0, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_15' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_18) == 0x0015E0, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_18' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_17) == 0x001628, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_17' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_16) == 0x001670, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_16' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_BlendListByEnum_2) == 0x0016B8, "Member 'UABP_Nao_C::AnimGraphNode_BlendListByEnum_2' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_14) == 0x001700, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_14' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_14) == 0x001720, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_15) == 0x001748, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_15' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_13) == 0x001790, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_13' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_14) == 0x0017B0, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_14' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_12) == 0x0017F8, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_12' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_13) == 0x001818, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_13) == 0x001840, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_11) == 0x001888, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_11' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_12) == 0x0018A8, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_10) == 0x0018F0, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_12) == 0x001910, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_11) == 0x001938, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_10) == 0x001980, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_9) == 0x0019C8, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_BlendListByEnum_1) == 0x001A10, "Member 'UABP_Nao_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_9) == 0x001A58, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_8) == 0x001A78, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_7) == 0x001AC0, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_6) == 0x001B08, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_BlendListByEnum) == 0x001B50, "Member 'UABP_Nao_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_8) == 0x001B98, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_5) == 0x001BB8, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_7) == 0x001C00, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateMachine_1) == 0x001C20, "Member 'UABP_Nao_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SaveCachedPose_1) == 0x001CE8, "Member 'UABP_Nao_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_11) == 0x001D68, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_10) == 0x001D90, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_9) == 0x001DB8, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_8) == 0x001DE0, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_7) == 0x001E08, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_6) == 0x001E30, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_5) == 0x001E58, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_4) == 0x001E80, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_3) == 0x001EA8, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_2) == 0x001ED0, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult_1) == 0x001EF8, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_TransitionResult) == 0x001F20, "Member 'UABP_Nao_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_4) == 0x001F48, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_6) == 0x001F90, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_3) == 0x001FB0, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_5) == 0x001FF8, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_2) == 0x002018, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_4) == 0x002060, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer_1) == 0x002080, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_3) == 0x0020C8, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SequencePlayer) == 0x0020E8, "Member 'UABP_Nao_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_2) == 0x002130, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_UseCachedPose_3) == 0x002150, "Member 'UABP_Nao_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult_1) == 0x002178, "Member 'UABP_Nao_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_UseCachedPose_2) == 0x002198, "Member 'UABP_Nao_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateResult) == 0x0021C0, "Member 'UABP_Nao_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_StateMachine) == 0x0021E0, "Member 'UABP_Nao_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_Slot_2) == 0x0022A8, "Member 'UABP_Nao_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_UseCachedPose_1) == 0x0022F0, "Member 'UABP_Nao_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_UseCachedPose) == 0x002318, "Member 'UABP_Nao_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_Slot_1) == 0x002340, "Member 'UABP_Nao_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_Slot) == 0x002388, "Member 'UABP_Nao_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_BlendListByBool) == 0x0023D0, "Member 'UABP_Nao_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_Nao_C, AnimGraphNode_SaveCachedPose) == 0x002418, "Member 'UABP_Nao_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");

}

