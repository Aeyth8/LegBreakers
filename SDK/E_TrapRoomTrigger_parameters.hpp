#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_TrapRoomTrigger

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function E_TrapRoomTrigger.E_TrapRoomTrigger_C.AfterInteractionCancelledOrCompleted
// 0x0010 (0x0010 - 0x0000)
struct E_TrapRoomTrigger_C_AfterInteractionCancelledOrCompleted final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasCancelled;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TrapRoomTrigger_C_AfterInteractionCancelledOrCompleted) == 0x000008, "Wrong alignment on E_TrapRoomTrigger_C_AfterInteractionCancelledOrCompleted");
static_assert(sizeof(E_TrapRoomTrigger_C_AfterInteractionCancelledOrCompleted) == 0x000010, "Wrong size on E_TrapRoomTrigger_C_AfterInteractionCancelledOrCompleted");
static_assert(offsetof(E_TrapRoomTrigger_C_AfterInteractionCancelledOrCompleted, InteractingActor) == 0x000000, "Member 'E_TrapRoomTrigger_C_AfterInteractionCancelledOrCompleted::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_AfterInteractionCancelledOrCompleted, bWasCancelled) == 0x000008, "Member 'E_TrapRoomTrigger_C_AfterInteractionCancelledOrCompleted::bWasCancelled' has a wrong offset!");

// Function E_TrapRoomTrigger.E_TrapRoomTrigger_C.AfterInteractionStarted
// 0x0008 (0x0008 - 0x0000)
struct E_TrapRoomTrigger_C_AfterInteractionStarted final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TrapRoomTrigger_C_AfterInteractionStarted) == 0x000008, "Wrong alignment on E_TrapRoomTrigger_C_AfterInteractionStarted");
static_assert(sizeof(E_TrapRoomTrigger_C_AfterInteractionStarted) == 0x000008, "Wrong size on E_TrapRoomTrigger_C_AfterInteractionStarted");
static_assert(offsetof(E_TrapRoomTrigger_C_AfterInteractionStarted, InteractingActor) == 0x000000, "Member 'E_TrapRoomTrigger_C_AfterInteractionStarted::InteractingActor' has a wrong offset!");

// Function E_TrapRoomTrigger.E_TrapRoomTrigger_C.ExecuteUbergraph_E_TrapRoomTrigger
// 0x0078 (0x0078 - 0x0000)
struct E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InteractingActor_4;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InteractingActor_3;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_InteractingActor_2;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_InteractingActor_1;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InteractionProgressTimeSeconds;       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESnapNetWorldType                             CallFunc_SwitchSnapNetWorldType_WorldType;         // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMatchaGameplayEvent                   K2Node_MakeStruct_MatchaGameplayEvent;             // 0x0038(0x0014)(NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESnapNetWorldType                             CallFunc_SwitchSnapNetWorldType_WorldType_1;       // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E[0x2];                                       // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaGameplayEventSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InteractingActor;                     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMatchaSnapNetCharacterEntity*          K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bOldEnabled;                          // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bNewEnabled;                          // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger) == 0x000008, "Wrong alignment on E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger");
static_assert(sizeof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger) == 0x000078, "Wrong size on E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, EntryPoint) == 0x000000, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::EntryPoint' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_Event_InteractingActor_4) == 0x000008, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_Event_InteractingActor_4' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_Event_bWasCancelled) == 0x000010, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_Event_InteractingActor_3) == 0x000018, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_Event_InteractingActor_3' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_Event_InteractingActor_2) == 0x000020, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_Event_InteractingActor_2' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_Event_InteractingActor_1) == 0x000028, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_Event_InteractingActor_1' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_Event_InteractionProgressTimeSeconds) == 0x000030, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_Event_InteractionProgressTimeSeconds' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, CallFunc_SwitchSnapNetWorldType_WorldType) == 0x000034, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::CallFunc_SwitchSnapNetWorldType_WorldType' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_MakeStruct_MatchaGameplayEvent) == 0x000038, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_MakeStruct_MatchaGameplayEvent' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_SwitchEnum_CmpSuccess) == 0x00004C, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, CallFunc_SwitchSnapNetWorldType_WorldType_1) == 0x00004D, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::CallFunc_SwitchSnapNetWorldType_WorldType_1' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000050, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_SwitchEnum_CmpSuccess_1) == 0x000058, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_Event_InteractingActor) == 0x000060, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_Event_InteractingActor' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity) == 0x000068, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_Event_bOldEnabled) == 0x000071, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_Event_bOldEnabled' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger, K2Node_Event_bNewEnabled) == 0x000072, "Member 'E_TrapRoomTrigger_C_ExecuteUbergraph_E_TrapRoomTrigger::K2Node_Event_bNewEnabled' has a wrong offset!");

