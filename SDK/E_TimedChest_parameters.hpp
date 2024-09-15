#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_TimedChest

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function E_TimedChest.E_TimedChest_C.AfterInteractionCancelledOrCompleted
// 0x0010 (0x0010 - 0x0000)
struct E_TimedChest_C_AfterInteractionCancelledOrCompleted final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasCancelled;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TimedChest_C_AfterInteractionCancelledOrCompleted) == 0x000008, "Wrong alignment on E_TimedChest_C_AfterInteractionCancelledOrCompleted");
static_assert(sizeof(E_TimedChest_C_AfterInteractionCancelledOrCompleted) == 0x000010, "Wrong size on E_TimedChest_C_AfterInteractionCancelledOrCompleted");
static_assert(offsetof(E_TimedChest_C_AfterInteractionCancelledOrCompleted, InteractingActor) == 0x000000, "Member 'E_TimedChest_C_AfterInteractionCancelledOrCompleted::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_AfterInteractionCancelledOrCompleted, bWasCancelled) == 0x000008, "Member 'E_TimedChest_C_AfterInteractionCancelledOrCompleted::bWasCancelled' has a wrong offset!");

// Function E_TimedChest.E_TimedChest_C.AfterInteractionStarted
// 0x0008 (0x0008 - 0x0000)
struct E_TimedChest_C_AfterInteractionStarted final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TimedChest_C_AfterInteractionStarted) == 0x000008, "Wrong alignment on E_TimedChest_C_AfterInteractionStarted");
static_assert(sizeof(E_TimedChest_C_AfterInteractionStarted) == 0x000008, "Wrong size on E_TimedChest_C_AfterInteractionStarted");
static_assert(offsetof(E_TimedChest_C_AfterInteractionStarted, InteractingActor) == 0x000000, "Member 'E_TimedChest_C_AfterInteractionStarted::InteractingActor' has a wrong offset!");

// Function E_TimedChest.E_TimedChest_C.ExecuteUbergraph_E_TimedChest
// 0x0118 (0x0118 - 0x0000)
struct E_TimedChest_C_ExecuteUbergraph_E_TimedChest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaGameplayEventSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InteractingActor_4;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InteractingActor_3;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_InteractingActor_2;                   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_InteractingActor_1;                   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InteractionProgressTimeSeconds;       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InteractingActor;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x2];                                       // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMatchaGameplayEvent                   K2Node_MakeStruct_MatchaGameplayEvent;             // 0x0074(0x0014)(NoDestructor)
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo;                  // 0x0088(0x0088)(NoDestructor)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest) == 0x000008, "Wrong alignment on E_TimedChest_C_ExecuteUbergraph_E_TimedChest");
static_assert(sizeof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest) == 0x000118, "Wrong size on E_TimedChest_C_ExecuteUbergraph_E_TimedChest");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, EntryPoint) == 0x000000, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::EntryPoint' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000008, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000010, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, K2Node_Event_InteractingActor_4) == 0x000018, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::K2Node_Event_InteractingActor_4' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, K2Node_Event_bWasCancelled) == 0x000020, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, K2Node_Event_InteractingActor_3) == 0x000028, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::K2Node_Event_InteractingActor_3' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, K2Node_Event_InteractingActor_2) == 0x000030, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::K2Node_Event_InteractingActor_2' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, K2Node_Event_InteractingActor_1) == 0x000038, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::K2Node_Event_InteractingActor_1' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, K2Node_Event_InteractionProgressTimeSeconds) == 0x000040, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::K2Node_Event_InteractionProgressTimeSeconds' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, K2Node_Event_InteractingActor) == 0x000048, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::K2Node_Event_InteractingActor' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000060, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000068, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000070, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000071, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, K2Node_MakeStruct_MatchaGameplayEvent) == 0x000074, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::K2Node_MakeStruct_MatchaGameplayEvent' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, K2Node_MakeStruct_CombinedFXInfo) == 0x000088, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::K2Node_MakeStruct_CombinedFXInfo' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_ExecuteUbergraph_E_TimedChest, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000110, "Member 'E_TimedChest_C_ExecuteUbergraph_E_TimedChest::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function E_TimedChest.E_TimedChest_C.InteractionCancelled
// 0x0008 (0x0008 - 0x0000)
struct E_TimedChest_C_InteractionCancelled final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TimedChest_C_InteractionCancelled) == 0x000008, "Wrong alignment on E_TimedChest_C_InteractionCancelled");
static_assert(sizeof(E_TimedChest_C_InteractionCancelled) == 0x000008, "Wrong size on E_TimedChest_C_InteractionCancelled");
static_assert(offsetof(E_TimedChest_C_InteractionCancelled, InteractingActor) == 0x000000, "Member 'E_TimedChest_C_InteractionCancelled::InteractingActor' has a wrong offset!");

