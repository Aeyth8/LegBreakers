#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_PauseOptions

#include "Basic.hpp"

#include "EnhancedInput_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_PauseOptions.WBP_Menu_PauseOptions_C.BindData
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_PauseOptions_C_BindData final
{
public:
	class UOdyUIData*                             NewUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_PauseOptions_C_BindData) == 0x000008, "Wrong alignment on WBP_Menu_PauseOptions_C_BindData");
static_assert(sizeof(WBP_Menu_PauseOptions_C_BindData) == 0x000008, "Wrong size on WBP_Menu_PauseOptions_C_BindData");
static_assert(offsetof(WBP_Menu_PauseOptions_C_BindData, NewUIData) == 0x000000, "Member 'WBP_Menu_PauseOptions_C_BindData::NewUIData' has a wrong offset!");

// Function WBP_Menu_PauseOptions.WBP_Menu_PauseOptions_C.ExecuteUbergraph_WBP_Menu_PauseOptions
// 0x02C0 (0x02C0 - 0x0000)
struct WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                      K2Node_EnhancedInputActionEvent_ActionValue;       // 0x0010(0x0020)(NoDestructor)
	float                                         K2Node_EnhancedInputActionEvent_ElapsedTime;       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_EnhancedInputActionEvent_TriggeredTime;     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UInputAction*                     K2Node_EnhancedInputActionEvent_SourceAction;      // 0x0038(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_InputActionValueToBool_ReturnValue;  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputAction*                           Temp_object_Variable;                              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable;                                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_0;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1;                              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable_1_0;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOdyUIRouter*                           CallFunc_GetUIRouter_ReturnValue;                  // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_SocialHub_C*                  CallFunc_CreateMenu_ReturnValue;                   // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Temp_string_Variable;                              // 0x0088(0x0050)(ConstParm)
	class UOdyUIRouter*                           CallFunc_GetUIRouter_ReturnValue_1;                // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOdyUIRouter*                           CallFunc_GetUIRouter_ReturnValue_2;                // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Keybinds_C*                   CallFunc_CreateMenu_ReturnValue_1;                 // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOdyMenu*                               CallFunc_FindMenu_ReturnValue;                     // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_InGameUI_C*                        K2Node_DynamicCast_AsWBP_in_Game_UI;               // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class FString>            Temp_string_Variable_1;                            // 0x0108(0x0050)(ConstParm)
	class UOdyUIRouter*                           CallFunc_GetUIRouter_ReturnValue_3;                // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Leaderboard_C*                CallFunc_CreateMenu_ReturnValue_2;                 // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Temp_string_Variable_2;                            // 0x0168(0x0050)(ConstParm)
	class UOdyUIRouter*                           CallFunc_GetUIRouter_ReturnValue_4;                // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_CharacterSelect_C*            CallFunc_CreateMenu_ReturnValue_3;                 // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C9[0x7];                                      // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOdyUIData*                             K2Node_Event_NewUIData;                            // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOdyUIData*                             K2Node_Event_OldUIData;                            // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMatchaSnapNetPlayerController*         K2Node_DynamicCast_AsMatcha_Snap_Net_Player_Controller; // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMatchaSnapNetPlayerController*         K2Node_DynamicCast_AsMatcha_Snap_Net_Player_Controller_1; // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0228(0x0010)()
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue_1;             // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue_2;             // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MatchaLocalPlayerUIData_C*          K2Node_DynamicCast_AsBP_Matcha_Local_Player_UI_Data; // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MatchaLocalPlayerUIData_C*          K2Node_DynamicCast_AsBP_Matcha_Local_Player_UI_Data_1; // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_261[0x7];                                      // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaUIDataModelBase*                 CallFunc_GetUIDataModel_ReturnValue_3;             // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Temp_string_Variable_3;                            // 0x0270(0x0050)(ConstParm)
};
static_assert(alignof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions) == 0x000008, "Wrong alignment on WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions");
static_assert(sizeof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions) == 0x0002C0, "Wrong size on WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, EntryPoint) == 0x000000, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_GetUIDataModel_ReturnValue) == 0x000008, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_GetUIDataModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_EnhancedInputActionEvent_ActionValue) == 0x000010, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_EnhancedInputActionEvent_ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_EnhancedInputActionEvent_ElapsedTime) == 0x000030, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_EnhancedInputActionEvent_ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_EnhancedInputActionEvent_TriggeredTime) == 0x000034, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_EnhancedInputActionEvent_TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_EnhancedInputActionEvent_SourceAction) == 0x000038, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_EnhancedInputActionEvent_SourceAction' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_Conv_InputActionValueToBool_ReturnValue) == 0x000040, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_Conv_InputActionValueToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, Temp_object_Variable) == 0x000048, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, Temp_real_Variable) == 0x000050, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, Temp_real_Variable_0) == 0x000058, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::Temp_real_Variable_0' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, Temp_real_Variable_1) == 0x000060, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, Temp_bool_Variable) == 0x000068, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, Temp_real_Variable_1_0) == 0x000070, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::Temp_real_Variable_1_0' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_GetUIRouter_ReturnValue) == 0x000078, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_GetUIRouter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_CreateMenu_ReturnValue) == 0x000080, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_CreateMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, Temp_string_Variable) == 0x000088, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_GetUIRouter_ReturnValue_1) == 0x0000D8, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_GetUIRouter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_GetUIRouter_ReturnValue_2) == 0x0000E0, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_GetUIRouter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_CreateMenu_ReturnValue_1) == 0x0000E8, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_CreateMenu_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_FindMenu_ReturnValue) == 0x0000F0, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_FindMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_DynamicCast_AsWBP_in_Game_UI) == 0x0000F8, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_DynamicCast_AsWBP_in_Game_UI' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, Temp_string_Variable_1) == 0x000108, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_GetUIRouter_ReturnValue_3) == 0x000158, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_GetUIRouter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_CreateMenu_ReturnValue_2) == 0x000160, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_CreateMenu_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, Temp_string_Variable_2) == 0x000168, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_GetUIRouter_ReturnValue_4) == 0x0001B8, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_GetUIRouter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_CreateMenu_ReturnValue_3) == 0x0001C0, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_CreateMenu_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_Event_IsDesignTime) == 0x0001C8, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0001D0, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_Event_NewUIData) == 0x0001D8, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_Event_NewUIData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_Event_OldUIData) == 0x0001E0, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_Event_OldUIData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_MakeLiteralString_ReturnValue) == 0x0001E8, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_GetPlayerController_ReturnValue) == 0x0001F8, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_DynamicCast_AsMatcha_Snap_Net_Player_Controller) == 0x000200, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_DynamicCast_AsMatcha_Snap_Net_Player_Controller' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_DynamicCast_bSuccess_1) == 0x000208, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_GetPlayerController_ReturnValue_1) == 0x000210, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_DynamicCast_AsMatcha_Snap_Net_Player_Controller_1) == 0x000218, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_DynamicCast_AsMatcha_Snap_Net_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_DynamicCast_bSuccess_2) == 0x000220, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_MakeLiteralText_ReturnValue) == 0x000228, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_GetUIDataModel_ReturnValue_1) == 0x000238, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_GetUIDataModel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_GetUIDataModel_ReturnValue_2) == 0x000240, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_GetUIDataModel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_DynamicCast_AsBP_Matcha_Local_Player_UI_Data) == 0x000248, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_DynamicCast_AsBP_Matcha_Local_Player_UI_Data' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_DynamicCast_bSuccess_3) == 0x000250, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_DynamicCast_AsBP_Matcha_Local_Player_UI_Data_1) == 0x000258, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_DynamicCast_AsBP_Matcha_Local_Player_UI_Data_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, K2Node_DynamicCast_bSuccess_4) == 0x000260, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, CallFunc_GetUIDataModel_ReturnValue_3) == 0x000268, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::CallFunc_GetUIDataModel_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions, Temp_string_Variable_3) == 0x000270, "Member 'WBP_Menu_PauseOptions_C_ExecuteUbergraph_WBP_Menu_PauseOptions::Temp_string_Variable_3' has a wrong offset!");

