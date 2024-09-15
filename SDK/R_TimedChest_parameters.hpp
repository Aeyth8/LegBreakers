#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: R_TimedChest

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "EChestState_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function R_TimedChest.R_TimedChest_C.BndEvt__CharacterRenderer_MatchaSnapNet_EntityRendererComponent_K2Node_ComponentBoundEvent_0_UpdateFromEntityDynamicDelegate__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct R_TimedChest_C_BndEvt__CharacterRenderer_MatchaSnapNet_EntityRendererComponent_K2Node_ComponentBoundEvent_0_UpdateFromEntityDynamicDelegate__DelegateSignature final
{
public:
	const class USnapNetEntityComponent*          EntityComponent;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Teleported;                                        // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_TimedChest_C_BndEvt__CharacterRenderer_MatchaSnapNet_EntityRendererComponent_K2Node_ComponentBoundEvent_0_UpdateFromEntityDynamicDelegate__DelegateSignature) == 0x000008, "Wrong alignment on R_TimedChest_C_BndEvt__CharacterRenderer_MatchaSnapNet_EntityRendererComponent_K2Node_ComponentBoundEvent_0_UpdateFromEntityDynamicDelegate__DelegateSignature");
static_assert(sizeof(R_TimedChest_C_BndEvt__CharacterRenderer_MatchaSnapNet_EntityRendererComponent_K2Node_ComponentBoundEvent_0_UpdateFromEntityDynamicDelegate__DelegateSignature) == 0x000010, "Wrong size on R_TimedChest_C_BndEvt__CharacterRenderer_MatchaSnapNet_EntityRendererComponent_K2Node_ComponentBoundEvent_0_UpdateFromEntityDynamicDelegate__DelegateSignature");
static_assert(offsetof(R_TimedChest_C_BndEvt__CharacterRenderer_MatchaSnapNet_EntityRendererComponent_K2Node_ComponentBoundEvent_0_UpdateFromEntityDynamicDelegate__DelegateSignature, EntityComponent) == 0x000000, "Member 'R_TimedChest_C_BndEvt__CharacterRenderer_MatchaSnapNet_EntityRendererComponent_K2Node_ComponentBoundEvent_0_UpdateFromEntityDynamicDelegate__DelegateSignature::EntityComponent' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_BndEvt__CharacterRenderer_MatchaSnapNet_EntityRendererComponent_K2Node_ComponentBoundEvent_0_UpdateFromEntityDynamicDelegate__DelegateSignature, DeltaSeconds) == 0x000008, "Member 'R_TimedChest_C_BndEvt__CharacterRenderer_MatchaSnapNet_EntityRendererComponent_K2Node_ComponentBoundEvent_0_UpdateFromEntityDynamicDelegate__DelegateSignature::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_BndEvt__CharacterRenderer_MatchaSnapNet_EntityRendererComponent_K2Node_ComponentBoundEvent_0_UpdateFromEntityDynamicDelegate__DelegateSignature, Teleported) == 0x00000C, "Member 'R_TimedChest_C_BndEvt__CharacterRenderer_MatchaSnapNet_EntityRendererComponent_K2Node_ComponentBoundEvent_0_UpdateFromEntityDynamicDelegate__DelegateSignature::Teleported' has a wrong offset!");

// Function R_TimedChest.R_TimedChest_C.ExecuteUbergraph_R_TimedChest
// 0x0108 (0x0108 - 0x0000)
struct R_TimedChest_C_ExecuteUbergraph_R_TimedChest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDamage_ReturnValue;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue; // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_1;                      // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_SnapNetPropertyEnumToByte_ReturnValue; // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Duration;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class USnapNetEntityComponent*          K2Node_ComponentBoundEvent_entityComponent;        // 0x0060(0x0008)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_DeltaSeconds;           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_teleported;             // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E[0x2];                                       // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AE_TimedChest_C*                        K2Node_DynamicCast_AsE_Timed_Chest;                // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue; // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue_1; // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetWidget_ReturnValue;                    // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_SnapNetPropertyEnumToByte_ReturnValue_1; // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_HealthBar_C*                       K2Node_DynamicCast_AsWBP_Health_Bar;               // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AB[0x5];                                       // 0x00AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventRenderer_ReturnValue;              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventLocation_ReturnValue;              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventLocation_ReturnValue_1;            // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Round_A_ImplicitCast;                     // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Round_A_ImplicitCast_1;                   // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest) == 0x000008, "Wrong alignment on R_TimedChest_C_ExecuteUbergraph_R_TimedChest");
static_assert(sizeof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest) == 0x000108, "Wrong size on R_TimedChest_C_ExecuteUbergraph_R_TimedChest");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, EntryPoint) == 0x000000, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::EntryPoint' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_GetDamage_ReturnValue) == 0x000014, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_GetDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_Round_ReturnValue) == 0x000020, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000028, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue) == 0x000030, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_Round_ReturnValue_1) == 0x000034, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_Round_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_Conv_SnapNetPropertyEnumToByte_ReturnValue) == 0x000038, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_Conv_SnapNetPropertyEnumToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000040, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_GetValidValue_ReturnValue) == 0x000048, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, K2Node_CustomEvent_Duration) == 0x00004C, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::K2Node_CustomEvent_Duration' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, Temp_int_Variable) == 0x000050, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_Subtract_IntInt_ReturnValue) == 0x000054, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000058, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, K2Node_ComponentBoundEvent_entityComponent) == 0x000060, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::K2Node_ComponentBoundEvent_entityComponent' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, K2Node_ComponentBoundEvent_DeltaSeconds) == 0x000068, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::K2Node_ComponentBoundEvent_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, K2Node_ComponentBoundEvent_teleported) == 0x00006C, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::K2Node_ComponentBoundEvent_teleported' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00006D, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_GetOwner_ReturnValue) == 0x000070, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, K2Node_DynamicCast_AsE_Timed_Chest) == 0x000078, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::K2Node_DynamicCast_AsE_Timed_Chest' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue) == 0x000084, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue_1) == 0x000088, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_GetWidget_ReturnValue) == 0x000090, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_GetWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_Conv_SnapNetPropertyEnumToByte_ReturnValue_1) == 0x000098, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_Conv_SnapNetPropertyEnumToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, K2Node_DynamicCast_AsWBP_Health_Bar) == 0x0000A0, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::K2Node_DynamicCast_AsWBP_Health_Bar' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_GetValidValue_ReturnValue_1) == 0x0000A9, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x0000AA, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000B0, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_AkEventRenderer_ReturnValue) == 0x0000C8, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_AkEventRenderer_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_AkEventLocation_ReturnValue) == 0x0000CC, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_AkEventLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, K2Node_SwitchEnum_CmpSuccess) == 0x0000D0, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x0000D8, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_AkEventLocation_ReturnValue_1) == 0x0000F0, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_AkEventLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_Round_A_ImplicitCast) == 0x0000F8, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_Round_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ExecuteUbergraph_R_TimedChest, CallFunc_Round_A_ImplicitCast_1) == 0x000100, "Member 'R_TimedChest_C_ExecuteUbergraph_R_TimedChest::CallFunc_Round_A_ImplicitCast_1' has a wrong offset!");

