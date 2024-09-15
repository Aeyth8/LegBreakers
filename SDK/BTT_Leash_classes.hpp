#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_Leash

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_Leash.BTT_Leash_C
// 0x0008 (0x00B0 - 0x00A8)
class UBTT_Leash_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BTT_Leash(int32 EntryPoint);
	void OnFail_FD98A3E546BAFA00B13061807A8D1A9F(EPathFollowingResult MovementResult);
	void OnSuccess_FD98A3E546BAFA00B13061807A8D1A9F(EPathFollowingResult MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_Leash_C">();
	}
	static class UBTT_Leash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_Leash_C>();
	}
};
static_assert(alignof(UBTT_Leash_C) == 0x000008, "Wrong alignment on UBTT_Leash_C");
static_assert(sizeof(UBTT_Leash_C) == 0x0000B0, "Wrong size on UBTT_Leash_C");
static_assert(offsetof(UBTT_Leash_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_Leash_C::UberGraphFrame' has a wrong offset!");

}
