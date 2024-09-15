#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_GearEnergizer

#include "Basic.hpp"

#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function E_GearEnergizer.E_GearEnergizer_C.AfterInteractionCancelledOrCompleted
// 0x0010 (0x0010 - 0x0000)
struct E_GearEnergizer_C_AfterInteractionCancelledOrCompleted final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasCancelled;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_GearEnergizer_C_AfterInteractionCancelledOrCompleted) == 0x000008, "Wrong alignment on E_GearEnergizer_C_AfterInteractionCancelledOrCompleted");
static_assert(sizeof(E_GearEnergizer_C_AfterInteractionCancelledOrCompleted) == 0x000010, "Wrong size on E_GearEnergizer_C_AfterInteractionCancelledOrCompleted");
static_assert(offsetof(E_GearEnergizer_C_AfterInteractionCancelledOrCompleted, InteractingActor) == 0x000000, "Member 'E_GearEnergizer_C_AfterInteractionCancelledOrCompleted::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_AfterInteractionCancelledOrCompleted, bWasCancelled) == 0x000008, "Member 'E_GearEnergizer_C_AfterInteractionCancelledOrCompleted::bWasCancelled' has a wrong offset!");

// Function E_GearEnergizer.E_GearEnergizer_C.AfterInteractionStarted
// 0x0008 (0x0008 - 0x0000)
struct E_GearEnergizer_C_AfterInteractionStarted final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_GearEnergizer_C_AfterInteractionStarted) == 0x000008, "Wrong alignment on E_GearEnergizer_C_AfterInteractionStarted");
static_assert(sizeof(E_GearEnergizer_C_AfterInteractionStarted) == 0x000008, "Wrong size on E_GearEnergizer_C_AfterInteractionStarted");
static_assert(offsetof(E_GearEnergizer_C_AfterInteractionStarted, InteractingActor) == 0x000000, "Member 'E_GearEnergizer_C_AfterInteractionStarted::InteractingActor' has a wrong offset!");

// Function E_GearEnergizer.E_GearEnergizer_C.EnergizeSlotAndTakeCost
// 0x00F8 (0x00F8 - 0x0000)
struct E_GearEnergizer_C_EnergizeSlotAndTakeCost final
{
public:
	class UObject*                                InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          WasCancelled;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaInventoryComponent*              InteractorInventory;                               // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInventoryProvider>    K2Node_DynamicCast_AsInventory_Provider;           // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaInventoryComponent*              CallFunc_GetInventoryComponent_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AMatchaSnapNetCharacterEntity*          K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USnapNetServerScript*                   CallFunc_Get_ReturnValue;                          // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo;                  // 0x0058(0x0088)(NoDestructor)
	class UMatchaBattleRoyaleServerScript*        K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script; // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TrySpendCurrency_ReturnValue;             // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EA[0x2];                                       // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue; // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryEnergizeSlot_ReturnValue;              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_GearEnergizer_C_EnergizeSlotAndTakeCost) == 0x000008, "Wrong alignment on E_GearEnergizer_C_EnergizeSlotAndTakeCost");
static_assert(sizeof(E_GearEnergizer_C_EnergizeSlotAndTakeCost) == 0x0000F8, "Wrong size on E_GearEnergizer_C_EnergizeSlotAndTakeCost");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, InteractingActor) == 0x000000, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, WasCancelled) == 0x000008, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::WasCancelled' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, InteractorInventory) == 0x000010, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::InteractorInventory' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, K2Node_DynamicCast_AsInventory_Provider) == 0x000020, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::K2Node_DynamicCast_AsInventory_Provider' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, CallFunc_GetInventoryComponent_ReturnValue) == 0x000038, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::CallFunc_GetInventoryComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity) == 0x000040, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, CallFunc_Get_ReturnValue) == 0x000050, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, K2Node_MakeStruct_CombinedFXInfo) == 0x000058, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::K2Node_MakeStruct_CombinedFXInfo' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script) == 0x0000E0, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, K2Node_DynamicCast_bSuccess_2) == 0x0000E8, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, CallFunc_TrySpendCurrency_ReturnValue) == 0x0000E9, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::CallFunc_TrySpendCurrency_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue) == 0x0000EC, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_EnergizeSlotAndTakeCost, CallFunc_TryEnergizeSlot_ReturnValue) == 0x0000F0, "Member 'E_GearEnergizer_C_EnergizeSlotAndTakeCost::CallFunc_TryEnergizeSlot_ReturnValue' has a wrong offset!");

