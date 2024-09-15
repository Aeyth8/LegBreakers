#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SpawnRegion_Button

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_SpawnRegion_Button.WBP_SpawnRegion_Button_C.BindData
// 0x0008 (0x0008 - 0x0000)
struct WBP_SpawnRegion_Button_C_BindData final
{
public:
	class UOdyUIData*                             NewUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpawnRegion_Button_C_BindData) == 0x000008, "Wrong alignment on WBP_SpawnRegion_Button_C_BindData");
static_assert(sizeof(WBP_SpawnRegion_Button_C_BindData) == 0x000008, "Wrong size on WBP_SpawnRegion_Button_C_BindData");
static_assert(offsetof(WBP_SpawnRegion_Button_C_BindData, NewUIData) == 0x000000, "Member 'WBP_SpawnRegion_Button_C_BindData::NewUIData' has a wrong offset!");

// Function WBP_SpawnRegion_Button.WBP_SpawnRegion_Button_C.ExecuteUbergraph_WBP_SpawnRegion_Button
// 0x0110 (0x0110 - 0x0000)
struct WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             K2Node_Event_NewUIData_1;                          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaGameWorldUIData*                 K2Node_DynamicCast_AsMatcha_Game_World_UI_Data;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             K2Node_Event_OldUIData;                            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaGameWorldUIData*                 K2Node_DynamicCast_AsMatcha_Game_World_UI_Data_1;  // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_OldValue_1;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NewValue_1;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             K2Node_Event_NewUIData;                            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaGameWorldUIData*                 K2Node_DynamicCast_AsMatcha_Game_World_UI_Data_2;  // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0068(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_IntBinding_GetValue_ReturnValue;          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_OldValue;                       // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NewValue;                       // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_SpawnRegion_PlayerIcon_C*          K2Node_DynamicCast_AsWBP_Spawn_Region_Player_Icon; // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue_1;             // 0x00B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	TDelegate<void(int32 OldValue, int32 NewValue)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_SpawnRegion_PlayerIcon_C*          K2Node_DynamicCast_AsWBP_Spawn_Region_Player_Icon_1; // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 OldValue, int32 NewValue)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00EC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayNameForRegion_ReturnValue;      // 0x0100(0x0010)()
};
static_assert(alignof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button) == 0x000008, "Wrong alignment on WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button");
static_assert(sizeof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button) == 0x000110, "Wrong size on WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, EntryPoint) == 0x000000, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_Event_IsDesignTime) == 0x000014, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_Event_NewUIData_1) == 0x000018, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_Event_NewUIData_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_DynamicCast_AsMatcha_Game_World_UI_Data) == 0x000020, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_DynamicCast_AsMatcha_Game_World_UI_Data' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_Event_OldUIData) == 0x000030, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_Event_OldUIData' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_DynamicCast_AsMatcha_Game_World_UI_Data_1) == 0x000038, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_DynamicCast_AsMatcha_Game_World_UI_Data_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_CustomEvent_OldValue_1) == 0x000044, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_CustomEvent_OldValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_CustomEvent_NewValue_1) == 0x000048, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_CustomEvent_NewValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_Event_NewUIData) == 0x000050, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_Event_NewUIData' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_DynamicCast_AsMatcha_Game_World_UI_Data_2) == 0x000058, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_DynamicCast_AsMatcha_Game_World_UI_Data_2' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, CallFunc_GetAllChildren_ReturnValue) == 0x000068, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, CallFunc_IntBinding_GetValue_ReturnValue) == 0x00007C, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::CallFunc_IntBinding_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, Temp_int_Loop_Counter_Variable_1) == 0x000080, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, CallFunc_Add_IntInt_ReturnValue_1) == 0x000088, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, Temp_int_Array_Index_Variable_1) == 0x00008C, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_CustomEvent_OldValue) == 0x000090, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_CustomEvent_OldValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_CustomEvent_NewValue) == 0x000094, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, CallFunc_Array_Get_Item) == 0x000098, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_DynamicCast_AsWBP_Spawn_Region_Player_Icon) == 0x0000A0, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_DynamicCast_AsWBP_Spawn_Region_Player_Icon' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_DynamicCast_bSuccess_3) == 0x0000A8, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, CallFunc_GetAllChildren_ReturnValue_1) == 0x0000B0, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::CallFunc_GetAllChildren_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, CallFunc_Array_Get_Item_1) == 0x0000D0, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_DynamicCast_AsWBP_Spawn_Region_Player_Icon_1) == 0x0000D8, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_DynamicCast_AsWBP_Spawn_Region_Player_Icon_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_DynamicCast_bSuccess_4) == 0x0000E0, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, CallFunc_Array_Length_ReturnValue_1) == 0x0000E4, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E8, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000EC, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button, CallFunc_GetDisplayNameForRegion_ReturnValue) == 0x000100, "Member 'WBP_SpawnRegion_Button_C_ExecuteUbergraph_WBP_SpawnRegion_Button::CallFunc_GetDisplayNameForRegion_ReturnValue' has a wrong offset!");