// Function E_TimedChest.E_TimedChest_C.InteractionCompleted
// 0x0008 (0x0008 - 0x0000)
struct E_TimedChest_C_InteractionCompleted final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TimedChest_C_InteractionCompleted) == 0x000008, "Wrong alignment on E_TimedChest_C_InteractionCompleted");
static_assert(sizeof(E_TimedChest_C_InteractionCompleted) == 0x000008, "Wrong size on E_TimedChest_C_InteractionCompleted");
static_assert(offsetof(E_TimedChest_C_InteractionCompleted, InteractingActor) == 0x000000, "Member 'E_TimedChest_C_InteractionCompleted::InteractingActor' has a wrong offset!");

// Function E_TimedChest.E_TimedChest_C.InteractionProgressed
// 0x0010 (0x0010 - 0x0000)
struct E_TimedChest_C_InteractionProgressed final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         InteractionProgressTimeSeconds;                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TimedChest_C_InteractionProgressed) == 0x000008, "Wrong alignment on E_TimedChest_C_InteractionProgressed");
static_assert(sizeof(E_TimedChest_C_InteractionProgressed) == 0x000010, "Wrong size on E_TimedChest_C_InteractionProgressed");
static_assert(offsetof(E_TimedChest_C_InteractionProgressed, InteractingActor) == 0x000000, "Member 'E_TimedChest_C_InteractionProgressed::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_InteractionProgressed, InteractionProgressTimeSeconds) == 0x000008, "Member 'E_TimedChest_C_InteractionProgressed::InteractionProgressTimeSeconds' has a wrong offset!");

// Function E_TimedChest.E_TimedChest_C.ResetChest
// 0x0001 (0x0001 - 0x0000)
struct E_TimedChest_C_ResetChest final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TimedChest_C_ResetChest) == 0x000001, "Wrong alignment on E_TimedChest_C_ResetChest");
static_assert(sizeof(E_TimedChest_C_ResetChest) == 0x000001, "Wrong size on E_TimedChest_C_ResetChest");
static_assert(offsetof(E_TimedChest_C_ResetChest, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'E_TimedChest_C_ResetChest::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");

// Function E_TimedChest.E_TimedChest_C.UpdateCollision
// 0x0003 (0x0003 - 0x0000)
struct E_TimedChest_C_UpdateCollision final
{
public:
	uint8                                         CallFunc_Conv_SnapNetPropertyEnumToByte_ReturnValue; // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TimedChest_C_UpdateCollision) == 0x000001, "Wrong alignment on E_TimedChest_C_UpdateCollision");
static_assert(sizeof(E_TimedChest_C_UpdateCollision) == 0x000003, "Wrong size on E_TimedChest_C_UpdateCollision");
static_assert(offsetof(E_TimedChest_C_UpdateCollision, CallFunc_Conv_SnapNetPropertyEnumToByte_ReturnValue) == 0x000000, "Member 'E_TimedChest_C_UpdateCollision::CallFunc_Conv_SnapNetPropertyEnumToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_UpdateCollision, CallFunc_GetValidValue_ReturnValue) == 0x000001, "Member 'E_TimedChest_C_UpdateCollision::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_UpdateCollision, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'E_TimedChest_C_UpdateCollision::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function E_TimedChest.E_TimedChest_C.CanStartInteraction
// 0x0010 (0x0010 - 0x0000)
struct E_TimedChest_C_CanStartInteraction final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_SnapNetPropertyEnumToByte_ReturnValue; // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TimedChest_C_CanStartInteraction) == 0x000008, "Wrong alignment on E_TimedChest_C_CanStartInteraction");
static_assert(sizeof(E_TimedChest_C_CanStartInteraction) == 0x000010, "Wrong size on E_TimedChest_C_CanStartInteraction");
static_assert(offsetof(E_TimedChest_C_CanStartInteraction, InteractingActor) == 0x000000, "Member 'E_TimedChest_C_CanStartInteraction::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_CanStartInteraction, ReturnValue) == 0x000008, "Member 'E_TimedChest_C_CanStartInteraction::ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_CanStartInteraction, CallFunc_Conv_SnapNetPropertyEnumToByte_ReturnValue) == 0x000009, "Member 'E_TimedChest_C_CanStartInteraction::CallFunc_Conv_SnapNetPropertyEnumToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_CanStartInteraction, CallFunc_GetValidValue_ReturnValue) == 0x00000A, "Member 'E_TimedChest_C_CanStartInteraction::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_CanStartInteraction, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000B, "Member 'E_TimedChest_C_CanStartInteraction::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function E_TimedChest.E_TimedChest_C.GetInteractionPriority
// 0x0010 (0x0010 - 0x0000)
struct E_TimedChest_C_GetInteractionPriority final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TimedChest_C_GetInteractionPriority) == 0x000008, "Wrong alignment on E_TimedChest_C_GetInteractionPriority");
static_assert(sizeof(E_TimedChest_C_GetInteractionPriority) == 0x000010, "Wrong size on E_TimedChest_C_GetInteractionPriority");
static_assert(offsetof(E_TimedChest_C_GetInteractionPriority, InteractingActor) == 0x000000, "Member 'E_TimedChest_C_GetInteractionPriority::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_GetInteractionPriority, ReturnValue) == 0x000008, "Member 'E_TimedChest_C_GetInteractionPriority::ReturnValue' has a wrong offset!");

// Function E_TimedChest.E_TimedChest_C.GetInteractionRequirements
// 0x0010 (0x0010 - 0x0000)
struct E_TimedChest_C_GetInteractionRequirements final
{
public:
	struct FMatchaInteractionRequirements         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FMatchaInteractionRequirements         K2Node_MakeStruct_MatchaInteractionRequirements;   // 0x0008(0x0008)(NoDestructor)
};
static_assert(alignof(E_TimedChest_C_GetInteractionRequirements) == 0x000004, "Wrong alignment on E_TimedChest_C_GetInteractionRequirements");
static_assert(sizeof(E_TimedChest_C_GetInteractionRequirements) == 0x000010, "Wrong size on E_TimedChest_C_GetInteractionRequirements");
static_assert(offsetof(E_TimedChest_C_GetInteractionRequirements, ReturnValue) == 0x000000, "Member 'E_TimedChest_C_GetInteractionRequirements::ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TimedChest_C_GetInteractionRequirements, K2Node_MakeStruct_MatchaInteractionRequirements) == 0x000008, "Member 'E_TimedChest_C_GetInteractionRequirements::K2Node_MakeStruct_MatchaInteractionRequirements' has a wrong offset!");

// Function E_TimedChest.E_TimedChest_C.GetScheduledObjectiveDisplayText
// 0x0010 (0x0010 - 0x0000)
struct E_TimedChest_C_GetScheduledObjectiveDisplayText final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(E_TimedChest_C_GetScheduledObjectiveDisplayText) == 0x000008, "Wrong alignment on E_TimedChest_C_GetScheduledObjectiveDisplayText");
static_assert(sizeof(E_TimedChest_C_GetScheduledObjectiveDisplayText) == 0x000010, "Wrong size on E_TimedChest_C_GetScheduledObjectiveDisplayText");
static_assert(offsetof(E_TimedChest_C_GetScheduledObjectiveDisplayText, ReturnValue) == 0x000000, "Member 'E_TimedChest_C_GetScheduledObjectiveDisplayText::ReturnValue' has a wrong offset!");

// Function E_TimedChest.E_TimedChest_C.GetScheduledObjectiveType
// 0x0001 (0x0001 - 0x0000)
struct E_TimedChest_C_GetScheduledObjectiveType final
{
public:
	EScheduledObjectiveType                       ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TimedChest_C_GetScheduledObjectiveType) == 0x000001, "Wrong alignment on E_TimedChest_C_GetScheduledObjectiveType");
static_assert(sizeof(E_TimedChest_C_GetScheduledObjectiveType) == 0x000001, "Wrong size on E_TimedChest_C_GetScheduledObjectiveType");
static_assert(offsetof(E_TimedChest_C_GetScheduledObjectiveType, ReturnValue) == 0x000000, "Member 'E_TimedChest_C_GetScheduledObjectiveType::ReturnValue' has a wrong offset!");

}

