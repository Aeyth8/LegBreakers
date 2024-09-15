#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Juliette

#include "Basic.hpp"

#include "ABP_Juliette_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Juliette.ABP_Juliette_C
// 0x1D80 (0x25A0 - 0x0820)
class UABP_Juliette_C final : public UMatchaSnapNetCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0820(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Juliette::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0828(0x0070)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0898(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x08A0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x08A8(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x08C8(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_47;                 // 0x0910(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_46;                 // 0x0938(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_45;                 // 0x0960(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_44;                 // 0x0988(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_43;                 // 0x09B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_42;                 // 0x09D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_41;                 // 0x0A00(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_40;                 // 0x0A28(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_39;                 // 0x0A50(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_38;                 // 0x0A78(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_37;                 // 0x0AA0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_36;                 // 0x0AC8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_35;                 // 0x0AF0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_34;                 // 0x0B18(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_33;                 // 0x0B40(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0B68(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_27;                      // 0x0BD8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_30;                   // 0x0BF8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_26;                      // 0x0C40(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_29;                   // 0x0C60(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_25;                      // 0x0CA8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_28;                   // 0x0CC8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_24;                      // 0x0D10(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_27;                   // 0x0D30(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0D78(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_26;                   // 0x0DC0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_23;                      // 0x0E08(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_25;                   // 0x0E28(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_22;                      // 0x0E70(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0E90(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_21;                      // 0x0F00(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_32;                 // 0x0F20(0x0028)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer;                        // 0x0F48(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_20;                      // 0x0FC0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_24;                   // 0x0FE0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_19;                      // 0x1028(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_3;                      // 0x1048(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_18;                      // 0x1110(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x1130(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x11F8(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_31;                 // 0x1278(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_30;                 // 0x12A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_29;                 // 0x12C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_28;                 // 0x12F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_27;                 // 0x1318(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_26;                 // 0x1340(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_25;                 // 0x1368(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_24;                 // 0x1390(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_23;                 // 0x13B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_22;                 // 0x13E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_21;                 // 0x1408(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_20;                 // 0x1430(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_19;                 // 0x1458(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_18;                 // 0x1480(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_17;                 // 0x14A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x14D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x14F8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_23;                   // 0x1520(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_17;                      // 0x1568(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_22;                   // 0x1588(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_16;                      // 0x15D0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_21;                   // 0x15F0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_15;                      // 0x1638(0x0020)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_3;                   // 0x1658(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_20;                   // 0x16A0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_19;                   // 0x16E8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_18;                   // 0x1730(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_14;                      // 0x1778(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x1798(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x17C0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_17;                   // 0x17E8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_13;                      // 0x1830(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_16;                   // 0x1850(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_12;                      // 0x1898(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x18B8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_15;                   // 0x18E0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_11;                      // 0x1928(0x0020)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_2;                   // 0x1948(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_14;                   // 0x1990(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x19D8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x1A20(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_10;                      // 0x1A68(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x1A88(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x1AD0(0x0020)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x1AF0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x1B38(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x1B80(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x1BC8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x1C10(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x1C30(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x1C78(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x1CC0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x1D08(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x1D50(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x1D70(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x1E38(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x1EB8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x1EE0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x1F08(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x1F30(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x1F58(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x1F80(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x1FA8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x1FD0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x1FF8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x2020(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x2048(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x2070(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x2098(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x20E0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x2100(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x2148(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x2168(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x21B0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x21D0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x2218(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x2238(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x2280(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x22A0(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x22C8(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x22E8(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x2310(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x2330(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x23F8(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x2478(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x24A0(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x24C8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x2510(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x2558(0x0048)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Juliette(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Juliette_C">();
	}
	static class UABP_Juliette_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Juliette_C>();
	}
};
static_assert(alignof(UABP_Juliette_C) == 0x000010, "Wrong alignment on UABP_Juliette_C");
static_assert(sizeof(UABP_Juliette_C) == 0x0025A0, "Wrong size on UABP_Juliette_C");
static_assert(offsetof(UABP_Juliette_C, UberGraphFrame) == 0x000820, "Member 'UABP_Juliette_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, __AnimBlueprintMutables) == 0x000828, "Member 'UABP_Juliette_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimBlueprintExtension_PropertyAccess) == 0x000898, "Member 'UABP_Juliette_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimBlueprintExtension_Base) == 0x0008A0, "Member 'UABP_Juliette_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_Root) == 0x0008A8, "Member 'UABP_Juliette_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_Slot_2) == 0x0008C8, "Member 'UABP_Juliette_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_47) == 0x000910, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_47' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_46) == 0x000938, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_46' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_45) == 0x000960, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_45' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_44) == 0x000988, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_44' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_43) == 0x0009B0, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_43' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_42) == 0x0009D8, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_42' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_41) == 0x000A00, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_41' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_40) == 0x000A28, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_40' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_39) == 0x000A50, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_39' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_38) == 0x000A78, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_38' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_37) == 0x000AA0, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_37' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_36) == 0x000AC8, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_36' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_35) == 0x000AF0, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_35' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_34) == 0x000B18, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_34' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_33) == 0x000B40, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_33' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000B68, "Member 'UABP_Juliette_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_27) == 0x000BD8, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_27' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_30) == 0x000BF8, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_30' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_26) == 0x000C40, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_26' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_29) == 0x000C60, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_29' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_25) == 0x000CA8, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_25' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_28) == 0x000CC8, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_28' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_24) == 0x000D10, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_24' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_27) == 0x000D30, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_27' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_BlendListByBool_1) == 0x000D78, "Member 'UABP_Juliette_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_26) == 0x000DC0, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_26' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_23) == 0x000E08, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_23' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_25) == 0x000E28, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_25' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_22) == 0x000E70, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_22' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_BlendSpacePlayer) == 0x000E90, "Member 'UABP_Juliette_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_21) == 0x000F00, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_21' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_32) == 0x000F20, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_32' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_RandomPlayer) == 0x000F48, "Member 'UABP_Juliette_C::AnimGraphNode_RandomPlayer' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_20) == 0x000FC0, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_20' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_24) == 0x000FE0, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_24' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_19) == 0x001028, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_19' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateMachine_3) == 0x001048, "Member 'UABP_Juliette_C::AnimGraphNode_StateMachine_3' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_18) == 0x001110, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_18' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateMachine_2) == 0x001130, "Member 'UABP_Juliette_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SaveCachedPose_2) == 0x0011F8, "Member 'UABP_Juliette_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_31) == 0x001278, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_31' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_30) == 0x0012A0, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_30' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_29) == 0x0012C8, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_29' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_28) == 0x0012F0, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_28' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_27) == 0x001318, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_27' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_26) == 0x001340, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_26' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_25) == 0x001368, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_25' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_24) == 0x001390, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_24' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_23) == 0x0013B8, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_23' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_22) == 0x0013E0, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_22' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_21) == 0x001408, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_21' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_20) == 0x001430, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_20' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_19) == 0x001458, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_19' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_18) == 0x001480, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_18' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_17) == 0x0014A8, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_17' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_16) == 0x0014D0, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_15) == 0x0014F8, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_23) == 0x001520, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_23' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_17) == 0x001568, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_17' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_22) == 0x001588, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_22' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_16) == 0x0015D0, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_16' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_21) == 0x0015F0, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_21' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_15) == 0x001638, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_15' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_BlendListByEnum_3) == 0x001658, "Member 'UABP_Juliette_C::AnimGraphNode_BlendListByEnum_3' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_20) == 0x0016A0, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_20' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_19) == 0x0016E8, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_19' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_18) == 0x001730, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_18' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_14) == 0x001778, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_14' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_14) == 0x001798, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_13) == 0x0017C0, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_17) == 0x0017E8, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_17' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_13) == 0x001830, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_13' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_16) == 0x001850, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_16' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_12) == 0x001898, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_12' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_12) == 0x0018B8, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_15) == 0x0018E0, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_15' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_11) == 0x001928, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_11' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_BlendListByEnum_2) == 0x001948, "Member 'UABP_Juliette_C::AnimGraphNode_BlendListByEnum_2' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_14) == 0x001990, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_14' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_13) == 0x0019D8, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_12) == 0x001A20, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_10) == 0x001A68, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_11) == 0x001A88, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_9) == 0x001AD0, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_BlendListByEnum_1) == 0x001AF0, "Member 'UABP_Juliette_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_10) == 0x001B38, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_9) == 0x001B80, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_8) == 0x001BC8, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_8) == 0x001C10, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_7) == 0x001C30, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_6) == 0x001C78, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_BlendListByEnum) == 0x001CC0, "Member 'UABP_Juliette_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_5) == 0x001D08, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_7) == 0x001D50, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateMachine_1) == 0x001D70, "Member 'UABP_Juliette_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SaveCachedPose_1) == 0x001E38, "Member 'UABP_Juliette_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_11) == 0x001EB8, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_10) == 0x001EE0, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_9) == 0x001F08, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_8) == 0x001F30, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_7) == 0x001F58, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_6) == 0x001F80, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_5) == 0x001FA8, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_4) == 0x001FD0, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_3) == 0x001FF8, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_2) == 0x002020, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult_1) == 0x002048, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_TransitionResult) == 0x002070, "Member 'UABP_Juliette_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_4) == 0x002098, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_6) == 0x0020E0, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_3) == 0x002100, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_5) == 0x002148, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_2) == 0x002168, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_4) == 0x0021B0, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer_1) == 0x0021D0, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_3) == 0x002218, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SequencePlayer) == 0x002238, "Member 'UABP_Juliette_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_2) == 0x002280, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_UseCachedPose_3) == 0x0022A0, "Member 'UABP_Juliette_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult_1) == 0x0022C8, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_UseCachedPose_2) == 0x0022E8, "Member 'UABP_Juliette_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateResult) == 0x002310, "Member 'UABP_Juliette_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_StateMachine) == 0x002330, "Member 'UABP_Juliette_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_SaveCachedPose) == 0x0023F8, "Member 'UABP_Juliette_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_UseCachedPose_1) == 0x002478, "Member 'UABP_Juliette_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_UseCachedPose) == 0x0024A0, "Member 'UABP_Juliette_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_Slot_1) == 0x0024C8, "Member 'UABP_Juliette_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_Slot) == 0x002510, "Member 'UABP_Juliette_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Juliette_C, AnimGraphNode_BlendListByBool) == 0x002558, "Member 'UABP_Juliette_C::AnimGraphNode_BlendListByBool' has a wrong offset!");

}

