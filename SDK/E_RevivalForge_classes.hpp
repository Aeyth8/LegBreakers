#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_RevivalForge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SnapNet_structs.hpp"
#include "InteractiveEntity_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass E_RevivalForge.E_RevivalForge_C
// 0x0040 (0x0500 - 0x04C0)
class AE_RevivalForge_C final : public AInteractiveEntity_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_E_RevivalForge_C;                   // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Forge;                                          // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SpawnPoint;                                        // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSnapNetPropertyBoolean                IsBeingInteracted;                                 // 0x04E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   RespawnID;                                         // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AfterInteractionCancelledOrCompleted(class AActor* InteractingActor, bool bWasCancelled);
	void AfterInteractionStarted(class AActor* InteractingActor);
	void ExecuteUbergraph_E_RevivalForge(int32 EntryPoint);

	bool CanStartInteraction(class AActor* InteractingActor) const;
	void GetIsBeingInteracted(bool* bIsBeingInteracted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"E_RevivalForge_C">();
	}
	static class AE_RevivalForge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AE_RevivalForge_C>();
	}
};
static_assert(alignof(AE_RevivalForge_C) == 0x000008, "Wrong alignment on AE_RevivalForge_C");
static_assert(sizeof(AE_RevivalForge_C) == 0x000500, "Wrong size on AE_RevivalForge_C");
static_assert(offsetof(AE_RevivalForge_C, UberGraphFrame_E_RevivalForge_C) == 0x0004C0, "Member 'AE_RevivalForge_C::UberGraphFrame_E_RevivalForge_C' has a wrong offset!");
static_assert(offsetof(AE_RevivalForge_C, SM_Forge) == 0x0004C8, "Member 'AE_RevivalForge_C::SM_Forge' has a wrong offset!");
static_assert(offsetof(AE_RevivalForge_C, SpawnPoint) == 0x0004D0, "Member 'AE_RevivalForge_C::SpawnPoint' has a wrong offset!");
static_assert(offsetof(AE_RevivalForge_C, StaticMesh) == 0x0004D8, "Member 'AE_RevivalForge_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AE_RevivalForge_C, IsBeingInteracted) == 0x0004E0, "Member 'AE_RevivalForge_C::IsBeingInteracted' has a wrong offset!");
static_assert(offsetof(AE_RevivalForge_C, RespawnID) == 0x0004F8, "Member 'AE_RevivalForge_C::RespawnID' has a wrong offset!");

}

