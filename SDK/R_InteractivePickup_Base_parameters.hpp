#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: R_InteractivePickup_Base

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function R_InteractivePickup_Base.R_InteractivePickup_Base_C.ExecuteUbergraph_R_InteractivePickup_Base
// 0x0028 (0x0028 - 0x0000)
struct R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class AMatchaSnapNetInteractiveEntity*  K2Node_Event_EntityActor;                          // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APickup_Base_C*                         K2Node_DynamicCast_AsPickup_Base;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue; // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base) == 0x000008, "Wrong alignment on R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base");
static_assert(sizeof(R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base) == 0x000028, "Wrong size on R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base");
static_assert(offsetof(R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base, EntryPoint) == 0x000000, "Member 'R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base, K2Node_Event_EntityActor) == 0x000008, "Member 'R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base::K2Node_Event_EntityActor' has a wrong offset!");
static_assert(offsetof(R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base, K2Node_DynamicCast_AsPickup_Base) == 0x000018, "Member 'R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base::K2Node_DynamicCast_AsPickup_Base' has a wrong offset!");
static_assert(offsetof(R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base, CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue) == 0x000021, "Member 'R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base::CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base, CallFunc_Not_PreBool_ReturnValue) == 0x000022, "Member 'R_InteractivePickup_Base_C_ExecuteUbergraph_R_InteractivePickup_Base::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function R_InteractivePickup_Base.R_InteractivePickup_Base_C.K2_OnUpdateFromEntity
// 0x0010 (0x0010 - 0x0000)
struct R_InteractivePickup_Base_C_K2_OnUpdateFromEntity final
{
public:
	const class AMatchaSnapNetInteractiveEntity*  EntityActor;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_InteractivePickup_Base_C_K2_OnUpdateFromEntity) == 0x000008, "Wrong alignment on R_InteractivePickup_Base_C_K2_OnUpdateFromEntity");
static_assert(sizeof(R_InteractivePickup_Base_C_K2_OnUpdateFromEntity) == 0x000010, "Wrong size on R_InteractivePickup_Base_C_K2_OnUpdateFromEntity");
static_assert(offsetof(R_InteractivePickup_Base_C_K2_OnUpdateFromEntity, EntityActor) == 0x000000, "Member 'R_InteractivePickup_Base_C_K2_OnUpdateFromEntity::EntityActor' has a wrong offset!");
static_assert(offsetof(R_InteractivePickup_Base_C_K2_OnUpdateFromEntity, DeltaSeconds) == 0x000008, "Member 'R_InteractivePickup_Base_C_K2_OnUpdateFromEntity::DeltaSeconds' has a wrong offset!");

// Function R_InteractivePickup_Base.R_InteractivePickup_Base_C.GetInteractionPromptLocation
// 0x0058 (0x0058 - 0x0000)
struct R_InteractivePickup_Base_C_GetInteractionPromptLocation final
{
public:
	const class AActor*                           InteractingRenderer;                               // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_InteractivePickup_Base_C_GetInteractionPromptLocation) == 0x000008, "Wrong alignment on R_InteractivePickup_Base_C_GetInteractionPromptLocation");
static_assert(sizeof(R_InteractivePickup_Base_C_GetInteractionPromptLocation) == 0x000058, "Wrong size on R_InteractivePickup_Base_C_GetInteractionPromptLocation");
static_assert(offsetof(R_InteractivePickup_Base_C_GetInteractionPromptLocation, InteractingRenderer) == 0x000000, "Member 'R_InteractivePickup_Base_C_GetInteractionPromptLocation::InteractingRenderer' has a wrong offset!");
static_assert(offsetof(R_InteractivePickup_Base_C_GetInteractionPromptLocation, ReturnValue) == 0x000008, "Member 'R_InteractivePickup_Base_C_GetInteractionPromptLocation::ReturnValue' has a wrong offset!");
static_assert(offsetof(R_InteractivePickup_Base_C_GetInteractionPromptLocation, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000020, "Member 'R_InteractivePickup_Base_C_GetInteractionPromptLocation::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_InteractivePickup_Base_C_GetInteractionPromptLocation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000028, "Member 'R_InteractivePickup_Base_C_GetInteractionPromptLocation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_InteractivePickup_Base_C_GetInteractionPromptLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000040, "Member 'R_InteractivePickup_Base_C_GetInteractionPromptLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

}

