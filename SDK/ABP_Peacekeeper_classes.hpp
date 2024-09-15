#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Peacekeeper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Peacekeeper.ABP_Peacekeeper_C
// 0x0340 (0x06D0 - 0x0390)
class UABP_Peacekeeper_C final : public UMatchaAICharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0398(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03A0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03A8(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x03C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x03F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0418(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0440(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0488(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x04A8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x04F0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0510(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0558(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0578(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0640(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0688(0x0048)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_ABP_Peacekeeper(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Peacekeeper_C">();
	}
	static class UABP_Peacekeeper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Peacekeeper_C>();
	}
};
static_assert(alignof(UABP_Peacekeeper_C) == 0x000010, "Wrong alignment on UABP_Peacekeeper_C");
static_assert(sizeof(UABP_Peacekeeper_C) == 0x0006D0, "Wrong size on UABP_Peacekeeper_C");
static_assert(offsetof(UABP_Peacekeeper_C, UberGraphFrame) == 0x000390, "Member 'UABP_Peacekeeper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimBlueprintExtension_PropertyAccess) == 0x000398, "Member 'UABP_Peacekeeper_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimBlueprintExtension_Base) == 0x0003A0, "Member 'UABP_Peacekeeper_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimGraphNode_Root) == 0x0003A8, "Member 'UABP_Peacekeeper_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimGraphNode_TransitionResult_2) == 0x0003C8, "Member 'UABP_Peacekeeper_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimGraphNode_TransitionResult_1) == 0x0003F0, "Member 'UABP_Peacekeeper_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimGraphNode_TransitionResult) == 0x000418, "Member 'UABP_Peacekeeper_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimGraphNode_SequencePlayer_2) == 0x000440, "Member 'UABP_Peacekeeper_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimGraphNode_StateResult_2) == 0x000488, "Member 'UABP_Peacekeeper_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimGraphNode_SequencePlayer_1) == 0x0004A8, "Member 'UABP_Peacekeeper_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimGraphNode_StateResult_1) == 0x0004F0, "Member 'UABP_Peacekeeper_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimGraphNode_SequencePlayer) == 0x000510, "Member 'UABP_Peacekeeper_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimGraphNode_StateResult) == 0x000558, "Member 'UABP_Peacekeeper_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimGraphNode_StateMachine) == 0x000578, "Member 'UABP_Peacekeeper_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimGraphNode_Slot_1) == 0x000640, "Member 'UABP_Peacekeeper_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_Peacekeeper_C, AnimGraphNode_Slot) == 0x000688, "Member 'UABP_Peacekeeper_C::AnimGraphNode_Slot' has a wrong offset!");

}