// Function E_TrapRoomTrigger.E_TrapRoomTrigger_C.GetBroadcastChannel
// 0x0008 (0x0008 - 0x0000)
struct E_TrapRoomTrigger_C_GetBroadcastChannel final
{
public:
	struct FGameplayTag                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TrapRoomTrigger_C_GetBroadcastChannel) == 0x000004, "Wrong alignment on E_TrapRoomTrigger_C_GetBroadcastChannel");
static_assert(sizeof(E_TrapRoomTrigger_C_GetBroadcastChannel) == 0x000008, "Wrong size on E_TrapRoomTrigger_C_GetBroadcastChannel");
static_assert(offsetof(E_TrapRoomTrigger_C_GetBroadcastChannel, ReturnValue) == 0x000000, "Member 'E_TrapRoomTrigger_C_GetBroadcastChannel::ReturnValue' has a wrong offset!");

// Function E_TrapRoomTrigger.E_TrapRoomTrigger_C.InteractionCancelled
// 0x0008 (0x0008 - 0x0000)
struct E_TrapRoomTrigger_C_InteractionCancelled final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TrapRoomTrigger_C_InteractionCancelled) == 0x000008, "Wrong alignment on E_TrapRoomTrigger_C_InteractionCancelled");
static_assert(sizeof(E_TrapRoomTrigger_C_InteractionCancelled) == 0x000008, "Wrong size on E_TrapRoomTrigger_C_InteractionCancelled");
static_assert(offsetof(E_TrapRoomTrigger_C_InteractionCancelled, InteractingActor) == 0x000000, "Member 'E_TrapRoomTrigger_C_InteractionCancelled::InteractingActor' has a wrong offset!");

// Function E_TrapRoomTrigger.E_TrapRoomTrigger_C.InteractionCompleted
// 0x0008 (0x0008 - 0x0000)
struct E_TrapRoomTrigger_C_InteractionCompleted final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TrapRoomTrigger_C_InteractionCompleted) == 0x000008, "Wrong alignment on E_TrapRoomTrigger_C_InteractionCompleted");
static_assert(sizeof(E_TrapRoomTrigger_C_InteractionCompleted) == 0x000008, "Wrong size on E_TrapRoomTrigger_C_InteractionCompleted");
static_assert(offsetof(E_TrapRoomTrigger_C_InteractionCompleted, InteractingActor) == 0x000000, "Member 'E_TrapRoomTrigger_C_InteractionCompleted::InteractingActor' has a wrong offset!");

// Function E_TrapRoomTrigger.E_TrapRoomTrigger_C.InteractionProgressed
// 0x0010 (0x0010 - 0x0000)
struct E_TrapRoomTrigger_C_InteractionProgressed final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         InteractionProgressTimeSeconds;                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TrapRoomTrigger_C_InteractionProgressed) == 0x000008, "Wrong alignment on E_TrapRoomTrigger_C_InteractionProgressed");
static_assert(sizeof(E_TrapRoomTrigger_C_InteractionProgressed) == 0x000010, "Wrong size on E_TrapRoomTrigger_C_InteractionProgressed");
static_assert(offsetof(E_TrapRoomTrigger_C_InteractionProgressed, InteractingActor) == 0x000000, "Member 'E_TrapRoomTrigger_C_InteractionProgressed::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_InteractionProgressed, InteractionProgressTimeSeconds) == 0x000008, "Member 'E_TrapRoomTrigger_C_InteractionProgressed::InteractionProgressTimeSeconds' has a wrong offset!");

// Function E_TrapRoomTrigger.E_TrapRoomTrigger_C.OnEnabledChanged
// 0x0002 (0x0002 - 0x0000)
struct E_TrapRoomTrigger_C_OnEnabledChanged final
{
public:
	bool                                          bOldEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNewEnabled;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TrapRoomTrigger_C_OnEnabledChanged) == 0x000001, "Wrong alignment on E_TrapRoomTrigger_C_OnEnabledChanged");
static_assert(sizeof(E_TrapRoomTrigger_C_OnEnabledChanged) == 0x000002, "Wrong size on E_TrapRoomTrigger_C_OnEnabledChanged");
static_assert(offsetof(E_TrapRoomTrigger_C_OnEnabledChanged, bOldEnabled) == 0x000000, "Member 'E_TrapRoomTrigger_C_OnEnabledChanged::bOldEnabled' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_OnEnabledChanged, bNewEnabled) == 0x000001, "Member 'E_TrapRoomTrigger_C_OnEnabledChanged::bNewEnabled' has a wrong offset!");

// Function E_TrapRoomTrigger.E_TrapRoomTrigger_C.UpdateCollision
// 0x0005 (0x0005 - 0x0000)
struct E_TrapRoomTrigger_C_UpdateCollision final
{
public:
	bool                                          EnableCollision;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TrapRoomTrigger_C_UpdateCollision) == 0x000001, "Wrong alignment on E_TrapRoomTrigger_C_UpdateCollision");
