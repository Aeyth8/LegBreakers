#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameModeSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_GameModeSelector.WBP_GameModeSelector_C.BindData
// 0x0008 (0x0008 - 0x0000)
struct WBP_GameModeSelector_C_BindData final
{
public:
	class UOdyUIData*                             NewUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameModeSelector_C_BindData) == 0x000008, "Wrong alignment on WBP_GameModeSelector_C_BindData");
static_assert(sizeof(WBP_GameModeSelector_C_BindData) == 0x000008, "Wrong size on WBP_GameModeSelector_C_BindData");
static_assert(offsetof(WBP_GameModeSelector_C_BindData, NewUIData) == 0x000000, "Member 'WBP_GameModeSelector_C_BindData::NewUIData' has a wrong offset!");

// Function WBP_GameModeSelector.WBP_GameModeSelector_C.BndEvt__WBP_GameModeSelector_AvailableQueuesList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_GameModeSelector_C_BndEvt__WBP_GameModeSelector_AvailableQueuesList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameModeSelector_C_BndEvt__WBP_GameModeSelector_AvailableQueuesList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature) == 0x000008, "Wrong alignment on WBP_GameModeSelector_C_BndEvt__WBP_GameModeSelector_AvailableQueuesList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature");
static_assert(sizeof(WBP_GameModeSelector_C_BndEvt__WBP_GameModeSelector_AvailableQueuesList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature) == 0x000008, "Wrong size on WBP_GameModeSelector_C_BndEvt__WBP_GameModeSelector_AvailableQueuesList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature");
static_assert(offsetof(WBP_GameModeSelector_C_BndEvt__WBP_GameModeSelector_AvailableQueuesList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature, Item) == 0x000000, "Member 'WBP_GameModeSelector_C_BndEvt__WBP_GameModeSelector_AvailableQueuesList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature::Item' has a wrong offset!");