// Function R_TimedChest.R_TimedChest_C.GetCompassIndicatorWidgetClass
// 0x0008 (0x0008 - 0x0000)
struct R_TimedChest_C_GetCompassIndicatorWidgetClass final
{
public:
	TSubclassOf<class UOdyCompassIndicatorWidget> ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(R_TimedChest_C_GetCompassIndicatorWidgetClass) == 0x000008, "Wrong alignment on R_TimedChest_C_GetCompassIndicatorWidgetClass");
static_assert(sizeof(R_TimedChest_C_GetCompassIndicatorWidgetClass) == 0x000008, "Wrong size on R_TimedChest_C_GetCompassIndicatorWidgetClass");
static_assert(offsetof(R_TimedChest_C_GetCompassIndicatorWidgetClass, ReturnValue) == 0x000000, "Member 'R_TimedChest_C_GetCompassIndicatorWidgetClass::ReturnValue' has a wrong offset!");

// Function R_TimedChest.R_TimedChest_C.GetIndicatorWidgetClass
// 0x0008 (0x0008 - 0x0000)
struct R_TimedChest_C_GetIndicatorWidgetClass final
{
public:
	TSubclassOf<class UOdyMinimapIndicatorWidget> ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(R_TimedChest_C_GetIndicatorWidgetClass) == 0x000008, "Wrong alignment on R_TimedChest_C_GetIndicatorWidgetClass");
static_assert(sizeof(R_TimedChest_C_GetIndicatorWidgetClass) == 0x000008, "Wrong size on R_TimedChest_C_GetIndicatorWidgetClass");
static_assert(offsetof(R_TimedChest_C_GetIndicatorWidgetClass, ReturnValue) == 0x000000, "Member 'R_TimedChest_C_GetIndicatorWidgetClass::ReturnValue' has a wrong offset!");

// Function R_TimedChest.R_TimedChest_C.StartTimer
// 0x0004 (0x0004 - 0x0000)
struct R_TimedChest_C_StartTimer final
{
public:
	int32                                         Duration;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_TimedChest_C_StartTimer) == 0x000004, "Wrong alignment on R_TimedChest_C_StartTimer");
