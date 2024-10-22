#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: R_Gear_Pickup_Default_DoNotCopyOrChild

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function R_Gear_Pickup_Default_DoNotCopyOrChild.R_Gear_Pickup_Default_DoNotCopyOrChild_C.UpdateVisual
// 0x0150 (0x0150 - 0x0000)
struct R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual final
{
public:
	class UMatchaItemAsset*                       ItemAsset;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsActor;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Temp_object_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Temp_object_Variable_2;                            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0048(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x0050(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Temp_object_Variable_3;                            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_2;                            // 0x0068(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 Temp_byte_Variable;                                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable_4;                            // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_5;                            // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_6;                            // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_7;                            // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x009C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_4;                            // 0x00AC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_5;                            // 0x00BC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_6;                            // 0x00CC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 Temp_byte_Variable_1;                              // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DE[0x2];                                       // 0x00DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AMatchaItemRenderer*                    K2Node_DynamicCast_AsMatcha_Item_Renderer;         // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               K2Node_DynamicCast_AsTexture;                      // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0104(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default_1;                           // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue_2;             // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_123[0x5];                                      // 0x0123(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_Select_Default_2;                           // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            K2Node_Select_Default_3;                           // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            K2Node_Select_Default_4;                           // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual) == 0x000008, "Wrong alignment on R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual");
static_assert(sizeof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual) == 0x000150, "Wrong size on R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, ItemAsset) == 0x000000, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::ItemAsset' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_object_Variable) == 0x000008, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, CallFunc_LoadClassAsset_Blocking_ReturnValue) == 0x000010, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::CallFunc_LoadClassAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, CallFunc_IsValidSoftClassReference_ReturnValue) == 0x000018, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::CallFunc_IsValidSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, K2Node_ClassDynamicCast_AsActor) == 0x000020, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::K2Node_ClassDynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, K2Node_ClassDynamicCast_bSuccess) == 0x000028, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_object_Variable_1) == 0x000030, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_bool_Variable) == 0x000038, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_object_Variable_2) == 0x000040, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_struct_Variable) == 0x000048, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_struct_Variable_1) == 0x000050, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_bool_Variable_1) == 0x000058, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_object_Variable_3) == 0x000060, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_struct_Variable_2) == 0x000068, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_byte_Variable) == 0x000070, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_object_Variable_4) == 0x000078, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_object_Variable_5) == 0x000080, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_object_Variable_6) == 0x000088, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_object_Variable_7) == 0x000090, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_bool_Variable_2) == 0x000098, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_struct_Variable_3) == 0x00009C, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_struct_Variable_4) == 0x0000AC, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_struct_Variable_5) == 0x0000BC, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_struct_Variable_6) == 0x0000CC, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_struct_Variable_6' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, Temp_byte_Variable_1) == 0x0000DC, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, CallFunc_NotEqual_ClassClass_ReturnValue) == 0x0000DD, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::CallFunc_NotEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, K2Node_DynamicCast_AsMatcha_Item_Renderer) == 0x0000E0, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::K2Node_DynamicCast_AsMatcha_Item_Renderer' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x0000F0, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, K2Node_DynamicCast_AsTexture) == 0x0000F8, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, K2Node_DynamicCast_bSuccess_1) == 0x000100, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, K2Node_Select_Default) == 0x000104, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, K2Node_Select_Default_1) == 0x000118, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, CallFunc_Array_Contains_ReturnValue) == 0x000120, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, CallFunc_Array_Contains_ReturnValue_1) == 0x000121, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, CallFunc_Array_Contains_ReturnValue_2) == 0x000122, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::CallFunc_Array_Contains_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, K2Node_Select_Default_2) == 0x000128, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, K2Node_Select_Default_3) == 0x000130, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000138, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, K2Node_Select_Default_4) == 0x000140, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual, CallFunc_SetStaticMesh_ReturnValue) == 0x000148, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_UpdateVisual::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

// Function R_Gear_Pickup_Default_DoNotCopyOrChild.R_Gear_Pickup_Default_DoNotCopyOrChild_C.K2_OnUpdateFromEntity
// 0x0010 (0x0010 - 0x0000)
struct R_Gear_Pickup_Default_DoNotCopyOrChild_C_K2_OnUpdateFromEntity final
{
public:
	const class AMatchaSnapNetInteractiveEntity*  EntityActor;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_K2_OnUpdateFromEntity) == 0x000008, "Wrong alignment on R_Gear_Pickup_Default_DoNotCopyOrChild_C_K2_OnUpdateFromEntity");
static_assert(sizeof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_K2_OnUpdateFromEntity) == 0x000010, "Wrong size on R_Gear_Pickup_Default_DoNotCopyOrChild_C_K2_OnUpdateFromEntity");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_K2_OnUpdateFromEntity, EntityActor) == 0x000000, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_K2_OnUpdateFromEntity::EntityActor' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_K2_OnUpdateFromEntity, DeltaSeconds) == 0x000008, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_K2_OnUpdateFromEntity::DeltaSeconds' has a wrong offset!");

// Function R_Gear_Pickup_Default_DoNotCopyOrChild.R_Gear_Pickup_Default_DoNotCopyOrChild_C.ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild
// 0x0038 (0x0038 - 0x0000)
struct R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	const class AMatchaSnapNetInteractiveEntity*  K2Node_Event_EntityActor;                          // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AE_Gear_Pickup_Base_C*                  K2Node_DynamicCast_AsE_Gear_Pickup_Base;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaItemAsset*                       CallFunc_GetItem_Item;                             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild) == 0x000008, "Wrong alignment on R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild");
static_assert(sizeof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild) == 0x000038, "Wrong size on R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild, EntryPoint) == 0x000000, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild::EntryPoint' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000004, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild, K2Node_Event_EntityActor) == 0x000008, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild::K2Node_Event_EntityActor' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild, K2Node_DynamicCast_AsE_Gear_Pickup_Base) == 0x000018, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild::K2Node_DynamicCast_AsE_Gear_Pickup_Base' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild, CallFunc_GetItem_Item) == 0x000028, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild::CallFunc_GetItem_Item' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild, CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue) == 0x000030, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild::CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild, CallFunc_IsValid_ReturnValue) == 0x000032, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_ExecuteUbergraph_R_Gear_Pickup_Default_DoNotCopyOrChild::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function R_Gear_Pickup_Default_DoNotCopyOrChild.R_Gear_Pickup_Default_DoNotCopyOrChild_C.GetInteractionPromptLocation
// 0x0038 (0x0038 - 0x0000)
struct R_Gear_Pickup_Default_DoNotCopyOrChild_C_GetInteractionPromptLocation final
{
public:
	const class AActor*                           InteractingRenderer;                               // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_GetInteractionPromptLocation) == 0x000008, "Wrong alignment on R_Gear_Pickup_Default_DoNotCopyOrChild_C_GetInteractionPromptLocation");
static_assert(sizeof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_GetInteractionPromptLocation) == 0x000038, "Wrong size on R_Gear_Pickup_Default_DoNotCopyOrChild_C_GetInteractionPromptLocation");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_GetInteractionPromptLocation, InteractingRenderer) == 0x000000, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_GetInteractionPromptLocation::InteractingRenderer' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_GetInteractionPromptLocation, ReturnValue) == 0x000008, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_GetInteractionPromptLocation::ReturnValue' has a wrong offset!");
static_assert(offsetof(R_Gear_Pickup_Default_DoNotCopyOrChild_C_GetInteractionPromptLocation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000020, "Member 'R_Gear_Pickup_Default_DoNotCopyOrChild_C_GetInteractionPromptLocation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");

}

