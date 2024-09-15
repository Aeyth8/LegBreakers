#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Pickup_Common

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function E_Pickup_Common.E_Pickup_Common_C.ExecuteUbergraph_E_Pickup_Common
// 0x0004 (0x0004 - 0x0000)
struct E_Pickup_Common_C_ExecuteUbergraph_E_Pickup_Common final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_Common_C_ExecuteUbergraph_E_Pickup_Common) == 0x000004, "Wrong alignment on E_Pickup_Common_C_ExecuteUbergraph_E_Pickup_Common");
static_assert(sizeof(E_Pickup_Common_C_ExecuteUbergraph_E_Pickup_Common) == 0x000004, "Wrong size on E_Pickup_Common_C_ExecuteUbergraph_E_Pickup_Common");
static_assert(offsetof(E_Pickup_Common_C_ExecuteUbergraph_E_Pickup_Common, EntryPoint) == 0x000000, "Member 'E_Pickup_Common_C_ExecuteUbergraph_E_Pickup_Common::EntryPoint' has a wrong offset!");

// Function E_Pickup_Common.E_Pickup_Common_C.GetInventoryComponent
// 0x0008 (0x0008 - 0x0000)
struct E_Pickup_Common_C_GetInventoryComponent final
{
public:
	class UMatchaInventoryComponent*              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_Common_C_GetInventoryComponent) == 0x000008, "Wrong alignment on E_Pickup_Common_C_GetInventoryComponent");
static_assert(sizeof(E_Pickup_Common_C_GetInventoryComponent) == 0x000008, "Wrong size on E_Pickup_Common_C_GetInventoryComponent");
static_assert(offsetof(E_Pickup_Common_C_GetInventoryComponent, ReturnValue) == 0x000000, "Member 'E_Pickup_Common_C_GetInventoryComponent::ReturnValue' has a wrong offset!");

// Function E_Pickup_Common.E_Pickup_Common_C.GetItem
// 0x0118 (0x0118 - 0x0000)
struct E_Pickup_Common_C_GetItem final
{
public:
	class UMatchaItemAsset*                       Item_0;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FMatchaInventorySlot                   CallFunc_GetItemInSlot_ReturnValue;                // 0x0010(0x0100)(ConstParm)
	const class UMatchaItemAsset*                 CallFunc_GetValue_ItemAsset_ReturnValue;           // 0x0110(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_Common_C_GetItem) == 0x000008, "Wrong alignment on E_Pickup_Common_C_GetItem");
static_assert(sizeof(E_Pickup_Common_C_GetItem) == 0x000118, "Wrong size on E_Pickup_Common_C_GetItem");
static_assert(offsetof(E_Pickup_Common_C_GetItem, Item_0) == 0x000000, "Member 'E_Pickup_Common_C_GetItem::Item_0' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetItem, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x000008, "Member 'E_Pickup_Common_C_GetItem::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetItem, CallFunc_GetItemInSlot_ReturnValue) == 0x000010, "Member 'E_Pickup_Common_C_GetItem::CallFunc_GetItemInSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetItem, CallFunc_GetValue_ItemAsset_ReturnValue) == 0x000110, "Member 'E_Pickup_Common_C_GetItem::CallFunc_GetValue_ItemAsset_ReturnValue' has a wrong offset!");

// Function E_Pickup_Common.E_Pickup_Common_C.GetItemCount
// 0x0118 (0x0118 - 0x0000)
struct E_Pickup_Common_C_GetItemCount final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMatchaInventorySlot                   CallFunc_GetItemInSlot_ReturnValue;                // 0x0010(0x0100)(ConstParm)
	int32                                         CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue; // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_Common_C_GetItemCount) == 0x000008, "Wrong alignment on E_Pickup_Common_C_GetItemCount");
static_assert(sizeof(E_Pickup_Common_C_GetItemCount) == 0x000118, "Wrong size on E_Pickup_Common_C_GetItemCount");
static_assert(offsetof(E_Pickup_Common_C_GetItemCount, Count) == 0x000000, "Member 'E_Pickup_Common_C_GetItemCount::Count' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetItemCount, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x000004, "Member 'E_Pickup_Common_C_GetItemCount::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetItemCount, CallFunc_GetItemInSlot_ReturnValue) == 0x000010, "Member 'E_Pickup_Common_C_GetItemCount::CallFunc_GetItemInSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetItemCount, CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue) == 0x000110, "Member 'E_Pickup_Common_C_GetItemCount::CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue' has a wrong offset!");

