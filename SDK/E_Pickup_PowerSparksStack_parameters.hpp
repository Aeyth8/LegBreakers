#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Pickup_PowerSparksStack

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function E_Pickup_PowerSparksStack.E_Pickup_PowerSparksStack_C.ExecuteUbergraph_E_Pickup_PowerSparksStack
// 0x0030 (0x0030 - 0x0000)
struct E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Context;                              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	ESnapNetWorldType                             CallFunc_SwitchSnapNetWorldType_WorldType;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B[0x1];                                       // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack) == 0x000008, "Wrong alignment on E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack");
static_assert(sizeof(E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack) == 0x000030, "Wrong size on E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack, EntryPoint) == 0x000000, "Member 'E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack::EntryPoint' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack, K2Node_Event_Context) == 0x000014, "Member 'E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack::K2Node_Event_Context' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000018, "Member 'E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack, CallFunc_SwitchSnapNetWorldType_WorldType) == 0x000028, "Member 'E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack::CallFunc_SwitchSnapNetWorldType_WorldType' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack, K2Node_SwitchEnum_CmpSuccess) == 0x000029, "Member 'E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack, K2Node_Event_EndPlayReason) == 0x00002A, "Member 'E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x00002C, "Member 'E_Pickup_PowerSparksStack_C_ExecuteUbergraph_E_Pickup_PowerSparksStack::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function E_Pickup_PowerSparksStack.E_Pickup_PowerSparksStack_C.OnReceiveIntContext
// 0x0004 (0x0004 - 0x0000)
struct E_Pickup_PowerSparksStack_C_OnReceiveIntContext final
{
public:
	int32                                         Context;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_PowerSparksStack_C_OnReceiveIntContext) == 0x000004, "Wrong alignment on E_Pickup_PowerSparksStack_C_OnReceiveIntContext");
static_assert(sizeof(E_Pickup_PowerSparksStack_C_OnReceiveIntContext) == 0x000004, "Wrong size on E_Pickup_PowerSparksStack_C_OnReceiveIntContext");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_OnReceiveIntContext, Context) == 0x000000, "Member 'E_Pickup_PowerSparksStack_C_OnReceiveIntContext::Context' has a wrong offset!");

// Function E_Pickup_PowerSparksStack.E_Pickup_PowerSparksStack_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct E_Pickup_PowerSparksStack_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_PowerSparksStack_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on E_Pickup_PowerSparksStack_C_ReceiveEndPlay");
static_assert(sizeof(E_Pickup_PowerSparksStack_C_ReceiveEndPlay) == 0x000001, "Wrong size on E_Pickup_PowerSparksStack_C_ReceiveEndPlay");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'E_Pickup_PowerSparksStack_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function E_Pickup_PowerSparksStack.E_Pickup_PowerSparksStack_C.TryPickUpBy
// 0x0150 (0x0150 - 0x0000)
struct E_Pickup_PowerSparksStack_C_TryPickUpBy final
{
public:
	class AActor*                                 Instigator_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo;                  // 0x0010(0x0088)(NoDestructor)
	class AMatchaSnapNetCharacterEntity*          K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A2[0x6];                                       // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo_1;                // 0x00A8(0x0088)(NoDestructor)
	int32                                         CallFunc_GetOwnerPlayerIndex_ReturnValue;          // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESnapNetWorldType                             CallFunc_SwitchSnapNetWorldType_WorldType;         // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AMatchaSnapNetPlayerEntity*             CallFunc_Get_ReturnValue;                          // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x3];                                      // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue; // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue_1; // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_PowerSparksStack_C_TryPickUpBy) == 0x000008, "Wrong alignment on E_Pickup_PowerSparksStack_C_TryPickUpBy");
static_assert(sizeof(E_Pickup_PowerSparksStack_C_TryPickUpBy) == 0x000150, "Wrong size on E_Pickup_PowerSparksStack_C_TryPickUpBy");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, Instigator_0) == 0x000000, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::Instigator_0' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, Success) == 0x000008, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::Success' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, K2Node_MakeStruct_CombinedFXInfo) == 0x000010, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::K2Node_MakeStruct_CombinedFXInfo' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity) == 0x000098, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, CallFunc_IsValid_ReturnValue) == 0x0000A1, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, K2Node_MakeStruct_CombinedFXInfo_1) == 0x0000A8, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::K2Node_MakeStruct_CombinedFXInfo_1' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, CallFunc_GetOwnerPlayerIndex_ReturnValue) == 0x000130, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::CallFunc_GetOwnerPlayerIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, CallFunc_SwitchSnapNetWorldType_WorldType) == 0x000134, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::CallFunc_SwitchSnapNetWorldType_WorldType' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, CallFunc_Get_ReturnValue) == 0x000138, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, K2Node_SwitchEnum_CmpSuccess) == 0x000140, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue) == 0x000144, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue_1) == 0x000148, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_TryPickUpBy, CallFunc_Add_IntInt_ReturnValue) == 0x00014C, "Member 'E_Pickup_PowerSparksStack_C_TryPickUpBy::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function E_Pickup_PowerSparksStack.E_Pickup_PowerSparksStack_C.GetInteractionPriority
// 0x0010 (0x0010 - 0x0000)
struct E_Pickup_PowerSparksStack_C_GetInteractionPriority final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_PowerSparksStack_C_GetInteractionPriority) == 0x000008, "Wrong alignment on E_Pickup_PowerSparksStack_C_GetInteractionPriority");
static_assert(sizeof(E_Pickup_PowerSparksStack_C_GetInteractionPriority) == 0x000010, "Wrong size on E_Pickup_PowerSparksStack_C_GetInteractionPriority");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_GetInteractionPriority, InteractingActor) == 0x000000, "Member 'E_Pickup_PowerSparksStack_C_GetInteractionPriority::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_Pickup_PowerSparksStack_C_GetInteractionPriority, ReturnValue) == 0x000008, "Member 'E_Pickup_PowerSparksStack_C_GetInteractionPriority::ReturnValue' has a wrong offset!");

}