static_assert(sizeof(E_TrapRoomTrigger_C_UpdateCollision) == 0x000005, "Wrong size on E_TrapRoomTrigger_C_UpdateCollision");
static_assert(offsetof(E_TrapRoomTrigger_C_UpdateCollision, EnableCollision) == 0x000000, "Member 'E_TrapRoomTrigger_C_UpdateCollision::EnableCollision' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_UpdateCollision, Temp_bool_Variable) == 0x000001, "Member 'E_TrapRoomTrigger_C_UpdateCollision::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_UpdateCollision, Temp_byte_Variable) == 0x000002, "Member 'E_TrapRoomTrigger_C_UpdateCollision::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_UpdateCollision, Temp_byte_Variable_1) == 0x000003, "Member 'E_TrapRoomTrigger_C_UpdateCollision::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_UpdateCollision, K2Node_Select_Default) == 0x000004, "Member 'E_TrapRoomTrigger_C_UpdateCollision::K2Node_Select_Default' has a wrong offset!");

// Function E_TrapRoomTrigger.E_TrapRoomTrigger_C.CanStartInteraction
// 0x0010 (0x0010 - 0x0000)
struct E_TrapRoomTrigger_C_CanStartInteraction final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnabled_ReturnValue;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TrapRoomTrigger_C_CanStartInteraction) == 0x000008, "Wrong alignment on E_TrapRoomTrigger_C_CanStartInteraction");
static_assert(sizeof(E_TrapRoomTrigger_C_CanStartInteraction) == 0x000010, "Wrong size on E_TrapRoomTrigger_C_CanStartInteraction");
static_assert(offsetof(E_TrapRoomTrigger_C_CanStartInteraction, InteractingActor) == 0x000000, "Member 'E_TrapRoomTrigger_C_CanStartInteraction::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_CanStartInteraction, ReturnValue) == 0x000008, "Member 'E_TrapRoomTrigger_C_CanStartInteraction::ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_CanStartInteraction, CallFunc_IsEnabled_ReturnValue) == 0x000009, "Member 'E_TrapRoomTrigger_C_CanStartInteraction::CallFunc_IsEnabled_ReturnValue' has a wrong offset!");

// Function E_TrapRoomTrigger.E_TrapRoomTrigger_C.GetInteractionPriority
// 0x0010 (0x0010 - 0x0000)
struct E_TrapRoomTrigger_C_GetInteractionPriority final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TrapRoomTrigger_C_GetInteractionPriority) == 0x000008, "Wrong alignment on E_TrapRoomTrigger_C_GetInteractionPriority");
static_assert(sizeof(E_TrapRoomTrigger_C_GetInteractionPriority) == 0x000010, "Wrong size on E_TrapRoomTrigger_C_GetInteractionPriority");
static_assert(offsetof(E_TrapRoomTrigger_C_GetInteractionPriority, InteractingActor) == 0x000000, "Member 'E_TrapRoomTrigger_C_GetInteractionPriority::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_GetInteractionPriority, ReturnValue) == 0x000008, "Member 'E_TrapRoomTrigger_C_GetInteractionPriority::ReturnValue' has a wrong offset!");

// Function E_TrapRoomTrigger.E_TrapRoomTrigger_C.GetInteractionRequirements
// 0x0010 (0x0010 - 0x0000)
struct E_TrapRoomTrigger_C_GetInteractionRequirements final
{
public:
	struct FMatchaInteractionRequirements         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FMatchaInteractionRequirements         K2Node_MakeStruct_MatchaInteractionRequirements;   // 0x0008(0x0008)(NoDestructor)
};
static_assert(alignof(E_TrapRoomTrigger_C_GetInteractionRequirements) == 0x000004, "Wrong alignment on E_TrapRoomTrigger_C_GetInteractionRequirements");
static_assert(sizeof(E_TrapRoomTrigger_C_GetInteractionRequirements) == 0x000010, "Wrong size on E_TrapRoomTrigger_C_GetInteractionRequirements");
static_assert(offsetof(E_TrapRoomTrigger_C_GetInteractionRequirements, ReturnValue) == 0x000000, "Member 'E_TrapRoomTrigger_C_GetInteractionRequirements::ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TrapRoomTrigger_C_GetInteractionRequirements, K2Node_MakeStruct_MatchaInteractionRequirements) == 0x000008, "Member 'E_TrapRoomTrigger_C_GetInteractionRequirements::K2Node_MakeStruct_MatchaInteractionRequirements' has a wrong offset!");

}

