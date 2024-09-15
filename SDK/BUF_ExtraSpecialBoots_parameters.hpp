#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_ExtraSpecialBoots

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "MatchaGameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function BUF_ExtraSpecialBoots.BUF_ExtraSpecialBoots_C.OnBuffApplied
// 0x0058 (0x0058 - 0x0000)
struct BUF_ExtraSpecialBoots_C_OnBuffApplied final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMatchaGameplayEffectOwnerProvider> CallFunc_GetGameplayEffectOwner_self_CastInput;    // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IMatchaGameplayEffectOwner> CallFunc_GetGameplayEffectOwner_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FMatchaGameplayEffectSpecHandle        CallFunc_MakeSpecHandle_EffectCDO_ReturnValue;     // 0x0030(0x0010)()
	struct FMatchaGameplayEffectSpecHandle        CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x0040(0x0010)()
	struct FMatchaActiveGameplayEffectHandle      CallFunc_ApplyGameplayEffectSpecHandleToSelf_ReturnValue; // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_ExtraSpecialBoots_C_OnBuffApplied) == 0x000008, "Wrong alignment on BUF_ExtraSpecialBoots_C_OnBuffApplied");
static_assert(sizeof(BUF_ExtraSpecialBoots_C_OnBuffApplied) == 0x000058, "Wrong size on BUF_ExtraSpecialBoots_C_OnBuffApplied");
static_assert(offsetof(BUF_ExtraSpecialBoots_C_OnBuffApplied, BuffedCharacter) == 0x000000, "Member 'BUF_ExtraSpecialBoots_C_OnBuffApplied::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_ExtraSpecialBoots_C_OnBuffApplied, BuffRarity) == 0x000008, "Member 'BUF_ExtraSpecialBoots_C_OnBuffApplied::BuffRarity' has a wrong offset!");
static_assert(offsetof(BUF_ExtraSpecialBoots_C_OnBuffApplied, CallFunc_GetGameplayEffectOwner_self_CastInput) == 0x000010, "Member 'BUF_ExtraSpecialBoots_C_OnBuffApplied::CallFunc_GetGameplayEffectOwner_self_CastInput' has a wrong offset!");
static_assert(offsetof(BUF_ExtraSpecialBoots_C_OnBuffApplied, CallFunc_GetGameplayEffectOwner_ReturnValue) == 0x000020, "Member 'BUF_ExtraSpecialBoots_C_OnBuffApplied::CallFunc_GetGameplayEffectOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_ExtraSpecialBoots_C_OnBuffApplied, CallFunc_MakeSpecHandle_EffectCDO_ReturnValue) == 0x000030, "Member 'BUF_ExtraSpecialBoots_C_OnBuffApplied::CallFunc_MakeSpecHandle_EffectCDO_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_ExtraSpecialBoots_C_OnBuffApplied, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue) == 0x000040, "Member 'BUF_ExtraSpecialBoots_C_OnBuffApplied::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_ExtraSpecialBoots_C_OnBuffApplied, CallFunc_ApplyGameplayEffectSpecHandleToSelf_ReturnValue) == 0x000050, "Member 'BUF_ExtraSpecialBoots_C_OnBuffApplied::CallFunc_ApplyGameplayEffectSpecHandleToSelf_ReturnValue' has a wrong offset!");

// Function BUF_ExtraSpecialBoots.BUF_ExtraSpecialBoots_C.OnBuffRemoved
// 0x0030 (0x0030 - 0x0000)
struct BUF_ExtraSpecialBoots_C_OnBuffRemoved final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMatchaGameplayEffectOwnerProvider> CallFunc_GetGameplayEffectOwner_self_CastInput;    // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IMatchaGameplayEffectOwner> CallFunc_GetGameplayEffectOwner_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BUF_ExtraSpecialBoots_C_OnBuffRemoved) == 0x000008, "Wrong alignment on BUF_ExtraSpecialBoots_C_OnBuffRemoved");
static_assert(sizeof(BUF_ExtraSpecialBoots_C_OnBuffRemoved) == 0x000030, "Wrong size on BUF_ExtraSpecialBoots_C_OnBuffRemoved");
static_assert(offsetof(BUF_ExtraSpecialBoots_C_OnBuffRemoved, BuffedCharacter) == 0x000000, "Member 'BUF_ExtraSpecialBoots_C_OnBuffRemoved::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_ExtraSpecialBoots_C_OnBuffRemoved, BuffRarity) == 0x000008, "Member 'BUF_ExtraSpecialBoots_C_OnBuffRemoved::BuffRarity' has a wrong offset!");
static_assert(offsetof(BUF_ExtraSpecialBoots_C_OnBuffRemoved, CallFunc_GetGameplayEffectOwner_self_CastInput) == 0x000010, "Member 'BUF_ExtraSpecialBoots_C_OnBuffRemoved::CallFunc_GetGameplayEffectOwner_self_CastInput' has a wrong offset!");
static_assert(offsetof(BUF_ExtraSpecialBoots_C_OnBuffRemoved, CallFunc_GetGameplayEffectOwner_ReturnValue) == 0x000020, "Member 'BUF_ExtraSpecialBoots_C_OnBuffRemoved::CallFunc_GetGameplayEffectOwner_ReturnValue' has a wrong offset!");

}

