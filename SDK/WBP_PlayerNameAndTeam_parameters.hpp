#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerNameAndTeam

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_PlayerNameAndTeam.WBP_PlayerNameAndTeam_C.ExecuteUbergraph_WBP_PlayerNameAndTeam
// 0x0090 (0x0090 - 0x0000)
struct WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_PlayerName;                     // 0x0008(0x0010)()
	int32                                         K2Node_CustomEvent_TeamNumber;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0080(0x0010)()
};
static_assert(alignof(WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam) == 0x000008, "Wrong alignment on WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam");
static_assert(sizeof(WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam) == 0x000090, "Wrong size on WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam");
static_assert(offsetof(WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam, EntryPoint) == 0x000000, "Member 'WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam, K2Node_CustomEvent_PlayerName) == 0x000008, "Member 'WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam::K2Node_CustomEvent_PlayerName' has a wrong offset!");
static_assert(offsetof(WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam, K2Node_CustomEvent_TeamNumber) == 0x000018, "Member 'WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam::K2Node_CustomEvent_TeamNumber' has a wrong offset!");
static_assert(offsetof(WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000020, "Member 'WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam, K2Node_MakeArray_Array) == 0x000070, "Member 'WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam, CallFunc_Format_ReturnValue) == 0x000080, "Member 'WBP_PlayerNameAndTeam_C_ExecuteUbergraph_WBP_PlayerNameAndTeam::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_PlayerNameAndTeam.WBP_PlayerNameAndTeam_C.UpdateInfo
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerNameAndTeam_C_UpdateInfo final
{
public:
	class FText                                   PlayerName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         TeamNumber;                                        // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerNameAndTeam_C_UpdateInfo) == 0x000008, "Wrong alignment on WBP_PlayerNameAndTeam_C_UpdateInfo");
static_assert(sizeof(WBP_PlayerNameAndTeam_C_UpdateInfo) == 0x000018, "Wrong size on WBP_PlayerNameAndTeam_C_UpdateInfo");
static_assert(offsetof(WBP_PlayerNameAndTeam_C_UpdateInfo, PlayerName) == 0x000000, "Member 'WBP_PlayerNameAndTeam_C_UpdateInfo::PlayerName' has a wrong offset!");
static_assert(offsetof(WBP_PlayerNameAndTeam_C_UpdateInfo, TeamNumber) == 0x000010, "Member 'WBP_PlayerNameAndTeam_C_UpdateInfo::TeamNumber' has a wrong offset!");

}

