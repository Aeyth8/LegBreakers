#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_LoadingModal

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_LoadingModal.WBP_Menu_LoadingModal_C.ExecuteUbergraph_WBP_Menu_LoadingModal
// 0x0050 (0x0050 - 0x0000)
struct WBP_Menu_LoadingModal_C_ExecuteUbergraph_WBP_Menu_LoadingModal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0010(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_LoadingModal_C_ExecuteUbergraph_WBP_Menu_LoadingModal) == 0x000008, "Wrong alignment on WBP_Menu_LoadingModal_C_ExecuteUbergraph_WBP_Menu_LoadingModal");
static_assert(sizeof(WBP_Menu_LoadingModal_C_ExecuteUbergraph_WBP_Menu_LoadingModal) == 0x000050, "Wrong size on WBP_Menu_LoadingModal_C_ExecuteUbergraph_WBP_Menu_LoadingModal");
static_assert(offsetof(WBP_Menu_LoadingModal_C_ExecuteUbergraph_WBP_Menu_LoadingModal, EntryPoint) == 0x000000, "Member 'WBP_Menu_LoadingModal_C_ExecuteUbergraph_WBP_Menu_LoadingModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_LoadingModal_C_ExecuteUbergraph_WBP_Menu_LoadingModal, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_Menu_LoadingModal_C_ExecuteUbergraph_WBP_Menu_LoadingModal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_LoadingModal_C_ExecuteUbergraph_WBP_Menu_LoadingModal, K2Node_Event_MyGeometry) == 0x000010, "Member 'WBP_Menu_LoadingModal_C_ExecuteUbergraph_WBP_Menu_LoadingModal::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Menu_LoadingModal_C_ExecuteUbergraph_WBP_Menu_LoadingModal, K2Node_Event_InDeltaTime) == 0x000048, "Member 'WBP_Menu_LoadingModal_C_ExecuteUbergraph_WBP_Menu_LoadingModal::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function WBP_Menu_LoadingModal.WBP_Menu_LoadingModal_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_Menu_LoadingModal_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_LoadingModal_C_Tick) == 0x000004, "Wrong alignment on WBP_Menu_LoadingModal_C_Tick");
static_assert(sizeof(WBP_Menu_LoadingModal_C_Tick) == 0x00003C, "Wrong size on WBP_Menu_LoadingModal_C_Tick");
static_assert(offsetof(WBP_Menu_LoadingModal_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Menu_LoadingModal_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Menu_LoadingModal_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_Menu_LoadingModal_C_Tick::InDeltaTime' has a wrong offset!");

}

