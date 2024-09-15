#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Leaderboard

#include "Basic.hpp"

#include "OdyUI_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Leaderboard.WBP_Menu_Leaderboard_C.BindData
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Leaderboard_C_BindData final
{
public:
	class UOdyUIData*                             NewUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Leaderboard_C_BindData) == 0x000008, "Wrong alignment on WBP_Menu_Leaderboard_C_BindData");
static_assert(sizeof(WBP_Menu_Leaderboard_C_BindData) == 0x000008, "Wrong size on WBP_Menu_Leaderboard_C_BindData");
static_assert(offsetof(WBP_Menu_Leaderboard_C_BindData, NewUIData) == 0x000000, "Member 'WBP_Menu_Leaderboard_C_BindData::NewUIData' has a wrong offset!");

// Function WBP_Menu_Leaderboard.WBP_Menu_Leaderboard_C.BndEvt__WBP_Menu_Leaderboard_LeaderboardEntries_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_Menu_Leaderboard_C_BndEvt__WBP_Menu_Leaderboard_LeaderboardEntries_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Leaderboard_C_BndEvt__WBP_Menu_Leaderboard_LeaderboardEntries_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Menu_Leaderboard_C_BndEvt__WBP_Menu_Leaderboard_LeaderboardEntries_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature");
static_assert(sizeof(WBP_Menu_Leaderboard_C_BndEvt__WBP_Menu_Leaderboard_LeaderboardEntries_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature) == 0x000010, "Wrong size on WBP_Menu_Leaderboard_C_BndEvt__WBP_Menu_Leaderboard_LeaderboardEntries_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature");
static_assert(offsetof(WBP_Menu_Leaderboard_C_BndEvt__WBP_Menu_Leaderboard_LeaderboardEntries_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature, Item) == 0x000000, "Member 'WBP_Menu_Leaderboard_C_BndEvt__WBP_Menu_Leaderboard_LeaderboardEntries_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature::Item' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_BndEvt__WBP_Menu_Leaderboard_LeaderboardEntries_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature, Widget) == 0x000008, "Member 'WBP_Menu_Leaderboard_C_BndEvt__WBP_Menu_Leaderboard_LeaderboardEntries_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_Menu_Leaderboard.WBP_Menu_Leaderboard_C.ExecuteUbergraph_WBP_Menu_Leaderboard
// 0x0168 (0x0168 - 0x0000)
struct WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_ComponentBoundEvent_Item;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOdyWidget*                             K2Node_DynamicCast_AsOdy_Widget;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             K2Node_DynamicCast_AsOdy_UI_Data;                  // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue_1;             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOdyUIData*                             K2Node_Event_NewUIData;                            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaLeaderboardUIData*               K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data;   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             K2Node_CustomEvent_UIData;                         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaLeaderboardUIData*               K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data_1; // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             K2Node_Event_OldUIData;                            // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaLeaderboardUIData*               K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data_2; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Ignored;                        // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Ignored2;                       // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B[0x1];                                       // 0x009B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool OldValue, bool NewValue)> K2Node_CreateDelegate_OutputDelegate;              // 0x009C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class FString>            K2Node_Event_Args;                                 // 0x00B0(0x0050)(ConstParm)
	class FString                                 K2Node_Event_Action;                               // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EOdyNavigationDirection                       K2Node_Event_NavDirection;                         // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_112[0x6];                                      // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             CallFunc_GetUIData_ReturnValue;                    // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaLeaderboardUIData*               K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data_3; // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IntBinding_GetValue_ReturnValue;          // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UOdyUIData* UIData)>     K2Node_CreateDelegate_OutputDelegate_1;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_146[0x2];                                      // 0x0146(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             CallFunc_GetUIData_ReturnValue_1;                  // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaLeaderboardUIData*               K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data_4; // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x3];                                      // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IntBinding_GetValue_ReturnValue_1;        // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard) == 0x000008, "Wrong alignment on WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard");
static_assert(sizeof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard) == 0x000168, "Wrong size on WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, EntryPoint) == 0x000000, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_Multiply_IntInt_ReturnValue) == 0x000004, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_ComponentBoundEvent_Item) == 0x000010, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_ComponentBoundEvent_Item' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_ComponentBoundEvent_Widget) == 0x000018, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_GetUIDataModel_ReturnValue) == 0x000020, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_GetUIDataModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_AsOdy_Widget) == 0x000028, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_AsOdy_Widget' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_AsOdy_UI_Data) == 0x000038, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_AsOdy_UI_Data' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_Add_IntInt_ReturnValue_1) == 0x000044, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_Max_ReturnValue) == 0x00004C, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_GetUIDataModel_ReturnValue_1) == 0x000050, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_GetUIDataModel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_Event_NewUIData) == 0x000058, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_Event_NewUIData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data) == 0x000060, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_CustomEvent_UIData) == 0x000070, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_CustomEvent_UIData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data_1) == 0x000078, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_bSuccess_3) == 0x000080, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_Event_OldUIData) == 0x000088, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_Event_OldUIData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data_2) == 0x000090, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data_2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_bSuccess_4) == 0x000098, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_CustomEvent_Ignored) == 0x000099, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_CustomEvent_Ignored' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_CustomEvent_Ignored2) == 0x00009A, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_CustomEvent_Ignored2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_CreateDelegate_OutputDelegate) == 0x00009C, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_Event_Args) == 0x0000B0, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_Event_Args' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_Event_Action) == 0x000100, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_Event_Action' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_Event_NavDirection) == 0x000110, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_Event_NavDirection' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_Event_IsDesignTime) == 0x000111, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_GetUIData_ReturnValue) == 0x000118, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_GetUIData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data_3) == 0x000120, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data_3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_bSuccess_5) == 0x000128, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_IntBinding_GetValue_ReturnValue) == 0x00012C, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_IntBinding_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_CreateDelegate_OutputDelegate_1) == 0x000130, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_Divide_IntInt_ReturnValue) == 0x000140, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_Less_IntInt_ReturnValue) == 0x000144, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_Greater_IntInt_ReturnValue) == 0x000145, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_GetUIData_ReturnValue_1) == 0x000148, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_GetUIData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data_4) == 0x000150, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_AsMatcha_Leaderboard_UI_Data_4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, K2Node_DynamicCast_bSuccess_6) == 0x000158, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_IntBinding_GetValue_ReturnValue_1) == 0x00015C, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_IntBinding_GetValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000160, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000164, "Member 'WBP_Menu_Leaderboard_C_ExecuteUbergraph_WBP_Menu_Leaderboard::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Leaderboard.WBP_Menu_Leaderboard_C.LeaderboardEntriesChanged_Event
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Leaderboard_C_LeaderboardEntriesChanged_Event final
{
public:
	class UOdyUIData*                             UIData_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Leaderboard_C_LeaderboardEntriesChanged_Event) == 0x000008, "Wrong alignment on WBP_Menu_Leaderboard_C_LeaderboardEntriesChanged_Event");
