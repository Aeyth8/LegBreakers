#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_Patrol

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_Patrol.BTT_Patrol_C
// 0x0030 (0x00D8 - 0x00A8)
class UBTT_Patrol_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 StartingSpawnLocation;                             // 0x00B0(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTT_Patrol(int32 EntryPoint);
	void OnFail_C9E644764ADEEE054F4797B7B7E62784(EPathFollowingResult MovementResult);
	void OnSuccess_C9E644764ADEEE054F4797B7B7E62784(EPathFollowingResult MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_Patrol_C">();
	}
	static class UBTT_Patrol_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_Patrol_C>();
	}
};
static_assert(alignof(UBTT_Patrol_C) == 0x000008, "Wrong alignment on UBTT_Patrol_C");
static_assert(sizeof(UBTT_Patrol_C) == 0x0000D8, "Wrong size on UBTT_Patrol_C");
static_assert(offsetof(UBTT_Patrol_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_Patrol_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_Patrol_C, StartingSpawnLocation) == 0x0000B0, "Member 'UBTT_Patrol_C::StartingSpawnLocation' has a wrong offset!");

}

