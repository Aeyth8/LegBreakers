#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerChannelBarAndPrompts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_PlayerChannelBarAndPrompts.WBP_PlayerChannelBarAndPrompts_C.ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts
// 0x0078 (0x0078 - 0x0000)
struct WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0010(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRTPCValue_Value_ImplicitCast;          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts) == 0x000008, "Wrong alignment on WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts");
static_assert(sizeof(WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts) == 0x000078, "Wrong size on WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts, EntryPoint) == 0x000000, "Member 'WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts, K2Node_Event_MyGeometry) == 0x000010, "Member 'WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts, K2Node_Event_InDeltaTime) == 0x000048, "Member 'WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000050, "Member 'WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000058, "Member 'WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000060, "Member 'WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000068, "Member 'WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000070, "Member 'WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts, CallFunc_SetRTPCValue_Value_ImplicitCast) == 0x000074, "Member 'WBP_PlayerChannelBarAndPrompts_C_ExecuteUbergraph_WBP_PlayerChannelBarAndPrompts::CallFunc_SetRTPCValue_Value_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerChannelBarAndPrompts.WBP_PlayerChannelBarAndPrompts_C.SetStartStopChannelAudioEvents
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerChannelBarAndPrompts_C_SetStartStopChannelAudioEvents final
{
public:
	class FString                                 HeldItemName_0;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerChannelBarAndPrompts_C_SetStartStopChannelAudioEvents) == 0x000008, "Wrong alignment on WBP_PlayerChannelBarAndPrompts_C_SetStartStopChannelAudioEvents");
static_assert(sizeof(WBP_PlayerChannelBarAndPrompts_C_SetStartStopChannelAudioEvents) == 0x000018, "Wrong size on WBP_PlayerChannelBarAndPrompts_C_SetStartStopChannelAudioEvents");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_SetStartStopChannelAudioEvents, HeldItemName_0) == 0x000000, "Member 'WBP_PlayerChannelBarAndPrompts_C_SetStartStopChannelAudioEvents::HeldItemName_0' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_SetStartStopChannelAudioEvents, K2Node_SwitchString_CmpSuccess) == 0x000010, "Member 'WBP_PlayerChannelBarAndPrompts_C_SetStartStopChannelAudioEvents::K2Node_SwitchString_CmpSuccess' has a wrong offset!");

// Function WBP_PlayerChannelBarAndPrompts.WBP_PlayerChannelBarAndPrompts_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_PlayerChannelBarAndPrompts_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerChannelBarAndPrompts_C_Tick) == 0x000004, "Wrong alignment on WBP_PlayerChannelBarAndPrompts_C_Tick");
static_assert(sizeof(WBP_PlayerChannelBarAndPrompts_C_Tick) == 0x00003C, "Wrong size on WBP_PlayerChannelBarAndPrompts_C_Tick");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_PlayerChannelBarAndPrompts_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_PlayerChannelBarAndPrompts_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_PlayerChannelBarAndPrompts.WBP_PlayerChannelBarAndPrompts_C.TryPlayCamoArmorGameplayPrompt
// 0x0010 (0x0010 - 0x0000)
struct WBP_PlayerChannelBarAndPrompts_C_TryPlayCamoArmorGameplayPrompt final
{
public:
	bool                                          HasCamoArmor;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerChannelBarAndPrompts_C_TryPlayCamoArmorGameplayPrompt) == 0x000008, "Wrong alignment on WBP_PlayerChannelBarAndPrompts_C_TryPlayCamoArmorGameplayPrompt");
