#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_JailBot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ABP_JailBot_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_JailBot.ABP_JailBot_C
// 0x04B0 (0x0840 - 0x0390)
class UABP_JailBot_C final : public UMatchaAICharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_JailBot::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0398(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_39A[0x6];                                      // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03A0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03A8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03B0(0x0020)()
	struct FAnimNode_Mirror                       AnimGraphNode_Mirror;                              // 0x03D0(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0418(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0440(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0468(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0490(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x04B8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x04E0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0528(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0548(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0590(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x05B0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x05F8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0618(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0660(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0680(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x06C8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x06E8(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x07B0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x07F8(0x0048)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_ABP_JailBot(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_JailBot_C">();
	}
	static class UABP_JailBot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_JailBot_C>();
	}
};
static_assert(alignof(UABP_JailBot_C) == 0x000010, "Wrong alignment on UABP_JailBot_C");
static_assert(sizeof(UABP_JailBot_C) == 0x000840, "Wrong size on UABP_JailBot_C");
static_assert(offsetof(UABP_JailBot_C, UberGraphFrame) == 0x000390, "Member 'UABP_JailBot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, __AnimBlueprintMutables) == 0x000398, "Member 'UABP_JailBot_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimBlueprintExtension_PropertyAccess) == 0x0003A0, "Member 'UABP_JailBot_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimBlueprintExtension_Base) == 0x0003A8, "Member 'UABP_JailBot_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_Root) == 0x0003B0, "Member 'UABP_JailBot_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_Mirror) == 0x0003D0, "Member 'UABP_JailBot_C::AnimGraphNode_Mirror' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_TransitionResult_4) == 0x000418, "Member 'UABP_JailBot_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_TransitionResult_3) == 0x000440, "Member 'UABP_JailBot_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_TransitionResult_2) == 0x000468, "Member 'UABP_JailBot_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_TransitionResult_1) == 0x000490, "Member 'UABP_JailBot_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_TransitionResult) == 0x0004B8, "Member 'UABP_JailBot_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_SequencePlayer_4) == 0x0004E0, "Member 'UABP_JailBot_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_StateResult_4) == 0x000528, "Member 'UABP_JailBot_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_SequencePlayer_3) == 0x000548, "Member 'UABP_JailBot_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_StateResult_3) == 0x000590, "Member 'UABP_JailBot_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_SequencePlayer_2) == 0x0005B0, "Member 'UABP_JailBot_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_StateResult_2) == 0x0005F8, "Member 'UABP_JailBot_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_SequencePlayer_1) == 0x000618, "Member 'UABP_JailBot_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_StateResult_1) == 0x000660, "Member 'UABP_JailBot_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_SequencePlayer) == 0x000680, "Member 'UABP_JailBot_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_StateResult) == 0x0006C8, "Member 'UABP_JailBot_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_StateMachine) == 0x0006E8, "Member 'UABP_JailBot_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_Slot_1) == 0x0007B0, "Member 'UABP_JailBot_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_JailBot_C, AnimGraphNode_Slot) == 0x0007F8, "Member 'UABP_JailBot_C::AnimGraphNode_Slot' has a wrong offset!");

}

