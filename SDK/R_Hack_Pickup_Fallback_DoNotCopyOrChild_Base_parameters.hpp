#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base.R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C.ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base
// 0x0038 (0x0038 - 0x0000)
struct R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class AMatchaSnapNetInteractiveEntity*  K2Node_Event_EntityActor;                          // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ItemPickup_Base_C*                  K2Node_DynamicCast_AsBP_Item_Pickup_Base;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaItemAsset*                       CallFunc_GetItem_Item;                             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base) == 0x000008, "Wrong alignment on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base");
static_assert(sizeof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base) == 0x000038, "Wrong size on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base, EntryPoint) == 0x000000, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base, K2Node_Event_EntityActor) == 0x000008, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base::K2Node_Event_EntityActor' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base, K2Node_DynamicCast_AsBP_Item_Pickup_Base) == 0x000018, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base::K2Node_DynamicCast_AsBP_Item_Pickup_Base' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000021, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base, CallFunc_GetItem_Item) == 0x000028, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base::CallFunc_GetItem_Item' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base, CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue) == 0x000030, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base::CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base, CallFunc_IsValid_ReturnValue) == 0x000032, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base.R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C.GetCompassIndicatorWidgetClass
// 0x0008 (0x0008 - 0x0000)
struct R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetCompassIndicatorWidgetClass final
{
public:
	TSubclassOf<class UOdyCompassIndicatorWidget> ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetCompassIndicatorWidgetClass) == 0x000008, "Wrong alignment on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetCompassIndicatorWidgetClass");
static_assert(sizeof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetCompassIndicatorWidgetClass) == 0x000008, "Wrong size on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetCompassIndicatorWidgetClass");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetCompassIndicatorWidgetClass, ReturnValue) == 0x000000, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetCompassIndicatorWidgetClass::ReturnValue' has a wrong offset!");

// Function R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base.R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C.GetIndicatorWidgetClass
// 0x0008 (0x0008 - 0x0000)
struct R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWidgetClass final
{
public:
	TSubclassOf<class UOdyMinimapIndicatorWidget> ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWidgetClass) == 0x000008, "Wrong alignment on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWidgetClass");
static_assert(sizeof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWidgetClass) == 0x000008, "Wrong size on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWidgetClass");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWidgetClass, ReturnValue) == 0x000000, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWidgetClass::ReturnValue' has a wrong offset!");

// Function R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base.R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C.K2_OnUpdateFromEntity
// 0x0010 (0x0010 - 0x0000)
struct R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_K2_OnUpdateFromEntity final
{
public:
	const class AMatchaSnapNetInteractiveEntity*  EntityActor;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_K2_OnUpdateFromEntity) == 0x000008, "Wrong alignment on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_K2_OnUpdateFromEntity");
static_assert(sizeof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_K2_OnUpdateFromEntity) == 0x000010, "Wrong size on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_K2_OnUpdateFromEntity");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_K2_OnUpdateFromEntity, EntityActor) == 0x000000, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_K2_OnUpdateFromEntity::EntityActor' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_K2_OnUpdateFromEntity, DeltaSeconds) == 0x000008, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_K2_OnUpdateFromEntity::DeltaSeconds' has a wrong offset!");

// Function R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base.R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C.UpdateVisual
// 0x0050 (0x0050 - 0x0000)
struct R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual final
{
public:
	class UMatchaItemAsset*                       ItemAsset;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsActor;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AR_Hack_Pickup_Renderer_Base_C*         K2Node_DynamicCast_AsR_Hack_Pickup_Renderer_Base;  // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual) == 0x000008, "Wrong alignment on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual");
static_assert(sizeof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual) == 0x000050, "Wrong size on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual, ItemAsset) == 0x000000, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual::ItemAsset' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual, CallFunc_LoadClassAsset_Blocking_ReturnValue) == 0x000010, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual::CallFunc_LoadClassAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual, CallFunc_IsValidSoftClassReference_ReturnValue) == 0x000018, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual::CallFunc_IsValidSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual, K2Node_ClassDynamicCast_AsActor) == 0x000020, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual::K2Node_ClassDynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual, K2Node_ClassDynamicCast_bSuccess) == 0x000028, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual, CallFunc_NotEqual_ClassClass_ReturnValue) == 0x000029, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual::CallFunc_NotEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual, K2Node_DynamicCast_AsR_Hack_Pickup_Renderer_Base) == 0x000030, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual::K2Node_DynamicCast_AsR_Hack_Pickup_Renderer_Base' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual, CallFunc_GetMaterial_ReturnValue) == 0x000040, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000048, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_UpdateVisual::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base.R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C.GetIndicatorWorldExtent
// 0x0018 (0x0018 - 0x0000)
struct R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldExtent final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldExtent) == 0x000008, "Wrong alignment on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldExtent");
static_assert(sizeof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldExtent) == 0x000018, "Wrong size on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldExtent");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldExtent, ReturnValue) == 0x000000, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldExtent::ReturnValue' has a wrong offset!");

