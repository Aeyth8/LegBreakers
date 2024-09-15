#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SocialOptions

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_SocialOptions.WBP_SocialOptions_C.BindData
// 0x0008 (0x0008 - 0x0000)
struct WBP_SocialOptions_C_BindData final
{
public:
	class UOdyUIData*                             NewUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SocialOptions_C_BindData) == 0x000008, "Wrong alignment on WBP_SocialOptions_C_BindData");
static_assert(sizeof(WBP_SocialOptions_C_BindData) == 0x000008, "Wrong size on WBP_SocialOptions_C_BindData");
static_assert(offsetof(WBP_SocialOptions_C_BindData, NewUIData) == 0x000000, "Member 'WBP_SocialOptions_C_BindData::NewUIData' has a wrong offset!");

// Function WBP_SocialOptions.WBP_SocialOptions_C.ChangedPartyState
// 0x0002 (0x0002 - 0x0000)
struct WBP_SocialOptions_C_ChangedPartyState final
{
public:
	bool                                          OldValue;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewValue;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SocialOptions_C_ChangedPartyState) == 0x000001, "Wrong alignment on WBP_SocialOptions_C_ChangedPartyState");
static_assert(sizeof(WBP_SocialOptions_C_ChangedPartyState) == 0x000002, "Wrong size on WBP_SocialOptions_C_ChangedPartyState");
static_assert(offsetof(WBP_SocialOptions_C_ChangedPartyState, OldValue) == 0x000000, "Member 'WBP_SocialOptions_C_ChangedPartyState::OldValue' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ChangedPartyState, NewValue) == 0x000001, "Member 'WBP_SocialOptions_C_ChangedPartyState::NewValue' has a wrong offset!");

// Function WBP_SocialOptions.WBP_SocialOptions_C.ExecuteUbergraph_WBP_SocialOptions
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMatchaPlayerProfileUIData*>     K2Node_CustomEvent_ProfileList_1;                  // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOdyUIData*                             K2Node_Event_OldUIData;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOdyUIData*                             K2Node_Event_NewUIData;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaLocalPlayerUIData*               K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data;  // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaLocalPlayerUIData*               K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data_1; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool OldValue, bool NewValue)> K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMatchaPlayerProfileUIData*>     K2Node_CustomEvent_ProfileList;                    // 0x0060(0x0010)(ConstParm, ReferenceParm)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_OldValue;                       // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_NewValue;                       // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B[0x1];                                       // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TArray<class UMatchaPlayerProfileUIData*>& ProfileList)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E[0x2];                                       // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TArray<class UMatchaPlayerProfileUIData*>& ProfileList)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions) == 0x000008, "Wrong alignment on WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions");
static_assert(sizeof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions) == 0x0000A0, "Wrong size on WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, EntryPoint) == 0x000000, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_CustomEvent_ProfileList_1) == 0x000008, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_CustomEvent_ProfileList_1' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_Event_OldUIData) == 0x000020, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_Event_OldUIData' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_Event_NewUIData) == 0x000028, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_Event_NewUIData' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data) == 0x000030, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data_1) == 0x000040, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_DynamicCast_AsMatcha_Local_Player_UI_Data_1' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, Temp_byte_Variable) == 0x000049, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_CustomEvent_ProfileList) == 0x000060, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_CustomEvent_ProfileList' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, Temp_byte_Variable_1) == 0x000070, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, CallFunc_Array_Length_ReturnValue_1) == 0x000074, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, Temp_bool_Variable) == 0x000078, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_CustomEvent_OldValue) == 0x000079, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_CustomEvent_OldValue' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_CustomEvent_NewValue) == 0x00007A, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_CreateDelegate_OutputDelegate_1) == 0x00007C, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_Select_Default) == 0x00008C, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_Event_IsDesignTime) == 0x00008D, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions, K2Node_CreateDelegate_OutputDelegate_2) == 0x000090, "Member 'WBP_SocialOptions_C_ExecuteUbergraph_WBP_SocialOptions::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function WBP_SocialOptions.WBP_SocialOptions_C.HandleReceivedInvitesUpdated
// 0x0010 (0x0010 - 0x0000)
struct WBP_SocialOptions_C_HandleReceivedInvitesUpdated final
{
public:
	TArray<class UMatchaPlayerProfileUIData*>     ProfileList;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_SocialOptions_C_HandleReceivedInvitesUpdated) == 0x000008, "Wrong alignment on WBP_SocialOptions_C_HandleReceivedInvitesUpdated");