static_assert(sizeof(R_TimedChest_C_StartTimer) == 0x000004, "Wrong size on R_TimedChest_C_StartTimer");
static_assert(offsetof(R_TimedChest_C_StartTimer, Duration) == 0x000000, "Member 'R_TimedChest_C_StartTimer::Duration' has a wrong offset!");

// Function R_TimedChest.R_TimedChest_C.UpdateHealthBar
// 0x0002 (0x0002 - 0x0000)
struct R_TimedChest_C_UpdateHealthBar final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_TimedChest_C_UpdateHealthBar) == 0x000001, "Wrong alignment on R_TimedChest_C_UpdateHealthBar");
static_assert(sizeof(R_TimedChest_C_UpdateHealthBar) == 0x000002, "Wrong size on R_TimedChest_C_UpdateHealthBar");
static_assert(offsetof(R_TimedChest_C_UpdateHealthBar, Enable) == 0x000000, "Member 'R_TimedChest_C_UpdateHealthBar::Enable' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_UpdateHealthBar, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'R_TimedChest_C_UpdateHealthBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function R_TimedChest.R_TimedChest_C.UpdateLockStateVisuals
// 0x0008 (0x0008 - 0x0000)
struct R_TimedChest_C_UpdateLockStateVisuals final
{
public:
	int32                                         RemainingTimeToUnlock;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EChestState                                   ChestState;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_TimedChest_C_UpdateLockStateVisuals) == 0x000004, "Wrong alignment on R_TimedChest_C_UpdateLockStateVisuals");
static_assert(sizeof(R_TimedChest_C_UpdateLockStateVisuals) == 0x000008, "Wrong size on R_TimedChest_C_UpdateLockStateVisuals");
static_assert(offsetof(R_TimedChest_C_UpdateLockStateVisuals, RemainingTimeToUnlock) == 0x000000, "Member 'R_TimedChest_C_UpdateLockStateVisuals::RemainingTimeToUnlock' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_UpdateLockStateVisuals, ChestState) == 0x000004, "Member 'R_TimedChest_C_UpdateLockStateVisuals::ChestState' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_UpdateLockStateVisuals, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'R_TimedChest_C_UpdateLockStateVisuals::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function R_TimedChest.R_TimedChest_C.UpdateTimerText
// 0x0018 (0x0018 - 0x0000)
struct R_TimedChest_C_UpdateTimerText final
{
public:
	int32                                         RemainingTime;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0010)()
};
static_assert(alignof(R_TimedChest_C_UpdateTimerText) == 0x000008, "Wrong alignment on R_TimedChest_C_UpdateTimerText");
static_assert(sizeof(R_TimedChest_C_UpdateTimerText) == 0x000018, "Wrong size on R_TimedChest_C_UpdateTimerText");
static_assert(offsetof(R_TimedChest_C_UpdateTimerText, RemainingTime) == 0x000000, "Member 'R_TimedChest_C_UpdateTimerText::RemainingTime' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_UpdateTimerText, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'R_TimedChest_C_UpdateTimerText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function R_TimedChest.R_TimedChest_C.GetIndicatorWorldExtent
// 0x0018 (0x0018 - 0x0000)
struct R_TimedChest_C_GetIndicatorWorldExtent final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_TimedChest_C_GetIndicatorWorldExtent) == 0x000008, "Wrong alignment on R_TimedChest_C_GetIndicatorWorldExtent");
static_assert(sizeof(R_TimedChest_C_GetIndicatorWorldExtent) == 0x000018, "Wrong size on R_TimedChest_C_GetIndicatorWorldExtent");
static_assert(offsetof(R_TimedChest_C_GetIndicatorWorldExtent, ReturnValue) == 0x000000, "Member 'R_TimedChest_C_GetIndicatorWorldExtent::ReturnValue' has a wrong offset!");

// Function R_TimedChest.R_TimedChest_C.GetIndicatorWorldPosition
// 0x0030 (0x0030 - 0x0000)
struct R_TimedChest_C_GetIndicatorWorldPosition final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_TimedChest_C_GetIndicatorWorldPosition) == 0x000008, "Wrong alignment on R_TimedChest_C_GetIndicatorWorldPosition");
static_assert(sizeof(R_TimedChest_C_GetIndicatorWorldPosition) == 0x000030, "Wrong size on R_TimedChest_C_GetIndicatorWorldPosition");
static_assert(offsetof(R_TimedChest_C_GetIndicatorWorldPosition, ReturnValue) == 0x000000, "Member 'R_TimedChest_C_GetIndicatorWorldPosition::ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_GetIndicatorWorldPosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'R_TimedChest_C_GetIndicatorWorldPosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function R_TimedChest.R_TimedChest_C.SetupIndicatorInstance
// 0x0008 (0x0008 - 0x0000)
struct R_TimedChest_C_SetupIndicatorInstance final
{
public:
	class UOdyMinimapIndicatorWidget*             IndicatorInstance;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_TimedChest_C_SetupIndicatorInstance) == 0x000008, "Wrong alignment on R_TimedChest_C_SetupIndicatorInstance");
