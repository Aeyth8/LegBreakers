#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractiveEntity_Base

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function InteractiveEntity_Base.InteractiveEntity_Base_C.AfterInteractionCancelledOrCompleted
// 0x0010 (0x0010 - 0x0000)
struct InteractiveEntity_Base_C_AfterInteractionCancelledOrCompleted final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasCancelled;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractiveEntity_Base_C_AfterInteractionCancelledOrCompleted) == 0x000008, "Wrong alignment on InteractiveEntity_Base_C_AfterInteractionCancelledOrCompleted");
static_assert(sizeof(InteractiveEntity_Base_C_AfterInteractionCancelledOrCompleted) == 0x000010, "Wrong size on InteractiveEntity_Base_C_AfterInteractionCancelledOrCompleted");
static_assert(offsetof(InteractiveEntity_Base_C_AfterInteractionCancelledOrCompleted, InteractingActor) == 0x000000, "Member 'InteractiveEntity_Base_C_AfterInteractionCancelledOrCompleted::InteractingActor' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_AfterInteractionCancelledOrCompleted, bWasCancelled) == 0x000008, "Member 'InteractiveEntity_Base_C_AfterInteractionCancelledOrCompleted::bWasCancelled' has a wrong offset!");

// Function InteractiveEntity_Base.InteractiveEntity_Base_C.AfterInteractionStarted
// 0x0008 (0x0008 - 0x0000)
struct InteractiveEntity_Base_C_AfterInteractionStarted final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractiveEntity_Base_C_AfterInteractionStarted) == 0x000008, "Wrong alignment on InteractiveEntity_Base_C_AfterInteractionStarted");
static_assert(sizeof(InteractiveEntity_Base_C_AfterInteractionStarted) == 0x000008, "Wrong size on InteractiveEntity_Base_C_AfterInteractionStarted");
static_assert(offsetof(InteractiveEntity_Base_C_AfterInteractionStarted, InteractingActor) == 0x000000, "Member 'InteractiveEntity_Base_C_AfterInteractionStarted::InteractingActor' has a wrong offset!");

// Function InteractiveEntity_Base.InteractiveEntity_Base_C.ExecuteUbergraph_InteractiveEntity_Base
// 0x0178 (0x0178 - 0x0000)
struct InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InteractingActor;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEntityIndex_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMatchaGameplayEvent                   K2Node_MakeStruct_MatchaGameplayEvent;             // 0x0018(0x0014)(NoDestructor)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InteractingActor_1;                   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentEntityTimeInMilliseconds_ReturnValue; // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo;                  // 0x0058(0x0088)(NoDestructor)
	class AActor*                                 K2Node_Event_InteractingActor_2;                   // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InteractionProgressTimeSeconds;       // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo_1;                // 0x00F0(0x0088)(NoDestructor)
};
static_assert(alignof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base) == 0x000008, "Wrong alignment on InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base");
static_assert(sizeof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base) == 0x000178, "Wrong size on InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, EntryPoint) == 0x000000, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, K2Node_Event_InteractingActor) == 0x000008, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::K2Node_Event_InteractingActor' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, CallFunc_GetEntityIndex_ReturnValue) == 0x000010, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::CallFunc_GetEntityIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000014, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, K2Node_MakeStruct_MatchaGameplayEvent) == 0x000018, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::K2Node_MakeStruct_MatchaGameplayEvent' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00002C, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, CallFunc_Round_ReturnValue) == 0x000038, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, K2Node_Event_InteractingActor_1) == 0x000040, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::K2Node_Event_InteractingActor_1' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, K2Node_Event_bWasCancelled) == 0x000048, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, CallFunc_GetCurrentEntityTimeInMilliseconds_ReturnValue) == 0x00004C, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::CallFunc_GetCurrentEntityTimeInMilliseconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, K2Node_MakeStruct_CombinedFXInfo) == 0x000058, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::K2Node_MakeStruct_CombinedFXInfo' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, K2Node_Event_InteractingActor_2) == 0x0000E0, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::K2Node_Event_InteractingActor_2' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, K2Node_Event_InteractionProgressTimeSeconds) == 0x0000E8, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::K2Node_Event_InteractionProgressTimeSeconds' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, CallFunc_NotEqual_NameName_ReturnValue) == 0x0000EC, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base, K2Node_MakeStruct_CombinedFXInfo_1) == 0x0000F0, "Member 'InteractiveEntity_Base_C_ExecuteUbergraph_InteractiveEntity_Base::K2Node_MakeStruct_CombinedFXInfo_1' has a wrong offset!");