// Function E_GearEnergizer.E_GearEnergizer_C.ExecuteUbergraph_E_GearEnergizer
// 0x0150 (0x0150 - 0x0000)
struct E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InteractingActor_1;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InteractionProgressTimeSeconds;       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InteractingActor;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo;                  // 0x0028(0x0088)(NoDestructor)
	bool                                          CallFunc_IsSnapNetServer_ReturnValue;              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InteractingActor_2;                   // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEntityIndex_ReturnValue;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class AActor*                           K2Node_Event_HitInstigator;                        // 0x00C8(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           K2Node_Event_HitActor;                             // 0x00D0(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMatchaHitData                         K2Node_Event_HitData;                              // 0x00D8(0x0078)(ConstParm)
};
static_assert(alignof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer) == 0x000008, "Wrong alignment on E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer");
static_assert(sizeof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer) == 0x000150, "Wrong size on E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer");
static_assert(offsetof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer, EntryPoint) == 0x000000, "Member 'E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer::EntryPoint' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer, K2Node_Event_InteractingActor_1) == 0x000008, "Member 'E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer::K2Node_Event_InteractingActor_1' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer, K2Node_Event_InteractionProgressTimeSeconds) == 0x000010, "Member 'E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer::K2Node_Event_InteractionProgressTimeSeconds' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer, K2Node_Event_InteractingActor) == 0x000018, "Member 'E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer::K2Node_Event_InteractingActor' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer, K2Node_Event_bWasCancelled) == 0x000020, "Member 'E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer, CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue) == 0x000024, "Member 'E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer::CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer, K2Node_MakeStruct_CombinedFXInfo) == 0x000028, "Member 'E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer::K2Node_MakeStruct_CombinedFXInfo' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer, CallFunc_IsSnapNetServer_ReturnValue) == 0x0000B0, "Member 'E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer::CallFunc_IsSnapNetServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer, K2Node_Event_InteractingActor_2) == 0x0000B8, "Member 'E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer::K2Node_Event_InteractingActor_2' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer, CallFunc_GetEntityIndex_ReturnValue) == 0x0000C0, "Member 'E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer::CallFunc_GetEntityIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer, K2Node_Event_HitInstigator) == 0x0000C8, "Member 'E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer::K2Node_Event_HitInstigator' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer, K2Node_Event_HitActor) == 0x0000D0, "Member 'E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer::K2Node_Event_HitActor' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer, K2Node_Event_HitData) == 0x0000D8, "Member 'E_GearEnergizer_C_ExecuteUbergraph_E_GearEnergizer::K2Node_Event_HitData' has a wrong offset!");

