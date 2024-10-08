#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Hack_Chest

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "SnapNet_structs.hpp"
#include "E_TimedChest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass E_Hack_Chest.E_Hack_Chest_C
// 0x0060 (0x05F0 - 0x0590)
class AE_Hack_Chest_C final : public AE_TimedChest_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_E_Hack_Chest_C;                     // 0x0590(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           HackInventorySlot;                                 // 0x0598(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSnapNetPropertyEnum                   EntityHackType;                                    // 0x05A0(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          DidSetHackType;                                    // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHackType                                     HackType;                                          // 0x05E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__E_Hack_Chest_EntityComponent_K2Node_ComponentBoundEvent_0_SnapNetPropertiesModifiedDynamicDelegate__DelegateSignature();
	void ExecuteUbergraph_E_Hack_Chest(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

	class FString GetScheduledObjectiveDisplayText() const;
	EScheduledObjectiveType GetScheduledObjectiveType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"E_Hack_Chest_C">();
	}
	static class AE_Hack_Chest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AE_Hack_Chest_C>();
	}
};
static_assert(alignof(AE_Hack_Chest_C) == 0x000008, "Wrong alignment on AE_Hack_Chest_C");
static_assert(sizeof(AE_Hack_Chest_C) == 0x0005F0, "Wrong size on AE_Hack_Chest_C");
static_assert(offsetof(AE_Hack_Chest_C, UberGraphFrame_E_Hack_Chest_C) == 0x000590, "Member 'AE_Hack_Chest_C::UberGraphFrame_E_Hack_Chest_C' has a wrong offset!");
static_assert(offsetof(AE_Hack_Chest_C, HackInventorySlot) == 0x000598, "Member 'AE_Hack_Chest_C::HackInventorySlot' has a wrong offset!");
static_assert(offsetof(AE_Hack_Chest_C, EntityHackType) == 0x0005A0, "Member 'AE_Hack_Chest_C::EntityHackType' has a wrong offset!");
static_assert(offsetof(AE_Hack_Chest_C, DidSetHackType) == 0x0005E8, "Member 'AE_Hack_Chest_C::DidSetHackType' has a wrong offset!");
static_assert(offsetof(AE_Hack_Chest_C, HackType) == 0x0005E9, "Member 'AE_Hack_Chest_C::HackType' has a wrong offset!");

}

