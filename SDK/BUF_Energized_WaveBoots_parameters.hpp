#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Energized_WaveBoots

#include "Basic.hpp"

#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function BUF_Energized_WaveBoots.BUF_Energized_WaveBoots_C.OnBuffApplied
// 0x0010 (0x0010 - 0x0000)
struct BUF_Energized_WaveBoots_C_OnBuffApplied final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_Energized_WaveBoots_C_OnBuffApplied) == 0x000008, "Wrong alignment on BUF_Energized_WaveBoots_C_OnBuffApplied");
static_assert(sizeof(BUF_Energized_WaveBoots_C_OnBuffApplied) == 0x000010, "Wrong size on BUF_Energized_WaveBoots_C_OnBuffApplied");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnBuffApplied, BuffedCharacter) == 0x000000, "Member 'BUF_Energized_WaveBoots_C_OnBuffApplied::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnBuffApplied, BuffRarity) == 0x000008, "Member 'BUF_Energized_WaveBoots_C_OnBuffApplied::BuffRarity' has a wrong offset!");

// Function BUF_Energized_WaveBoots.BUF_Energized_WaveBoots_C.OnBuffRemoved
// 0x0010 (0x0010 - 0x0000)
struct BUF_Energized_WaveBoots_C_OnBuffRemoved final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_Energized_WaveBoots_C_OnBuffRemoved) == 0x000008, "Wrong alignment on BUF_Energized_WaveBoots_C_OnBuffRemoved");
static_assert(sizeof(BUF_Energized_WaveBoots_C_OnBuffRemoved) == 0x000010, "Wrong size on BUF_Energized_WaveBoots_C_OnBuffRemoved");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnBuffRemoved, BuffedCharacter) == 0x000000, "Member 'BUF_Energized_WaveBoots_C_OnBuffRemoved::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnBuffRemoved, BuffRarity) == 0x000008, "Member 'BUF_Energized_WaveBoots_C_OnBuffRemoved::BuffRarity' has a wrong offset!");

// Function BUF_Energized_WaveBoots.BUF_Energized_WaveBoots_C.OnCharacterMontageEnd
// 0x0010 (0x0010 - 0x0000)
struct BUF_Energized_WaveBoots_C_OnCharacterMontageEnd final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EMatchaCharacterMontageType                   MontageType;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInHitStun_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_Energized_WaveBoots_C_OnCharacterMontageEnd) == 0x000008, "Wrong alignment on BUF_Energized_WaveBoots_C_OnCharacterMontageEnd");
static_assert(sizeof(BUF_Energized_WaveBoots_C_OnCharacterMontageEnd) == 0x000010, "Wrong size on BUF_Energized_WaveBoots_C_OnCharacterMontageEnd");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnCharacterMontageEnd, BuffedCharacter) == 0x000000, "Member 'BUF_Energized_WaveBoots_C_OnCharacterMontageEnd::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnCharacterMontageEnd, MontageType) == 0x000008, "Member 'BUF_Energized_WaveBoots_C_OnCharacterMontageEnd::MontageType' has a wrong offset!");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnCharacterMontageEnd, BuffRarity) == 0x000009, "Member 'BUF_Energized_WaveBoots_C_OnCharacterMontageEnd::BuffRarity' has a wrong offset!");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnCharacterMontageEnd, CallFunc_IsInHitStun_ReturnValue) == 0x00000A, "Member 'BUF_Energized_WaveBoots_C_OnCharacterMontageEnd::CallFunc_IsInHitStun_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnCharacterMontageEnd, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000B, "Member 'BUF_Energized_WaveBoots_C_OnCharacterMontageEnd::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnCharacterMontageEnd, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BUF_Energized_WaveBoots_C_OnCharacterMontageEnd::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnCharacterMontageEnd, CallFunc_BooleanAND_ReturnValue) == 0x00000D, "Member 'BUF_Energized_WaveBoots_C_OnCharacterMontageEnd::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BUF_Energized_WaveBoots.BUF_Energized_WaveBoots_C.OnCharacterMontageStart
// 0x0010 (0x0010 - 0x0000)
struct BUF_Energized_WaveBoots_C_OnCharacterMontageStart final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         MontageDuration;                                   // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMatchaCharacterMontageType                   MontageType;                                       // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMatchaCharacterMontageType                   PreviousMontageType;                               // 0x000D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x000E(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_Energized_WaveBoots_C_OnCharacterMontageStart) == 0x000008, "Wrong alignment on BUF_Energized_WaveBoots_C_OnCharacterMontageStart");
static_assert(sizeof(BUF_Energized_WaveBoots_C_OnCharacterMontageStart) == 0x000010, "Wrong size on BUF_Energized_WaveBoots_C_OnCharacterMontageStart");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnCharacterMontageStart, BuffedCharacter) == 0x000000, "Member 'BUF_Energized_WaveBoots_C_OnCharacterMontageStart::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnCharacterMontageStart, MontageDuration) == 0x000008, "Member 'BUF_Energized_WaveBoots_C_OnCharacterMontageStart::MontageDuration' has a wrong offset!");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnCharacterMontageStart, MontageType) == 0x00000C, "Member 'BUF_Energized_WaveBoots_C_OnCharacterMontageStart::MontageType' has a wrong offset!");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnCharacterMontageStart, PreviousMontageType) == 0x00000D, "Member 'BUF_Energized_WaveBoots_C_OnCharacterMontageStart::PreviousMontageType' has a wrong offset!");
static_assert(offsetof(BUF_Energized_WaveBoots_C_OnCharacterMontageStart, BuffRarity) == 0x00000E, "Member 'BUF_Energized_WaveBoots_C_OnCharacterMontageStart::BuffRarity' has a wrong offset!");

}
