#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_ShieldArmor_EnergyConvert

#include "Basic.hpp"

#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function BUF_ShieldArmor_EnergyConvert.BUF_ShieldArmor_EnergyConvert_C.OnBuffApplied
// 0x0038 (0x0038 - 0x0000)
struct BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x1];                                        // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Legendary_ImplicitCast;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Epic_ImplicitCast;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Rare_ImplicitCast;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Common_ImplicitCast;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EnableProjectileReflectionWhenShielding_ReflectAngle_ImplicitCast; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Legendary_ImplicitCast_1;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Epic_ImplicitCast_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Rare_ImplicitCast_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Common_ImplicitCast_1;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied) == 0x000008, "Wrong alignment on BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied");
static_assert(sizeof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied) == 0x000038, "Wrong size on BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, BuffedCharacter) == 0x000000, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, BuffRarity) == 0x000008, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::BuffRarity' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, Temp_byte_Variable) == 0x000009, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, Temp_byte_Variable_1) == 0x00000A, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, K2Node_Select_Default) == 0x00000C, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, K2Node_Select_Default_1) == 0x000010, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, K2Node_Select_Legendary_ImplicitCast) == 0x000014, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::K2Node_Select_Legendary_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, K2Node_Select_Epic_ImplicitCast) == 0x000018, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::K2Node_Select_Epic_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, K2Node_Select_Rare_ImplicitCast) == 0x00001C, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::K2Node_Select_Rare_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, K2Node_Select_Common_ImplicitCast) == 0x000020, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::K2Node_Select_Common_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, CallFunc_EnableProjectileReflectionWhenShielding_ReflectAngle_ImplicitCast) == 0x000024, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::CallFunc_EnableProjectileReflectionWhenShielding_ReflectAngle_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, K2Node_Select_Legendary_ImplicitCast_1) == 0x000028, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::K2Node_Select_Legendary_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, K2Node_Select_Epic_ImplicitCast_1) == 0x00002C, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::K2Node_Select_Epic_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, K2Node_Select_Rare_ImplicitCast_1) == 0x000030, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::K2Node_Select_Rare_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied, K2Node_Select_Common_ImplicitCast_1) == 0x000034, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffApplied::K2Node_Select_Common_ImplicitCast_1' has a wrong offset!");

// Function BUF_ShieldArmor_EnergyConvert.BUF_ShieldArmor_EnergyConvert_C.OnBuffRemoved
// 0x0010 (0x0010 - 0x0000)
struct BUF_ShieldArmor_EnergyConvert_C_OnBuffRemoved final
{
public:
	class AMatchaSnapNetCharacterEntity*          BuffedCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EObjectRarity                                 BuffRarity;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BUF_ShieldArmor_EnergyConvert_C_OnBuffRemoved) == 0x000008, "Wrong alignment on BUF_ShieldArmor_EnergyConvert_C_OnBuffRemoved");
static_assert(sizeof(BUF_ShieldArmor_EnergyConvert_C_OnBuffRemoved) == 0x000010, "Wrong size on BUF_ShieldArmor_EnergyConvert_C_OnBuffRemoved");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffRemoved, BuffedCharacter) == 0x000000, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffRemoved::BuffedCharacter' has a wrong offset!");
static_assert(offsetof(BUF_ShieldArmor_EnergyConvert_C_OnBuffRemoved, BuffRarity) == 0x000008, "Member 'BUF_ShieldArmor_EnergyConvert_C_OnBuffRemoved::BuffRarity' has a wrong offset!");

}

