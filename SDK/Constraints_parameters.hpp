#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Constraints

#include "Basic.hpp"

#include "AnimationCore_structs.hpp"


namespace SDK::Params
{

// SparseDelegateFunction Constraints.ConstraintsManager.OnConstraintAdded__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ConstraintsManager_OnConstraintAdded__DelegateSignature final
{
public:
	class UConstraintsManager*                    Mananger;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTickableConstraint*                    Constraint;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConstraintsManager_OnConstraintAdded__DelegateSignature) == 0x000008, "Wrong alignment on ConstraintsManager_OnConstraintAdded__DelegateSignature");
static_assert(sizeof(ConstraintsManager_OnConstraintAdded__DelegateSignature) == 0x000010, "Wrong size on ConstraintsManager_OnConstraintAdded__DelegateSignature");
static_assert(offsetof(ConstraintsManager_OnConstraintAdded__DelegateSignature, Mananger) == 0x000000, "Member 'ConstraintsManager_OnConstraintAdded__DelegateSignature::Mananger' has a wrong offset!");
static_assert(offsetof(ConstraintsManager_OnConstraintAdded__DelegateSignature, Constraint) == 0x000008, "Member 'ConstraintsManager_OnConstraintAdded__DelegateSignature::Constraint' has a wrong offset!");

// SparseDelegateFunction Constraints.ConstraintsManager.OnConstraintRemoved__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct ConstraintsManager_OnConstraintRemoved__DelegateSignature final
{
public:
	class UConstraintsManager*                    Mananger;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTickableConstraint*                    Constraint;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDoNotCompensate;                                  // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ConstraintsManager_OnConstraintRemoved__DelegateSignature) == 0x000008, "Wrong alignment on ConstraintsManager_OnConstraintRemoved__DelegateSignature");
static_assert(sizeof(ConstraintsManager_OnConstraintRemoved__DelegateSignature) == 0x000018, "Wrong size on ConstraintsManager_OnConstraintRemoved__DelegateSignature");
static_assert(offsetof(ConstraintsManager_OnConstraintRemoved__DelegateSignature, Mananger) == 0x000000, "Member 'ConstraintsManager_OnConstraintRemoved__DelegateSignature::Mananger' has a wrong offset!");
static_assert(offsetof(ConstraintsManager_OnConstraintRemoved__DelegateSignature, Constraint) == 0x000008, "Member 'ConstraintsManager_OnConstraintRemoved__DelegateSignature::Constraint' has a wrong offset!");
static_assert(offsetof(ConstraintsManager_OnConstraintRemoved__DelegateSignature, bDoNotCompensate) == 0x000010, "Member 'ConstraintsManager_OnConstraintRemoved__DelegateSignature::bDoNotCompensate' has a wrong offset!");

// SparseDelegateFunction Constraints.ConstraintSubsystem.OnConstraintAddedToSystem__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature final
{
public:
	class UConstraintSubsystem*                   Mananger;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTickableConstraint*                    Constraint;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature) == 0x000008, "Wrong alignment on ConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature");
static_assert(sizeof(ConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature) == 0x000010, "Wrong size on ConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature");
static_assert(offsetof(ConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature, Mananger) == 0x000000, "Member 'ConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature::Mananger' has a wrong offset!");
static_assert(offsetof(ConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature, Constraint) == 0x000008, "Member 'ConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature::Constraint' has a wrong offset!");

