#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_OnUptiltFireball_Energized_Base

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BUF_OnUptiltFireball_Energized_Base.BUF_OnUptiltFireball_Energized_Base_C.OnMontageSpawnedHitBox
// 0x0060 (0x0060 - 0x0000)
struct BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EMatchaCharacterMontageType                   MontageType;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MontageHitBoxCount;                                // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 Temp_byte_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class AActor>                     K2Node_Select_Default;                             // 0x0050(0x0008)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                 CallFunc_SpawnOwnedEntity_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox) == 0x000008, "Wrong alignment on BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox");
static_assert(sizeof(BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox) == 0x000060, "Wrong size on BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox");
static_assert(offsetof(BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox, BuffedCharacter) == 0x000000, "Member 'BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox, MontageType) == 0x000008, "Member 'BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox::MontageType' has a wrong offset!");
static_assert(offsetof(BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox, MontageHitBoxCount) == 0x00000C, "Member 'BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox::MontageHitBoxCount' has a wrong offset!");
static_assert(offsetof(BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox, BuffRarity) == 0x000010, "Member 'BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox::BuffRarity' has a wrong offset!");
static_assert(offsetof(BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000011, "Member 'BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000012, "Member 'BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000018, "Member 'BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox, Temp_byte_Variable) == 0x000048, "Member 'BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox, K2Node_Select_Default) == 0x000050, "Member 'BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox, CallFunc_SpawnOwnedEntity_ReturnValue) == 0x000058, "Member 'BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox::CallFunc_SpawnOwnedEntity_ReturnValue' has a wrong offset!");

}
