#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SocialOptions_ButtonTab

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_SocialOptions_ButtonTab.WBP_SocialOptions_ButtonTab_C.ChangeState
// 0x01A8 (0x01A8 - 0x0000)
struct WBP_SocialOptions_ButtonTab_C_ChangeState final
{
public:
	bool                                          IsSelected_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         Text_Selected;                                     // 0x0008(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateFontInfo                         Text_Normal;                                       // 0x0068(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable;                              // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_2;                            // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select_Default;                             // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable_3;                            // 0x0120(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select_Default_2;                           // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_Select_Default_3;                           // 0x0148(0x0060)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_SocialOptions_ButtonTab_C_ChangeState) == 0x000008, "Wrong alignment on WBP_SocialOptions_ButtonTab_C_ChangeState");
static_assert(sizeof(WBP_SocialOptions_ButtonTab_C_ChangeState) == 0x0001A8, "Wrong size on WBP_SocialOptions_ButtonTab_C_ChangeState");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, IsSelected_0) == 0x000000, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::IsSelected_0' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, Text_Selected) == 0x000008, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::Text_Selected' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, Text_Normal) == 0x000068, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::Text_Normal' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, Temp_struct_Variable) == 0x0000C8, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, Temp_bool_Variable) == 0x0000D8, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, Temp_struct_Variable_1) == 0x0000E0, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, Temp_struct_Variable_2) == 0x0000F0, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, Temp_bool_Variable_1) == 0x000100, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, K2Node_Select_Default) == 0x000108, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, Temp_bool_Variable_2) == 0x000118, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, Temp_byte_Variable) == 0x000119, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, Temp_byte_Variable_1) == 0x00011A, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, K2Node_Select_Default_1) == 0x00011B, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, Temp_struct_Variable_3) == 0x000120, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, Temp_bool_Variable_3) == 0x000130, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, K2Node_Select_Default_2) == 0x000138, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ChangeState, K2Node_Select_Default_3) == 0x000148, "Member 'WBP_SocialOptions_ButtonTab_C_ChangeState::K2Node_Select_Default_3' has a wrong offset!");

// Function WBP_SocialOptions_ButtonTab.WBP_SocialOptions_ButtonTab_C.ExecuteUbergraph_WBP_SocialOptions_ButtonTab
// 0x0020 (0x0020 - 0x0000)
struct WBP_SocialOptions_ButtonTab_C_ExecuteUbergraph_WBP_SocialOptions_ButtonTab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SocialOptions_ButtonTab_C_ExecuteUbergraph_WBP_SocialOptions_ButtonTab) == 0x000008, "Wrong alignment on WBP_SocialOptions_ButtonTab_C_ExecuteUbergraph_WBP_SocialOptions_ButtonTab");
static_assert(sizeof(WBP_SocialOptions_ButtonTab_C_ExecuteUbergraph_WBP_SocialOptions_ButtonTab) == 0x000020, "Wrong size on WBP_SocialOptions_ButtonTab_C_ExecuteUbergraph_WBP_SocialOptions_ButtonTab");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ExecuteUbergraph_WBP_SocialOptions_ButtonTab, EntryPoint) == 0x000000, "Member 'WBP_SocialOptions_ButtonTab_C_ExecuteUbergraph_WBP_SocialOptions_ButtonTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ExecuteUbergraph_WBP_SocialOptions_ButtonTab, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_SocialOptions_ButtonTab_C_ExecuteUbergraph_WBP_SocialOptions_ButtonTab::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ExecuteUbergraph_WBP_SocialOptions_ButtonTab, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_SocialOptions_ButtonTab_C_ExecuteUbergraph_WBP_SocialOptions_ButtonTab::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_ExecuteUbergraph_WBP_SocialOptions_ButtonTab, K2Node_Event_IsDesignTime) == 0x000018, "Member 'WBP_SocialOptions_ButtonTab_C_ExecuteUbergraph_WBP_SocialOptions_ButtonTab::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_SocialOptions_ButtonTab.WBP_SocialOptions_ButtonTab_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_SocialOptions_ButtonTab_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SocialOptions_ButtonTab_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_SocialOptions_ButtonTab_C_PreConstruct");
static_assert(sizeof(WBP_SocialOptions_ButtonTab_C_PreConstruct) == 0x000001, "Wrong size on WBP_SocialOptions_ButtonTab_C_PreConstruct");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_SocialOptions_ButtonTab_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_SocialOptions_ButtonTab.WBP_SocialOptions_ButtonTab_C.SetText
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_SocialOptions_ButtonTab_C_SetText final
{
public:
	int32                                         Length;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0058(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B0(0x0010)()
};
static_assert(alignof(WBP_SocialOptions_ButtonTab_C_SetText) == 0x000008, "Wrong alignment on WBP_SocialOptions_ButtonTab_C_SetText");
static_assert(sizeof(WBP_SocialOptions_ButtonTab_C_SetText) == 0x0000C0, "Wrong size on WBP_SocialOptions_ButtonTab_C_SetText");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_SetText, Length) == 0x000000, "Member 'WBP_SocialOptions_ButtonTab_C_SetText::Length' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_SetText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'WBP_SocialOptions_ButtonTab_C_SetText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_SetText, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'WBP_SocialOptions_ButtonTab_C_SetText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_SetText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000058, "Member 'WBP_SocialOptions_ButtonTab_C_SetText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_SetText, K2Node_MakeArray_Array) == 0x0000A0, "Member 'WBP_SocialOptions_ButtonTab_C_SetText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_SetText, CallFunc_Format_ReturnValue) == 0x0000B0, "Member 'WBP_SocialOptions_ButtonTab_C_SetText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_SocialOptions_ButtonTab.WBP_SocialOptions_ButtonTab_C.SetVisual
// 0x0050 (0x0050 - 0x0000)
struct WBP_SocialOptions_ButtonTab_C_SetVisual final
{
public:
	struct FLinearColor                           Color_0;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Pivot_0;                                           // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ArrowScale;                                        // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                ArrowPadding;                                      // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EHorizontalAlignment                          ArrowHorizontalAlignment;                          // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVerticalAlignment                            ArrowVerticalAlignment;                            // 0x0041(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SocialOptions_ButtonTab_C_SetVisual) == 0x000008, "Wrong alignment on WBP_SocialOptions_ButtonTab_C_SetVisual");
static_assert(sizeof(WBP_SocialOptions_ButtonTab_C_SetVisual) == 0x000050, "Wrong size on WBP_SocialOptions_ButtonTab_C_SetVisual");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_SetVisual, Color_0) == 0x000000, "Member 'WBP_SocialOptions_ButtonTab_C_SetVisual::Color_0' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_SetVisual, Pivot_0) == 0x000010, "Member 'WBP_SocialOptions_ButtonTab_C_SetVisual::Pivot_0' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_SetVisual, ArrowScale) == 0x000020, "Member 'WBP_SocialOptions_ButtonTab_C_SetVisual::ArrowScale' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_SetVisual, ArrowPadding) == 0x000030, "Member 'WBP_SocialOptions_ButtonTab_C_SetVisual::ArrowPadding' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_SetVisual, ArrowHorizontalAlignment) == 0x000040, "Member 'WBP_SocialOptions_ButtonTab_C_SetVisual::ArrowHorizontalAlignment' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_SetVisual, ArrowVerticalAlignment) == 0x000041, "Member 'WBP_SocialOptions_ButtonTab_C_SetVisual::ArrowVerticalAlignment' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_ButtonTab_C_SetVisual, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000048, "Member 'WBP_SocialOptions_ButtonTab_C_SetVisual::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");

}