static_assert(sizeof(WBP_PlayerChannelBarAndPrompts_C_TryPlayCamoArmorGameplayPrompt) == 0x000010, "Wrong size on WBP_PlayerChannelBarAndPrompts_C_TryPlayCamoArmorGameplayPrompt");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryPlayCamoArmorGameplayPrompt, HasCamoArmor) == 0x000000, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryPlayCamoArmorGameplayPrompt::HasCamoArmor' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryPlayCamoArmorGameplayPrompt, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryPlayCamoArmorGameplayPrompt::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_PlayerChannelBarAndPrompts.WBP_PlayerChannelBarAndPrompts_C.TryPlayGameplayPrompt
// 0x0080 (0x0080 - 0x0000)
struct WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt final
{
public:
	int32                                         TipID;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0010(0x0010)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0010)()
	class FText                                   Temp_text_Variable_2;                              // 0x0030(0x0010)()
	class FText                                   Temp_text_Variable_3;                              // 0x0040(0x0010)()
	class FText                                   Temp_text_Variable_4;                              // 0x0050(0x0010)()
	class FText                                   K2Node_Select_Default;                             // 0x0060(0x0010)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt) == 0x000008, "Wrong alignment on WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt");
static_assert(sizeof(WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt) == 0x000080, "Wrong size on WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt, TipID) == 0x000000, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt::TipID' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt, Temp_int_Variable) == 0x000004, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt, Temp_text_Variable) == 0x000010, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt, Temp_text_Variable_1) == 0x000020, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt, Temp_text_Variable_2) == 0x000030, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt, Temp_text_Variable_3) == 0x000040, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt, Temp_text_Variable_4) == 0x000050, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt, K2Node_Select_Default) == 0x000060, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000070, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt, CallFunc_PlayAnimation_ReturnValue) == 0x000078, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryPlayGameplayPrompt::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_PlayerChannelBarAndPrompts.WBP_PlayerChannelBarAndPrompts_C.TryStartChannelBar
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerChannelBarAndPrompts_C_TryStartChannelBar final
{
public:
	double                                        TargetConsumeFinishTime;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentEntityTimeMS_0;                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Channeling;                                        // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerChannelBarAndPrompts_C_TryStartChannelBar) == 0x000008, "Wrong alignment on WBP_PlayerChannelBarAndPrompts_C_TryStartChannelBar");
static_assert(sizeof(WBP_PlayerChannelBarAndPrompts_C_TryStartChannelBar) == 0x000018, "Wrong size on WBP_PlayerChannelBarAndPrompts_C_TryStartChannelBar");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryStartChannelBar, TargetConsumeFinishTime) == 0x000000, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryStartChannelBar::TargetConsumeFinishTime' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryStartChannelBar, CurrentEntityTimeMS_0) == 0x000008, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryStartChannelBar::CurrentEntityTimeMS_0' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryStartChannelBar, Channeling) == 0x000010, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryStartChannelBar::Channeling' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_TryStartChannelBar, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000011, "Member 'WBP_PlayerChannelBarAndPrompts_C_TryStartChannelBar::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");

// Function WBP_PlayerChannelBarAndPrompts.WBP_PlayerChannelBarAndPrompts_C.UpdateCameraModeText
// 0x0068 (0x0068 - 0x0000)
struct WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText final
{
public:
	bool                                          CombatMode;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0018(0x0010)()
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0030(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0040(0x0010)()
	class FText                                   K2Node_Select_Default;                             // 0x0050(0x0010)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText) == 0x000008, "Wrong alignment on WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText");
static_assert(sizeof(WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText) == 0x000068, "Wrong size on WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText, CombatMode) == 0x000000, "Member 'WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText::CombatMode' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText, K2Node_MakeArray_Array) == 0x000008, "Member 'WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText, CallFunc_Format_ReturnValue) == 0x000018, "Member 'WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText, Temp_bool_Variable) == 0x000028, "Member 'WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000029, "Member 'WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText, K2Node_MakeArray_Array_1) == 0x000030, "Member 'WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText, CallFunc_Format_ReturnValue_1) == 0x000040, "Member 'WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText, K2Node_Select_Default) == 0x000050, "Member 'WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText, CallFunc_PlayAnimation_ReturnValue) == 0x000060, "Member 'WBP_PlayerChannelBarAndPrompts_C_UpdateCameraModeText::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