static_assert(sizeof(R_TimedChest_C_SetupIndicatorInstance) == 0x000008, "Wrong size on R_TimedChest_C_SetupIndicatorInstance");
static_assert(offsetof(R_TimedChest_C_SetupIndicatorInstance, IndicatorInstance) == 0x000000, "Member 'R_TimedChest_C_SetupIndicatorInstance::IndicatorInstance' has a wrong offset!");

// Function R_TimedChest.R_TimedChest_C.ShouldCompassIndicatorBeVisible
// 0x0010 (0x0010 - 0x0000)
struct R_TimedChest_C_ShouldCompassIndicatorBeVisible final
{
public:
	class APlayerController*                      InPlayerController;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_TimedChest_C_ShouldCompassIndicatorBeVisible) == 0x000008, "Wrong alignment on R_TimedChest_C_ShouldCompassIndicatorBeVisible");
static_assert(sizeof(R_TimedChest_C_ShouldCompassIndicatorBeVisible) == 0x000010, "Wrong size on R_TimedChest_C_ShouldCompassIndicatorBeVisible");
static_assert(offsetof(R_TimedChest_C_ShouldCompassIndicatorBeVisible, InPlayerController) == 0x000000, "Member 'R_TimedChest_C_ShouldCompassIndicatorBeVisible::InPlayerController' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ShouldCompassIndicatorBeVisible, ReturnValue) == 0x000008, "Member 'R_TimedChest_C_ShouldCompassIndicatorBeVisible::ReturnValue' has a wrong offset!");

// Function R_TimedChest.R_TimedChest_C.ShouldIndicatorBeVisible
// 0x0010 (0x0010 - 0x0000)
struct R_TimedChest_C_ShouldIndicatorBeVisible final
{
public:
	class APlayerController*                      InPlayerController;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_TimedChest_C_ShouldIndicatorBeVisible) == 0x000008, "Wrong alignment on R_TimedChest_C_ShouldIndicatorBeVisible");
static_assert(sizeof(R_TimedChest_C_ShouldIndicatorBeVisible) == 0x000010, "Wrong size on R_TimedChest_C_ShouldIndicatorBeVisible");
static_assert(offsetof(R_TimedChest_C_ShouldIndicatorBeVisible, InPlayerController) == 0x000000, "Member 'R_TimedChest_C_ShouldIndicatorBeVisible::InPlayerController' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ShouldIndicatorBeVisible, ReturnValue) == 0x000008, "Member 'R_TimedChest_C_ShouldIndicatorBeVisible::ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_ShouldIndicatorBeVisible, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000009, "Member 'R_TimedChest_C_ShouldIndicatorBeVisible::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function R_TimedChest.R_TimedChest_C.TickIndicator
// 0x0030 (0x0030 - 0x0000)
struct R_TimedChest_C_TickIndicator final
{
public:
	class UOdyMinimapIndicatorWidget*             WidgetInstance;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Minimap_TimedChest_C*              K2Node_DynamicCast_AsWBP_Minimap_Timed_Chest;      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SafeDivide_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_TimedChest_C_TickIndicator) == 0x000008, "Wrong alignment on R_TimedChest_C_TickIndicator");
static_assert(sizeof(R_TimedChest_C_TickIndicator) == 0x000030, "Wrong size on R_TimedChest_C_TickIndicator");
static_assert(offsetof(R_TimedChest_C_TickIndicator, WidgetInstance) == 0x000000, "Member 'R_TimedChest_C_TickIndicator::WidgetInstance' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_TickIndicator, K2Node_DynamicCast_AsWBP_Minimap_Timed_Chest) == 0x000008, "Member 'R_TimedChest_C_TickIndicator::K2Node_DynamicCast_AsWBP_Minimap_Timed_Chest' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_TickIndicator, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'R_TimedChest_C_TickIndicator::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_TickIndicator, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000018, "Member 'R_TimedChest_C_TickIndicator::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_TickIndicator, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000020, "Member 'R_TimedChest_C_TickIndicator::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(R_TimedChest_C_TickIndicator, CallFunc_SafeDivide_ReturnValue) == 0x000028, "Member 'R_TimedChest_C_TickIndicator::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");

}

