#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Trap_Base

#include "Basic.hpp"

#include "Matcha_structs.hpp"


namespace SDK::Params
{

// Function E_Trap_Base.E_Trap_Base_C.ExecuteUbergraph_E_Trap_Base
// 0x0048 (0x0048 - 0x0000)
struct E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMatchaSnapNetCharacterEntity*          K2Node_Event_OverlappedCharacter_1;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESnapNetWorldType                             CallFunc_SwitchSnapNetWorldType_WorldType;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSnapNetServer_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AMatchaSnapNetCharacterEntity*          K2Node_CustomEvent_OverlappedCharacter;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMatchaSnapNetCharacterEntity*          K2Node_Event_OverlappedCharacter;                  // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base) == 0x000008, "Wrong alignment on E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base");
static_assert(sizeof(E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base) == 0x000048, "Wrong size on E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base");
static_assert(offsetof(E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base, EntryPoint) == 0x000000, "Member 'E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base, K2Node_Event_OverlappedCharacter_1) == 0x000008, "Member 'E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base::K2Node_Event_OverlappedCharacter_1' has a wrong offset!");
static_assert(offsetof(E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base, CallFunc_SwitchSnapNetWorldType_WorldType) == 0x000010, "Member 'E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base::CallFunc_SwitchSnapNetWorldType_WorldType' has a wrong offset!");
static_assert(offsetof(E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base, K2Node_Event_DeltaSeconds) == 0x000014, "Member 'E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base, CallFunc_IsSnapNetServer_ReturnValue) == 0x000019, "Member 'E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base::CallFunc_IsSnapNetServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base, K2Node_CustomEvent_OverlappedCharacter) == 0x000020, "Member 'E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base::K2Node_CustomEvent_OverlappedCharacter' has a wrong offset!");
static_assert(offsetof(E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000028, "Member 'E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000030, "Member 'E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base, K2Node_Event_OverlappedCharacter) == 0x000038, "Member 'E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base::K2Node_Event_OverlappedCharacter' has a wrong offset!");
static_assert(offsetof(E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000040, "Member 'E_Trap_Base_C_ExecuteUbergraph_E_Trap_Base::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function E_Trap_Base.E_Trap_Base_C.HandleAudioOnOverlapEnded
// 0x0008 (0x0008 - 0x0000)
struct E_Trap_Base_C_HandleAudioOnOverlapEnded final
{
public:
	class AMatchaSnapNetCharacterEntity*          OverlappedCharacter;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Trap_Base_C_HandleAudioOnOverlapEnded) == 0x000008, "Wrong alignment on E_Trap_Base_C_HandleAudioOnOverlapEnded");
static_assert(sizeof(E_Trap_Base_C_HandleAudioOnOverlapEnded) == 0x000008, "Wrong size on E_Trap_Base_C_HandleAudioOnOverlapEnded");
static_assert(offsetof(E_Trap_Base_C_HandleAudioOnOverlapEnded, OverlappedCharacter) == 0x000000, "Member 'E_Trap_Base_C_HandleAudioOnOverlapEnded::OverlappedCharacter' has a wrong offset!");

// Function E_Trap_Base.E_Trap_Base_C.HandleAudioOnOverlapStarted
// 0x0008 (0x0008 - 0x0000)
struct E_Trap_Base_C_HandleAudioOnOverlapStarted final
{
public:
	class AMatchaSnapNetCharacterEntity*          OverlappedCharacter;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Trap_Base_C_HandleAudioOnOverlapStarted) == 0x000008, "Wrong alignment on E_Trap_Base_C_HandleAudioOnOverlapStarted");
static_assert(sizeof(E_Trap_Base_C_HandleAudioOnOverlapStarted) == 0x000008, "Wrong size on E_Trap_Base_C_HandleAudioOnOverlapStarted");
static_assert(offsetof(E_Trap_Base_C_HandleAudioOnOverlapStarted, OverlappedCharacter) == 0x000000, "Member 'E_Trap_Base_C_HandleAudioOnOverlapStarted::OverlappedCharacter' has a wrong offset!");

// Function E_Trap_Base.E_Trap_Base_C.OnCharacterOverlapEnded
// 0x0008 (0x0008 - 0x0000)
struct E_Trap_Base_C_OnCharacterOverlapEnded final
{
public:
	class AMatchaSnapNetCharacterEntity*          OverlappedCharacter;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Trap_Base_C_OnCharacterOverlapEnded) == 0x000008, "Wrong alignment on E_Trap_Base_C_OnCharacterOverlapEnded");
static_assert(sizeof(E_Trap_Base_C_OnCharacterOverlapEnded) == 0x000008, "Wrong size on E_Trap_Base_C_OnCharacterOverlapEnded");
static_assert(offsetof(E_Trap_Base_C_OnCharacterOverlapEnded, OverlappedCharacter) == 0x000000, "Member 'E_Trap_Base_C_OnCharacterOverlapEnded::OverlappedCharacter' has a wrong offset!");

// Function E_Trap_Base.E_Trap_Base_C.OnCharacterOverlapStarted
// 0x0008 (0x0008 - 0x0000)
struct E_Trap_Base_C_OnCharacterOverlapStarted final
{
public:
	class AMatchaSnapNetCharacterEntity*          OverlappedCharacter;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Trap_Base_C_OnCharacterOverlapStarted) == 0x000008, "Wrong alignment on E_Trap_Base_C_OnCharacterOverlapStarted");
static_assert(sizeof(E_Trap_Base_C_OnCharacterOverlapStarted) == 0x000008, "Wrong size on E_Trap_Base_C_OnCharacterOverlapStarted");
static_assert(offsetof(E_Trap_Base_C_OnCharacterOverlapStarted, OverlappedCharacter) == 0x000000, "Member 'E_Trap_Base_C_OnCharacterOverlapStarted::OverlappedCharacter' has a wrong offset!");

// Function E_Trap_Base.E_Trap_Base_C.OnTriggerTrapFromOverlap
// 0x0008 (0x0008 - 0x0000)
struct E_Trap_Base_C_OnTriggerTrapFromOverlap final
{
public:
	class AMatchaSnapNetCharacterEntity*          OverlappedCharacter;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Trap_Base_C_OnTriggerTrapFromOverlap) == 0x000008, "Wrong alignment on E_Trap_Base_C_OnTriggerTrapFromOverlap");
static_assert(sizeof(E_Trap_Base_C_OnTriggerTrapFromOverlap) == 0x000008, "Wrong size on E_Trap_Base_C_OnTriggerTrapFromOverlap");
static_assert(offsetof(E_Trap_Base_C_OnTriggerTrapFromOverlap, OverlappedCharacter) == 0x000000, "Member 'E_Trap_Base_C_OnTriggerTrapFromOverlap::OverlappedCharacter' has a wrong offset!");

// Function E_Trap_Base.E_Trap_Base_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct E_Trap_Base_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Trap_Base_C_ReceiveTick) == 0x000004, "Wrong alignment on E_Trap_Base_C_ReceiveTick");
static_assert(sizeof(E_Trap_Base_C_ReceiveTick) == 0x000004, "Wrong size on E_Trap_Base_C_ReceiveTick");
static_assert(offsetof(E_Trap_Base_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'E_Trap_Base_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function E_Trap_Base.E_Trap_Base_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct E_Trap_Base_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsSnapNetServer_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(E_Trap_Base_C_UserConstructionScript) == 0x000001, "Wrong alignment on E_Trap_Base_C_UserConstructionScript");
static_assert(sizeof(E_Trap_Base_C_UserConstructionScript) == 0x000001, "Wrong size on E_Trap_Base_C_UserConstructionScript");
static_assert(offsetof(E_Trap_Base_C_UserConstructionScript, CallFunc_IsSnapNetServer_ReturnValue) == 0x000000, "Member 'E_Trap_Base_C_UserConstructionScript::CallFunc_IsSnapNetServer_ReturnValue' has a wrong offset!");

}
