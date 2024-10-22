#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PE_AiMi_NeutralSpecial

#include "Basic.hpp"

#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function PE_AiMi_NeutralSpecial.PE_AiMi_NeutralSpecial_C.ExecuteUbergraph_PE_AiMi_NeutralSpecial
// 0x00B8 (0x00B8 - 0x0000)
struct PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_HitActor;                             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMatchaHitData                         K2Node_Event_HitData;                              // 0x0010(0x0078)(ConstParm)
	class AActor*                                 CallFunc_GetOwnerEntity_ReturnValue;               // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMatchaSnapNetCharacterEntity*          K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMatchaSnapNetCharacterEntity*          K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity_1; // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial) == 0x000008, "Wrong alignment on PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial");
static_assert(sizeof(PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial) == 0x0000B8, "Wrong size on PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial");
static_assert(offsetof(PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial, EntryPoint) == 0x000000, "Member 'PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial::EntryPoint' has a wrong offset!");
static_assert(offsetof(PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial, K2Node_Event_HitActor) == 0x000008, "Member 'PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial::K2Node_Event_HitActor' has a wrong offset!");
static_assert(offsetof(PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial, K2Node_Event_HitData) == 0x000010, "Member 'PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial::K2Node_Event_HitData' has a wrong offset!");
static_assert(offsetof(PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial, CallFunc_GetOwnerEntity_ReturnValue) == 0x000088, "Member 'PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial::CallFunc_GetOwnerEntity_ReturnValue' has a wrong offset!");
static_assert(offsetof(PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial, K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity) == 0x000098, "Member 'PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial::K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity' has a wrong offset!");
static_assert(offsetof(PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial, K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity_1) == 0x0000A8, "Member 'PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial::K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity_1' has a wrong offset!");
static_assert(offsetof(PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'PE_AiMi_NeutralSpecial_C_ExecuteUbergraph_PE_AiMi_NeutralSpecial::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function PE_AiMi_NeutralSpecial.PE_AiMi_NeutralSpecial_C.OnProjectileHit
// 0x0080 (0x0080 - 0x0000)
struct PE_AiMi_NeutralSpecial_C_OnProjectileHit final
{
public:
	class AActor*                                 HitActor;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMatchaHitData                         HitData;                                           // 0x0008(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PE_AiMi_NeutralSpecial_C_OnProjectileHit) == 0x000008, "Wrong alignment on PE_AiMi_NeutralSpecial_C_OnProjectileHit");
static_assert(sizeof(PE_AiMi_NeutralSpecial_C_OnProjectileHit) == 0x000080, "Wrong size on PE_AiMi_NeutralSpecial_C_OnProjectileHit");
static_assert(offsetof(PE_AiMi_NeutralSpecial_C_OnProjectileHit, HitActor) == 0x000000, "Member 'PE_AiMi_NeutralSpecial_C_OnProjectileHit::HitActor' has a wrong offset!");
static_assert(offsetof(PE_AiMi_NeutralSpecial_C_OnProjectileHit, HitData) == 0x000008, "Member 'PE_AiMi_NeutralSpecial_C_OnProjectileHit::HitData' has a wrong offset!");

}

