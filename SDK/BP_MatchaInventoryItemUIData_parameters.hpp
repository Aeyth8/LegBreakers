#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MatchaInventoryItemUIData

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "StructUtils_structs.hpp"


namespace SDK::Params
{

// Function BP_MatchaInventoryItemUIData.BP_MatchaInventoryItemUIData_C.ExecuteUbergraph_BP_MatchaInventoryItemUIData
// 0x0018 (0x0018 - 0x0000)
struct BP_MatchaInventoryItemUIData_C_ExecuteUbergraph_BP_MatchaInventoryItemUIData final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_NewInteractionRenderer;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OldInteractionRenderer;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MatchaInventoryItemUIData_C_ExecuteUbergraph_BP_MatchaInventoryItemUIData) == 0x000008, "Wrong alignment on BP_MatchaInventoryItemUIData_C_ExecuteUbergraph_BP_MatchaInventoryItemUIData");
static_assert(sizeof(BP_MatchaInventoryItemUIData_C_ExecuteUbergraph_BP_MatchaInventoryItemUIData) == 0x000018, "Wrong size on BP_MatchaInventoryItemUIData_C_ExecuteUbergraph_BP_MatchaInventoryItemUIData");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_ExecuteUbergraph_BP_MatchaInventoryItemUIData, EntryPoint) == 0x000000, "Member 'BP_MatchaInventoryItemUIData_C_ExecuteUbergraph_BP_MatchaInventoryItemUIData::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_ExecuteUbergraph_BP_MatchaInventoryItemUIData, K2Node_Event_NewInteractionRenderer) == 0x000008, "Member 'BP_MatchaInventoryItemUIData_C_ExecuteUbergraph_BP_MatchaInventoryItemUIData::K2Node_Event_NewInteractionRenderer' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_ExecuteUbergraph_BP_MatchaInventoryItemUIData, K2Node_Event_OldInteractionRenderer) == 0x000010, "Member 'BP_MatchaInventoryItemUIData_C_ExecuteUbergraph_BP_MatchaInventoryItemUIData::K2Node_Event_OldInteractionRenderer' has a wrong offset!");

// Function BP_MatchaInventoryItemUIData.BP_MatchaInventoryItemUIData_C.InteractionRendererUpdated
// 0x0188 (0x0188 - 0x0000)
struct BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated final
{
public:
	class AActor*                                 Renderer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         EntityIndex;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMatchaInventoryItem                   InventoryItem;                                     // 0x0010(0x0058)(Edit, BlueprintVisible)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USnapNetEntityRendererComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USnapNetEntityRendererComponent*        CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USnapNetClient*                         CallFunc_Get_ReturnValue;                          // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USnapNetSimulation*                     CallFunc_GetSimulation_ReturnValue;                // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMatchaInventoryItemUIData_UpdateParams K2Node_MakeStruct_MatchaInventoryItemUIData_UpdateParams; // 0x00A0(0x0058)()
	class AActor*                                 CallFunc_GetEntity_ReturnValue;                    // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInstancedStruct                       CallFunc_MakeInstancedStruct_ReturnValue;          // 0x0100(0x0010)()
	class ABP_ItemPickup_Base_C*                  K2Node_DynamicCast_AsBP_Item_Pickup_Base;          // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaItemAsset*                       CallFunc_GetItem_Item;                             // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMatchaInventoryItem                   CallFunc_FromItemAsset_ReturnValue;                // 0x0128(0x0058)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated) == 0x000008, "Wrong alignment on BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated");
static_assert(sizeof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated) == 0x000188, "Wrong size on BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, Renderer) == 0x000000, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::Renderer' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, EntityIndex) == 0x000008, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::EntityIndex' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, InventoryItem) == 0x000010, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::InventoryItem' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000070, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, CallFunc_Array_Get_Item) == 0x000080, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000088, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, CallFunc_Get_ReturnValue) == 0x000090, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, CallFunc_GetSimulation_ReturnValue) == 0x000098, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::CallFunc_GetSimulation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, K2Node_MakeStruct_MatchaInventoryItemUIData_UpdateParams) == 0x0000A0, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::K2Node_MakeStruct_MatchaInventoryItemUIData_UpdateParams' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, CallFunc_GetEntity_ReturnValue) == 0x0000F8, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::CallFunc_GetEntity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, CallFunc_MakeInstancedStruct_ReturnValue) == 0x000100, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::CallFunc_MakeInstancedStruct_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, K2Node_DynamicCast_AsBP_Item_Pickup_Base) == 0x000110, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::K2Node_DynamicCast_AsBP_Item_Pickup_Base' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, CallFunc_GetItem_Item) == 0x000120, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::CallFunc_GetItem_Item' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, CallFunc_FromItemAsset_ReturnValue) == 0x000128, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::CallFunc_FromItemAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated, CallFunc_IsValid_ReturnValue_1) == 0x000180, "Member 'BP_MatchaInventoryItemUIData_C_InteractionRendererUpdated::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_MatchaInventoryItemUIData.BP_MatchaInventoryItemUIData_C.OnInteractionRendererUpdated
// 0x0010 (0x0010 - 0x0000)
struct BP_MatchaInventoryItemUIData_C_OnInteractionRendererUpdated final
{
public:
	class AActor*                                 NewInteractionRenderer;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OldInteractionRenderer;                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MatchaInventoryItemUIData_C_OnInteractionRendererUpdated) == 0x000008, "Wrong alignment on BP_MatchaInventoryItemUIData_C_OnInteractionRendererUpdated");
static_assert(sizeof(BP_MatchaInventoryItemUIData_C_OnInteractionRendererUpdated) == 0x000010, "Wrong size on BP_MatchaInventoryItemUIData_C_OnInteractionRendererUpdated");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_OnInteractionRendererUpdated, NewInteractionRenderer) == 0x000000, "Member 'BP_MatchaInventoryItemUIData_C_OnInteractionRendererUpdated::NewInteractionRenderer' has a wrong offset!");
static_assert(offsetof(BP_MatchaInventoryItemUIData_C_OnInteractionRendererUpdated, OldInteractionRenderer) == 0x000008, "Member 'BP_MatchaInventoryItemUIData_C_OnInteractionRendererUpdated::OldInteractionRenderer' has a wrong offset!");

}

