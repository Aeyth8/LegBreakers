#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_Leash

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTT_Leash.BTT_Leash_C.ExecuteUbergraph_BTT_Leash
// 0x0070 (0x0070 - 0x0000)
struct BTT_Leash_C_ExecuteUbergraph_BTT_Leash final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult;                 // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          Temp_byte_Variable;                                // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMatchaAICharacterEntity*               K2Node_DynamicCast_AsMatcha_AI_Character_Entity;   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSpawnLocation_ReturnValue;             // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue;      // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_1;               // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash) == 0x000008, "Wrong alignment on BTT_Leash_C_ExecuteUbergraph_BTT_Leash");
static_assert(sizeof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash) == 0x000070, "Wrong size on BTT_Leash_C_ExecuteUbergraph_BTT_Leash");
static_assert(offsetof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash, EntryPoint) == 0x000000, "Member 'BTT_Leash_C_ExecuteUbergraph_BTT_Leash::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BTT_Leash_C_ExecuteUbergraph_BTT_Leash::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BTT_Leash_C_ExecuteUbergraph_BTT_Leash::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash, K2Node_CustomEvent_MovementResult) == 0x000024, "Member 'BTT_Leash_C_ExecuteUbergraph_BTT_Leash::K2Node_CustomEvent_MovementResult' has a wrong offset!");
static_assert(offsetof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash, Temp_byte_Variable) == 0x000025, "Member 'BTT_Leash_C_ExecuteUbergraph_BTT_Leash::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash, K2Node_Event_OwnerController) == 0x000028, "Member 'BTT_Leash_C_ExecuteUbergraph_BTT_Leash::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash, K2Node_Event_ControlledPawn) == 0x000030, "Member 'BTT_Leash_C_ExecuteUbergraph_BTT_Leash::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash, K2Node_DynamicCast_AsMatcha_AI_Character_Entity) == 0x000038, "Member 'BTT_Leash_C_ExecuteUbergraph_BTT_Leash::K2Node_DynamicCast_AsMatcha_AI_Character_Entity' has a wrong offset!");
static_assert(offsetof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BTT_Leash_C_ExecuteUbergraph_BTT_Leash::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash, CallFunc_GetSpawnLocation_ReturnValue) == 0x000048, "Member 'BTT_Leash_C_ExecuteUbergraph_BTT_Leash::CallFunc_GetSpawnLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash, CallFunc_CreateMoveToProxyObject_ReturnValue) == 0x000060, "Member 'BTT_Leash_C_ExecuteUbergraph_BTT_Leash::CallFunc_CreateMoveToProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'BTT_Leash_C_ExecuteUbergraph_BTT_Leash::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Leash_C_ExecuteUbergraph_BTT_Leash, K2Node_CustomEvent_MovementResult_1) == 0x000069, "Member 'BTT_Leash_C_ExecuteUbergraph_BTT_Leash::K2Node_CustomEvent_MovementResult_1' has a wrong offset!");

// Function BTT_Leash.BTT_Leash_C.OnFail_FD98A3E546BAFA00B13061807A8D1A9F
// 0x0001 (0x0001 - 0x0000)
struct BTT_Leash_C_OnFail_FD98A3E546BAFA00B13061807A8D1A9F final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Leash_C_OnFail_FD98A3E546BAFA00B13061807A8D1A9F) == 0x000001, "Wrong alignment on BTT_Leash_C_OnFail_FD98A3E546BAFA00B13061807A8D1A9F");
static_assert(sizeof(BTT_Leash_C_OnFail_FD98A3E546BAFA00B13061807A8D1A9F) == 0x000001, "Wrong size on BTT_Leash_C_OnFail_FD98A3E546BAFA00B13061807A8D1A9F");
static_assert(offsetof(BTT_Leash_C_OnFail_FD98A3E546BAFA00B13061807A8D1A9F, MovementResult) == 0x000000, "Member 'BTT_Leash_C_OnFail_FD98A3E546BAFA00B13061807A8D1A9F::MovementResult' has a wrong offset!");

// Function BTT_Leash.BTT_Leash_C.OnSuccess_FD98A3E546BAFA00B13061807A8D1A9F
// 0x0001 (0x0001 - 0x0000)
struct BTT_Leash_C_OnSuccess_FD98A3E546BAFA00B13061807A8D1A9F final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Leash_C_OnSuccess_FD98A3E546BAFA00B13061807A8D1A9F) == 0x000001, "Wrong alignment on BTT_Leash_C_OnSuccess_FD98A3E546BAFA00B13061807A8D1A9F");
static_assert(sizeof(BTT_Leash_C_OnSuccess_FD98A3E546BAFA00B13061807A8D1A9F) == 0x000001, "Wrong size on BTT_Leash_C_OnSuccess_FD98A3E546BAFA00B13061807A8D1A9F");
static_assert(offsetof(BTT_Leash_C_OnSuccess_FD98A3E546BAFA00B13061807A8D1A9F, MovementResult) == 0x000000, "Member 'BTT_Leash_C_OnSuccess_FD98A3E546BAFA00B13061807A8D1A9F::MovementResult' has a wrong offset!");

// Function BTT_Leash.BTT_Leash_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_Leash_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Leash_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTT_Leash_C_ReceiveExecuteAI");
static_assert(sizeof(BTT_Leash_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTT_Leash_C_ReceiveExecuteAI");
static_assert(offsetof(BTT_Leash_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTT_Leash_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_Leash_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTT_Leash_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}