// Function InteractiveEntity_Base.InteractiveEntity_Base_C.GetBroadcastChannel
// 0x0008 (0x0008 - 0x0000)
struct InteractiveEntity_Base_C_GetBroadcastChannel final
{
public:
	struct FGameplayTag                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractiveEntity_Base_C_GetBroadcastChannel) == 0x000004, "Wrong alignment on InteractiveEntity_Base_C_GetBroadcastChannel");
static_assert(sizeof(InteractiveEntity_Base_C_GetBroadcastChannel) == 0x000008, "Wrong size on InteractiveEntity_Base_C_GetBroadcastChannel");
static_assert(offsetof(InteractiveEntity_Base_C_GetBroadcastChannel, ReturnValue) == 0x000000, "Member 'InteractiveEntity_Base_C_GetBroadcastChannel::ReturnValue' has a wrong offset!");

// Function InteractiveEntity_Base.InteractiveEntity_Base_C.InteractionProgressed
// 0x0010 (0x0010 - 0x0000)
struct InteractiveEntity_Base_C_InteractionProgressed final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         InteractionProgressTimeSeconds;                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractiveEntity_Base_C_InteractionProgressed) == 0x000008, "Wrong alignment on InteractiveEntity_Base_C_InteractionProgressed");
static_assert(sizeof(InteractiveEntity_Base_C_InteractionProgressed) == 0x000010, "Wrong size on InteractiveEntity_Base_C_InteractionProgressed");
static_assert(offsetof(InteractiveEntity_Base_C_InteractionProgressed, InteractingActor) == 0x000000, "Member 'InteractiveEntity_Base_C_InteractionProgressed::InteractingActor' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_InteractionProgressed, InteractionProgressTimeSeconds) == 0x000008, "Member 'InteractiveEntity_Base_C_InteractionProgressed::InteractionProgressTimeSeconds' has a wrong offset!");

// Function InteractiveEntity_Base.InteractiveEntity_Base_C.Try Broadcast Interaction Complete Event
// 0x0010 (0x0010 - 0x0000)
struct InteractiveEntity_Base_C_Try_Broadcast_Interaction_Complete_Event final
{
public:
	class UMatchaGameplayEventSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractiveEntity_Base_C_Try_Broadcast_Interaction_Complete_Event) == 0x000008, "Wrong alignment on InteractiveEntity_Base_C_Try_Broadcast_Interaction_Complete_Event");