// Function E_GearEnergizer.E_GearEnergizer_C.IncrementHitCount
// 0x0014 (0x0014 - 0x0000)
struct E_GearEnergizer_C_IncrementHitCount final
{
public:
	int32                                         CurrentHitCount;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue; // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_GearEnergizer_C_IncrementHitCount) == 0x000004, "Wrong alignment on E_GearEnergizer_C_IncrementHitCount");
static_assert(sizeof(E_GearEnergizer_C_IncrementHitCount) == 0x000014, "Wrong size on E_GearEnergizer_C_IncrementHitCount");
static_assert(offsetof(E_GearEnergizer_C_IncrementHitCount, CurrentHitCount) == 0x000000, "Member 'E_GearEnergizer_C_IncrementHitCount::CurrentHitCount' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_IncrementHitCount, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'E_GearEnergizer_C_IncrementHitCount::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_IncrementHitCount, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'E_GearEnergizer_C_IncrementHitCount::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_IncrementHitCount, CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue) == 0x00000C, "Member 'E_GearEnergizer_C_IncrementHitCount::CallFunc_Conv_SnapNetPropertyInt32ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_IncrementHitCount, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'E_GearEnergizer_C_IncrementHitCount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function E_GearEnergizer.E_GearEnergizer_C.InteractionProgressed
// 0x0010 (0x0010 - 0x0000)
struct E_GearEnergizer_C_InteractionProgressed final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         InteractionProgressTimeSeconds;                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_GearEnergizer_C_InteractionProgressed) == 0x000008, "Wrong alignment on E_GearEnergizer_C_InteractionProgressed");
static_assert(sizeof(E_GearEnergizer_C_InteractionProgressed) == 0x000010, "Wrong size on E_GearEnergizer_C_InteractionProgressed");
static_assert(offsetof(E_GearEnergizer_C_InteractionProgressed, InteractingActor) == 0x000000, "Member 'E_GearEnergizer_C_InteractionProgressed::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_InteractionProgressed, InteractionProgressTimeSeconds) == 0x000008, "Member 'E_GearEnergizer_C_InteractionProgressed::InteractionProgressTimeSeconds' has a wrong offset!");

// Function E_GearEnergizer.E_GearEnergizer_C.OnHitReceived
// 0x0088 (0x0088 - 0x0000)
struct E_GearEnergizer_C_OnHitReceived final
{
public:
	const class AActor*                           HitInstigator;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           HitActor;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMatchaHitData                         HitData;                                           // 0x0010(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(E_GearEnergizer_C_OnHitReceived) == 0x000008, "Wrong alignment on E_GearEnergizer_C_OnHitReceived");
static_assert(sizeof(E_GearEnergizer_C_OnHitReceived) == 0x000088, "Wrong size on E_GearEnergizer_C_OnHitReceived");
static_assert(offsetof(E_GearEnergizer_C_OnHitReceived, HitInstigator) == 0x000000, "Member 'E_GearEnergizer_C_OnHitReceived::HitInstigator' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_OnHitReceived, HitActor) == 0x000008, "Member 'E_GearEnergizer_C_OnHitReceived::HitActor' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_OnHitReceived, HitData) == 0x000010, "Member 'E_GearEnergizer_C_OnHitReceived::HitData' has a wrong offset!");

// Function E_GearEnergizer.E_GearEnergizer_C.CanStartInteraction
// 0x0058 (0x0058 - 0x0000)
struct E_GearEnergizer_C_CanStartInteraction final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanInteract;                                       // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaInventoryComponent*              InteractorInventory;                               // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AMatchaSnapNetCharacterEntity*          K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USnapNetServerScript*                   CallFunc_Get_ReturnValue;                          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaBattleRoyaleServerScript*        K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasEnoughCurrencyOfType_ReturnValue;      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_SnapNetPropertyEntityIndexToInt_ReturnValue; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue; // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue; // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_GearEnergizer_C_CanStartInteraction) == 0x000008, "Wrong alignment on E_GearEnergizer_C_CanStartInteraction");
static_assert(sizeof(E_GearEnergizer_C_CanStartInteraction) == 0x000058, "Wrong size on E_GearEnergizer_C_CanStartInteraction");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, InteractingActor) == 0x000000, "Member 'E_GearEnergizer_C_CanStartInteraction::InteractingActor' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, ReturnValue) == 0x000008, "Member 'E_GearEnergizer_C_CanStartInteraction::ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, CanInteract) == 0x000009, "Member 'E_GearEnergizer_C_CanStartInteraction::CanInteract' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, InteractorInventory) == 0x000010, "Member 'E_GearEnergizer_C_CanStartInteraction::InteractorInventory' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity) == 0x000018, "Member 'E_GearEnergizer_C_CanStartInteraction::K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'E_GearEnergizer_C_CanStartInteraction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, CallFunc_Get_ReturnValue) == 0x000028, "Member 'E_GearEnergizer_C_CanStartInteraction::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script) == 0x000030, "Member 'E_GearEnergizer_C_CanStartInteraction::K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'E_GearEnergizer_C_CanStartInteraction::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, CallFunc_HasEnoughCurrencyOfType_ReturnValue) == 0x000039, "Member 'E_GearEnergizer_C_CanStartInteraction::CallFunc_HasEnoughCurrencyOfType_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, CallFunc_Conv_SnapNetPropertyEntityIndexToInt_ReturnValue) == 0x00003C, "Member 'E_GearEnergizer_C_CanStartInteraction::CallFunc_Conv_SnapNetPropertyEntityIndexToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue) == 0x000040, "Member 'E_GearEnergizer_C_CanStartInteraction::CallFunc_Conv_SnapNetPropertyFloatToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'E_GearEnergizer_C_CanStartInteraction::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000045, "Member 'E_GearEnergizer_C_CanStartInteraction::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, CallFunc_BooleanAND_ReturnValue) == 0x000046, "Member 'E_GearEnergizer_C_CanStartInteraction::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue) == 0x000047, "Member 'E_GearEnergizer_C_CanStartInteraction::CallFunc_Conv_SnapNetPropertyBooleanToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, CallFunc_BooleanAND_ReturnValue_1) == 0x000048, "Member 'E_GearEnergizer_C_CanStartInteraction::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(E_GearEnergizer_C_CanStartInteraction, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000050, "Member 'E_GearEnergizer_C_CanStartInteraction::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}
