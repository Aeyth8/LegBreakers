#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_TunnelGate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function E_TunnelGate.E_TunnelGate_C.ExecuteUbergraph_E_TunnelGate
// 0x00F8 (0x00F8 - 0x0000)
struct E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_SnapNetPropertyVectorToVector_ReturnValue; // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_SnapNetPropertyVectorToVector_ReturnValue_1; // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InteractingActor;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESnapNetWorldType                             CallFunc_SwitchSnapNetWorldType_WorldType;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue_1; // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESnapNetWorldType                             CallFunc_SwitchSnapNetWorldType_WorldType_1;       // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E[0x2];                                       // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetComponentBounds_Origin_1;              // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent_1;           // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius_1;        // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetValue_value_ImplicitCast;              // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetValue_value_ImplicitCast_1;            // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate) == 0x000008, "Wrong alignment on E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate");
static_assert(sizeof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate) == 0x0000F8, "Wrong size on E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, EntryPoint) == 0x000000, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::EntryPoint' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_Conv_SnapNetPropertyVectorToVector_ReturnValue) == 0x000008, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_Conv_SnapNetPropertyVectorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_Conv_SnapNetPropertyVectorToVector_ReturnValue_1) == 0x000020, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_Conv_SnapNetPropertyVectorToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, K2Node_Event_DeltaSeconds) == 0x000038, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, K2Node_Event_InteractingActor) == 0x000040, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::K2Node_Event_InteractingActor' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue) == 0x000048, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000050, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_SwitchSnapNetWorldType_WorldType) == 0x000058, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_SwitchSnapNetWorldType_WorldType' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, K2Node_SwitchEnum_CmpSuccess) == 0x000059, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue_1) == 0x00005C, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000060, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_GetComponentBounds_Origin) == 0x000068, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_GetComponentBounds_BoxExtent) == 0x000080, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_GetComponentBounds_SphereRadius) == 0x000098, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_SwitchSnapNetWorldType_WorldType_1) == 0x00009C, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_SwitchSnapNetWorldType_WorldType_1' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, K2Node_SwitchEnum_CmpSuccess_1) == 0x00009D, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_GetComponentBounds_Origin_1) == 0x0000A0, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_GetComponentBounds_Origin_1' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_GetComponentBounds_BoxExtent_1) == 0x0000B8, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_GetComponentBounds_BoxExtent_1' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_GetComponentBounds_SphereRadius_1) == 0x0000D0, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_GetComponentBounds_SphereRadius_1' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0000D8, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x0000E0, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_SetValue_value_ImplicitCast) == 0x0000E8, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_SetValue_value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_SetValue_value_ImplicitCast_1) == 0x0000EC, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_SetValue_value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0000F0, "Member 'E_TunnelGate_C_ExecuteUbergraph_E_TunnelGate::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function E_TunnelGate.E_TunnelGate_C.InteractionCompleted
// 0x0008 (0x0008 - 0x0000)
struct E_TunnelGate_C_InteractionCompleted final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TunnelGate_C_InteractionCompleted) == 0x000008, "Wrong alignment on E_TunnelGate_C_InteractionCompleted");
static_assert(sizeof(E_TunnelGate_C_InteractionCompleted) == 0x000008, "Wrong size on E_TunnelGate_C_InteractionCompleted");
static_assert(offsetof(E_TunnelGate_C_InteractionCompleted, InteractingActor) == 0x000000, "Member 'E_TunnelGate_C_InteractionCompleted::InteractingActor' has a wrong offset!");

