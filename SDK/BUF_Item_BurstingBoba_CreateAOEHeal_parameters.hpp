#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Item_BurstingBoba_CreateAOEHeal

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BUF_Item_BurstingBoba_CreateAOEHeal.BUF_Item_BurstingBoba_CreateAOEHeal_C.OnBuffApplied
// 0x0048 (0x0048 - 0x0000)
struct BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_SpawnOwnedEntity_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied) == 0x000008, "Wrong alignment on BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied");
static_assert(sizeof(BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied) == 0x000048, "Wrong size on BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied");
static_assert(offsetof(BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied, BuffedCharacter) == 0x000000, "Member 'BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied, BuffRarity) == 0x000008, "Member 'BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied::BuffRarity' has a wrong offset!");
static_assert(offsetof(BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000028, "Member 'BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied, CallFunc_SpawnOwnedEntity_ReturnValue) == 0x000040, "Member 'BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffApplied::CallFunc_SpawnOwnedEntity_ReturnValue' has a wrong offset!");

// Function BUF_Item_BurstingBoba_CreateAOEHeal.BUF_Item_BurstingBoba_CreateAOEHeal_C.OnBuffRemoved
// 0x0010 (0x0010 - 0x0000)
struct BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffRemoved final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffRemoved) == 0x000008, "Wrong alignment on BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffRemoved");
static_assert(sizeof(BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffRemoved) == 0x000010, "Wrong size on BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffRemoved");
static_assert(offsetof(BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffRemoved, BuffedCharacter) == 0x000000, "Member 'BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffRemoved::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffRemoved, BuffRarity) == 0x000008, "Member 'BUF_Item_BurstingBoba_CreateAOEHeal_C_OnBuffRemoved::BuffRarity' has a wrong offset!");

}

