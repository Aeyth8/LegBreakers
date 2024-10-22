#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Hack_CrystalRose

#include "Basic.hpp"

#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function BUF_Hack_CrystalRose.BUF_Hack_CrystalRose_C.OnPostApplyOutgoingHit
// 0x0140 (0x0140 - 0x0000)
struct BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetHit;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PreviousTargetHit;                                 // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMatchaHitData                         HitData;                                           // 0x0018(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	uint8                                         AppliedHitFlags;                                   // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMatchaCharacterMontageType                   MontageDuringHit;                                  // 0x0091(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0092(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93[0x5];                                       // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo;                  // 0x0098(0x0088)(NoDestructor)
	class AMatchaSnapNetCharacterEntity*          K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity; // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentTeam_ReturnValue;               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMatchaShieldState                            CallFunc_GetShieldState_ReturnValue;               // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x3];                                      // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentTeam_ReturnValue_1;             // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit) == 0x000008, "Wrong alignment on BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit");
static_assert(sizeof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit) == 0x000140, "Wrong size on BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, BuffedCharacter) == 0x000000, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, TargetHit) == 0x000008, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::TargetHit' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, PreviousTargetHit) == 0x000010, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::PreviousTargetHit' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, HitData) == 0x000018, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::HitData' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, AppliedHitFlags) == 0x000090, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::AppliedHitFlags' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, MontageDuringHit) == 0x000091, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::MontageDuringHit' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, BuffRarity) == 0x000092, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::BuffRarity' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, K2Node_MakeStruct_CombinedFXInfo) == 0x000098, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::K2Node_MakeStruct_CombinedFXInfo' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity) == 0x000120, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::K2Node_DynamicCast_AsMatcha_Snap_Net_Character_Entity' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, K2Node_DynamicCast_bSuccess) == 0x000128, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, CallFunc_GetCurrentTeam_ReturnValue) == 0x00012C, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::CallFunc_GetCurrentTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, CallFunc_GetShieldState_ReturnValue) == 0x000130, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::CallFunc_GetShieldState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, CallFunc_GetCurrentTeam_ReturnValue_1) == 0x000134, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::CallFunc_GetCurrentTeam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000138, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000139, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit, CallFunc_HasTag_ReturnValue) == 0x00013A, "Member 'BUF_Hack_CrystalRose_C_OnPostApplyOutgoingHit::CallFunc_HasTag_ReturnValue' has a wrong offset!");

// Function BUF_Hack_CrystalRose.BUF_Hack_CrystalRose_C.OnSpawnedOwnedEntity
// 0x0138 (0x0138 - 0x0000)
struct BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SpawnedEntity;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo;                  // 0x0018(0x0088)(NoDestructor)
	class AMatchaProjectileEntity*                K2Node_DynamicCast_AsMatcha_Projectile_Entity;     // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCombinedFXInfo                        K2Node_MakeStruct_CombinedFXInfo_1;                // 0x00B0(0x0088)(NoDestructor)
};
static_assert(alignof(BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity) == 0x000008, "Wrong alignment on BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity");
static_assert(sizeof(BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity) == 0x000138, "Wrong size on BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity, BuffedCharacter) == 0x000000, "Member 'BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity, SpawnedEntity) == 0x000008, "Member 'BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity::SpawnedEntity' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity, BuffRarity) == 0x000010, "Member 'BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity::BuffRarity' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity, K2Node_MakeStruct_CombinedFXInfo) == 0x000018, "Member 'BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity::K2Node_MakeStruct_CombinedFXInfo' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity, K2Node_DynamicCast_AsMatcha_Projectile_Entity) == 0x0000A0, "Member 'BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity::K2Node_DynamicCast_AsMatcha_Projectile_Entity' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity, K2Node_MakeStruct_CombinedFXInfo_1) == 0x0000B0, "Member 'BUF_Hack_CrystalRose_C_OnSpawnedOwnedEntity::K2Node_MakeStruct_CombinedFXInfo_1' has a wrong offset!");

}