// Function WBP_SpawnRegion_Button.WBP_SpawnRegion_Button_C.LocalPlayerSelectionChanged
// 0x0008 (0x0008 - 0x0000)
struct WBP_SpawnRegion_Button_C_LocalPlayerSelectionChanged final
{
public:
	int32                                         OldValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewValue;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpawnRegion_Button_C_LocalPlayerSelectionChanged) == 0x000004, "Wrong alignment on WBP_SpawnRegion_Button_C_LocalPlayerSelectionChanged");
static_assert(sizeof(WBP_SpawnRegion_Button_C_LocalPlayerSelectionChanged) == 0x000008, "Wrong size on WBP_SpawnRegion_Button_C_LocalPlayerSelectionChanged");
static_assert(offsetof(WBP_SpawnRegion_Button_C_LocalPlayerSelectionChanged, OldValue) == 0x000000, "Member 'WBP_SpawnRegion_Button_C_LocalPlayerSelectionChanged::OldValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_LocalPlayerSelectionChanged, NewValue) == 0x000004, "Member 'WBP_SpawnRegion_Button_C_LocalPlayerSelectionChanged::NewValue' has a wrong offset!");

// Function WBP_SpawnRegion_Button.WBP_SpawnRegion_Button_C.OnUIDataSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_SpawnRegion_Button_C_OnUIDataSet final
{
public:
	class UOdyUIData*                             NewUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpawnRegion_Button_C_OnUIDataSet) == 0x000008, "Wrong alignment on WBP_SpawnRegion_Button_C_OnUIDataSet");
static_assert(sizeof(WBP_SpawnRegion_Button_C_OnUIDataSet) == 0x000008, "Wrong size on WBP_SpawnRegion_Button_C_OnUIDataSet");
static_assert(offsetof(WBP_SpawnRegion_Button_C_OnUIDataSet, NewUIData) == 0x000000, "Member 'WBP_SpawnRegion_Button_C_OnUIDataSet::NewUIData' has a wrong offset!");

// Function WBP_SpawnRegion_Button.WBP_SpawnRegion_Button_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_SpawnRegion_Button_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpawnRegion_Button_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_SpawnRegion_Button_C_PreConstruct");
static_assert(sizeof(WBP_SpawnRegion_Button_C_PreConstruct) == 0x000001, "Wrong size on WBP_SpawnRegion_Button_C_PreConstruct");
static_assert(offsetof(WBP_SpawnRegion_Button_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_SpawnRegion_Button_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_SpawnRegion_Button.WBP_SpawnRegion_Button_C.SelectedRegion__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_SpawnRegion_Button_C_SelectedRegion__DelegateSignature final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpawnRegion_Button_C_SelectedRegion__DelegateSignature) == 0x000004, "Wrong alignment on WBP_SpawnRegion_Button_C_SelectedRegion__DelegateSignature");
static_assert(sizeof(WBP_SpawnRegion_Button_C_SelectedRegion__DelegateSignature) == 0x000004, "Wrong size on WBP_SpawnRegion_Button_C_SelectedRegion__DelegateSignature");
static_assert(offsetof(WBP_SpawnRegion_Button_C_SelectedRegion__DelegateSignature, Index_0) == 0x000000, "Member 'WBP_SpawnRegion_Button_C_SelectedRegion__DelegateSignature::Index_0' has a wrong offset!");

