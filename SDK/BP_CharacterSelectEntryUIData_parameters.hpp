#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterSelectEntryUIData

#include "Basic.hpp"

#include "StructUtils_structs.hpp"
#include "StructUtilsEngine_structs.hpp"
#include "FCharacterSelectEntryUIData_InitParams_structs.hpp"


namespace SDK::Params
{

// Function BP_CharacterSelectEntryUIData.BP_CharacterSelectEntryUIData_C.ExecuteUbergraph_BP_CharacterSelectEntryUIData
// 0x0030 (0x0030 - 0x0000)
struct BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInstancedStruct                       K2Node_Event_InitParams;                           // 0x0008(0x0010)()
	EStructUtilsResult                            CallFunc_GetInstancedStructValue_ExecResult;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFCharacterSelectEntryUIData_InitParams CallFunc_GetInstancedStructValue_Value;            // 0x0020(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData) == 0x000008, "Wrong alignment on BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData");
static_assert(sizeof(BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData) == 0x000030, "Wrong size on BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData");
static_assert(offsetof(BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData, EntryPoint) == 0x000000, "Member 'BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData, K2Node_Event_InitParams) == 0x000008, "Member 'BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData::K2Node_Event_InitParams' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData, CallFunc_GetInstancedStructValue_ExecResult) == 0x000018, "Member 'BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData::CallFunc_GetInstancedStructValue_ExecResult' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData, CallFunc_GetInstancedStructValue_Value) == 0x000020, "Member 'BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData::CallFunc_GetInstancedStructValue_Value' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'BP_CharacterSelectEntryUIData_C_ExecuteUbergraph_BP_CharacterSelectEntryUIData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_CharacterSelectEntryUIData.BP_CharacterSelectEntryUIData_C.OnInit
// 0x0010 (0x0010 - 0x0000)
struct BP_CharacterSelectEntryUIData_C_OnInit final
{
public:
	struct FInstancedStruct                       InitParams;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_CharacterSelectEntryUIData_C_OnInit) == 0x000008, "Wrong alignment on BP_CharacterSelectEntryUIData_C_OnInit");
static_assert(sizeof(BP_CharacterSelectEntryUIData_C_OnInit) == 0x000010, "Wrong size on BP_CharacterSelectEntryUIData_C_OnInit");
static_assert(offsetof(BP_CharacterSelectEntryUIData_C_OnInit, InitParams) == 0x000000, "Member 'BP_CharacterSelectEntryUIData_C_OnInit::InitParams' has a wrong offset!");

}
