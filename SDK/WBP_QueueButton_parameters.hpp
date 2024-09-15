#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QueueButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "OdyUI_structs.hpp"


namespace SDK::Params
{

// Function WBP_QueueButton.WBP_QueueButton_C.ChangeEnabled
// 0x0040 (0x0040 - 0x0000)
struct WBP_QueueButton_C_ChangeEnabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable_1;                              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_2;                              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable_3;                              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_2;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueButton_C_ChangeEnabled) == 0x000008, "Wrong alignment on WBP_QueueButton_C_ChangeEnabled");
static_assert(sizeof(WBP_QueueButton_C_ChangeEnabled) == 0x000040, "Wrong size on WBP_QueueButton_C_ChangeEnabled");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, Enabled) == 0x000000, "Member 'WBP_QueueButton_C_ChangeEnabled::Enabled' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, Temp_real_Variable) == 0x000004, "Member 'WBP_QueueButton_C_ChangeEnabled::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, Temp_bool_Variable) == 0x000008, "Member 'WBP_QueueButton_C_ChangeEnabled::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, Temp_real_Variable_1) == 0x00000C, "Member 'WBP_QueueButton_C_ChangeEnabled::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, Temp_real_Variable_2) == 0x000010, "Member 'WBP_QueueButton_C_ChangeEnabled::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, Temp_bool_Variable_1) == 0x000014, "Member 'WBP_QueueButton_C_ChangeEnabled::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, K2Node_Select_Default) == 0x000018, "Member 'WBP_QueueButton_C_ChangeEnabled::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, Temp_byte_Variable) == 0x00001C, "Member 'WBP_QueueButton_C_ChangeEnabled::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, Temp_byte_Variable_1) == 0x00001D, "Member 'WBP_QueueButton_C_ChangeEnabled::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, Temp_real_Variable_3) == 0x000020, "Member 'WBP_QueueButton_C_ChangeEnabled::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, K2Node_Select_Default_1) == 0x000024, "Member 'WBP_QueueButton_C_ChangeEnabled::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, Temp_bool_Variable_2) == 0x000025, "Member 'WBP_QueueButton_C_ChangeEnabled::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, K2Node_Select_Default_2) == 0x000028, "Member 'WBP_QueueButton_C_ChangeEnabled::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'WBP_QueueButton_C_ChangeEnabled::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeEnabled, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'WBP_QueueButton_C_ChangeEnabled::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_QueueButton.WBP_QueueButton_C.ChangeHoverState
// 0x0020 (0x0020 - 0x0000)
struct WBP_QueueButton_C_ChangeHoverState final
{
public:
	bool                                          IsHovering_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueButton_C_ChangeHoverState) == 0x000008, "Wrong alignment on WBP_QueueButton_C_ChangeHoverState");
static_assert(sizeof(WBP_QueueButton_C_ChangeHoverState) == 0x000020, "Wrong size on WBP_QueueButton_C_ChangeHoverState");
static_assert(offsetof(WBP_QueueButton_C_ChangeHoverState, IsHovering_0) == 0x000000, "Member 'WBP_QueueButton_C_ChangeHoverState::IsHovering_0' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeHoverState, Temp_bool_Variable) == 0x000001, "Member 'WBP_QueueButton_C_ChangeHoverState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeHoverState, Temp_real_Variable) == 0x000004, "Member 'WBP_QueueButton_C_ChangeHoverState::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeHoverState, Temp_real_Variable_1) == 0x000008, "Member 'WBP_QueueButton_C_ChangeHoverState::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeHoverState, K2Node_Select_Default) == 0x00000C, "Member 'WBP_QueueButton_C_ChangeHoverState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeHoverState, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'WBP_QueueButton_C_ChangeHoverState::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeHoverState, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'WBP_QueueButton_C_ChangeHoverState::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_QueueButton.WBP_QueueButton_C.ChangeStateVisual
// 0x0018 (0x0018 - 0x0000)
struct WBP_QueueButton_C_ChangeStateVisual final
{
public:
	bool                                          QueueStart_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_1;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueButton_C_ChangeStateVisual) == 0x000008, "Wrong alignment on WBP_QueueButton_C_ChangeStateVisual");
