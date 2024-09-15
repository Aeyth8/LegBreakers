#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_ShieldArmor_EnergyConvert

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_ShieldArmor_EnergyConvert.BUF_ShieldArmor_EnergyConvert_C
// 0x0038 (0x0060 - 0x0028)
class UBUF_ShieldArmor_EnergyConvert_C : public UMatchaCharacterBuff
{
public:
	double                                        Reflect_Angle;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LegendaryProjectileReflectSPDMod;                  // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Epic_Projectile_Reflect_SPD_Mod;                   // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Rare_Projectile_Reflect_SPD_Mod;                   // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EpicProjectileReflectDMGMod;                       // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LegendaryProjectileReflectDMGMod;                  // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RareProjectileReflectDMGMod;                       // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;
	void OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_ShieldArmor_EnergyConvert_C">();
	}
	static class UBUF_ShieldArmor_EnergyConvert_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_ShieldArmor_EnergyConvert_C>();
	}
};
static_assert(alignof(UBUF_ShieldArmor_EnergyConvert_C) == 0x000008, "Wrong alignment on UBUF_ShieldArmor_EnergyConvert_C");
static_assert(sizeof(UBUF_ShieldArmor_EnergyConvert_C) == 0x000060, "Wrong size on UBUF_ShieldArmor_EnergyConvert_C");
static_assert(offsetof(UBUF_ShieldArmor_EnergyConvert_C, Reflect_Angle) == 0x000028, "Member 'UBUF_ShieldArmor_EnergyConvert_C::Reflect_Angle' has a wrong offset!");
static_assert(offsetof(UBUF_ShieldArmor_EnergyConvert_C, LegendaryProjectileReflectSPDMod) == 0x000030, "Member 'UBUF_ShieldArmor_EnergyConvert_C::LegendaryProjectileReflectSPDMod' has a wrong offset!");
static_assert(offsetof(UBUF_ShieldArmor_EnergyConvert_C, Epic_Projectile_Reflect_SPD_Mod) == 0x000038, "Member 'UBUF_ShieldArmor_EnergyConvert_C::Epic_Projectile_Reflect_SPD_Mod' has a wrong offset!");
static_assert(offsetof(UBUF_ShieldArmor_EnergyConvert_C, Rare_Projectile_Reflect_SPD_Mod) == 0x000040, "Member 'UBUF_ShieldArmor_EnergyConvert_C::Rare_Projectile_Reflect_SPD_Mod' has a wrong offset!");
static_assert(offsetof(UBUF_ShieldArmor_EnergyConvert_C, EpicProjectileReflectDMGMod) == 0x000048, "Member 'UBUF_ShieldArmor_EnergyConvert_C::EpicProjectileReflectDMGMod' has a wrong offset!");
static_assert(offsetof(UBUF_ShieldArmor_EnergyConvert_C, LegendaryProjectileReflectDMGMod) == 0x000050, "Member 'UBUF_ShieldArmor_EnergyConvert_C::LegendaryProjectileReflectDMGMod' has a wrong offset!");
static_assert(offsetof(UBUF_ShieldArmor_EnergyConvert_C, RareProjectileReflectDMGMod) == 0x000058, "Member 'UBUF_ShieldArmor_EnergyConvert_C::RareProjectileReflectDMGMod' has a wrong offset!");

}

