#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Trap_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Matcha_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass E_Trap_Base.E_Trap_Base_C
// 0x0040 (0x03D8 - 0x0398)
class AE_Trap_Base_C : public AMatchaTrapEntity
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          TrapCollision;                                     // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableAfterTrigger;                               // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoesPeriodicEffects;                               // 0x03B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B2[0x6];                                      // 0x03B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PeriodicEffectIntervalSeconds;                     // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentIntervalTime;                               // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AudioID_Spawn;                                     // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AudioID_Destroy;                                   // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_E_Trap_Base(int32 EntryPoint);
	void HandleAudioOnOverlapEnded(class AMatchaSnapNetCharacterEntity* OverlappedCharacter);
	void HandleAudioOnOverlapStarted(class AMatchaSnapNetCharacterEntity* OverlappedCharacter);
	void HandleReset();
	void OnCharacterOverlapEnded(class AMatchaSnapNetCharacterEntity* OverlappedCharacter);
	void OnCharacterOverlapStarted(class AMatchaSnapNetCharacterEntity* OverlappedCharacter);
	void OnPeriodicEffectInterval();
	void OnSpawnFinished();
	void OnTriggerTrapFromOverlap(class AMatchaSnapNetCharacterEntity* OverlappedCharacter);
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void SFXOnDestroy();
	void SFXOnSpawn();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"E_Trap_Base_C">();
	}
	static class AE_Trap_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AE_Trap_Base_C>();
	}
};
static_assert(alignof(AE_Trap_Base_C) == 0x000008, "Wrong alignment on AE_Trap_Base_C");
static_assert(sizeof(AE_Trap_Base_C) == 0x0003D8, "Wrong size on AE_Trap_Base_C");
static_assert(offsetof(AE_Trap_Base_C, UberGraphFrame) == 0x000398, "Member 'AE_Trap_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AE_Trap_Base_C, TrapCollision) == 0x0003A0, "Member 'AE_Trap_Base_C::TrapCollision' has a wrong offset!");
static_assert(offsetof(AE_Trap_Base_C, DefaultSceneRoot) == 0x0003A8, "Member 'AE_Trap_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AE_Trap_Base_C, DisableAfterTrigger) == 0x0003B0, "Member 'AE_Trap_Base_C::DisableAfterTrigger' has a wrong offset!");
static_assert(offsetof(AE_Trap_Base_C, DoesPeriodicEffects) == 0x0003B1, "Member 'AE_Trap_Base_C::DoesPeriodicEffects' has a wrong offset!");
static_assert(offsetof(AE_Trap_Base_C, PeriodicEffectIntervalSeconds) == 0x0003B8, "Member 'AE_Trap_Base_C::PeriodicEffectIntervalSeconds' has a wrong offset!");
static_assert(offsetof(AE_Trap_Base_C, CurrentIntervalTime) == 0x0003C0, "Member 'AE_Trap_Base_C::CurrentIntervalTime' has a wrong offset!");
static_assert(offsetof(AE_Trap_Base_C, AudioID_Spawn) == 0x0003C8, "Member 'AE_Trap_Base_C::AudioID_Spawn' has a wrong offset!");
static_assert(offsetof(AE_Trap_Base_C, AudioID_Destroy) == 0x0003D0, "Member 'AE_Trap_Base_C::AudioID_Destroy' has a wrong offset!");

}

