#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MinimapIndicator_Hack

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_MinimapIndicator_Hack.WBP_MinimapIndicator_Hack_C.ExecuteUbergraph_WBP_MinimapIndicator_Hack
// 0x0008 (0x0008 - 0x0000)
struct WBP_MinimapIndicator_Hack_C_ExecuteUbergraph_WBP_MinimapIndicator_Hack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinimapIndicator_Hack_C_ExecuteUbergraph_WBP_MinimapIndicator_Hack) == 0x000004, "Wrong alignment on WBP_MinimapIndicator_Hack_C_ExecuteUbergraph_WBP_MinimapIndicator_Hack");
static_assert(sizeof(WBP_MinimapIndicator_Hack_C_ExecuteUbergraph_WBP_MinimapIndicator_Hack) == 0x000008, "Wrong size on WBP_MinimapIndicator_Hack_C_ExecuteUbergraph_WBP_MinimapIndicator_Hack");
static_assert(offsetof(WBP_MinimapIndicator_Hack_C_ExecuteUbergraph_WBP_MinimapIndicator_Hack, EntryPoint) == 0x000000, "Member 'WBP_MinimapIndicator_Hack_C_ExecuteUbergraph_WBP_MinimapIndicator_Hack::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MinimapIndicator_Hack_C_ExecuteUbergraph_WBP_MinimapIndicator_Hack, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_MinimapIndicator_Hack_C_ExecuteUbergraph_WBP_MinimapIndicator_Hack::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_MinimapIndicator_Hack.WBP_MinimapIndicator_Hack_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_MinimapIndicator_Hack_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinimapIndicator_Hack_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_MinimapIndicator_Hack_C_PreConstruct");
static_assert(sizeof(WBP_MinimapIndicator_Hack_C_PreConstruct) == 0x000001, "Wrong size on WBP_MinimapIndicator_Hack_C_PreConstruct");
static_assert(offsetof(WBP_MinimapIndicator_Hack_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_MinimapIndicator_Hack_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_MinimapIndicator_Hack.WBP_MinimapIndicator_Hack_C.SetIcon
// 0x0018 (0x0018 - 0x0000)
struct WBP_MinimapIndicator_Hack_C_SetIcon final
{
public:
	class UTexture*                               Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinimapIndicator_Hack_C_SetIcon) == 0x000008, "Wrong alignment on WBP_MinimapIndicator_Hack_C_SetIcon");
static_assert(sizeof(WBP_MinimapIndicator_Hack_C_SetIcon) == 0x000018, "Wrong size on WBP_MinimapIndicator_Hack_C_SetIcon");
static_assert(offsetof(WBP_MinimapIndicator_Hack_C_SetIcon, Texture) == 0x000000, "Member 'WBP_MinimapIndicator_Hack_C_SetIcon::Texture' has a wrong offset!");
static_assert(offsetof(WBP_MinimapIndicator_Hack_C_SetIcon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_MinimapIndicator_Hack_C_SetIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinimapIndicator_Hack_C_SetIcon, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'WBP_MinimapIndicator_Hack_C_SetIcon::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}