// Function WBP_GameModeSelector.WBP_GameModeSelector_C.BndEvt__WBP_MainMenu_UI_AvailableQueuesList_K2Node_ComponentBoundEvent_14_OnListEntryInitializedDynamic__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_GameModeSelector_C_BndEvt__WBP_MainMenu_UI_AvailableQueuesList_K2Node_ComponentBoundEvent_14_OnListEntryInitializedDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameModeSelector_C_BndEvt__WBP_MainMenu_UI_AvailableQueuesList_K2Node_ComponentBoundEvent_14_OnListEntryInitializedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on WBP_GameModeSelector_C_BndEvt__WBP_MainMenu_UI_AvailableQueuesList_K2Node_ComponentBoundEvent_14_OnListEntryInitializedDynamic__DelegateSignature");
static_assert(sizeof(WBP_GameModeSelector_C_BndEvt__WBP_MainMenu_UI_AvailableQueuesList_K2Node_ComponentBoundEvent_14_OnListEntryInitializedDynamic__DelegateSignature) == 0x000010, "Wrong size on WBP_GameModeSelector_C_BndEvt__WBP_MainMenu_UI_AvailableQueuesList_K2Node_ComponentBoundEvent_14_OnListEntryInitializedDynamic__DelegateSignature");
static_assert(offsetof(WBP_GameModeSelector_C_BndEvt__WBP_MainMenu_UI_AvailableQueuesList_K2Node_ComponentBoundEvent_14_OnListEntryInitializedDynamic__DelegateSignature, Item) == 0x000000, "Member 'WBP_GameModeSelector_C_BndEvt__WBP_MainMenu_UI_AvailableQueuesList_K2Node_ComponentBoundEvent_14_OnListEntryInitializedDynamic__DelegateSignature::Item' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_BndEvt__WBP_MainMenu_UI_AvailableQueuesList_K2Node_ComponentBoundEvent_14_OnListEntryInitializedDynamic__DelegateSignature, Widget) == 0x000008, "Member 'WBP_GameModeSelector_C_BndEvt__WBP_MainMenu_UI_AvailableQueuesList_K2Node_ComponentBoundEvent_14_OnListEntryInitializedDynamic__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_GameModeSelector.WBP_GameModeSelector_C.ExecuteUbergraph_WBP_GameModeSelector
// 0x0160 (0x0160 - 0x0000)
struct WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName OldValue, class FName NewValue)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOdyUIData*                             K2Node_Event_NewUIData;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaLocalPlayerUIData*               K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data;  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             K2Node_CustomEvent_UIData;                         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaLocalPlayerUIData*               K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data_1; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UOdyUIData* UIData)>     K2Node_CreateDelegate_OutputDelegate_1;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_OldValue;                       // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NewValue;                       // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             CallFunc_GetUIData_ReturnValue;                    // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaLocalPlayerUIData*               K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data_2; // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_ComponentBoundEvent_Item_1;                 // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget;                 // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_ComponentBoundEvent_Item;                   // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOdyWidget*                             K2Node_DynamicCast_AsOdy_Widget;                   // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaQueueUIData*                     K2Node_DynamicCast_AsMatcha_Queue_UI_Data;         // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             K2Node_DynamicCast_AsOdy_UI_Data;                  // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_NameBinding_GetValue_ReturnValue;         // 0x00DC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E5[0x3];                                       // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue_1;             // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_NameBinding_GetValue_ReturnValue_1;       // 0x00F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaQueueUIData*                     CallFunc_Array_Get_Item;                           // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_NameBinding_GetValue_ReturnValue_2;       // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue_2;             // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BP_GetSelectedItem_ReturnValue;           // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIndexForItem_ReturnValue;              // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12D[0x3];                                      // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue_3;             // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue_4;             // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0148(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerForNextTickDelegate_ReturnValue; // 0x0158(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector) == 0x000008, "Wrong alignment on WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector");
static_assert(sizeof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector) == 0x000160, "Wrong size on WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, EntryPoint) == 0x000000, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_GetUIDataModel_ReturnValue) == 0x000018, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_GetUIDataModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_Event_NewUIData) == 0x000020, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_Event_NewUIData' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data) == 0x000028, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_CustomEvent_UIData) == 0x000038, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_CustomEvent_UIData' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data_1) == 0x000040, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data_1' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_CreateDelegate_OutputDelegate_1) == 0x00004C, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_CustomEvent_OldValue) == 0x00005C, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_CustomEvent_OldValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_CustomEvent_NewValue) == 0x000064, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_GetUIData_ReturnValue) == 0x000070, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_GetUIData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data_2) == 0x000078, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data_2' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_DynamicCast_bSuccess_2) == 0x000080, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, Temp_int_Loop_Counter_Variable) == 0x000084, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_Add_IntInt_ReturnValue) == 0x000088, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_Array_Length_ReturnValue) == 0x00008C, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_ComponentBoundEvent_Item_1) == 0x000098, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_ComponentBoundEvent_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_ComponentBoundEvent_Widget) == 0x0000A0, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_ComponentBoundEvent_Item) == 0x0000A8, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_ComponentBoundEvent_Item' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_DynamicCast_AsOdy_Widget) == 0x0000B0, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_DynamicCast_AsOdy_Widget' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_DynamicCast_bSuccess_3) == 0x0000B8, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_DynamicCast_AsMatcha_Queue_UI_Data) == 0x0000C0, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_DynamicCast_AsMatcha_Queue_UI_Data' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_DynamicCast_bSuccess_4) == 0x0000C8, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_DynamicCast_AsOdy_UI_Data) == 0x0000D0, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_DynamicCast_AsOdy_UI_Data' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_DynamicCast_bSuccess_5) == 0x0000D8, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_NameBinding_GetValue_ReturnValue) == 0x0000DC, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_NameBinding_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_Event_IsDesignTime) == 0x0000E4, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_GetUIDataModel_ReturnValue_1) == 0x0000E8, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_GetUIDataModel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, Temp_int_Array_Index_Variable) == 0x0000F0, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_NameBinding_GetValue_ReturnValue_1) == 0x0000F4, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_NameBinding_GetValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_Array_Get_Item) == 0x000100, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_NameBinding_GetValue_ReturnValue_2) == 0x000108, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_NameBinding_GetValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000110, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, Temp_bool_True_if_break_was_hit_Variable) == 0x000111, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_Not_PreBool_ReturnValue) == 0x000112, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_BooleanAND_ReturnValue) == 0x000113, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_GetUIDataModel_ReturnValue_2) == 0x000118, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_GetUIDataModel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_BP_GetSelectedItem_ReturnValue) == 0x000120, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_BP_GetSelectedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_GetIndexForItem_ReturnValue) == 0x000128, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_GetIndexForItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_IsValid_ReturnValue) == 0x00012C, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_Add_IntInt_ReturnValue_1) == 0x000130, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_GetUIDataModel_ReturnValue_3) == 0x000138, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_GetUIDataModel_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_GetUIDataModel_ReturnValue_4) == 0x000140, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_GetUIDataModel_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, K2Node_CreateDelegate_OutputDelegate_2) == 0x000148, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector, CallFunc_K2_SetTimerForNextTickDelegate_ReturnValue) == 0x000158, "Member 'WBP_GameModeSelector_C_ExecuteUbergraph_WBP_GameModeSelector::CallFunc_K2_SetTimerForNextTickDelegate_ReturnValue' has a wrong offset!");

