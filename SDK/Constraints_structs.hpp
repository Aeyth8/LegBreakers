#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Constraints

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum Constraints.EHandleEvent
// NumValues: 0x0005
enum class EHandleEvent : uint8
{
	LocalTransformUpdated                    = 0,
	GlobalTransformUpdated                   = 1,
	ComponentUpdated                         = 2,
	UpperDependencyUpdated                   = 3,
	Max                                      = 4,
};

// ScriptStruct Constraints.ConstraintTickFunction
// 0x0018 (0x0040 - 0x0028)
struct FConstraintTickFunction final : public FTickFunction
{
public:
	uint8                                         Pad_28[0x18];                                      // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FConstraintTickFunction) == 0x000008, "Wrong alignment on FConstraintTickFunction");
static_assert(sizeof(FConstraintTickFunction) == 0x000040, "Wrong size on FConstraintTickFunction");

// ScriptStruct Constraints.MovieSceneConstraintChannel
// 0x0000 (0x0108 - 0x0108)
struct FMovieSceneConstraintChannel final : public FMovieSceneBoolChannel
{
};
static_assert(alignof(FMovieSceneConstraintChannel) == 0x000008, "Wrong alignment on FMovieSceneConstraintChannel");
static_assert(sizeof(FMovieSceneConstraintChannel) == 0x000108, "Wrong size on FMovieSceneConstraintChannel");

// ScriptStruct Constraints.ConstraintAndActiveChannel
// 0x0110 (0x0110 - 0x0000)
struct FConstraintAndActiveChannel final
{
public:
	struct FMovieSceneConstraintChannel           ActiveChannel;                                     // 0x0000(0x0108)(NativeAccessSpecifierPublic)
	class UTickableConstraint*                    ConstraintCopyToSpawn;                             // 0x0108(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FConstraintAndActiveChannel) == 0x000008, "Wrong alignment on FConstraintAndActiveChannel");
static_assert(sizeof(FConstraintAndActiveChannel) == 0x000110, "Wrong size on FConstraintAndActiveChannel");
static_assert(offsetof(FConstraintAndActiveChannel, ActiveChannel) == 0x000000, "Member 'FConstraintAndActiveChannel::ActiveChannel' has a wrong offset!");
static_assert(offsetof(FConstraintAndActiveChannel, ConstraintCopyToSpawn) == 0x000108, "Member 'FConstraintAndActiveChannel::ConstraintCopyToSpawn' has a wrong offset!");

// ScriptStruct Constraints.ConstraintsInWorld
// 0x0028 (0x0028 - 0x0000)
struct FConstraintsInWorld final
{
public:
	TWeakObjectPtr<class UWorld>                  World;                                             // 0x0000(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UTickableConstraint>> Constraints;                                       // 0x0008(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_18[0x10];                                      // 0x0018(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FConstraintsInWorld) == 0x000008, "Wrong alignment on FConstraintsInWorld");
static_assert(sizeof(FConstraintsInWorld) == 0x000028, "Wrong size on FConstraintsInWorld");
static_assert(offsetof(FConstraintsInWorld, World) == 0x000000, "Member 'FConstraintsInWorld::World' has a wrong offset!");
static_assert(offsetof(FConstraintsInWorld, Constraints) == 0x000008, "Member 'FConstraintsInWorld::Constraints' has a wrong offset!");

}
