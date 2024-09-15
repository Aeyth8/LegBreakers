#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_MatchSummary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OdyUI_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_MatchSummary.WBP_Menu_MatchSummary_C.ExecuteUbergraph_WBP_Menu_MatchSummary
// 0x01E0 (0x01E0 - 0x0000)
struct WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PlayerMatchSummary_C*              Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMatchaSnapNetPlayerController*         K2Node_DynamicCast_AsMatcha_Snap_Net_Player_Controller; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaTeamUIData*                      CallFunc_FindTeamUIDataForPlayerIndex_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IntBinding_GetValue_ReturnValue;          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_IntBinding_GetValue_ReturnValue_1;        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B8(0x0010)()
	class UMatchaPlayerUIData*                    CallFunc_Array_Get_Item;                           // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_IntBinding_GetValue_ReturnValue_2;        // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_IntBinding_GetValue_ReturnValue_3;        // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PlayerMatchSummary_C*              K2Node_Select_Default;                             // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00F0(0x0010)()
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue_1;             // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_IntBinding_GetValue_ReturnValue_4;        // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0118(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0160(0x0010)(ReferenceParm)
	TMap<ETimespanBindingDisplayOption, class FText> K2Node_MakeMap_Map;                                // 0x0170(0x0050)(ConstParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01C0(0x0010)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D5[0x3];                                      // 0x01D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary) == 0x000008, "Wrong alignment on WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary");
static_assert(sizeof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary) == 0x0001E0, "Wrong size on WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, EntryPoint) == 0x000000, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, Temp_object_Variable) == 0x000010, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, Temp_int_Variable) == 0x000018, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, K2Node_Event_IsDesignTime) == 0x00001C, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_GetUIDataModel_ReturnValue) == 0x000028, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_GetUIDataModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, K2Node_DynamicCast_AsMatcha_Snap_Net_Player_Controller) == 0x000030, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::K2Node_DynamicCast_AsMatcha_Snap_Net_Player_Controller' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_FindTeamUIDataForPlayerIndex_ReturnValue) == 0x000040, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_FindTeamUIDataForPlayerIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_IntBinding_GetValue_ReturnValue) == 0x00004C, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_IntBinding_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_IntBinding_GetValue_ReturnValue_1) == 0x000050, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_IntBinding_GetValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000054, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000058, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, K2Node_MakeArray_Array) == 0x0000A8, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_IntBinding_GetValue_ReturnValue_2) == 0x0000D4, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_IntBinding_GetValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_IntBinding_GetValue_ReturnValue_3) == 0x0000D8, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_IntBinding_GetValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000DC, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, K2Node_Select_Default) == 0x0000E0, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_IsValid_ReturnValue_1) == 0x0000E8, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000EC, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_Conv_IntToText_ReturnValue) == 0x0000F0, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_GetUIDataModel_ReturnValue_1) == 0x000100, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_GetUIDataModel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, Temp_int_Variable_1) == 0x000108, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_IntBinding_GetValue_ReturnValue_4) == 0x00010C, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_IntBinding_GetValue_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000110, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, K2Node_MakeStruct_FormatArgumentData_1) == 0x000118, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, K2Node_MakeArray_Array_1) == 0x000160, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, K2Node_MakeMap_Map) == 0x000170, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::K2Node_MakeMap_Map' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_Format_ReturnValue_1) == 0x0001C0, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, Temp_int_Loop_Counter_Variable) == 0x0001D0, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_Less_IntInt_ReturnValue) == 0x0001D4, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001D8, "Member 'WBP_Menu_MatchSummary_C_ExecuteUbergraph_WBP_Menu_MatchSummary::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function WBP_Menu_MatchSummary.WBP_Menu_MatchSummary_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_MatchSummary_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_MatchSummary_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Menu_MatchSummary_C_PreConstruct");
static_assert(sizeof(WBP_Menu_MatchSummary_C_PreConstruct) == 0x000001, "Wrong size on WBP_Menu_MatchSummary_C_PreConstruct");
static_assert(offsetof(WBP_Menu_MatchSummary_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Menu_MatchSummary_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Menu_MatchSummary.WBP_Menu_MatchSummary_C.SetWinnerStyle
// 0x0090 (0x0090 - 0x0000)
struct WBP_Menu_MatchSummary_C_SetWinnerStyle final
{
public:
	int32                                         PlacementValue;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetOwningPlayerCameraManager_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventRenderer_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0010)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_MatchSummary_C_SetWinnerStyle) == 0x000008, "Wrong alignment on WBP_Menu_MatchSummary_C_SetWinnerStyle");
static_assert(sizeof(WBP_Menu_MatchSummary_C_SetWinnerStyle) == 0x000090, "Wrong size on WBP_Menu_MatchSummary_C_SetWinnerStyle");
static_assert(offsetof(WBP_Menu_MatchSummary_C_SetWinnerStyle, PlacementValue) == 0x000000, "Member 'WBP_Menu_MatchSummary_C_SetWinnerStyle::PlacementValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_SetWinnerStyle, CallFunc_GetOwningPlayerCameraManager_ReturnValue) == 0x000008, "Member 'WBP_Menu_MatchSummary_C_SetWinnerStyle::CallFunc_GetOwningPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_SetWinnerStyle, CallFunc_AkEventRenderer_ReturnValue) == 0x000010, "Member 'WBP_Menu_MatchSummary_C_SetWinnerStyle::CallFunc_AkEventRenderer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_SetWinnerStyle, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000018, "Member 'WBP_Menu_MatchSummary_C_SetWinnerStyle::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_SetWinnerStyle, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'WBP_Menu_MatchSummary_C_SetWinnerStyle::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_SetWinnerStyle, K2Node_MakeArray_Array) == 0x000068, "Member 'WBP_Menu_MatchSummary_C_SetWinnerStyle::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_SetWinnerStyle, CallFunc_Format_ReturnValue) == 0x000078, "Member 'WBP_Menu_MatchSummary_C_SetWinnerStyle::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_SetWinnerStyle, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000088, "Member 'WBP_Menu_MatchSummary_C_SetWinnerStyle::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_SetWinnerStyle, K2Node_SwitchInteger_CmpSuccess) == 0x000089, "Member 'WBP_Menu_MatchSummary_C_SetWinnerStyle::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_MatchSummary_C_SetWinnerStyle, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00008A, "Member 'WBP_Menu_MatchSummary_C_SetWinnerStyle::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