// Function WBP_Menu_PauseOptions.WBP_Menu_PauseOptions_C.InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0
// 0x0030 (0x0030 - 0x0000)
struct WBP_Menu_PauseOptions_C_InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0 final
{
public:
	struct FInputActionValue                      ActionValue;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         ElapsedTime;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggeredTime;                                     // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UInputAction*                     SourceAction;                                      // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_PauseOptions_C_InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0) == 0x000008, "Wrong alignment on WBP_Menu_PauseOptions_C_InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0");
static_assert(sizeof(WBP_Menu_PauseOptions_C_InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0) == 0x000030, "Wrong size on WBP_Menu_PauseOptions_C_InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0");
static_assert(offsetof(WBP_Menu_PauseOptions_C_InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0, ActionValue) == 0x000000, "Member 'WBP_Menu_PauseOptions_C_InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0::ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0, ElapsedTime) == 0x000020, "Member 'WBP_Menu_PauseOptions_C_InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0::ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0, TriggeredTime) == 0x000024, "Member 'WBP_Menu_PauseOptions_C_InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0::TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PauseOptions_C_InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0, SourceAction) == 0x000028, "Member 'WBP_Menu_PauseOptions_C_InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0::SourceAction' has a wrong offset!");

// Function WBP_Menu_PauseOptions.WBP_Menu_PauseOptions_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_PauseOptions_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_PauseOptions_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Menu_PauseOptions_C_PreConstruct");
static_assert(sizeof(WBP_Menu_PauseOptions_C_PreConstruct) == 0x000001, "Wrong size on WBP_Menu_PauseOptions_C_PreConstruct");
static_assert(offsetof(WBP_Menu_PauseOptions_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Menu_PauseOptions_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Menu_PauseOptions.WBP_Menu_PauseOptions_C.UnbindData
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_PauseOptions_C_UnbindData final
{
public:
	class UOdyUIData*                             OldUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_PauseOptions_C_UnbindData) == 0x000008, "Wrong alignment on WBP_Menu_PauseOptions_C_UnbindData");
static_assert(sizeof(WBP_Menu_PauseOptions_C_UnbindData) == 0x000008, "Wrong size on WBP_Menu_PauseOptions_C_UnbindData");
static_assert(offsetof(WBP_Menu_PauseOptions_C_UnbindData, OldUIData) == 0x000000, "Member 'WBP_Menu_PauseOptions_C_UnbindData::OldUIData' has a wrong offset!");

}