static_assert(sizeof(WBP_QueueButton_C_ChangeStateVisual) == 0x000018, "Wrong size on WBP_QueueButton_C_ChangeStateVisual");
static_assert(offsetof(WBP_QueueButton_C_ChangeStateVisual, QueueStart_0) == 0x000000, "Member 'WBP_QueueButton_C_ChangeStateVisual::QueueStart_0' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeStateVisual, Temp_bool_Variable) == 0x000001, "Member 'WBP_QueueButton_C_ChangeStateVisual::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeStateVisual, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'WBP_QueueButton_C_ChangeStateVisual::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeStateVisual, Temp_bool_Variable_1) == 0x000003, "Member 'WBP_QueueButton_C_ChangeStateVisual::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeStateVisual, K2Node_Select_Default) == 0x000008, "Member 'WBP_QueueButton_C_ChangeStateVisual::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ChangeStateVisual, K2Node_Select_Default_1) == 0x000010, "Member 'WBP_QueueButton_C_ChangeStateVisual::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_QueueButton.WBP_QueueButton_C.ExecuteUbergraph_WBP_QueueButton
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool OldValue, bool NewValue)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_OldValue_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_NewValue_1;                     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ETimespanBindingDisplayOption, class FText> K2Node_MakeMap_Map;                                // 0x0028(0x0050)(ConstParm)
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue_1;             // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BoolBinding_GetValue_ReturnValue;         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_OldValue;                       // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_NewValue;                       // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83[0x5];                                       // 0x0083(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             K2Node_CustomEvent_UIData;                         // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaLocalPlayerUIData*               K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data;  // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetOwningPlayerCameraManager_ReturnValue; // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue_2;             // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventRenderer_ReturnValue;              // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BoolBinding_GetValue_ReturnValue_1;       // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BF[0x1];                                       // 0x00BF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UOdyUIData* UIData)>     K2Node_CreateDelegate_OutputDelegate_1;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool OldValue, bool NewValue)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00D0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton) == 0x000008, "Wrong alignment on WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton");
static_assert(sizeof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton) == 0x0000E0, "Wrong size on WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, EntryPoint) == 0x000000, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, CallFunc_GetUIDataModel_ReturnValue) == 0x000018, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::CallFunc_GetUIDataModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, K2Node_CustomEvent_OldValue_1) == 0x000020, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::K2Node_CustomEvent_OldValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, K2Node_CustomEvent_NewValue_1) == 0x000021, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::K2Node_CustomEvent_NewValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, K2Node_MakeMap_Map) == 0x000028, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::K2Node_MakeMap_Map' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, CallFunc_GetUIDataModel_ReturnValue_1) == 0x000078, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::CallFunc_GetUIDataModel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, CallFunc_BoolBinding_GetValue_ReturnValue) == 0x000080, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::CallFunc_BoolBinding_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, K2Node_CustomEvent_OldValue) == 0x000081, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::K2Node_CustomEvent_OldValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, K2Node_CustomEvent_NewValue) == 0x000082, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, K2Node_CustomEvent_UIData) == 0x000088, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::K2Node_CustomEvent_UIData' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, K2Node_Event_IsDesignTime) == 0x000090, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data) == 0x000098, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, CallFunc_GetOwningPlayerCameraManager_ReturnValue) == 0x0000A8, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::CallFunc_GetOwningPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, CallFunc_GetUIDataModel_ReturnValue_2) == 0x0000B0, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::CallFunc_GetUIDataModel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, CallFunc_AkEventRenderer_ReturnValue) == 0x0000B8, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::CallFunc_AkEventRenderer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x0000BC, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, CallFunc_BoolBinding_GetValue_ReturnValue_1) == 0x0000BD, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::CallFunc_BoolBinding_GetValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, CallFunc_BooleanAND_ReturnValue) == 0x0000BE, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000C0, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000D0, "Member 'WBP_QueueButton_C_ExecuteUbergraph_WBP_QueueButton::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function WBP_QueueButton.WBP_QueueButton_C.OnAvailableQueuesChanged
// 0x0008 (0x0008 - 0x0000)
struct WBP_QueueButton_C_OnAvailableQueuesChanged final
{
public:
	class UOdyUIData*                             UIData_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueButton_C_OnAvailableQueuesChanged) == 0x000008, "Wrong alignment on WBP_QueueButton_C_OnAvailableQueuesChanged");
static_assert(sizeof(WBP_QueueButton_C_OnAvailableQueuesChanged) == 0x000008, "Wrong size on WBP_QueueButton_C_OnAvailableQueuesChanged");
static_assert(offsetof(WBP_QueueButton_C_OnAvailableQueuesChanged, UIData_0) == 0x000000, "Member 'WBP_QueueButton_C_OnAvailableQueuesChanged::UIData_0' has a wrong offset!");

// Function WBP_QueueButton.WBP_QueueButton_C.OnChangedIsAbleToQueue
// 0x0002 (0x0002 - 0x0000)
struct WBP_QueueButton_C_OnChangedIsAbleToQueue final
{
public:
	bool                                          OldValue;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewValue;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueButton_C_OnChangedIsAbleToQueue) == 0x000001, "Wrong alignment on WBP_QueueButton_C_OnChangedIsAbleToQueue");
static_assert(sizeof(WBP_QueueButton_C_OnChangedIsAbleToQueue) == 0x000002, "Wrong size on WBP_QueueButton_C_OnChangedIsAbleToQueue");
static_assert(offsetof(WBP_QueueButton_C_OnChangedIsAbleToQueue, OldValue) == 0x000000, "Member 'WBP_QueueButton_C_OnChangedIsAbleToQueue::OldValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_OnChangedIsAbleToQueue, NewValue) == 0x000001, "Member 'WBP_QueueButton_C_OnChangedIsAbleToQueue::NewValue' has a wrong offset!");

// Function WBP_QueueButton.WBP_QueueButton_C.OnQueueStatusChanged
// 0x0002 (0x0002 - 0x0000)
struct WBP_QueueButton_C_OnQueueStatusChanged final
{
public:
	bool                                          OldValue;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewValue;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueButton_C_OnQueueStatusChanged) == 0x000001, "Wrong alignment on WBP_QueueButton_C_OnQueueStatusChanged");
static_assert(sizeof(WBP_QueueButton_C_OnQueueStatusChanged) == 0x000002, "Wrong size on WBP_QueueButton_C_OnQueueStatusChanged");
static_assert(offsetof(WBP_QueueButton_C_OnQueueStatusChanged, OldValue) == 0x000000, "Member 'WBP_QueueButton_C_OnQueueStatusChanged::OldValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueButton_C_OnQueueStatusChanged, NewValue) == 0x000001, "Member 'WBP_QueueButton_C_OnQueueStatusChanged::NewValue' has a wrong offset!");

// Function WBP_QueueButton.WBP_QueueButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_QueueButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueButton_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_QueueButton_C_PreConstruct");
static_assert(sizeof(WBP_QueueButton_C_PreConstruct) == 0x000001, "Wrong size on WBP_QueueButton_C_PreConstruct");
static_assert(offsetof(WBP_QueueButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_QueueButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
