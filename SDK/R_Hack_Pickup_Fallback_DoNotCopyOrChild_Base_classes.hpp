#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "R_InteractivePickup_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base.R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C
// 0x0048 (0x02F8 - 0x02B0)
class AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C final : public AR_InteractivePickup_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C; // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   ItemVisual;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ButtonPromptLocation;                              // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTargeted;                                        // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WasVisiualUpdated;                                 // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D2[0x6];                                      // 0x02D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 IndicatorWidgetClass;                              // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMatchaItemAsset*                       Item;                                              // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          DidSetIcon;                                        // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CurrentVisualClass;                                // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base(int32 EntryPoint);
	TSubclassOf<class UOdyCompassIndicatorWidget> GetCompassIndicatorWidgetClass();
	TSubclassOf<class UOdyMinimapIndicatorWidget> GetIndicatorWidgetClass();
	void K2_OnUpdateFromEntity(const class AMatchaSnapNetInteractiveEntity* EntityActor, float DeltaSeconds);
	void ReceiveBeginPlay();
	void UpdateVisual(class UMatchaItemAsset* ItemAsset);

	struct FVector GetIndicatorWorldExtent() const;
	struct FVector GetIndicatorWorldPosition() const;
	struct FVector GetInteractionPromptLocation(const class AActor* InteractingRenderer) const;
	void SetupIndicatorInstance(class UOdyMinimapIndicatorWidget* IndicatorInstance) const;
	bool ShouldCompassIndicatorBeVisible(class APlayerController* InPlayerController) const;
	bool ShouldIndicatorBeVisible(class APlayerController* InPlayerController) const;
	void TickIndicator(class UOdyMinimapIndicatorWidget* WidgetInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C">();
	}
	static class AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C>();
	}
};
static_assert(alignof(AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C) == 0x000008, "Wrong alignment on AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C");
static_assert(sizeof(AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C) == 0x0002F8, "Wrong size on AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C");
static_assert(offsetof(AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C, UberGraphFrame_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C) == 0x0002B0, "Member 'AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C::UberGraphFrame_R_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C' has a wrong offset!");
static_assert(offsetof(AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C, ItemVisual) == 0x0002B8, "Member 'AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C::ItemVisual' has a wrong offset!");
static_assert(offsetof(AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C, ButtonPromptLocation) == 0x0002C0, "Member 'AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C::ButtonPromptLocation' has a wrong offset!");
static_assert(offsetof(AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C, StaticMesh) == 0x0002C8, "Member 'AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C, IsTargeted) == 0x0002D0, "Member 'AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C::IsTargeted' has a wrong offset!");
static_assert(offsetof(AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C, WasVisiualUpdated) == 0x0002D1, "Member 'AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C::WasVisiualUpdated' has a wrong offset!");
static_assert(offsetof(AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C, IndicatorWidgetClass) == 0x0002D8, "Member 'AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C::IndicatorWidgetClass' has a wrong offset!");
static_assert(offsetof(AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C, Item) == 0x0002E0, "Member 'AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C::Item' has a wrong offset!");
static_assert(offsetof(AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C, DidSetIcon) == 0x0002E8, "Member 'AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C::DidSetIcon' has a wrong offset!");
static_assert(offsetof(AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C, CurrentVisualClass) == 0x0002F0, "Member 'AR_Hack_Pickup_Fallback_DoNotCopyOrChild_Base_C::CurrentVisualClass' has a wrong offset!");

}