static_assert(sizeof(WBP_SocialOptions_C_HandleReceivedInvitesUpdated) == 0x000010, "Wrong size on WBP_SocialOptions_C_HandleReceivedInvitesUpdated");
static_assert(offsetof(WBP_SocialOptions_C_HandleReceivedInvitesUpdated, ProfileList) == 0x000000, "Member 'WBP_SocialOptions_C_HandleReceivedInvitesUpdated::ProfileList' has a wrong offset!");

// Function WBP_SocialOptions.WBP_SocialOptions_C.HandleSentInvitesUpdated
// 0x0010 (0x0010 - 0x0000)
struct WBP_SocialOptions_C_HandleSentInvitesUpdated final
{
public:
	TArray<class UMatchaPlayerProfileUIData*>     ProfileList;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_SocialOptions_C_HandleSentInvitesUpdated) == 0x000008, "Wrong alignment on WBP_SocialOptions_C_HandleSentInvitesUpdated");
static_assert(sizeof(WBP_SocialOptions_C_HandleSentInvitesUpdated) == 0x000010, "Wrong size on WBP_SocialOptions_C_HandleSentInvitesUpdated");
static_assert(offsetof(WBP_SocialOptions_C_HandleSentInvitesUpdated, ProfileList) == 0x000000, "Member 'WBP_SocialOptions_C_HandleSentInvitesUpdated::ProfileList' has a wrong offset!");

// Function WBP_SocialOptions.WBP_SocialOptions_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_SocialOptions_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SocialOptions_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_SocialOptions_C_PreConstruct");
static_assert(sizeof(WBP_SocialOptions_C_PreConstruct) == 0x000001, "Wrong size on WBP_SocialOptions_C_PreConstruct");
static_assert(offsetof(WBP_SocialOptions_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_SocialOptions_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_SocialOptions.WBP_SocialOptions_C.SetTabOptionToStart
// 0x0010 (0x0010 - 0x0000)
struct WBP_SocialOptions_C_SetTabOptionToStart final
{
public:
	bool                                          UseRequestsTab;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SocialOptions_C_SetTabOptionToStart) == 0x000008, "Wrong alignment on WBP_SocialOptions_C_SetTabOptionToStart");
static_assert(sizeof(WBP_SocialOptions_C_SetTabOptionToStart) == 0x000010, "Wrong size on WBP_SocialOptions_C_SetTabOptionToStart");
static_assert(offsetof(WBP_SocialOptions_C_SetTabOptionToStart, UseRequestsTab) == 0x000000, "Member 'WBP_SocialOptions_C_SetTabOptionToStart::UseRequestsTab' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_SetTabOptionToStart, Temp_bool_Variable) == 0x000001, "Member 'WBP_SocialOptions_C_SetTabOptionToStart::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_SetTabOptionToStart, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'WBP_SocialOptions_C_SetTabOptionToStart::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SocialOptions_C_SetTabOptionToStart, K2Node_Select_Default) == 0x000008, "Member 'WBP_SocialOptions_C_SetTabOptionToStart::K2Node_Select_Default' has a wrong offset!");

// Function WBP_SocialOptions.WBP_SocialOptions_C.UnbindData
// 0x0008 (0x0008 - 0x0000)
struct WBP_SocialOptions_C_UnbindData final
{
public:
	class UOdyUIData*                             OldUIData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SocialOptions_C_UnbindData) == 0x000008, "Wrong alignment on WBP_SocialOptions_C_UnbindData");
static_assert(sizeof(WBP_SocialOptions_C_UnbindData) == 0x000008, "Wrong size on WBP_SocialOptions_C_UnbindData");
static_assert(offsetof(WBP_SocialOptions_C_UnbindData, OldUIData) == 0x000000, "Member 'WBP_SocialOptions_C_UnbindData::OldUIData' has a wrong offset!");

}

