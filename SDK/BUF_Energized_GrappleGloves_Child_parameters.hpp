#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Energized_GrappleGloves_Child

#include "Basic.hpp"

#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function BUF_Energized_GrappleGloves_Child.BUF_Energized_GrappleGloves_Child_C.OnCharacterMontageStart
// 0x0018 (0x0018 - 0x0000)
struct BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         MontageDuration;                                   // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMatchaCharacterMontageType                   MontageType;                                       // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMatchaCharacterMontageType                   PreviousMontageType;                               // 0x000D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x000E(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart) == 0x000008, "Wrong alignment on BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart");
static_assert(sizeof(BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart) == 0x000018, "Wrong size on BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart");
static_assert(offsetof(BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart, BuffedCharacter) == 0x000000, "Member 'BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart, MontageDuration) == 0x000008, "Member 'BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart::MontageDuration' has a wrong offset!");
static_assert(offsetof(BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart, MontageType) == 0x00000C, "Member 'BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart::MontageType' has a wrong offset!");
static_assert(offsetof(BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart, PreviousMontageType) == 0x00000D, "Member 'BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart::PreviousMontageType' has a wrong offset!");
static_assert(offsetof(BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart, BuffRarity) == 0x00000E, "Member 'BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart::BuffRarity' has a wrong offset!");
static_assert(offsetof(BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000F, "Member 'BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000010, "Member 'BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000011, "Member 'BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart, CallFunc_BooleanOR_ReturnValue) == 0x000012, "Member 'BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart, CallFunc_BooleanOR_ReturnValue_1) == 0x000013, "Member 'BUF_Energized_GrappleGloves_Child_C_OnCharacterMontageStart::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

}

