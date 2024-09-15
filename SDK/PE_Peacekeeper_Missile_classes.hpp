#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PE_Peacekeeper_Missile

#include "Basic.hpp"

#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PE_Peacekeeper_Missile.PE_Peacekeeper_Missile_C
// 0x0018 (0x0630 - 0x0618)
class APE_Peacekeeper_Missile_C final : public AMatchaProjectileEntity
{
public:
	class UNiagaraComponent*                      Niagara;                                           // 0x0618(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_ChaoticRocketeer_Default_Rocket;                // 0x0620(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          WorldCollision;                                    // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PE_Peacekeeper_Missile_C">();
	}
	static class APE_Peacekeeper_Missile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APE_Peacekeeper_Missile_C>();
	}
};
static_assert(alignof(APE_Peacekeeper_Missile_C) == 0x000008, "Wrong alignment on APE_Peacekeeper_Missile_C");
static_assert(sizeof(APE_Peacekeeper_Missile_C) == 0x000630, "Wrong size on APE_Peacekeeper_Missile_C");
static_assert(offsetof(APE_Peacekeeper_Missile_C, Niagara) == 0x000618, "Member 'APE_Peacekeeper_Missile_C::Niagara' has a wrong offset!");
static_assert(offsetof(APE_Peacekeeper_Missile_C, SM_ChaoticRocketeer_Default_Rocket) == 0x000620, "Member 'APE_Peacekeeper_Missile_C::SM_ChaoticRocketeer_Default_Rocket' has a wrong offset!");
static_assert(offsetof(APE_Peacekeeper_Missile_C, WorldCollision) == 0x000628, "Member 'APE_Peacekeeper_Missile_C::WorldCollision' has a wrong offset!");

}

