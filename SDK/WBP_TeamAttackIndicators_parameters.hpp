#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TeamAttackIndicators

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "OdyUI_structs.hpp"


namespace SDK::Params
{

// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.ExecuteUbergraph_WBP_TeamAttackIndicators
// 0x0078 (0x0078 - 0x0000)
struct WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EInputMethod InputMethod)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMatchaUISubsystem*                     CallFunc_GetUISubsystem_ReturnValue;               // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputMethod                                  K2Node_CustomEvent_InputMethod;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaUISubsystem*                     CallFunc_GetUISubsystem_ReturnValue_1;             // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputMethod                                  CallFunc_GetInputMethod_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators) == 0x000008, "Wrong alignment on WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators");
static_assert(sizeof(WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators) == 0x000078, "Wrong size on WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators, EntryPoint) == 0x000000, "Member 'WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators, K2Node_Event_MyGeometry) == 0x000014, "Member 'WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators, CallFunc_GetUISubsystem_ReturnValue) == 0x000050, "Member 'WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators::CallFunc_GetUISubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators, CallFunc_PlayAnimation_ReturnValue) == 0x000058, "Member 'WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators, K2Node_CustomEvent_InputMethod) == 0x000060, "Member 'WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators::K2Node_CustomEvent_InputMethod' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators, K2Node_SwitchEnum_CmpSuccess) == 0x000061, "Member 'WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators, CallFunc_GetUISubsystem_ReturnValue_1) == 0x000068, "Member 'WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators::CallFunc_GetUISubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators, CallFunc_GetInputMethod_ReturnValue) == 0x000070, "Member 'WBP_TeamAttackIndicators_C_ExecuteUbergraph_WBP_TeamAttackIndicators::CallFunc_GetInputMethod_ReturnValue' has a wrong offset!");

// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.HideOrShowKBMSpecificIA
// 0x0001 (0x0001 - 0x0000)
struct WBP_TeamAttackIndicators_C_HideOrShowKBMSpecificIA final
{
public:
	EInputMethod                                  InputMethod;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TeamAttackIndicators_C_HideOrShowKBMSpecificIA) == 0x000001, "Wrong alignment on WBP_TeamAttackIndicators_C_HideOrShowKBMSpecificIA");
static_assert(sizeof(WBP_TeamAttackIndicators_C_HideOrShowKBMSpecificIA) == 0x000001, "Wrong size on WBP_TeamAttackIndicators_C_HideOrShowKBMSpecificIA");
static_assert(offsetof(WBP_TeamAttackIndicators_C_HideOrShowKBMSpecificIA, InputMethod) == 0x000000, "Member 'WBP_TeamAttackIndicators_C_HideOrShowKBMSpecificIA::InputMethod' has a wrong offset!");

// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.PlayTeamAttackWarning
// 0x0008 (0x0008 - 0x0000)
struct WBP_TeamAttackIndicators_C_PlayTeamAttackWarning final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TeamAttackIndicators_C_PlayTeamAttackWarning) == 0x000008, "Wrong alignment on WBP_TeamAttackIndicators_C_PlayTeamAttackWarning");
static_assert(sizeof(WBP_TeamAttackIndicators_C_PlayTeamAttackWarning) == 0x000008, "Wrong size on WBP_TeamAttackIndicators_C_PlayTeamAttackWarning");
static_assert(offsetof(WBP_TeamAttackIndicators_C_PlayTeamAttackWarning, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WBP_TeamAttackIndicators_C_PlayTeamAttackWarning::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_TeamAttackIndicators_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TeamAttackIndicators_C_Tick) == 0x000004, "Wrong alignment on WBP_TeamAttackIndicators_C_Tick");
static_assert(sizeof(WBP_TeamAttackIndicators_C_Tick) == 0x00003C, "Wrong size on WBP_TeamAttackIndicators_C_Tick");
static_assert(offsetof(WBP_TeamAttackIndicators_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_TeamAttackIndicators_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_TeamAttackIndicators_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_TeamAttackIndicators.WBP_TeamAttackIndicators_C.ToggleGlitchMarkIndicator
// 0x0005 (0x0005 - 0x0000)
struct WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator final
{
public:
	bool                                          ShouldBeVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator) == 0x000001, "Wrong alignment on WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator");
static_assert(sizeof(WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator) == 0x000005, "Wrong size on WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator, ShouldBeVisible) == 0x000000, "Member 'WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator::ShouldBeVisible' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator, Temp_bool_Variable) == 0x000001, "Member 'WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator, Temp_byte_Variable) == 0x000002, "Member 'WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator, K2Node_Select_Default) == 0x000004, "Member 'WBP_TeamAttackIndicators_C_ToggleGlitchMarkIndicator::K2Node_Select_Default' has a wrong offset!");

}