// SparseDelegateFunction Constraints.ConstraintSubsystem.OnConstraintRemovedFromSystem__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct ConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature final
{
public:
	class UConstraintSubsystem*                   Mananger;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTickableConstraint*                    Constraint;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDoNotCompensate;                                  // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature) == 0x000008, "Wrong alignment on ConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature");
static_assert(sizeof(ConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature) == 0x000018, "Wrong size on ConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature");
static_assert(offsetof(ConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature, Mananger) == 0x000000, "Member 'ConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature::Mananger' has a wrong offset!");
static_assert(offsetof(ConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature, Constraint) == 0x000008, "Member 'ConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature::Constraint' has a wrong offset!");
static_assert(offsetof(ConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature, bDoNotCompensate) == 0x000010, "Member 'ConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature::bDoNotCompensate' has a wrong offset!");

// Function Constraints.ConstraintsScriptingLibrary.AddConstraint
// 0x0028 (0x0028 - 0x0000)
struct ConstraintsScriptingLibrary_AddConstraint final
{
public:
	class UWorld*                                 InWorld;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformableHandle*                   InParentHandle;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformableHandle*                   InChildHandle;                                     // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTickableTransformConstraint*           InConstraint;                                      // 0x0018(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMaintainOffset;                                   // 0x0020(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0021(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ConstraintsScriptingLibrary_AddConstraint) == 0x000008, "Wrong alignment on ConstraintsScriptingLibrary_AddConstraint");
static_assert(sizeof(ConstraintsScriptingLibrary_AddConstraint) == 0x000028, "Wrong size on ConstraintsScriptingLibrary_AddConstraint");
static_assert(offsetof(ConstraintsScriptingLibrary_AddConstraint, InWorld) == 0x000000, "Member 'ConstraintsScriptingLibrary_AddConstraint::InWorld' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_AddConstraint, InParentHandle) == 0x000008, "Member 'ConstraintsScriptingLibrary_AddConstraint::InParentHandle' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_AddConstraint, InChildHandle) == 0x000010, "Member 'ConstraintsScriptingLibrary_AddConstraint::InChildHandle' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_AddConstraint, InConstraint) == 0x000018, "Member 'ConstraintsScriptingLibrary_AddConstraint::InConstraint' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_AddConstraint, bMaintainOffset) == 0x000020, "Member 'ConstraintsScriptingLibrary_AddConstraint::bMaintainOffset' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_AddConstraint, ReturnValue) == 0x000021, "Member 'ConstraintsScriptingLibrary_AddConstraint::ReturnValue' has a wrong offset!");

// Function Constraints.ConstraintsScriptingLibrary.CreateFromType
// 0x0018 (0x0018 - 0x0000)
struct ConstraintsScriptingLibrary_CreateFromType final
{
public:
	class UWorld*                                 InWorld;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETransformConstraintType                      InType;                                            // 0x0008(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTickableTransformConstraint*           ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConstraintsScriptingLibrary_CreateFromType) == 0x000008, "Wrong alignment on ConstraintsScriptingLibrary_CreateFromType");
static_assert(sizeof(ConstraintsScriptingLibrary_CreateFromType) == 0x000018, "Wrong size on ConstraintsScriptingLibrary_CreateFromType");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateFromType, InWorld) == 0x000000, "Member 'ConstraintsScriptingLibrary_CreateFromType::InWorld' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateFromType, InType) == 0x000008, "Member 'ConstraintsScriptingLibrary_CreateFromType::InType' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateFromType, ReturnValue) == 0x000010, "Member 'ConstraintsScriptingLibrary_CreateFromType::ReturnValue' has a wrong offset!");

// Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle
// 0x0020 (0x0020 - 0x0000)
struct ConstraintsScriptingLibrary_CreateTransformableComponentHandle final
{
public:
	class UWorld*                                 InWorld;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        InSceneComponent;                                  // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   InSocketName;                                      // 0x0010(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformableComponentHandle*          ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConstraintsScriptingLibrary_CreateTransformableComponentHandle) == 0x000008, "Wrong alignment on ConstraintsScriptingLibrary_CreateTransformableComponentHandle");
static_assert(sizeof(ConstraintsScriptingLibrary_CreateTransformableComponentHandle) == 0x000020, "Wrong size on ConstraintsScriptingLibrary_CreateTransformableComponentHandle");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateTransformableComponentHandle, InWorld) == 0x000000, "Member 'ConstraintsScriptingLibrary_CreateTransformableComponentHandle::InWorld' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateTransformableComponentHandle, InSceneComponent) == 0x000008, "Member 'ConstraintsScriptingLibrary_CreateTransformableComponentHandle::InSceneComponent' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateTransformableComponentHandle, InSocketName) == 0x000010, "Member 'ConstraintsScriptingLibrary_CreateTransformableComponentHandle::InSocketName' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateTransformableComponentHandle, ReturnValue) == 0x000018, "Member 'ConstraintsScriptingLibrary_CreateTransformableComponentHandle::ReturnValue' has a wrong offset!");