// Function E_TunnelGate.E_TunnelGate_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct E_TunnelGate_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TunnelGate_C_ReceiveTick) == 0x000004, "Wrong alignment on E_TunnelGate_C_ReceiveTick");
static_assert(sizeof(E_TunnelGate_C_ReceiveTick) == 0x000004, "Wrong size on E_TunnelGate_C_ReceiveTick");
static_assert(offsetof(E_TunnelGate_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'E_TunnelGate_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function E_TunnelGate.E_TunnelGate_C.UpdateCollision
// 0x0010 (0x0010 - 0x0000)
struct E_TunnelGate_C_UpdateCollision final
{
public:
	float                                         CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue; // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TunnelGate_C_UpdateCollision) == 0x000008, "Wrong alignment on E_TunnelGate_C_UpdateCollision");
static_assert(sizeof(E_TunnelGate_C_UpdateCollision) == 0x000010, "Wrong size on E_TunnelGate_C_UpdateCollision");
static_assert(offsetof(E_TunnelGate_C_UpdateCollision, CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue) == 0x000000, "Member 'E_TunnelGate_C_UpdateCollision::CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_UpdateCollision, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000004, "Member 'E_TunnelGate_C_UpdateCollision::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_UpdateCollision, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000008, "Member 'E_TunnelGate_C_UpdateCollision::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function E_TunnelGate.E_TunnelGate_C.UserConstructionScript
// 0x0030 (0x0030 - 0x0000)
struct E_TunnelGate_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_Conv_SnapNetPropertyVectorToVector_ReturnValue; // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_SnapNetPropertyVectorToVector_ReturnValue_1; // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TunnelGate_C_UserConstructionScript) == 0x000008, "Wrong alignment on E_TunnelGate_C_UserConstructionScript");
static_assert(sizeof(E_TunnelGate_C_UserConstructionScript) == 0x000030, "Wrong size on E_TunnelGate_C_UserConstructionScript");
static_assert(offsetof(E_TunnelGate_C_UserConstructionScript, CallFunc_Conv_SnapNetPropertyVectorToVector_ReturnValue) == 0x000000, "Member 'E_TunnelGate_C_UserConstructionScript::CallFunc_Conv_SnapNetPropertyVectorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_UserConstructionScript, CallFunc_Conv_SnapNetPropertyVectorToVector_ReturnValue_1) == 0x000018, "Member 'E_TunnelGate_C_UserConstructionScript::CallFunc_Conv_SnapNetPropertyVectorToVector_ReturnValue_1' has a wrong offset!");

// Function E_TunnelGate.E_TunnelGate_C.CanStartInteraction
// 0x0020 (0x0020 - 0x0000)
struct E_TunnelGate_C_CanStartInteraction final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue; // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_SnapNetPropertyEntityIndexToInt_ReturnValue; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17[0x1];                                       // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TunnelGate_C_CanStartInteraction) == 0x000008, "Wrong alignment on E_TunnelGate_C_CanStartInteraction");
static_assert(sizeof(E_TunnelGate_C_CanStartInteraction) == 0x000020, "Wrong size on E_TunnelGate_C_CanStartInteraction");
static_assert(offsetof(E_TunnelGate_C_CanStartInteraction, InteractingActor) == 0x000000, "Member 'E_TunnelGate_C_CanStartInteraction::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_CanStartInteraction, ReturnValue) == 0x000008, "Member 'E_TunnelGate_C_CanStartInteraction::ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_CanStartInteraction, CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue) == 0x00000C, "Member 'E_TunnelGate_C_CanStartInteraction::CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_CanStartInteraction, CallFunc_Conv_SnapNetPropertyEntityIndexToInt_ReturnValue) == 0x000010, "Member 'E_TunnelGate_C_CanStartInteraction::CallFunc_Conv_SnapNetPropertyEntityIndexToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_CanStartInteraction, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000014, "Member 'E_TunnelGate_C_CanStartInteraction::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_CanStartInteraction, CallFunc_Less_IntInt_ReturnValue) == 0x000015, "Member 'E_TunnelGate_C_CanStartInteraction::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_CanStartInteraction, CallFunc_BooleanAND_ReturnValue) == 0x000016, "Member 'E_TunnelGate_C_CanStartInteraction::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_CanStartInteraction, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000018, "Member 'E_TunnelGate_C_CanStartInteraction::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function E_TunnelGate.E_TunnelGate_C.GetPlayerColliderBounds
// 0x0030 (0x0030 - 0x0000)
struct E_TunnelGate_C_GetPlayerColliderBounds final
{
public:
	struct FVector                                OutOrigin;                                         // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OutBounds;                                         // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_TunnelGate_C_GetPlayerColliderBounds) == 0x000008, "Wrong alignment on E_TunnelGate_C_GetPlayerColliderBounds");
static_assert(sizeof(E_TunnelGate_C_GetPlayerColliderBounds) == 0x000030, "Wrong size on E_TunnelGate_C_GetPlayerColliderBounds");
static_assert(offsetof(E_TunnelGate_C_GetPlayerColliderBounds, OutOrigin) == 0x000000, "Member 'E_TunnelGate_C_GetPlayerColliderBounds::OutOrigin' has a wrong offset!");
static_assert(offsetof(E_TunnelGate_C_GetPlayerColliderBounds, OutBounds) == 0x000018, "Member 'E_TunnelGate_C_GetPlayerColliderBounds::OutBounds' has a wrong offset!");

}

