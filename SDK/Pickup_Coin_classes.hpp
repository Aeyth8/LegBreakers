#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pickup_Coin

#include "Basic.hpp"

#include "Pickup_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Pickup_Coin.Pickup_Coin_C
// 0x0018 (0x03C0 - 0x03A8)
class APickup_Coin_C : public APickup_Base_C
{
public:
	class UStaticMeshComponent*                   Sphere;                                            // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class USoundBase*>                     PickupSounds;                                      // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void TryPickUpBy(class AActor* Instigator_0, bool* Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Pickup_Coin_C">();
	}
	static class APickup_Coin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APickup_Coin_C>();
	}
};
static_assert(alignof(APickup_Coin_C) == 0x000008, "Wrong alignment on APickup_Coin_C");
static_assert(sizeof(APickup_Coin_C) == 0x0003C0, "Wrong size on APickup_Coin_C");
static_assert(offsetof(APickup_Coin_C, Sphere) == 0x0003A8, "Member 'APickup_Coin_C::Sphere' has a wrong offset!");
static_assert(offsetof(APickup_Coin_C, PickupSounds) == 0x0003B0, "Member 'APickup_Coin_C::PickupSounds' has a wrong offset!");

}