// Function Constraints.ConstraintsScriptingLibrary.CreateTransformableHandle
// 0x0020 (0x0020 - 0x0000)
struct ConstraintsScriptingLibrary_CreateTransformableHandle final
{
public:
	class UWorld*                                 InWorld;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                InObject;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   InAttachmentName;                                  // 0x0010(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformableHandle*                   ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConstraintsScriptingLibrary_CreateTransformableHandle) == 0x000008, "Wrong alignment on ConstraintsScriptingLibrary_CreateTransformableHandle");
static_assert(sizeof(ConstraintsScriptingLibrary_CreateTransformableHandle) == 0x000020, "Wrong size on ConstraintsScriptingLibrary_CreateTransformableHandle");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateTransformableHandle, InWorld) == 0x000000, "Member 'ConstraintsScriptingLibrary_CreateTransformableHandle::InWorld' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateTransformableHandle, InObject) == 0x000008, "Member 'ConstraintsScriptingLibrary_CreateTransformableHandle::InObject' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateTransformableHandle, InAttachmentName) == 0x000010, "Member 'ConstraintsScriptingLibrary_CreateTransformableHandle::InAttachmentName' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateTransformableHandle, ReturnValue) == 0x000018, "Member 'ConstraintsScriptingLibrary_CreateTransformableHandle::ReturnValue' has a wrong offset!");

// Function Constraints.ConstraintsScriptingLibrary.GetConstraintsArray
// 0x0018 (0x0018 - 0x0000)
struct ConstraintsScriptingLibrary_GetConstraintsArray final
{
public:
	class UWorld*                                 InWorld;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTickableConstraint*>            ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConstraintsScriptingLibrary_GetConstraintsArray) == 0x000008, "Wrong alignment on ConstraintsScriptingLibrary_GetConstraintsArray");
static_assert(sizeof(ConstraintsScriptingLibrary_GetConstraintsArray) == 0x000018, "Wrong size on ConstraintsScriptingLibrary_GetConstraintsArray");
static_assert(offsetof(ConstraintsScriptingLibrary_GetConstraintsArray, InWorld) == 0x000000, "Member 'ConstraintsScriptingLibrary_GetConstraintsArray::InWorld' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_GetConstraintsArray, ReturnValue) == 0x000008, "Member 'ConstraintsScriptingLibrary_GetConstraintsArray::ReturnValue' has a wrong offset!");

// Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint
// 0x0010 (0x0010 - 0x0000)
struct ConstraintsScriptingLibrary_RemoveConstraint final
{
public:
	class UWorld*                                 InWorld;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InIndex;                                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ConstraintsScriptingLibrary_RemoveConstraint) == 0x000008, "Wrong alignment on ConstraintsScriptingLibrary_RemoveConstraint");
static_assert(sizeof(ConstraintsScriptingLibrary_RemoveConstraint) == 0x000010, "Wrong size on ConstraintsScriptingLibrary_RemoveConstraint");
static_assert(offsetof(ConstraintsScriptingLibrary_RemoveConstraint, InWorld) == 0x000000, "Member 'ConstraintsScriptingLibrary_RemoveConstraint::InWorld' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_RemoveConstraint, InIndex) == 0x000008, "Member 'ConstraintsScriptingLibrary_RemoveConstraint::InIndex' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_RemoveConstraint, ReturnValue) == 0x00000C, "Member 'ConstraintsScriptingLibrary_RemoveConstraint::ReturnValue' has a wrong offset!");

// Function Constraints.ConstraintsScriptingLibrary.RemoveThisConstraint
// 0x0018 (0x0018 - 0x0000)
struct ConstraintsScriptingLibrary_RemoveThisConstraint final
{
public:
	class UWorld*                                 InWorld;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTickableConstraint*                    InTickableConstraint;                              // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ConstraintsScriptingLibrary_RemoveThisConstraint) == 0x000008, "Wrong alignment on ConstraintsScriptingLibrary_RemoveThisConstraint");
static_assert(sizeof(ConstraintsScriptingLibrary_RemoveThisConstraint) == 0x000018, "Wrong size on ConstraintsScriptingLibrary_RemoveThisConstraint");
static_assert(offsetof(ConstraintsScriptingLibrary_RemoveThisConstraint, InWorld) == 0x000000, "Member 'ConstraintsScriptingLibrary_RemoveThisConstraint::InWorld' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_RemoveThisConstraint, InTickableConstraint) == 0x000008, "Member 'ConstraintsScriptingLibrary_RemoveThisConstraint::InTickableConstraint' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_RemoveThisConstraint, ReturnValue) == 0x000010, "Member 'ConstraintsScriptingLibrary_RemoveThisConstraint::ReturnValue' has a wrong offset!");

}

