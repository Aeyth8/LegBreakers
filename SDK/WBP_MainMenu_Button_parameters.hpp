#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_Button

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_MainMenu_Button.WBP_MainMenu_Button_C.ChangeState
// 0x0050 (0x0050 - 0x0000)
struct WBP_MainMenu_Button_C_ChangeState final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable;                                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_2;                           // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_Button_C_ChangeState) == 0x000008, "Wrong alignment on WBP_MainMenu_Button_C_ChangeState");
static_assert(sizeof(WBP_MainMenu_Button_C_ChangeState) == 0x000050, "Wrong size on WBP_MainMenu_Button_C_ChangeState");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, IsSelected) == 0x000000, "Member 'WBP_MainMenu_Button_C_ChangeState::IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, Temp_bool_Variable) == 0x000001, "Member 'WBP_MainMenu_Button_C_ChangeState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, Temp_byte_Variable) == 0x000002, "Member 'WBP_MainMenu_Button_C_ChangeState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_MainMenu_Button_C_ChangeState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, Temp_bool_Variable_1) == 0x000004, "Member 'WBP_MainMenu_Button_C_ChangeState::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, K2Node_Select_Default) == 0x000005, "Member 'WBP_MainMenu_Button_C_ChangeState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, Temp_real_Variable) == 0x000008, "Member 'WBP_MainMenu_Button_C_ChangeState::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, Temp_real_Variable_1) == 0x00000C, "Member 'WBP_MainMenu_Button_C_ChangeState::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, Temp_struct_Variable) == 0x000010, "Member 'WBP_MainMenu_Button_C_ChangeState::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, K2Node_Select_Default_1) == 0x000020, "Member 'WBP_MainMenu_Button_C_ChangeState::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, Temp_struct_Variable_1) == 0x000024, "Member 'WBP_MainMenu_Button_C_ChangeState::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, Temp_bool_Variable_2) == 0x000034, "Member 'WBP_MainMenu_Button_C_ChangeState::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, K2Node_Select_Default_2) == 0x000038, "Member 'WBP_MainMenu_Button_C_ChangeState::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ChangeState, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000048, "Member 'WBP_MainMenu_Button_C_ChangeState::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function WBP_MainMenu_Button.WBP_MainMenu_Button_C.ExecuteUbergraph_WBP_MainMenu_Button
// 0x0070 (0x0070 - 0x0000)
struct WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventRenderer_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventRenderer_ReturnValue_1;            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button) == 0x000008, "Wrong alignment on WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button");
static_assert(sizeof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button) == 0x000070, "Wrong size on WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button");
static_assert(offsetof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button, EntryPoint) == 0x000000, "Member 'WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button, Temp_struct_Variable) == 0x000004, "Member 'WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button, Temp_struct_Variable_1) == 0x000014, "Member 'WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button, K2Node_Event_IsDesignTime) == 0x000024, "Member 'WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button, Temp_bool_Variable) == 0x000025, "Member 'WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button, K2Node_Select_Default) == 0x000028, "Member 'WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000040, "Member 'WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button, CallFunc_GetOwningPlayer_ReturnValue) == 0x000048, "Member 'WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000050, "Member 'WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button, CallFunc_AkEventRenderer_ReturnValue) == 0x000058, "Member 'WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button::CallFunc_AkEventRenderer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000060, "Member 'WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button, CallFunc_AkEventRenderer_ReturnValue_1) == 0x000068, "Member 'WBP_MainMenu_Button_C_ExecuteUbergraph_WBP_MainMenu_Button::CallFunc_AkEventRenderer_ReturnValue_1' has a wrong offset!");