// Function E_Pickup_Common.E_Pickup_Common_C.PopulateDropInventory
// 0x0060 (0x0060 - 0x0000)
struct E_Pickup_Common_C_PopulateDropInventory final
{
public:
	struct FMatchaInventoryItem                   CallFunc_FromItemAsset_ReturnValue;                // 0x0000(0x0058)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_TryAddItem_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_Common_C_PopulateDropInventory) == 0x000008, "Wrong alignment on E_Pickup_Common_C_PopulateDropInventory");
static_assert(sizeof(E_Pickup_Common_C_PopulateDropInventory) == 0x000060, "Wrong size on E_Pickup_Common_C_PopulateDropInventory");
static_assert(offsetof(E_Pickup_Common_C_PopulateDropInventory, CallFunc_FromItemAsset_ReturnValue) == 0x000000, "Member 'E_Pickup_Common_C_PopulateDropInventory::CallFunc_FromItemAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_PopulateDropInventory, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'E_Pickup_Common_C_PopulateDropInventory::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_PopulateDropInventory, CallFunc_TryAddItem_ReturnValue) == 0x00005C, "Member 'E_Pickup_Common_C_PopulateDropInventory::CallFunc_TryAddItem_ReturnValue' has a wrong offset!");

// Function E_Pickup_Common.E_Pickup_Common_C.TryPickUpBy
// 0x0020 (0x0020 - 0x0000)
struct E_Pickup_Common_C_TryPickUpBy final
{
public:
	class AActor*                                 Instigator_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryPickUpBy_Success;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaItemAsset*                       CallFunc_GetItem_Item;                             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_Common_C_TryPickUpBy) == 0x000008, "Wrong alignment on E_Pickup_Common_C_TryPickUpBy");
static_assert(sizeof(E_Pickup_Common_C_TryPickUpBy) == 0x000020, "Wrong size on E_Pickup_Common_C_TryPickUpBy");
static_assert(offsetof(E_Pickup_Common_C_TryPickUpBy, Instigator_0) == 0x000000, "Member 'E_Pickup_Common_C_TryPickUpBy::Instigator_0' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_TryPickUpBy, Success) == 0x000008, "Member 'E_Pickup_Common_C_TryPickUpBy::Success' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_TryPickUpBy, CallFunc_TryPickUpBy_Success) == 0x000009, "Member 'E_Pickup_Common_C_TryPickUpBy::CallFunc_TryPickUpBy_Success' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_TryPickUpBy, CallFunc_GetItem_Item) == 0x000010, "Member 'E_Pickup_Common_C_TryPickUpBy::CallFunc_GetItem_Item' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_TryPickUpBy, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'E_Pickup_Common_C_TryPickUpBy::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function E_Pickup_Common.E_Pickup_Common_C.TryRemoveQuantity
// 0x0014 (0x0014 - 0x0000)
struct E_Pickup_Common_C_TryRemoveQuantity final
{
public:
	int32                                         QuantityToRemove;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryRemoveItemFromSlot_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_Common_C_TryRemoveQuantity) == 0x000004, "Wrong alignment on E_Pickup_Common_C_TryRemoveQuantity");
static_assert(sizeof(E_Pickup_Common_C_TryRemoveQuantity) == 0x000014, "Wrong size on E_Pickup_Common_C_TryRemoveQuantity");
static_assert(offsetof(E_Pickup_Common_C_TryRemoveQuantity, QuantityToRemove) == 0x000000, "Member 'E_Pickup_Common_C_TryRemoveQuantity::QuantityToRemove' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_TryRemoveQuantity, Success) == 0x000004, "Member 'E_Pickup_Common_C_TryRemoveQuantity::Success' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_TryRemoveQuantity, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x000008, "Member 'E_Pickup_Common_C_TryRemoveQuantity::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_TryRemoveQuantity, CallFunc_TryRemoveItemFromSlot_ReturnValue) == 0x000010, "Member 'E_Pickup_Common_C_TryRemoveQuantity::CallFunc_TryRemoveItemFromSlot_ReturnValue' has a wrong offset!");

// Function E_Pickup_Common.E_Pickup_Common_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct E_Pickup_Common_C_UserConstructionScript final
{
public:
	class AR_Pickup_Common_C*                     K2Node_DynamicCast_AsR_Pickup_Common;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_Common_C_UserConstructionScript) == 0x000008, "Wrong alignment on E_Pickup_Common_C_UserConstructionScript");
