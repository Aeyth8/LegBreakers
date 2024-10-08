#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_Patrol

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTT_Patrol.BTT_Patrol_C.ExecuteUbergraph_BTT_Patrol
// 0x00C8 (0x00C8 - 0x0000)
struct BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_1;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          Temp_byte_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMatchaAICharacterEntity*               K2Node_DynamicCast_AsMatcha_AI_Character_Entity;   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation; // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue;      // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol) == 0x000008, "Wrong alignment on BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol");
static_assert(sizeof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol) == 0x0000C8, "Wrong size on BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, EntryPoint) == 0x000000, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, K2Node_CustomEvent_MovementResult_1) == 0x000004, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::K2Node_CustomEvent_MovementResult_1' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, K2Node_CustomEvent_MovementResult) == 0x000018, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::K2Node_CustomEvent_MovementResult' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, Temp_byte_Variable) == 0x00002C, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, K2Node_Event_OwnerController) == 0x000030, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, K2Node_Event_ControlledPawn) == 0x000038, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, K2Node_DynamicCast_AsMatcha_AI_Character_Entity) == 0x000040, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::K2Node_DynamicCast_AsMatcha_AI_Character_Entity' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x000050, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation) == 0x000068, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue) == 0x000080, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, CallFunc_BreakVector_X) == 0x000088, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, CallFunc_BreakVector_Y) == 0x000090, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, CallFunc_BreakVector_Z) == 0x000098, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, CallFunc_MakeVector_ReturnValue) == 0x0000A0, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, CallFunc_CreateMoveToProxyObject_ReturnValue) == 0x0000B8, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::CallFunc_CreateMoveToProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'BTT_Patrol_C_ExecuteUbergraph_BTT_Patrol::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BTT_Patrol.BTT_Patrol_C.OnFail_C9E644764ADEEE054F4797B7B7E62784
// 0x0001 (0x0001 - 0x0000)
struct BTT_Patrol_C_OnFail_C9E644764ADEEE054F4797B7B7E62784 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Patrol_C_OnFail_C9E644764ADEEE054F4797B7B7E62784) == 0x000001, "Wrong alignment on BTT_Patrol_C_OnFail_C9E644764ADEEE054F4797B7B7E62784");
static_assert(sizeof(BTT_Patrol_C_OnFail_C9E644764ADEEE054F4797B7B7E62784) == 0x000001, "Wrong size on BTT_Patrol_C_OnFail_C9E644764ADEEE054F4797B7B7E62784");
static_assert(offsetof(BTT_Patrol_C_OnFail_C9E644764ADEEE054F4797B7B7E62784, MovementResult) == 0x000000, "Member 'BTT_Patrol_C_OnFail_C9E644764ADEEE054F4797B7B7E62784::MovementResult' has a wrong offset!");

// Function BTT_Patrol.BTT_Patrol_C.OnSuccess_C9E644764ADEEE054F4797B7B7E62784
// 0x0001 (0x0001 - 0x0000)
struct BTT_Patrol_C_OnSuccess_C9E644764ADEEE054F4797B7B7E62784 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Patrol_C_OnSuccess_C9E644764ADEEE054F4797B7B7E62784) == 0x000001, "Wrong alignment on BTT_Patrol_C_OnSuccess_C9E644764ADEEE054F4797B7B7E62784");
static_assert(sizeof(BTT_Patrol_C_OnSuccess_C9E644764ADEEE054F4797B7B7E62784) == 0x000001, "Wrong size on BTT_Patrol_C_OnSuccess_C9E644764ADEEE054F4797B7B7E62784");
static_assert(offsetof(BTT_Patrol_C_OnSuccess_C9E644764ADEEE054F4797B7B7E62784, MovementResult) == 0x000000, "Member 'BTT_Patrol_C_OnSuccess_C9E644764ADEEE054F4797B7B7E62784::MovementResult' has a wrong offset!");

// Function BTT_Patrol.BTT_Patrol_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_Patrol_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Patrol_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTT_Patrol_C_ReceiveExecuteAI");
static_assert(sizeof(BTT_Patrol_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTT_Patrol_C_ReceiveExecuteAI");
static_assert(offsetof(BTT_Patrol_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTT_Patrol_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_Patrol_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTT_Patrol_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

