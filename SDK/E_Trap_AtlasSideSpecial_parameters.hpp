#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Trap_AtlasSideSpecial

#include "Basic.hpp"

#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function E_Trap_AtlasSideSpecial.E_Trap_AtlasSideSpecial_C.ExecuteUbergraph_E_Trap_AtlasSideSpecial
// 0x00F0 (0x00F0 - 0x0000)
struct E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AMatchaSnapNetCharacterEntity*>  CallFunc_GetOverlappingCharacters_ReturnValue;     // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USnapNetServerScript*                   CallFunc_Get_ReturnValue;                          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerEntity_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMatchaBattleRoyaleServerScript*        K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentTeamForActor_ReturnValue;       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo;                  // 0x0040(0x0088)(NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMatchaSnapNetCharacterEntity*          CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentTeamForActor_ReturnValue_1;     // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E5[0x3];                                       // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial) == 0x000008, "Wrong alignment on E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial");
static_assert(sizeof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial) == 0x0000F0, "Wrong size on E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, EntryPoint) == 0x000000, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::EntryPoint' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, CallFunc_GetOverlappingCharacters_ReturnValue) == 0x000008, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::CallFunc_GetOverlappingCharacters_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, CallFunc_Get_ReturnValue) == 0x000020, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, CallFunc_GetOwnerEntity_ReturnValue) == 0x000028, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::CallFunc_GetOwnerEntity_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script) == 0x000030, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::K2Node_DynamicCast_AsMatcha_Battle_Royale_Server_Script' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, CallFunc_GetCurrentTeamForActor_ReturnValue) == 0x00003C, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::CallFunc_GetCurrentTeamForActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, K2Node_MakeStruct_CombinedFXInfo) == 0x000040, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::K2Node_MakeStruct_CombinedFXInfo' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, Temp_int_Loop_Counter_Variable) == 0x0000C8, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, Temp_int_Array_Index_Variable) == 0x0000CC, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, CallFunc_Less_IntInt_ReturnValue) == 0x0000D0, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, CallFunc_GetCurrentTeamForActor_ReturnValue_1) == 0x0000E0, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::CallFunc_GetCurrentTeamForActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000E4, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial, CallFunc_Add_IntInt_ReturnValue) == 0x0000E8, "Member 'E_Trap_AtlasSideSpecial_C_ExecuteUbergraph_E_Trap_AtlasSideSpecial::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