static_assert(sizeof(E_Pickup_Common_C_UserConstructionScript) == 0x000010, "Wrong size on E_Pickup_Common_C_UserConstructionScript");
static_assert(offsetof(E_Pickup_Common_C_UserConstructionScript, K2Node_DynamicCast_AsR_Pickup_Common) == 0x000000, "Member 'E_Pickup_Common_C_UserConstructionScript::K2Node_DynamicCast_AsR_Pickup_Common' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'E_Pickup_Common_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function E_Pickup_Common.E_Pickup_Common_C.GetInteractionPriority
// 0x0160 (0x0160 - 0x0000)
struct E_Pickup_Common_C_GetInteractionPriority final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x000C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInventoryProvider>    K2Node_DynamicCast_AsInventory_Provider;           // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaInventoryComponent*              CallFunc_GetInventoryComponent_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMatchaInventorySlot                   CallFunc_GetItemInSlot_ReturnValue;                // 0x0038(0x0100)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UMatchaItemAsset*                 CallFunc_GetValue_ItemAsset_ReturnValue;           // 0x0140(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14A[0x2];                                      // 0x014A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue_1;     // 0x014C(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue_2;     // 0x0154(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnEmptySlotForCategory_ReturnValue;    // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanCombineAnyItemStacksWithInventory_ReturnValue; // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Pickup_Common_C_GetInteractionPriority) == 0x000008, "Wrong alignment on E_Pickup_Common_C_GetInteractionPriority");
static_assert(sizeof(E_Pickup_Common_C_GetInteractionPriority) == 0x000160, "Wrong size on E_Pickup_Common_C_GetInteractionPriority");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, InteractingActor) == 0x000000, "Member 'E_Pickup_Common_C_GetInteractionPriority::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, ReturnValue) == 0x000008, "Member 'E_Pickup_Common_C_GetInteractionPriority::ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x00000C, "Member 'E_Pickup_Common_C_GetInteractionPriority::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, K2Node_DynamicCast_AsInventory_Provider) == 0x000018, "Member 'E_Pickup_Common_C_GetInteractionPriority::K2Node_DynamicCast_AsInventory_Provider' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'E_Pickup_Common_C_GetInteractionPriority::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, CallFunc_GetInventoryComponent_ReturnValue) == 0x000030, "Member 'E_Pickup_Common_C_GetInteractionPriority::CallFunc_GetInventoryComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, CallFunc_GetItemInSlot_ReturnValue) == 0x000038, "Member 'E_Pickup_Common_C_GetInteractionPriority::CallFunc_GetItemInSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, CallFunc_IsValid_ReturnValue) == 0x000138, "Member 'E_Pickup_Common_C_GetInteractionPriority::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, CallFunc_GetValue_ItemAsset_ReturnValue) == 0x000140, "Member 'E_Pickup_Common_C_GetInteractionPriority::CallFunc_GetValue_ItemAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000148, "Member 'E_Pickup_Common_C_GetInteractionPriority::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, CallFunc_IsValid_ReturnValue_1) == 0x000149, "Member 'E_Pickup_Common_C_GetInteractionPriority::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, CallFunc_MakeLiteralGameplayTag_ReturnValue_1) == 0x00014C, "Member 'E_Pickup_Common_C_GetInteractionPriority::CallFunc_MakeLiteralGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, CallFunc_MakeLiteralGameplayTag_ReturnValue_2) == 0x000154, "Member 'E_Pickup_Common_C_GetInteractionPriority::CallFunc_MakeLiteralGameplayTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, CallFunc_HasAnEmptySlotForCategory_ReturnValue) == 0x00015C, "Member 'E_Pickup_Common_C_GetInteractionPriority::CallFunc_HasAnEmptySlotForCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Pickup_Common_C_GetInteractionPriority, CallFunc_CanCombineAnyItemStacksWithInventory_ReturnValue) == 0x00015D, "Member 'E_Pickup_Common_C_GetInteractionPriority::CallFunc_CanCombineAnyItemStacksWithInventory_ReturnValue' has a wrong offset!");

}