// Function WBP_GameModeSelector.WBP_GameModeSelector_C.OnAvailableQueuesChanged
// 0x0008 (0x0008 - 0x0000)
struct WBP_GameModeSelector_C_OnAvailableQueuesChanged final
{
public:
	class UOdyUIData*                             UIData_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameModeSelector_C_OnAvailableQueuesChanged) == 0x000008, "Wrong alignment on WBP_GameModeSelector_C_OnAvailableQueuesChanged");
static_assert(sizeof(WBP_GameModeSelector_C_OnAvailableQueuesChanged) == 0x000008, "Wrong size on WBP_GameModeSelector_C_OnAvailableQueuesChanged");
static_assert(offsetof(WBP_GameModeSelector_C_OnAvailableQueuesChanged, UIData_0) == 0x000000, "Member 'WBP_GameModeSelector_C_OnAvailableQueuesChanged::UIData_0' has a wrong offset!");

// Function WBP_GameModeSelector.WBP_GameModeSelector_C.OnSelectedQueueIdChanged
// 0x0010 (0x0010 - 0x0000)
struct WBP_GameModeSelector_C_OnSelectedQueueIdChanged final
{
public:
	class FName                                   OldValue;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewValue;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameModeSelector_C_OnSelectedQueueIdChanged) == 0x000004, "Wrong alignment on WBP_GameModeSelector_C_OnSelectedQueueIdChanged");
static_assert(sizeof(WBP_GameModeSelector_C_OnSelectedQueueIdChanged) == 0x000010, "Wrong size on WBP_GameModeSelector_C_OnSelectedQueueIdChanged");
static_assert(offsetof(WBP_GameModeSelector_C_OnSelectedQueueIdChanged, OldValue) == 0x000000, "Member 'WBP_GameModeSelector_C_OnSelectedQueueIdChanged::OldValue' has a wrong offset!");
static_assert(offsetof(WBP_GameModeSelector_C_OnSelectedQueueIdChanged, NewValue) == 0x000008, "Member 'WBP_GameModeSelector_C_OnSelectedQueueIdChanged::NewValue' has a wrong offset!");

// Function WBP_GameModeSelector.WBP_GameModeSelector_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_GameModeSelector_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameModeSelector_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_GameModeSelector_C_PreConstruct");
static_assert(sizeof(WBP_GameModeSelector_C_PreConstruct) == 0x000001, "Wrong size on WBP_GameModeSelector_C_PreConstruct");
static_assert(offsetof(WBP_GameModeSelector_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_GameModeSelector_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