// Function WBP_SpawnRegion_Button.WBP_SpawnRegion_Button_C.TeamNumberChanged
// 0x0008 (0x0008 - 0x0000)
struct WBP_SpawnRegion_Button_C_TeamNumberChanged final
{
public:
	int32                                         OldValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewValue;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpawnRegion_Button_C_TeamNumberChanged) == 0x000004, "Wrong alignment on WBP_SpawnRegion_Button_C_TeamNumberChanged");
static_assert(sizeof(WBP_SpawnRegion_Button_C_TeamNumberChanged) == 0x000008, "Wrong size on WBP_SpawnRegion_Button_C_TeamNumberChanged");
static_assert(offsetof(WBP_SpawnRegion_Button_C_TeamNumberChanged, OldValue) == 0x000000, "Member 'WBP_SpawnRegion_Button_C_TeamNumberChanged::OldValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_TeamNumberChanged, NewValue) == 0x000004, "Member 'WBP_SpawnRegion_Button_C_TeamNumberChanged::NewValue' has a wrong offset!");

// Function WBP_SpawnRegion_Button.WBP_SpawnRegion_Button_C.UnbindData
// 0x0008 (0x0008 - 0x0000)
struct WBP_SpawnRegion_Button_C_UnbindData final
{
public:
	class UOdyUIData*                             OldUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpawnRegion_Button_C_UnbindData) == 0x000008, "Wrong alignment on WBP_SpawnRegion_Button_C_UnbindData");
static_assert(sizeof(WBP_SpawnRegion_Button_C_UnbindData) == 0x000008, "Wrong size on WBP_SpawnRegion_Button_C_UnbindData");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UnbindData, OldUIData) == 0x000000, "Member 'WBP_SpawnRegion_Button_C_UnbindData::OldUIData' has a wrong offset!");

// Function WBP_SpawnRegion_Button.WBP_SpawnRegion_Button_C.UpdateSelectionHighlight
// 0x0198 (0x0198 - 0x0000)
struct WBP_SpawnRegion_Button_C_UpdateSelectionHighlight final
{
public:
	int32                                         CurrentSelectedRegion;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         SelectFont;                                        // 0x0008(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateFontInfo                         DefaultFont;                                       // 0x0068(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CB[0x1];                                       // 0x00CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00CC(0x0014)()
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x2];                                       // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x00E4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x00F4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0106(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0107(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x010C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11D[0x3];                                      // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0120(0x0014)()
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_Select_Default_2;                           // 0x0138(0x0060)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight) == 0x000008, "Wrong alignment on WBP_SpawnRegion_Button_C_UpdateSelectionHighlight");
static_assert(sizeof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight) == 0x000198, "Wrong size on WBP_SpawnRegion_Button_C_UpdateSelectionHighlight");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, CurrentSelectedRegion) == 0x000000, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::CurrentSelectedRegion' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, SelectFont) == 0x000008, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::SelectFont' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, DefaultFont) == 0x000068, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::DefaultFont' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, Temp_bool_Variable) == 0x0000C8, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000C9, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, CallFunc_Conv_IntToByte_ReturnValue) == 0x0000CA, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, K2Node_MakeStruct_SlateColor) == 0x0000CC, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, CallFunc_GetValidValue_ReturnValue) == 0x0000E0, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, Temp_bool_Variable_1) == 0x0000E1, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, Temp_struct_Variable) == 0x0000E4, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, Temp_struct_Variable_1) == 0x0000F4, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, Temp_byte_Variable) == 0x000104, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, Temp_byte_Variable_1) == 0x000105, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, CallFunc_BooleanAND_ReturnValue) == 0x000106, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, Temp_bool_Variable_2) == 0x000107, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000108, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, K2Node_Select_Default) == 0x00010C, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, K2Node_Select_Default_1) == 0x00011C, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, K2Node_MakeStruct_SlateColor_1) == 0x000120, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_SpawnRegion_Button_C_UpdateSelectionHighlight, K2Node_Select_Default_2) == 0x000138, "Member 'WBP_SpawnRegion_Button_C_UpdateSelectionHighlight::K2Node_Select_Default_2' has a wrong offset!");

}