// Function R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base.R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C.GetIndicatorWorldPosition
// 0x0030 (0x0030 - 0x0000)
struct R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldPosition final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldPosition) == 0x000008, "Wrong alignment on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldPosition");
static_assert(sizeof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldPosition) == 0x000030, "Wrong size on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldPosition");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldPosition, ReturnValue) == 0x000000, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldPosition::ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldPosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetIndicatorWorldPosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base.R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C.GetInteractionPromptLocation
// 0x0038 (0x0038 - 0x0000)
struct R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetInteractionPromptLocation final
{
public:
	const class AActor*                           InteractingRenderer;                               // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetInteractionPromptLocation) == 0x000008, "Wrong alignment on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetInteractionPromptLocation");
static_assert(sizeof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetInteractionPromptLocation) == 0x000038, "Wrong size on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetInteractionPromptLocation");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetInteractionPromptLocation, InteractingRenderer) == 0x000000, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetInteractionPromptLocation::InteractingRenderer' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetInteractionPromptLocation, ReturnValue) == 0x000008, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetInteractionPromptLocation::ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetInteractionPromptLocation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000020, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_GetInteractionPromptLocation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");

// Function R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base.R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C.SetupIndicatorInstance
// 0x0008 (0x0008 - 0x0000)
struct R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_SetupIndicatorInstance final
{
public:
	class UOdyMinimapIndicatorWidget*             IndicatorInstance;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_SetupIndicatorInstance) == 0x000008, "Wrong alignment on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_SetupIndicatorInstance");
static_assert(sizeof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_SetupIndicatorInstance) == 0x000008, "Wrong size on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_SetupIndicatorInstance");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_SetupIndicatorInstance, IndicatorInstance) == 0x000000, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_SetupIndicatorInstance::IndicatorInstance' has a wrong offset!");

// Function R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base.R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C.ShouldCompassIndicatorBeVisible
// 0x0010 (0x0010 - 0x0000)
struct R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldCompassIndicatorBeVisible final
{
public:
	class APlayerController*                      InPlayerController;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldCompassIndicatorBeVisible) == 0x000008, "Wrong alignment on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldCompassIndicatorBeVisible");
static_assert(sizeof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldCompassIndicatorBeVisible) == 0x000010, "Wrong size on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldCompassIndicatorBeVisible");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldCompassIndicatorBeVisible, InPlayerController) == 0x000000, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldCompassIndicatorBeVisible::InPlayerController' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldCompassIndicatorBeVisible, ReturnValue) == 0x000008, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldCompassIndicatorBeVisible::ReturnValue' has a wrong offset!");

// Function R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base.R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C.ShouldIndicatorBeVisible
// 0x0010 (0x0010 - 0x0000)
struct R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldIndicatorBeVisible final
{
public:
	class APlayerController*                      InPlayerController;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldIndicatorBeVisible) == 0x000008, "Wrong alignment on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldIndicatorBeVisible");
static_assert(sizeof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldIndicatorBeVisible) == 0x000010, "Wrong size on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldIndicatorBeVisible");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldIndicatorBeVisible, InPlayerController) == 0x000000, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldIndicatorBeVisible::InPlayerController' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldIndicatorBeVisible, ReturnValue) == 0x000008, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_ShouldIndicatorBeVisible::ReturnValue' has a wrong offset!");

// Function R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base.R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C.TickIndicator
// 0x0030 (0x0030 - 0x0000)
struct R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator final
{
public:
	class UOdyMinimapIndicatorWidget*             WidgetInstance;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_MinimapIndicator_Hack_C*           K2Node_DynamicCast_AsWBP_Minimap_Indicator_Hack;   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator) == 0x000008, "Wrong alignment on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator");
static_assert(sizeof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator) == 0x000030, "Wrong size on R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator, WidgetInstance) == 0x000000, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator::WidgetInstance' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator, K2Node_DynamicCast_AsWBP_Minimap_Indicator_Hack) == 0x000008, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator::K2Node_DynamicCast_AsWBP_Minimap_Indicator_Hack' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000018, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator, K2Node_DynamicCast_AsTexture_2D) == 0x000020, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C_TickIndicator::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