static_assert(sizeof(WBP_Menu_Leaderboard_C_LeaderboardEntriesChanged_Event) == 0x000008, "Wrong size on WBP_Menu_Leaderboard_C_LeaderboardEntriesChanged_Event");
static_assert(offsetof(WBP_Menu_Leaderboard_C_LeaderboardEntriesChanged_Event, UIData_0) == 0x000000, "Member 'WBP_Menu_Leaderboard_C_LeaderboardEntriesChanged_Event::UIData_0' has a wrong offset!");

// Function WBP_Menu_Leaderboard.WBP_Menu_Leaderboard_C.OnNavigatedTo
// 0x0068 (0x0068 - 0x0000)
struct WBP_Menu_Leaderboard_C_OnNavigatedTo final
{
public:
	TMap<class FString, class FString>            Args;                                              // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 Action;                                            // 0x0050(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	EOdyNavigationDirection                       NavDirection;                                      // 0x0060(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Leaderboard_C_OnNavigatedTo) == 0x000008, "Wrong alignment on WBP_Menu_Leaderboard_C_OnNavigatedTo");
static_assert(sizeof(WBP_Menu_Leaderboard_C_OnNavigatedTo) == 0x000068, "Wrong size on WBP_Menu_Leaderboard_C_OnNavigatedTo");
static_assert(offsetof(WBP_Menu_Leaderboard_C_OnNavigatedTo, Args) == 0x000000, "Member 'WBP_Menu_Leaderboard_C_OnNavigatedTo::Args' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_OnNavigatedTo, Action) == 0x000050, "Member 'WBP_Menu_Leaderboard_C_OnNavigatedTo::Action' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_OnNavigatedTo, NavDirection) == 0x000060, "Member 'WBP_Menu_Leaderboard_C_OnNavigatedTo::NavDirection' has a wrong offset!");

// Function WBP_Menu_Leaderboard.WBP_Menu_Leaderboard_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_Leaderboard_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Leaderboard_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Menu_Leaderboard_C_PreConstruct");
static_assert(sizeof(WBP_Menu_Leaderboard_C_PreConstruct) == 0x000001, "Wrong size on WBP_Menu_Leaderboard_C_PreConstruct");
static_assert(offsetof(WBP_Menu_Leaderboard_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Menu_Leaderboard_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Menu_Leaderboard.WBP_Menu_Leaderboard_C.UnbindData
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Leaderboard_C_UnbindData final
{
public:
	class UOdyUIData*                             OldUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Leaderboard_C_UnbindData) == 0x000008, "Wrong alignment on WBP_Menu_Leaderboard_C_UnbindData");
static_assert(sizeof(WBP_Menu_Leaderboard_C_UnbindData) == 0x000008, "Wrong size on WBP_Menu_Leaderboard_C_UnbindData");
static_assert(offsetof(WBP_Menu_Leaderboard_C_UnbindData, OldUIData) == 0x000000, "Member 'WBP_Menu_Leaderboard_C_UnbindData::OldUIData' has a wrong offset!");

// Function WBP_Menu_Leaderboard.WBP_Menu_Leaderboard_C.UpdatePageButtons
// 0x0002 (0x0002 - 0x0000)
struct WBP_Menu_Leaderboard_C_UpdatePageButtons final
{
public:
	bool                                          Ignored;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ignored2;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Leaderboard_C_UpdatePageButtons) == 0x000001, "Wrong alignment on WBP_Menu_Leaderboard_C_UpdatePageButtons");
static_assert(sizeof(WBP_Menu_Leaderboard_C_UpdatePageButtons) == 0x000002, "Wrong size on WBP_Menu_Leaderboard_C_UpdatePageButtons");
static_assert(offsetof(WBP_Menu_Leaderboard_C_UpdatePageButtons, Ignored) == 0x000000, "Member 'WBP_Menu_Leaderboard_C_UpdatePageButtons::Ignored' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Leaderboard_C_UpdatePageButtons, Ignored2) == 0x000001, "Member 'WBP_Menu_Leaderboard_C_UpdatePageButtons::Ignored2' has a wrong offset!");

}

