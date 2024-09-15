#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_GrantWallRun

#include "Basic.hpp"

#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function BUF_GrantWallRun.BUF_GrantWallRun_C.OnBuffApplied
// 0x0010 (0x0010 - 0x0000)
struct BUF_GrantWallRun_C_OnBuffApplied final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_GrantWallRun_C_OnBuffApplied) == 0x000008, "Wrong alignment on BUF_GrantWallRun_C_OnBuffApplied");
static_assert(sizeof(BUF_GrantWallRun_C_OnBuffApplied) == 0x000010, "Wrong size on BUF_GrantWallRun_C_OnBuffApplied");
static_assert(offsetof(BUF_GrantWallRun_C_OnBuffApplied, BuffedCharacter) == 0x000000, "Member 'BUF_GrantWallRun_C_OnBuffApplied::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_GrantWallRun_C_OnBuffApplied, BuffRarity) == 0x000008, "Member 'BUF_GrantWallRun_C_OnBuffApplied::BuffRarity' has a wrong offset!");

// Function BUF_GrantWallRun.BUF_GrantWallRun_C.OnBuffRemoved
// 0x0010 (0x0010 - 0x0000)
struct BUF_GrantWallRun_C_OnBuffRemoved final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_GrantWallRun_C_OnBuffRemoved) == 0x000008, "Wrong alignment on BUF_GrantWallRun_C_OnBuffRemoved");
static_assert(sizeof(BUF_GrantWallRun_C_OnBuffRemoved) == 0x000010, "Wrong size on BUF_GrantWallRun_C_OnBuffRemoved");
static_assert(offsetof(BUF_GrantWallRun_C_OnBuffRemoved, BuffedCharacter) == 0x000000, "Member 'BUF_GrantWallRun_C_OnBuffRemoved::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_GrantWallRun_C_OnBuffRemoved, BuffRarity) == 0x000008, "Member 'BUF_GrantWallRun_C_OnBuffRemoved::BuffRarity' has a wrong offset!");

}

