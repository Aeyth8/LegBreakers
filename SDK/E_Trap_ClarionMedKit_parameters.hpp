#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Trap_ClarionMedKit

#include "Basic.hpp"

#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function E_Trap_ClarionMedKit.E_Trap_ClarionMedKit_C.ExecuteUbergraph_E_Trap_ClarionMedKit
// 0x0178 (0x0178 - 0x0000)
struct E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerEntity_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AMatchaSnapNetCharacterEntity*>  CallFunc_GetOverlappingCharacters_ReturnValue;     // 0x0020(0x0010)(ReferenceParm)
	class AMatchaSnapNetCharacterEntity*          CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USnapNetServerScript*                   CallFunc_Get_ReturnValue;                          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatchaBattleRoyaleServerScript*        K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerEntity_ReturnValue_1;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo;                  // 0x0068(0x0088)(NoDestructor)
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo_1;                // 0x00F0(0x0088)(NoDestructor)
};
static_assert(alignof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit) == 0x000008, "Wrong alignment on E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit");
static_assert(sizeof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit) == 0x000178, "Wrong size on E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, EntryPoint) == 0x000000, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::EntryPoint' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, CallFunc_GetOwnerEntity_ReturnValue) == 0x000008, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::CallFunc_GetOwnerEntity_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, Temp_int_Array_Index_Variable) == 0x000010, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, CallFunc_GetOverlappingCharacters_ReturnValue) == 0x000020, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::CallFunc_GetOverlappingCharacters_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, CallFunc_Array_Get_Item) == 0x000030, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, CallFunc_Get_ReturnValue) == 0x000040, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script) == 0x000050, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, CallFunc_GetOwnerEntity_ReturnValue_1) == 0x000060, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::CallFunc_GetOwnerEntity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, K2Node_MakeStruct_CombinedFXInfo) == 0x000068, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::K2Node_MakeStruct_CombinedFXInfo' has a wrong offset!");
static_assert(offsetof(E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit, K2Node_MakeStruct_CombinedFXInfo_1) == 0x0000F0, "Member 'E_Trap_ClarionMedKit_C_ExecuteUbergraph_E_Trap_ClarionMedKit::K2Node_MakeStruct_CombinedFXInfo_1' has a wrong offset!");

}

