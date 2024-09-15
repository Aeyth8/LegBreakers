#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Transient

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct Transient.ChaosDestructionEvent_SWC
// 0x0044 (0x0044 - 0x0000)
struct FChaosDestructionEvent_SWC final
{
public:
	struct FVector3f                              Position;                                          // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector3f                              Normal;                                            // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector3f                              Velocity;                                          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector3f                              AngularVelocity;                                   // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExtentMin;                                         // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ExtentMax;                                         // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ParticleID;                                        // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Time;                                              // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Type;                                              // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FChaosDestructionEvent_SWC) == 0x000004, "Wrong alignment on FChaosDestructionEvent_SWC");
static_assert(sizeof(FChaosDestructionEvent_SWC) == 0x000044, "Wrong size on FChaosDestructionEvent_SWC");
static_assert(offsetof(FChaosDestructionEvent_SWC, Position) == 0x000000, "Member 'FChaosDestructionEvent_SWC::Position' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, Normal) == 0x00000C, "Member 'FChaosDestructionEvent_SWC::Normal' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, Velocity) == 0x000018, "Member 'FChaosDestructionEvent_SWC::Velocity' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, AngularVelocity) == 0x000024, "Member 'FChaosDestructionEvent_SWC::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, ExtentMin) == 0x000030, "Member 'FChaosDestructionEvent_SWC::ExtentMin' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, ExtentMax) == 0x000034, "Member 'FChaosDestructionEvent_SWC::ExtentMax' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, ParticleID) == 0x000038, "Member 'FChaosDestructionEvent_SWC::ParticleID' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, Time) == 0x00003C, "Member 'FChaosDestructionEvent_SWC::Time' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, Type) == 0x000040, "Member 'FChaosDestructionEvent_SWC::Type' has a wrong offset!");

}

