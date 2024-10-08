#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_InviteOption

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_Settings_InviteOption_C_BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_InviteOption_C_BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Settings_InviteOption_C_BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");
static_assert(sizeof(WBP_Settings_InviteOption_C_BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature) == 0x000018, "Wrong size on WBP_Settings_InviteOption_C_BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");
static_assert(offsetof(WBP_Settings_InviteOption_C_BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'WBP_Settings_InviteOption_C_BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature, CommitMethod) == 0x000010, "Member 'WBP_Settings_InviteOption_C_BndEvt__WBP_LocalPlayerOverlay_SendInviteText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.ChangeHover
// 0x0080 (0x0080 - 0x0000)
struct WBP_Settings_InviteOption_C_ChangeHover final
{
public:
	bool                                          IsHovering;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x005C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x006C(0x0014)()
};
static_assert(alignof(WBP_Settings_InviteOption_C_ChangeHover) == 0x000004, "Wrong alignment on WBP_Settings_InviteOption_C_ChangeHover");
static_assert(sizeof(WBP_Settings_InviteOption_C_ChangeHover) == 0x000080, "Wrong size on WBP_Settings_InviteOption_C_ChangeHover");
static_assert(offsetof(WBP_Settings_InviteOption_C_ChangeHover, IsHovering) == 0x000000, "Member 'WBP_Settings_InviteOption_C_ChangeHover::IsHovering' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ChangeHover, Temp_struct_Variable) == 0x000004, "Member 'WBP_Settings_InviteOption_C_ChangeHover::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ChangeHover, Temp_struct_Variable_1) == 0x000014, "Member 'WBP_Settings_InviteOption_C_ChangeHover::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ChangeHover, Temp_bool_Variable) == 0x000024, "Member 'WBP_Settings_InviteOption_C_ChangeHover::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ChangeHover, Temp_struct_Variable_2) == 0x000028, "Member 'WBP_Settings_InviteOption_C_ChangeHover::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ChangeHover, Temp_struct_Variable_3) == 0x000038, "Member 'WBP_Settings_InviteOption_C_ChangeHover::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ChangeHover, Temp_bool_Variable_1) == 0x000048, "Member 'WBP_Settings_InviteOption_C_ChangeHover::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ChangeHover, K2Node_Select_Default) == 0x00004C, "Member 'WBP_Settings_InviteOption_C_ChangeHover::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ChangeHover, K2Node_Select_Default_1) == 0x00005C, "Member 'WBP_Settings_InviteOption_C_ChangeHover::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ChangeHover, K2Node_MakeStruct_SlateColor) == 0x00006C, "Member 'WBP_Settings_InviteOption_C_ChangeHover::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.ExecuteUbergraph_WBP_Settings_InviteOption
// 0x0190 (0x0190 - 0x0000)
struct WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0040(0x0078)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B8(0x0078)(ConstParm)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0138(0x0010)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0150(0x0010)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17A[0x6];                                      // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaClientServices*                  CallFunc_GetClientServies_ReturnValue;             // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption) == 0x000008, "Wrong alignment on WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption");
static_assert(sizeof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption) == 0x000190, "Wrong size on WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, EntryPoint) == 0x000000, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, K2Node_Event_MyGeometry) == 0x000004, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, K2Node_Event_MouseEvent_1) == 0x000040, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, K2Node_Event_MouseEvent) == 0x0000B8, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000130, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, K2Node_ComponentBoundEvent_Text) == 0x000138, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, K2Node_ComponentBoundEvent_CommitMethod) == 0x000148, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, CallFunc_GetText_ReturnValue) == 0x000150, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, K2Node_SwitchEnum_CmpSuccess) == 0x000160, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, CallFunc_Conv_TextToString_ReturnValue) == 0x000168, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, CallFunc_TextIsEmpty_ReturnValue) == 0x000178, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, K2Node_Event_IsDesignTime) == 0x000179, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, CallFunc_GetClientServies_ReturnValue) == 0x000180, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::CallFunc_GetClientServies_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption, CallFunc_IsValid_ReturnValue) == 0x000188, "Member 'WBP_Settings_InviteOption_C_ExecuteUbergraph_WBP_Settings_InviteOption::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_Settings_InviteOption_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Settings_InviteOption_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_Settings_InviteOption_C_OnMouseEnter");
static_assert(sizeof(WBP_Settings_InviteOption_C_OnMouseEnter) == 0x0000B0, "Wrong size on WBP_Settings_InviteOption_C_OnMouseEnter");
static_assert(offsetof(WBP_Settings_InviteOption_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_Settings_InviteOption_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'WBP_Settings_InviteOption_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct WBP_Settings_InviteOption_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Settings_InviteOption_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_Settings_InviteOption_C_OnMouseLeave");
static_assert(sizeof(WBP_Settings_InviteOption_C_OnMouseLeave) == 0x000078, "Wrong size on WBP_Settings_InviteOption_C_OnMouseLeave");
static_assert(offsetof(WBP_Settings_InviteOption_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_Settings_InviteOption_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_InviteOption_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_InviteOption_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Settings_InviteOption_C_PreConstruct");
static_assert(sizeof(WBP_Settings_InviteOption_C_PreConstruct) == 0x000001, "Wrong size on WBP_Settings_InviteOption_C_PreConstruct");
static_assert(offsetof(WBP_Settings_InviteOption_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Settings_InviteOption_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.SetTitle
// 0x0010 (0x0010 - 0x0000)
struct WBP_Settings_InviteOption_C_SetTitle final
{
public:
	class FText                                   TitleText_0;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Settings_InviteOption_C_SetTitle) == 0x000008, "Wrong alignment on WBP_Settings_InviteOption_C_SetTitle");
static_assert(sizeof(WBP_Settings_InviteOption_C_SetTitle) == 0x000010, "Wrong size on WBP_Settings_InviteOption_C_SetTitle");
static_assert(offsetof(WBP_Settings_InviteOption_C_SetTitle, TitleText_0) == 0x000000, "Member 'WBP_Settings_InviteOption_C_SetTitle::TitleText_0' has a wrong offset!");

// Function WBP_Settings_InviteOption.WBP_Settings_InviteOption_C.SetVisual
// 0x0078 (0x0078 - 0x0000)
struct WBP_Settings_InviteOption_C_SetVisual final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_InviteOption_C_SetVisual) == 0x000008, "Wrong alignment on WBP_Settings_InviteOption_C_SetVisual");
static_assert(sizeof(WBP_Settings_InviteOption_C_SetVisual) == 0x000078, "Wrong size on WBP_Settings_InviteOption_C_SetVisual");
static_assert(offsetof(WBP_Settings_InviteOption_C_SetVisual, IsSelected) == 0x000000, "Member 'WBP_Settings_InviteOption_C_SetVisual::IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_SetVisual, Temp_struct_Variable) == 0x000004, "Member 'WBP_Settings_InviteOption_C_SetVisual::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_SetVisual, Temp_bool_Variable) == 0x000014, "Member 'WBP_Settings_InviteOption_C_SetVisual::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_SetVisual, Temp_struct_Variable_1) == 0x000018, "Member 'WBP_Settings_InviteOption_C_SetVisual::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_SetVisual, Temp_struct_Variable_2) == 0x000028, "Member 'WBP_Settings_InviteOption_C_SetVisual::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_SetVisual, Temp_struct_Variable_3) == 0x000038, "Member 'WBP_Settings_InviteOption_C_SetVisual::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_SetVisual, K2Node_Select_Default) == 0x000048, "Member 'WBP_Settings_InviteOption_C_SetVisual::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_SetVisual, Temp_bool_Variable_1) == 0x000058, "Member 'WBP_Settings_InviteOption_C_SetVisual::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_SetVisual, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000060, "Member 'WBP_Settings_InviteOption_C_SetVisual::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_InviteOption_C_SetVisual, K2Node_Select_Default_1) == 0x000068, "Member 'WBP_Settings_InviteOption_C_SetVisual::K2Node_Select_Default_1' has a wrong offset!");

}

