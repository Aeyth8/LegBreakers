#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_HV_DisguiseArmorExplosion

#include "Basic.hpp"

#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass E_HV_DisguiseArmorExplosion.E_HV_DisguiseArmorExplosion_C
// 0x0008 (0x0448 - 0x0440)
class AE_HV_DisguiseArmorExplosion_C final : public AMatchaHitVolumeEntity
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"E_HV_DisguiseArmorExplosion_C">();
	}
	static class AE_HV_DisguiseArmorExplosion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AE_HV_DisguiseArmorExplosion_C>();
	}
};
static_assert(alignof(AE_HV_DisguiseArmorExplosion_C) == 0x000008, "Wrong alignment on AE_HV_DisguiseArmorExplosion_C");
static_assert(sizeof(AE_HV_DisguiseArmorExplosion_C) == 0x000448, "Wrong size on AE_HV_DisguiseArmorExplosion_C");
static_assert(offsetof(AE_HV_DisguiseArmorExplosion_C, DefaultSceneRoot) == 0x000440, "Member 'AE_HV_DisguiseArmorExplosion_C::DefaultSceneRoot' has a wrong offset!");

}

