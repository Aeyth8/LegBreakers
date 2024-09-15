#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerCameraManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerCameraManager.BP_PlayerCameraManager_C.EnableCameraHit
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerCameraManager_C_EnableCameraHit final
{
public:
	bool                                          NewEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCameraManager_C_EnableCameraHit) == 0x000001, "Wrong alignment on BP_PlayerCameraManager_C_EnableCameraHit");
static_assert(sizeof(BP_PlayerCameraManager_C_EnableCameraHit) == 0x000001, "Wrong size on BP_PlayerCameraManager_C_EnableCameraHit");
static_assert(offsetof(BP_PlayerCameraManager_C_EnableCameraHit, NewEnable) == 0x000000, "Member 'BP_PlayerCameraManager_C_EnableCameraHit::NewEnable' has a wrong offset!");

// Function BP_PlayerCameraManager.BP_PlayerCameraManager_C.EnableInterpolationFastFrame
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerCameraManager_C_EnableInterpolationFastFrame final
{
public:
	bool                                          NewEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCameraManager_C_EnableInterpolationFastFrame) == 0x000001, "Wrong alignment on BP_PlayerCameraManager_C_EnableInterpolationFastFrame");
static_assert(sizeof(BP_PlayerCameraManager_C_EnableInterpolationFastFrame) == 0x000001, "Wrong size on BP_PlayerCameraManager_C_EnableInterpolationFastFrame");
static_assert(offsetof(BP_PlayerCameraManager_C_EnableInterpolationFastFrame, NewEnable) == 0x000000, "Member 'BP_PlayerCameraManager_C_EnableInterpolationFastFrame::NewEnable' has a wrong offset!");

// Function BP_PlayerCameraManager.BP_PlayerCameraManager_C.EnableInterpolator
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerCameraManager_C_EnableInterpolator final
{
public:
	bool                                          NewEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCameraManager_C_EnableInterpolator) == 0x000001, "Wrong alignment on BP_PlayerCameraManager_C_EnableInterpolator");
static_assert(sizeof(BP_PlayerCameraManager_C_EnableInterpolator) == 0x000001, "Wrong size on BP_PlayerCameraManager_C_EnableInterpolator");
static_assert(offsetof(BP_PlayerCameraManager_C_EnableInterpolator, NewEnable) == 0x000000, "Member 'BP_PlayerCameraManager_C_EnableInterpolator::NewEnable' has a wrong offset!");

// Function BP_PlayerCameraManager.BP_PlayerCameraManager_C.EnableLethalHitFocus
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerCameraManager_C_EnableLethalHitFocus final
{
public:
	bool                                          NewEnabled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                FocusLocation;                                     // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCameraManager_C_EnableLethalHitFocus) == 0x000008, "Wrong alignment on BP_PlayerCameraManager_C_EnableLethalHitFocus");
static_assert(sizeof(BP_PlayerCameraManager_C_EnableLethalHitFocus) == 0x000020, "Wrong size on BP_PlayerCameraManager_C_EnableLethalHitFocus");
static_assert(offsetof(BP_PlayerCameraManager_C_EnableLethalHitFocus, NewEnabled) == 0x000000, "Member 'BP_PlayerCameraManager_C_EnableLethalHitFocus::NewEnabled' has a wrong offset!");
static_assert(offsetof(BP_PlayerCameraManager_C_EnableLethalHitFocus, FocusLocation) == 0x000008, "Member 'BP_PlayerCameraManager_C_EnableLethalHitFocus::FocusLocation' has a wrong offset!");

// Function BP_PlayerCameraManager.BP_PlayerCameraManager_C.ExecuteUbergraph_BP_PlayerCameraManager
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventRenderer_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CameraLethalHitCeremony_C*          CallFunc_FindCameraModifierByClass_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_CameraLocationInterpolator_C*       CallFunc_FindCameraModifierByClass_ReturnValue_1;  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager) == 0x000008, "Wrong alignment on BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager");
static_assert(sizeof(BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager) == 0x000018, "Wrong size on BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager");
static_assert(offsetof(BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager, EntryPoint) == 0x000000, "Member 'BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager, CallFunc_AkEventRenderer_ReturnValue) == 0x000004, "Member 'BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager::CallFunc_AkEventRenderer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager, CallFunc_FindCameraModifierByClass_ReturnValue) == 0x000008, "Member 'BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager::CallFunc_FindCameraModifierByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager, CallFunc_FindCameraModifierByClass_ReturnValue_1) == 0x000010, "Member 'BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager::CallFunc_FindCameraModifierByClass_ReturnValue_1' has a wrong offset!");

}
