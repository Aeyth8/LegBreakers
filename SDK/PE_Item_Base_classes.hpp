#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PE_Item_Base

#include "Basic.hpp"

#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PE_Item_Base.PE_Item_Base_C
// 0x0010 (0x0628 - 0x0618)
class APE_Item_Base_C : public AMatchaProjectileEntity
{
public:
	class UBoxComponent*                          WorldCollision;                                    // 0x0618(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMatchaInventoryComponent*              Inventory;                                         // 0x0620(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	class UMatchaInventoryComponent* GetInventoryComponent();
	void GetItem(class UMatchaItemAsset** Item);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PE_Item_Base_C">();
	}
	static class APE_Item_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APE_Item_Base_C>();
	}
};
static_assert(alignof(APE_Item_Base_C) == 0x000008, "Wrong alignment on APE_Item_Base_C");
static_assert(sizeof(APE_Item_Base_C) == 0x000628, "Wrong size on APE_Item_Base_C");
static_assert(offsetof(APE_Item_Base_C, WorldCollision) == 0x000618, "Member 'APE_Item_Base_C::WorldCollision' has a wrong offset!");
static_assert(offsetof(APE_Item_Base_C, Inventory) == 0x000620, "Member 'APE_Item_Base_C::Inventory' has a wrong offset!");

}

