#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_VendingMachine_Consumables

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function E_VendingMachine_Consumables.E_VendingMachine_Consumables_C.AfterInteractionCancelledOrCompleted
// 0x0010 (0x0010 - 0x0000)
struct E_VendingMachine_Consumables_C_AfterInteractionCancelledOrCompleted final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasCancelled;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_VendingMachine_Consumables_C_AfterInteractionCancelledOrCompleted) == 0x000008, "Wrong alignment on E_VendingMachine_Consumables_C_AfterInteractionCancelledOrCompleted");
static_assert(sizeof(E_VendingMachine_Consumables_C_AfterInteractionCancelledOrCompleted) == 0x000010, "Wrong size on E_VendingMachine_Consumables_C_AfterInteractionCancelledOrCompleted");
static_assert(offsetof(E_VendingMachine_Consumables_C_AfterInteractionCancelledOrCompleted, InteractingActor) == 0x000000, "Member 'E_VendingMachine_Consumables_C_AfterInteractionCancelledOrCompleted::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_AfterInteractionCancelledOrCompleted, bWasCancelled) == 0x000008, "Member 'E_VendingMachine_Consumables_C_AfterInteractionCancelledOrCompleted::bWasCancelled' has a wrong offset!");

// Function E_VendingMachine_Consumables.E_VendingMachine_Consumables_C.AfterInteractionStarted
// 0x0008 (0x0008 - 0x0000)
struct E_VendingMachine_Consumables_C_AfterInteractionStarted final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_VendingMachine_Consumables_C_AfterInteractionStarted) == 0x000008, "Wrong alignment on E_VendingMachine_Consumables_C_AfterInteractionStarted");
static_assert(sizeof(E_VendingMachine_Consumables_C_AfterInteractionStarted) == 0x000008, "Wrong size on E_VendingMachine_Consumables_C_AfterInteractionStarted");
static_assert(offsetof(E_VendingMachine_Consumables_C_AfterInteractionStarted, InteractingActor) == 0x000000, "Member 'E_VendingMachine_Consumables_C_AfterInteractionStarted::InteractingActor' has a wrong offset!");

// Function E_VendingMachine_Consumables.E_VendingMachine_Consumables_C.ExecuteUbergraph_E_VendingMachine_Consumables
// 0x0068 (0x0068 - 0x0000)
struct E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USnapNetServerScript*                   CallFunc_Get_ReturnValue;                          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaBattleRoyaleServerScript*        K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_InteractingActor;                     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMatchaSnapNetCharacterEntity*          K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InteractingActor_1;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TrySpendCoins_ReturnValue;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables) == 0x000008, "Wrong alignment on E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables");
static_assert(sizeof(E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables) == 0x000068, "Wrong size on E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables");
static_assert(offsetof(E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables, EntryPoint) == 0x000000, "Member 'E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables::EntryPoint' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables, CallFunc_Get_ReturnValue) == 0x000008, "Member 'E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables, K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script) == 0x000010, "Member 'E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables::K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables, K2Node_Event_InteractingActor) == 0x000038, "Member 'E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables::K2Node_Event_InteractingActor' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables, K2Node_Event_bWasCancelled) == 0x000040, "Member 'E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables, K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity) == 0x000048, "Member 'E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables::K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables, K2Node_Event_InteractingActor_1) == 0x000058, "Member 'E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables::K2Node_Event_InteractingActor_1' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables, CallFunc_TrySpendCoins_ReturnValue) == 0x000060, "Member 'E_VendingMachine_Consumables_C_ExecuteUbergraph_E_VendingMachine_Consumables::CallFunc_TrySpendCoins_ReturnValue' has a wrong offset!");

// Function E_VendingMachine_Consumables.E_VendingMachine_Consumables_C.CanStartInteraction
// 0x0050 (0x0050 - 0x0000)
struct E_VendingMachine_Consumables_C_CanStartInteraction final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USnapNetServerScript*                   CallFunc_Get_ReturnValue;                          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMatchaSnapNetCharacterEntity*          K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaBattleRoyaleServerScript*        K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasEnoughCoins_ReturnValue;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue; // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue; // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_SnapNetPropertyEntityIndexToInt_ReturnValue; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43[0x5];                                       // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_VendingMachine_Consumables_C_CanStartInteraction) == 0x000008, "Wrong alignment on E_VendingMachine_Consumables_C_CanStartInteraction");
static_assert(sizeof(E_VendingMachine_Consumables_C_CanStartInteraction) == 0x000050, "Wrong size on E_VendingMachine_Consumables_C_CanStartInteraction");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, InteractingActor) == 0x000000, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, ReturnValue) == 0x000008, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::ReturnValue' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, CallFunc_Get_ReturnValue) == 0x000010, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity) == 0x000018, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script) == 0x000028, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, CallFunc_HasEnoughCoins_ReturnValue) == 0x000031, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::CallFunc_HasEnoughCoins_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue) == 0x000034, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000038, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue) == 0x000039, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, CallFunc_Conv_SnapNetPropertyEntityIndexToInt_ReturnValue) == 0x00003C, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::CallFunc_Conv_SnapNetPropertyEntityIndexToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, CallFunc_BooleanAND_ReturnValue_1) == 0x000042, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_CanStartInteraction, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'E_VendingMachine_Consumables_C_CanStartInteraction::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function E_VendingMachine_Consumables.E_VendingMachine_Consumables_C.GetIsBeingInteracted
// 0x0002 (0x0002 - 0x0000)
struct E_VendingMachine_Consumables_C_GetIsBeingInteracted final
{
public:
	bool                                          bIsBeingInteracted;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue; // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_VendingMachine_Consumables_C_GetIsBeingInteracted) == 0x000001, "Wrong alignment on E_VendingMachine_Consumables_C_GetIsBeingInteracted");
static_assert(sizeof(E_VendingMachine_Consumables_C_GetIsBeingInteracted) == 0x000002, "Wrong size on E_VendingMachine_Consumables_C_GetIsBeingInteracted");
static_assert(offsetof(E_VendingMachine_Consumables_C_GetIsBeingInteracted, bIsBeingInteracted) == 0x000000, "Member 'E_VendingMachine_Consumables_C_GetIsBeingInteracted::bIsBeingInteracted' has a wrong offset!");
static_assert(offsetof(E_VendingMachine_Consumables_C_GetIsBeingInteracted, CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue) == 0x000001, "Member 'E_VendingMachine_Consumables_C_GetIsBeingInteracted::CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue' has a wrong offset!");

}

