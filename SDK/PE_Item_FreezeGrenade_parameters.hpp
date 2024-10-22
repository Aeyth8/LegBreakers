#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PE_Item_FreezeGrenade

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PE_Item_FreezeGrenade.PE_Item_FreezeGrenade_C.ExecuteUbergraph_PE_Item_FreezeGrenade
// 0x0050 (0x0050 - 0x0000)
struct PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 K2Node_Event_TargetHit;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerEntity_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_SpawnOwnedEntity_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade) == 0x000008, "Wrong alignment on PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade");
static_assert(sizeof(PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade) == 0x000050, "Wrong size on PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade");
static_assert(offsetof(PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade, EntryPoint) == 0x000000, "Member 'PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade::EntryPoint' has a wrong offset!");
static_assert(offsetof(PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000008, "Member 'PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade, K2Node_Event_TargetHit) == 0x000020, "Member 'PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade::K2Node_Event_TargetHit' has a wrong offset!");
static_assert(offsetof(PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade, CallFunc_GetOwnerEntity_ReturnValue) == 0x000028, "Member 'PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade::CallFunc_GetOwnerEntity_ReturnValue' has a wrong offset!");
static_assert(offsetof(PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade, CallFunc_SpawnOwnedEntity_ReturnValue) == 0x000048, "Member 'PE_Item_FreezeGrenade_C_ExecuteUbergraph_PE_Item_FreezeGrenade::CallFunc_SpawnOwnedEntity_ReturnValue' has a wrong offset!");

// Function PE_Item_FreezeGrenade.PE_Item_FreezeGrenade_C.OnProjectileExplosion
// 0x0008 (0x0008 - 0x0000)
struct PE_Item_FreezeGrenade_C_OnProjectileExplosion final
{
public:
	class AActor*                                 TargetHit;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PE_Item_FreezeGrenade_C_OnProjectileExplosion) == 0x000008, "Wrong alignment on PE_Item_FreezeGrenade_C_OnProjectileExplosion");
static_assert(sizeof(PE_Item_FreezeGrenade_C_OnProjectileExplosion) == 0x000008, "Wrong size on PE_Item_FreezeGrenade_C_OnProjectileExplosion");
static_assert(offsetof(PE_Item_FreezeGrenade_C_OnProjectileExplosion, TargetHit) == 0x000000, "Member 'PE_Item_FreezeGrenade_C_OnProjectileExplosion::TargetHit' has a wrong offset!");

}

