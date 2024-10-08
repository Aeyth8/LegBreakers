#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Trap_BurstingBoba_Heal

#include "Basic.hpp"

#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function E_Trap_BurstingBoba_Heal.E_Trap_BurstingBoba_Heal_C.ExecuteUbergraph_E_Trap_BurstingBoba_Heal
// 0x0168 (0x0168 - 0x0000)
struct E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo;                  // 0x0010(0x0088)(NoDestructor)
	class AActor*                                 CallFunc_GetOwnerEntity_ReturnValue;               // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AMatchaSnapNetCharacterEntity*>  CallFunc_GetOverlappingCharacters_ReturnValue;     // 0x00A0(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_GetOwnerEntity_ReturnValue_1;             // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMatchaSnapNetCharacterEntity*          CallFunc_Array_Get_Item;                           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo_1;                // 0x00C8(0x0088)(NoDestructor)
	class USnapNetServerScript*                   CallFunc_Get_ReturnValue;                          // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaServerScript*                    K2Node_DynamicCast_AsMatcha_Server_Script;         // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal) == 0x000008, "Wrong alignment on E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal");
static_assert(sizeof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal) == 0x000168, "Wrong size on E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, EntryPoint) == 0x000000, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::EntryPoint' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, Temp_int_Array_Index_Variable) == 0x000004, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, K2Node_MakeStruct_CombinedFXInfo) == 0x000010, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::K2Node_MakeStruct_CombinedFXInfo' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, CallFunc_GetOwnerEntity_ReturnValue) == 0x000098, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::CallFunc_GetOwnerEntity_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, CallFunc_GetOverlappingCharacters_ReturnValue) == 0x0000A0, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::CallFunc_GetOverlappingCharacters_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, CallFunc_GetOwnerEntity_ReturnValue_1) == 0x0000B0, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::CallFunc_GetOwnerEntity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, CallFunc_Less_IntInt_ReturnValue) == 0x0000C4, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, K2Node_MakeStruct_CombinedFXInfo_1) == 0x0000C8, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::K2Node_MakeStruct_CombinedFXInfo_1' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, CallFunc_Get_ReturnValue) == 0x000150, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, K2Node_DynamicCast_AsMatcha_Server_Script) == 0x000158, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::K2Node_DynamicCast_AsMatcha_Server_Script' has a wrong offset!");
static_assert(offsetof(E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal, K2Node_DynamicCast_bSuccess) == 0x000160, "Member 'E_Trap_BurstingBoba_Heal_C_ExecuteUbergraph_E_Trap_BurstingBoba_Heal::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