static_assert(sizeof(InteractiveEntity_Base_C_Try_Broadcast_Interaction_Complete_Event) == 0x000010, "Wrong size on InteractiveEntity_Base_C_Try_Broadcast_Interaction_Complete_Event");
static_assert(offsetof(InteractiveEntity_Base_C_Try_Broadcast_Interaction_Complete_Event, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000000, "Member 'InteractiveEntity_Base_C_Try_Broadcast_Interaction_Complete_Event::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_Try_Broadcast_Interaction_Complete_Event, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000008, "Member 'InteractiveEntity_Base_C_Try_Broadcast_Interaction_Complete_Event::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");

// Function InteractiveEntity_Base.InteractiveEntity_Base_C.CanStartInteraction
// 0x0028 (0x0028 - 0x0000)
struct InteractiveEntity_Base_C_CanStartInteraction final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetRemainingCooldownTime_RemainingCooldownSeconds; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_SnapNetPropertyEntityIndexToInt_ReturnValue; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractiveEntity_Base_C_CanStartInteraction) == 0x000008, "Wrong alignment on InteractiveEntity_Base_C_CanStartInteraction");
static_assert(sizeof(InteractiveEntity_Base_C_CanStartInteraction) == 0x000028, "Wrong size on InteractiveEntity_Base_C_CanStartInteraction");
static_assert(offsetof(InteractiveEntity_Base_C_CanStartInteraction, InteractingActor) == 0x000000, "Member 'InteractiveEntity_Base_C_CanStartInteraction::InteractingActor' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_CanStartInteraction, ReturnValue) == 0x000008, "Member 'InteractiveEntity_Base_C_CanStartInteraction::ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_CanStartInteraction, CallFunc_GetRemainingCooldownTime_RemainingCooldownSeconds) == 0x000010, "Member 'InteractiveEntity_Base_C_CanStartInteraction::CallFunc_GetRemainingCooldownTime_RemainingCooldownSeconds' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_CanStartInteraction, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000018, "Member 'InteractiveEntity_Base_C_CanStartInteraction::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_CanStartInteraction, CallFunc_Conv_SnapNetPropertyEntityIndexToInt_ReturnValue) == 0x00001C, "Member 'InteractiveEntity_Base_C_CanStartInteraction::CallFunc_Conv_SnapNetPropertyEntityIndexToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_CanStartInteraction, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'InteractiveEntity_Base_C_CanStartInteraction::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_CanStartInteraction, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'InteractiveEntity_Base_C_CanStartInteraction::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function InteractiveEntity_Base.InteractiveEntity_Base_C.GetInteractionPriority
// 0x0010 (0x0010 - 0x0000)
struct InteractiveEntity_Base_C_GetInteractionPriority final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractiveEntity_Base_C_GetInteractionPriority) == 0x000008, "Wrong alignment on InteractiveEntity_Base_C_GetInteractionPriority");
static_assert(sizeof(InteractiveEntity_Base_C_GetInteractionPriority) == 0x000010, "Wrong size on InteractiveEntity_Base_C_GetInteractionPriority");
static_assert(offsetof(InteractiveEntity_Base_C_GetInteractionPriority, InteractingActor) == 0x000000, "Member 'InteractiveEntity_Base_C_GetInteractionPriority::InteractingActor' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_GetInteractionPriority, ReturnValue) == 0x000008, "Member 'InteractiveEntity_Base_C_GetInteractionPriority::ReturnValue' has a wrong offset!");

// Function InteractiveEntity_Base.InteractiveEntity_Base_C.GetRemainingCooldownTime
// 0x0030 (0x0030 - 0x0000)
struct InteractiveEntity_Base_C_GetRemainingCooldownTime final
{
public:
	double                                        RemainingCooldownSeconds;                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentEntityTimeInMilliseconds_ReturnValue; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue; // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractiveEntity_Base_C_GetRemainingCooldownTime) == 0x000008, "Wrong alignment on InteractiveEntity_Base_C_GetRemainingCooldownTime");
static_assert(sizeof(InteractiveEntity_Base_C_GetRemainingCooldownTime) == 0x000030, "Wrong size on InteractiveEntity_Base_C_GetRemainingCooldownTime");
static_assert(offsetof(InteractiveEntity_Base_C_GetRemainingCooldownTime, RemainingCooldownSeconds) == 0x000000, "Member 'InteractiveEntity_Base_C_GetRemainingCooldownTime::RemainingCooldownSeconds' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_GetRemainingCooldownTime, CallFunc_GetCurrentEntityTimeInMilliseconds_ReturnValue) == 0x000008, "Member 'InteractiveEntity_Base_C_GetRemainingCooldownTime::CallFunc_GetCurrentEntityTimeInMilliseconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_GetRemainingCooldownTime, CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue) == 0x00000C, "Member 'InteractiveEntity_Base_C_GetRemainingCooldownTime::CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_GetRemainingCooldownTime, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'InteractiveEntity_Base_C_GetRemainingCooldownTime::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_GetRemainingCooldownTime, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000018, "Member 'InteractiveEntity_Base_C_GetRemainingCooldownTime::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_GetRemainingCooldownTime, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'InteractiveEntity_Base_C_GetRemainingCooldownTime::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractiveEntity_Base_C_GetRemainingCooldownTime, CallFunc_FMax_ReturnValue) == 0x000028, "Member 'InteractiveEntity_Base_C_GetRemainingCooldownTime::CallFunc_FMax_ReturnValue' has a wrong offset!");

}
