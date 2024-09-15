#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_ModeOption

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.BindData
// 0x0008 (0x0008 - 0x0000)
struct WBP_MainMenu_ModeOption_C_BindData final
{
public:
	class UOdyUIData*                             NewUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_ModeOption_C_BindData) == 0x000008, "Wrong alignment on WBP_MainMenu_ModeOption_C_BindData");
static_assert(sizeof(WBP_MainMenu_ModeOption_C_BindData) == 0x000008, "Wrong size on WBP_MainMenu_ModeOption_C_BindData");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_BindData, NewUIData) == 0x000000, "Member 'WBP_MainMenu_ModeOption_C_BindData::NewUIData' has a wrong offset!");

// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_MainMenu_ModeOption_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_ModeOption_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_MainMenu_ModeOption_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_MainMenu_ModeOption_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_MainMenu_ModeOption_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_MainMenu_ModeOption_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_MainMenu_ModeOption_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_ModeOption_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_MainMenu_ModeOption_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_MainMenu_ModeOption_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_MainMenu_ModeOption_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_MainMenu_ModeOption_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.ChangeState
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_MainMenu_ModeOption_C_ChangeState final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_Select_Default_2;                           // 0x0040(0x0060)(HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00A0(0x0014)()
};
static_assert(alignof(WBP_MainMenu_ModeOption_C_ChangeState) == 0x000008, "Wrong alignment on WBP_MainMenu_ModeOption_C_ChangeState");
static_assert(sizeof(WBP_MainMenu_ModeOption_C_ChangeState) == 0x0000B8, "Wrong size on WBP_MainMenu_ModeOption_C_ChangeState");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ChangeState, IsSelected) == 0x000000, "Member 'WBP_MainMenu_ModeOption_C_ChangeState::IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ChangeState, Temp_struct_Variable) == 0x000004, "Member 'WBP_MainMenu_ModeOption_C_ChangeState::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ChangeState, Temp_bool_Variable) == 0x000014, "Member 'WBP_MainMenu_ModeOption_C_ChangeState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ChangeState, Temp_bool_Variable_1) == 0x000015, "Member 'WBP_MainMenu_ModeOption_C_ChangeState::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ChangeState, Temp_byte_Variable) == 0x000016, "Member 'WBP_MainMenu_ModeOption_C_ChangeState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ChangeState, Temp_byte_Variable_1) == 0x000017, "Member 'WBP_MainMenu_ModeOption_C_ChangeState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ChangeState, Temp_struct_Variable_1) == 0x000018, "Member 'WBP_MainMenu_ModeOption_C_ChangeState::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ChangeState, K2Node_Select_Default) == 0x000028, "Member 'WBP_MainMenu_ModeOption_C_ChangeState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ChangeState, Temp_bool_Variable_2) == 0x000029, "Member 'WBP_MainMenu_ModeOption_C_ChangeState::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ChangeState, K2Node_Select_Default_1) == 0x00002C, "Member 'WBP_MainMenu_ModeOption_C_ChangeState::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ChangeState, K2Node_Select_Default_2) == 0x000040, "Member 'WBP_MainMenu_ModeOption_C_ChangeState::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ChangeState, K2Node_MakeStruct_SlateColor) == 0x0000A0, "Member 'WBP_MainMenu_ModeOption_C_ChangeState::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.ExecuteUbergraph_WBP_MainMenu_ModeOption
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOdyUIData*                             K2Node_Event_NewUIData;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaQueueUIData*                     K2Node_DynamicCast_AsMatcha_Queue_UI_Data;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOdyUIData*                             K2Node_Event_OldUIData;                            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaQueueUIData*                     K2Node_DynamicCast_AsMatcha_Queue_UI_Data_1;       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_OldValue;                       // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NewValue;                       // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             CallFunc_GetUIData_ReturnValue;                    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue_1;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaQueueUIData*                     K2Node_DynamicCast_AsMatcha_Queue_UI_Data_2;       // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_NameBinding_GetValue_ReturnValue;         // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_NameBinding_GetValue_ReturnValue_1;       // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_87[0x1];                                       // 0x0087(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName OldValue, class FName NewValue)> K2Node_CreateDelegate_OutputDelegate;              // 0x0088(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName OldValue, class FName NewValue)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue_2;             // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption) == 0x000008, "Wrong alignment on WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption");
static_assert(sizeof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption) == 0x0000B8, "Wrong size on WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, EntryPoint) == 0x000000, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000008, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_Event_NewUIData) == 0x000010, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_Event_NewUIData' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_DynamicCast_AsMatcha_Queue_UI_Data) == 0x000018, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_DynamicCast_AsMatcha_Queue_UI_Data' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, CallFunc_GetUIDataModel_ReturnValue) == 0x000028, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::CallFunc_GetUIDataModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_Event_OldUIData) == 0x000030, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_Event_OldUIData' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_DynamicCast_AsMatcha_Queue_UI_Data_1) == 0x000038, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_DynamicCast_AsMatcha_Queue_UI_Data_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_CustomEvent_OldValue) == 0x000044, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_CustomEvent_OldValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_CustomEvent_NewValue) == 0x00004C, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, CallFunc_GetUIData_ReturnValue) == 0x000058, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::CallFunc_GetUIData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, CallFunc_GetUIDataModel_ReturnValue_1) == 0x000060, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::CallFunc_GetUIDataModel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_DynamicCast_AsMatcha_Queue_UI_Data_2) == 0x000068, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_DynamicCast_AsMatcha_Queue_UI_Data_2' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_DynamicCast_bSuccess_2) == 0x000070, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, CallFunc_NameBinding_GetValue_ReturnValue) == 0x000074, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::CallFunc_NameBinding_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, CallFunc_NameBinding_GetValue_ReturnValue_1) == 0x00007C, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::CallFunc_NameBinding_GetValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_Event_IsDesignTime) == 0x000084, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000085, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_Event_bIsSelected) == 0x000086, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_CreateDelegate_OutputDelegate) == 0x000088, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_CreateDelegate_OutputDelegate_1) == 0x000098, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, CallFunc_GetUIDataModel_ReturnValue_2) == 0x0000A8, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::CallFunc_GetUIDataModel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption, K2Node_Event_bIsExpanded) == 0x0000B0, "Member 'WBP_MainMenu_ModeOption_C_ExecuteUbergraph_WBP_MainMenu_ModeOption::K2Node_Event_bIsExpanded' has a wrong offset!");

// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.OnSelectedQueueIdChanged
// 0x0010 (0x0010 - 0x0000)
struct WBP_MainMenu_ModeOption_C_OnSelectedQueueIdChanged final
{
public:
	class FName                                   OldValue;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewValue;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_ModeOption_C_OnSelectedQueueIdChanged) == 0x000004, "Wrong alignment on WBP_MainMenu_ModeOption_C_OnSelectedQueueIdChanged");
static_assert(sizeof(WBP_MainMenu_ModeOption_C_OnSelectedQueueIdChanged) == 0x000010, "Wrong size on WBP_MainMenu_ModeOption_C_OnSelectedQueueIdChanged");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_OnSelectedQueueIdChanged, OldValue) == 0x000000, "Member 'WBP_MainMenu_ModeOption_C_OnSelectedQueueIdChanged::OldValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_OnSelectedQueueIdChanged, NewValue) == 0x000008, "Member 'WBP_MainMenu_ModeOption_C_OnSelectedQueueIdChanged::NewValue' has a wrong offset!");

// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_MainMenu_ModeOption_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_ModeOption_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_MainMenu_ModeOption_C_PreConstruct");
static_assert(sizeof(WBP_MainMenu_ModeOption_C_PreConstruct) == 0x000001, "Wrong size on WBP_MainMenu_ModeOption_C_PreConstruct");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_MainMenu_ModeOption_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_MainMenu_ModeOption.WBP_MainMenu_ModeOption_C.UnbindData
// 0x0008 (0x0008 - 0x0000)
struct WBP_MainMenu_ModeOption_C_UnbindData final
{
public:
	class UOdyUIData*                             OldUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_ModeOption_C_UnbindData) == 0x000008, "Wrong alignment on WBP_MainMenu_ModeOption_C_UnbindData");
static_assert(sizeof(WBP_MainMenu_ModeOption_C_UnbindData) == 0x000008, "Wrong size on WBP_MainMenu_ModeOption_C_UnbindData");
static_assert(offsetof(WBP_MainMenu_ModeOption_C_UnbindData, OldUIData) == 0x000000, "Member 'WBP_MainMenu_ModeOption_C_UnbindData::OldUIData' has a wrong offset!");

}

