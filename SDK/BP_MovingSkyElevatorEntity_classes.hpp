#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MovingSkyElevatorEntity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MovingSkyElevatorEntity.BP_MovingSkyElevatorEntity_C
// 0x0058 (0x04E0 - 0x0488)
class ABP_MovingSkyElevatorEntity_C final : public AMatchaMovingPlatformEntity
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0488(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube1;                                             // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone2;                                             // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone1;                                             // 0x04A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Roof4;                                             // 0x04B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Roof3;                                             // 0x04B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube2;                                             // 0x04C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DoorRoot;                                          // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyConfigScale();
	void BndEvt__BP_MovingPlatformEntity_EntityComponent_K2Node_ComponentBoundEvent_0_SnapNetPropertiesModifiedDynamicDelegate__DelegateSignature();
	void ChangeDoorCollision(bool DoorCollisionOff);
	void ExecuteUbergraph_BP_MovingSkyElevatorEntity(int32 EntryPoint);
	void OnEnabledChanged(bool bOldEnabled, bool bNewEnabled);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MovingSkyElevatorEntity_C">();
	}
	static class ABP_MovingSkyElevatorEntity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MovingSkyElevatorEntity_C>();
	}
};
static_assert(alignof(ABP_MovingSkyElevatorEntity_C) == 0x000008, "Wrong alignment on ABP_MovingSkyElevatorEntity_C");
static_assert(sizeof(ABP_MovingSkyElevatorEntity_C) == 0x0004E0, "Wrong size on ABP_MovingSkyElevatorEntity_C");
static_assert(offsetof(ABP_MovingSkyElevatorEntity_C, UberGraphFrame) == 0x000488, "Member 'ABP_MovingSkyElevatorEntity_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MovingSkyElevatorEntity_C, Cube1) == 0x000490, "Member 'ABP_MovingSkyElevatorEntity_C::Cube1' has a wrong offset!");
static_assert(offsetof(ABP_MovingSkyElevatorEntity_C, Box) == 0x000498, "Member 'ABP_MovingSkyElevatorEntity_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_MovingSkyElevatorEntity_C, Cone2) == 0x0004A0, "Member 'ABP_MovingSkyElevatorEntity_C::Cone2' has a wrong offset!");
static_assert(offsetof(ABP_MovingSkyElevatorEntity_C, Cone1) == 0x0004A8, "Member 'ABP_MovingSkyElevatorEntity_C::Cone1' has a wrong offset!");
static_assert(offsetof(ABP_MovingSkyElevatorEntity_C, Roof4) == 0x0004B0, "Member 'ABP_MovingSkyElevatorEntity_C::Roof4' has a wrong offset!");
static_assert(offsetof(ABP_MovingSkyElevatorEntity_C, Roof3) == 0x0004B8, "Member 'ABP_MovingSkyElevatorEntity_C::Roof3' has a wrong offset!");
static_assert(offsetof(ABP_MovingSkyElevatorEntity_C, Cube2) == 0x0004C0, "Member 'ABP_MovingSkyElevatorEntity_C::Cube2' has a wrong offset!");
static_assert(offsetof(ABP_MovingSkyElevatorEntity_C, DoorRoot) == 0x0004C8, "Member 'ABP_MovingSkyElevatorEntity_C::DoorRoot' has a wrong offset!");
static_assert(offsetof(ABP_MovingSkyElevatorEntity_C, Cube) == 0x0004D0, "Member 'ABP_MovingSkyElevatorEntity_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_MovingSkyElevatorEntity_C, DefaultSceneRoot) == 0x0004D8, "Member 'ABP_MovingSkyElevatorEntity_C::DefaultSceneRoot' has a wrong offset!");

}
