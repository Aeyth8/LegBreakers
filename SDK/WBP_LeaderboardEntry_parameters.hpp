#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LeaderboardEntry

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.BindData
// 0x0008 (0x0008 - 0x0000)
struct WBP_LeaderboardEntry_C_BindData final
{
public:
	class UOdyUIData*                             NewUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LeaderboardEntry_C_BindData) == 0x000008, "Wrong alignment on WBP_LeaderboardEntry_C_BindData");
static_assert(sizeof(WBP_LeaderboardEntry_C_BindData) == 0x000008, "Wrong size on WBP_LeaderboardEntry_C_BindData");
static_assert(offsetof(WBP_LeaderboardEntry_C_BindData, NewUIData) == 0x000000, "Member 'WBP_LeaderboardEntry_C_BindData::NewUIData' has a wrong offset!");

// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_LeaderboardEntry_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LeaderboardEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_LeaderboardEntry_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_LeaderboardEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_LeaderboardEntry_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_LeaderboardEntry_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_LeaderboardEntry_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_LeaderboardEntry_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LeaderboardEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_LeaderboardEntry_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_LeaderboardEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_LeaderboardEntry_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_LeaderboardEntry_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_LeaderboardEntry_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.ExecuteUbergraph_WBP_LeaderboardEntry
// 0x0090 (0x0090 - 0x0000)
struct WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool OldValue, bool NewValue)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_OldValue_1;                     // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_NewValue_1;                     // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_OldValue;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NewValue;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOdyUIData*                             CallFunc_GetUIData_ReturnValue;                    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaLeaderboardEntryUIData*          K2Node_DynamicCast_AsMatcha_Leaderboard_Entry_UI_Data; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IntBinding_GetValue_ReturnValue;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BoolBinding_GetValue_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOdyUIData*                             K2Node_Event_OldUIData;                            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOdyUIData*                             K2Node_Event_NewUIData;                            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaLeaderboardEntryUIData*          K2Node_DynamicCast_AsMatcha_Leaderboard_Entry_UI_Data_1; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaLeaderboardEntryUIData*          K2Node_DynamicCast_AsMatcha_Leaderboard_Entry_UI_Data_2; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B[0x1];                                       // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 OldValue, int32 NewValue)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry) == 0x000008, "Wrong alignment on WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry");
static_assert(sizeof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry) == 0x000090, "Wrong size on WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, EntryPoint) == 0x000000, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_CustomEvent_OldValue_1) == 0x000014, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_CustomEvent_OldValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_CustomEvent_NewValue_1) == 0x000015, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_CustomEvent_NewValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_CustomEvent_OldValue) == 0x000018, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_CustomEvent_OldValue' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_CustomEvent_NewValue) == 0x00001C, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, CallFunc_GetUIData_ReturnValue) == 0x000020, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::CallFunc_GetUIData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_DynamicCast_AsMatcha_Leaderboard_Entry_UI_Data) == 0x000028, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_DynamicCast_AsMatcha_Leaderboard_Entry_UI_Data' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, CallFunc_IntBinding_GetValue_ReturnValue) == 0x000034, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::CallFunc_IntBinding_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, CallFunc_BoolBinding_GetValue_ReturnValue) == 0x000038, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::CallFunc_BoolBinding_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, CallFunc_Percent_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_Event_OldUIData) == 0x000040, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_Event_OldUIData' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_Event_NewUIData) == 0x000048, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_Event_NewUIData' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_DynamicCast_AsMatcha_Leaderboard_Entry_UI_Data_1) == 0x000050, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_DynamicCast_AsMatcha_Leaderboard_Entry_UI_Data_1' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_DynamicCast_AsMatcha_Leaderboard_Entry_UI_Data_2) == 0x000060, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_DynamicCast_AsMatcha_Leaderboard_Entry_UI_Data_2' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_Event_bIsSelected) == 0x000069, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_Event_bIsExpanded) == 0x00006A, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, Temp_int_Variable) == 0x00006C, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry, K2Node_Select_Default) == 0x000080, "Member 'WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry::K2Node_Select_Default' has a wrong offset!");

// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.OnIsLocalPlayerChanged
// 0x0002 (0x0002 - 0x0000)
struct WBP_LeaderboardEntry_C_OnIsLocalPlayerChanged final
{
public:
	bool                                          OldValue;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewValue;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LeaderboardEntry_C_OnIsLocalPlayerChanged) == 0x000001, "Wrong alignment on WBP_LeaderboardEntry_C_OnIsLocalPlayerChanged");
static_assert(sizeof(WBP_LeaderboardEntry_C_OnIsLocalPlayerChanged) == 0x000002, "Wrong size on WBP_LeaderboardEntry_C_OnIsLocalPlayerChanged");
static_assert(offsetof(WBP_LeaderboardEntry_C_OnIsLocalPlayerChanged, OldValue) == 0x000000, "Member 'WBP_LeaderboardEntry_C_OnIsLocalPlayerChanged::OldValue' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_OnIsLocalPlayerChanged, NewValue) == 0x000001, "Member 'WBP_LeaderboardEntry_C_OnIsLocalPlayerChanged::NewValue' has a wrong offset!");

// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.OnRankChanged
// 0x0008 (0x0008 - 0x0000)
struct WBP_LeaderboardEntry_C_OnRankChanged final
{
public:
	int32                                         OldValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewValue;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LeaderboardEntry_C_OnRankChanged) == 0x000004, "Wrong alignment on WBP_LeaderboardEntry_C_OnRankChanged");
static_assert(sizeof(WBP_LeaderboardEntry_C_OnRankChanged) == 0x000008, "Wrong size on WBP_LeaderboardEntry_C_OnRankChanged");
static_assert(offsetof(WBP_LeaderboardEntry_C_OnRankChanged, OldValue) == 0x000000, "Member 'WBP_LeaderboardEntry_C_OnRankChanged::OldValue' has a wrong offset!");
static_assert(offsetof(WBP_LeaderboardEntry_C_OnRankChanged, NewValue) == 0x000004, "Member 'WBP_LeaderboardEntry_C_OnRankChanged::NewValue' has a wrong offset!");

// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.UnbindData
// 0x0008 (0x0008 - 0x0000)
struct WBP_LeaderboardEntry_C_UnbindData final
{
public:
	class UOdyUIData*                             OldUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LeaderboardEntry_C_UnbindData) == 0x000008, "Wrong alignment on WBP_LeaderboardEntry_C_UnbindData");
static_assert(sizeof(WBP_LeaderboardEntry_C_UnbindData) == 0x000008, "Wrong size on WBP_LeaderboardEntry_C_UnbindData");
static_assert(offsetof(WBP_LeaderboardEntry_C_UnbindData, OldUIData) == 0x000000, "Member 'WBP_LeaderboardEntry_C_UnbindData::OldUIData' has a wrong offset!");

}

