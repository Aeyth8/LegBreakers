#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Vampirism_Rarity

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "MatchaGameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function BUF_Vampirism_Rarity.BUF_Vampirism_Rarity_C.OnBuffApplied
// 0x0078 (0x0078 - 0x0000)
struct BUF_Vampirism_Rarity_C_OnBuffApplied final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BuffLevel;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMatchaGameplayEffectOwnerProvider> CallFunc_GetGameplayEffectOwner_self_CastInput;    // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IMatchaGameplayEffectOwner> CallFunc_GetGameplayEffectOwner_ReturnValue;       // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMatchaGameplayEffectSpecHandle        CallFunc_MakeSpecHandle_EffectCDO_ReturnValue;     // 0x0040(0x0010)()
	struct FMatchaGameplayEffectSpecHandle        CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x0050(0x0010)()
	struct FMatchaActiveGameplayEffectHandle      CallFunc_ApplyGameplayEffectSpecHandleToSelf_ReturnValue; // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Rare_ImplicitCast;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Common_ImplicitCast;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Epic_ImplicitCast;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Legendary_ImplicitCast;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_Vampirism_Rarity_C_OnBuffApplied) == 0x000008, "Wrong alignment on BUF_Vampirism_Rarity_C_OnBuffApplied");
static_assert(sizeof(BUF_Vampirism_Rarity_C_OnBuffApplied) == 0x000078, "Wrong size on BUF_Vampirism_Rarity_C_OnBuffApplied");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, BuffedCharacter) == 0x000000, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, BuffRarity) == 0x000008, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::BuffRarity' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, BuffLevel) == 0x00000C, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::BuffLevel' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, Temp_byte_Variable) == 0x000010, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, CallFunc_GetGameplayEffectOwner_self_CastInput) == 0x000018, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::CallFunc_GetGameplayEffectOwner_self_CastInput' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, CallFunc_GetGameplayEffectOwner_ReturnValue) == 0x000028, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::CallFunc_GetGameplayEffectOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, K2Node_Select_Default) == 0x000038, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, CallFunc_MakeSpecHandle_EffectCDO_ReturnValue) == 0x000040, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::CallFunc_MakeSpecHandle_EffectCDO_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue) == 0x000050, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, CallFunc_ApplyGameplayEffectSpecHandleToSelf_ReturnValue) == 0x000060, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::CallFunc_ApplyGameplayEffectSpecHandleToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, K2Node_Select_Rare_ImplicitCast) == 0x000068, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::K2Node_Select_Rare_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, K2Node_Select_Common_ImplicitCast) == 0x00006C, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::K2Node_Select_Common_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, K2Node_Select_Epic_ImplicitCast) == 0x000070, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::K2Node_Select_Epic_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffApplied, K2Node_Select_Legendary_ImplicitCast) == 0x000074, "Member 'BUF_Vampirism_Rarity_C_OnBuffApplied::K2Node_Select_Legendary_ImplicitCast' has a wrong offset!");

// Function BUF_Vampirism_Rarity.BUF_Vampirism_Rarity_C.OnBuffRemoved
// 0x0030 (0x0030 - 0x0000)
struct BUF_Vampirism_Rarity_C_OnBuffRemoved final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMatchaGameplayEffectOwnerProvider> CallFunc_GetGameplayEffectOwner_self_CastInput;    // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IMatchaGameplayEffectOwner> CallFunc_GetGameplayEffectOwner_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BUF_Vampirism_Rarity_C_OnBuffRemoved) == 0x000008, "Wrong alignment on BUF_Vampirism_Rarity_C_OnBuffRemoved");
static_assert(sizeof(BUF_Vampirism_Rarity_C_OnBuffRemoved) == 0x000030, "Wrong size on BUF_Vampirism_Rarity_C_OnBuffRemoved");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffRemoved, BuffedCharacter) == 0x000000, "Member 'BUF_Vampirism_Rarity_C_OnBuffRemoved::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffRemoved, BuffRarity) == 0x000008, "Member 'BUF_Vampirism_Rarity_C_OnBuffRemoved::BuffRarity' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffRemoved, CallFunc_GetGameplayEffectOwner_self_CastInput) == 0x000010, "Member 'BUF_Vampirism_Rarity_C_OnBuffRemoved::CallFunc_GetGameplayEffectOwner_self_CastInput' has a wrong offset!");
static_assert(offsetof(BUF_Vampirism_Rarity_C_OnBuffRemoved, CallFunc_GetGameplayEffectOwner_ReturnValue) == 0x000020, "Member 'BUF_Vampirism_Rarity_C_OnBuffRemoved::CallFunc_GetGameplayEffectOwner_ReturnValue' has a wrong offset!");

}

