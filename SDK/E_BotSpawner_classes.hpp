#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_BotSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SnapNet_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass E_BotSpawner.E_BotSpawner_C
// 0x0080 (0x0468 - 0x03E8)
class AE_BotSpawner_C final : public AMatchaHittableInteractiveEntity
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_PowerTerminal;                                  // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SpawnPoint;                                        // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSnapNetPropertyBoolean                IsBeingInteracted;                                 // 0x0408(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftClassPtr<class UClass>>           BotOptions;                                        // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSnapNetPropertyInt32                  SpawnIndex;                                        // 0x0430(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AfterInteractionCancelledOrCompleted(class AActor* InteractingActor, bool bWasCancelled);
	void AfterInteractionStarted(class AActor* InteractingActor);
	void ExecuteUbergraph_E_BotSpawner(int32 EntryPoint);
	void InteractionCompleted(class AActor* InteractingActor);
	void OnHitReceived(const class AActor* HitInstigator, const class AActor* HitActor, const struct FMatchaHitData& HitData);
	void ReceiveBeginPlay();

	bool CanStartInteraction(class AActor* InteractingActor) const;
	void GetIsBeingInteracted(bool* bIsBeingInteracted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"E_BotSpawner_C">();
	}
	static class AE_BotSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AE_BotSpawner_C>();
	}
};
static_assert(alignof(AE_BotSpawner_C) == 0x000008, "Wrong alignment on AE_BotSpawner_C");
static_assert(sizeof(AE_BotSpawner_C) == 0x000468, "Wrong size on AE_BotSpawner_C");
static_assert(offsetof(AE_BotSpawner_C, UberGraphFrame) == 0x0003E8, "Member 'AE_BotSpawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AE_BotSpawner_C, SM_PowerTerminal) == 0x0003F0, "Member 'AE_BotSpawner_C::SM_PowerTerminal' has a wrong offset!");
static_assert(offsetof(AE_BotSpawner_C, SpawnPoint) == 0x0003F8, "Member 'AE_BotSpawner_C::SpawnPoint' has a wrong offset!");
static_assert(offsetof(AE_BotSpawner_C, StaticMesh) == 0x000400, "Member 'AE_BotSpawner_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AE_BotSpawner_C, IsBeingInteracted) == 0x000408, "Member 'AE_BotSpawner_C::IsBeingInteracted' has a wrong offset!");
static_assert(offsetof(AE_BotSpawner_C, BotOptions) == 0x000420, "Member 'AE_BotSpawner_C::BotOptions' has a wrong offset!");
static_assert(offsetof(AE_BotSpawner_C, SpawnIndex) == 0x000430, "Member 'AE_BotSpawner_C::SpawnIndex' has a wrong offset!");

}