// Function WBP_MainMenu_Button.WBP_MainMenu_Button_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_MainMenu_Button_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_Button_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_MainMenu_Button_C_PreConstruct");
static_assert(sizeof(WBP_MainMenu_Button_C_PreConstruct) == 0x000001, "Wrong size on WBP_MainMenu_Button_C_PreConstruct");
static_assert(offsetof(WBP_MainMenu_Button_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_MainMenu_Button_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_MainMenu_Button.WBP_MainMenu_Button_C.SetEnabled
// 0x004C (0x004C - 0x0000)
struct WBP_MainMenu_Button_C_SetEnabled final
{
public:
	bool                                          IsEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0014)()
};
static_assert(alignof(WBP_MainMenu_Button_C_SetEnabled) == 0x000004, "Wrong alignment on WBP_MainMenu_Button_C_SetEnabled");
static_assert(sizeof(WBP_MainMenu_Button_C_SetEnabled) == 0x00004C, "Wrong size on WBP_MainMenu_Button_C_SetEnabled");
static_assert(offsetof(WBP_MainMenu_Button_C_SetEnabled, IsEnabled) == 0x000000, "Member 'WBP_MainMenu_Button_C_SetEnabled::IsEnabled' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetEnabled, Temp_bool_Variable) == 0x000001, "Member 'WBP_MainMenu_Button_C_SetEnabled::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetEnabled, Temp_byte_Variable) == 0x000002, "Member 'WBP_MainMenu_Button_C_SetEnabled::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetEnabled, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_MainMenu_Button_C_SetEnabled::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetEnabled, Temp_bool_Variable_1) == 0x000004, "Member 'WBP_MainMenu_Button_C_SetEnabled::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetEnabled, K2Node_Select_Default) == 0x000005, "Member 'WBP_MainMenu_Button_C_SetEnabled::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetEnabled, Temp_struct_Variable) == 0x000008, "Member 'WBP_MainMenu_Button_C_SetEnabled::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetEnabled, Temp_struct_Variable_1) == 0x000018, "Member 'WBP_MainMenu_Button_C_SetEnabled::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetEnabled, K2Node_Select_Default_1) == 0x000028, "Member 'WBP_MainMenu_Button_C_SetEnabled::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetEnabled, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'WBP_MainMenu_Button_C_SetEnabled::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function WBP_MainMenu_Button.WBP_MainMenu_Button_C.SetVisual
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_MainMenu_Button_C_SetVisual final
{
public:
	class FText                                   Text_0;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                        CornersPadding;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                Padding_0;                                         // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        Width_0;                                           // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Height_0;                                          // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Left_ImplicitCast;               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Top_ImplicitCast;                // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Right_ImplicitCast;              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast;             // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_Button_C_SetVisual) == 0x000008, "Wrong alignment on WBP_MainMenu_Button_C_SetVisual");
static_assert(sizeof(WBP_MainMenu_Button_C_SetVisual) == 0x0000A8, "Wrong size on WBP_MainMenu_Button_C_SetVisual");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, Text_0) == 0x000000, "Member 'WBP_MainMenu_Button_C_SetVisual::Text_0' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, CornersPadding) == 0x000010, "Member 'WBP_MainMenu_Button_C_SetVisual::CornersPadding' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, Padding_0) == 0x000018, "Member 'WBP_MainMenu_Button_C_SetVisual::Padding_0' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, Width_0) == 0x000028, "Member 'WBP_MainMenu_Button_C_SetVisual::Width_0' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, Height_0) == 0x000030, "Member 'WBP_MainMenu_Button_C_SetVisual::Height_0' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000038, "Member 'WBP_MainMenu_Button_C_SetVisual::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000040, "Member 'WBP_MainMenu_Button_C_SetVisual::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000048, "Member 'WBP_MainMenu_Button_C_SetVisual::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'WBP_MainMenu_Button_C_SetVisual::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000058, "Member 'WBP_MainMenu_Button_C_SetVisual::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000060, "Member 'WBP_MainMenu_Button_C_SetVisual::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, K2Node_MakeStruct_Margin) == 0x000068, "Member 'WBP_MainMenu_Button_C_SetVisual::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000078, "Member 'WBP_MainMenu_Button_C_SetVisual::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000080, "Member 'WBP_MainMenu_Button_C_SetVisual::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000088, "Member 'WBP_MainMenu_Button_C_SetVisual::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x00008C, "Member 'WBP_MainMenu_Button_C_SetVisual::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000090, "Member 'WBP_MainMenu_Button_C_SetVisual::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, K2Node_MakeStruct_Left_ImplicitCast) == 0x000094, "Member 'WBP_MainMenu_Button_C_SetVisual::K2Node_MakeStruct_Left_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, K2Node_MakeStruct_Top_ImplicitCast) == 0x000098, "Member 'WBP_MainMenu_Button_C_SetVisual::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, K2Node_MakeStruct_Right_ImplicitCast) == 0x00009C, "Member 'WBP_MainMenu_Button_C_SetVisual::K2Node_MakeStruct_Right_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, K2Node_MakeStruct_Bottom_ImplicitCast) == 0x0000A0, "Member 'WBP_MainMenu_Button_C_SetVisual::K2Node_MakeStruct_Bottom_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Button_C_SetVisual, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x0000A4, "Member 'WBP_MainMenu_Button_C_SetVisual::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

}
