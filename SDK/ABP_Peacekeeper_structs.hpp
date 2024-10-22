#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Peacekeeper

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Peacekeeper.ABP_Peacekeeper_C.AnimBlueprintGeneratedConstantData
// 0x03A7 (0x03A8 - 0x0001)
struct ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_74;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_75;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_76;                                  // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_77;                                 // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_78;                                  // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_79;                                 // 0x0024(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_80;                                // 0x0028(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_81;                               // 0x002C(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_82;                                // 0x0058(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_83;                                 // 0x005C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_84;                                 // 0x005D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_85;                                 // 0x005E(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F[0x1];                                       // 0x005F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_86;                                 // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_87;                                 // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_88;                                 // 0x0070(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_89;                                  // 0x0078(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_90;                               // 0x0080(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00A0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0120(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                                // 0x0138(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_2;                  // 0x0168(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_1;                  // 0x0198(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult;                    // 0x01C8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;                    // 0x01F8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_2;                       // 0x0228(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;                    // 0x0258(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_1;                       // 0x0288(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;                      // 0x02B8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;                         // 0x02E8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;                        // 0x0318(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot_1;                              // 0x0348(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                                // 0x0378(0x0030)()
};
static_assert(alignof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData) == 0x0003A8, "Wrong size on ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __NameProperty_74) == 0x000004, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__NameProperty_74' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __NameProperty_75) == 0x00000C, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__NameProperty_75' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __IntProperty_76) == 0x000014, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__IntProperty_76' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __NameProperty_77) == 0x000018, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__NameProperty_77' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __IntProperty_78) == 0x000020, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__IntProperty_78' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __BoolProperty_79) == 0x000024, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__BoolProperty_79' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __FloatProperty_80) == 0x000028, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__FloatProperty_80' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __StructProperty_81) == 0x00002C, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__StructProperty_81' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __FloatProperty_82) == 0x000058, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__FloatProperty_82' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __BoolProperty_83) == 0x00005C, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__BoolProperty_83' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __EnumProperty_84) == 0x00005D, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__EnumProperty_84' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __ByteProperty_85) == 0x00005E, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__ByteProperty_85' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __NameProperty_86) == 0x000060, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__NameProperty_86' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __NameProperty_87) == 0x000068, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__NameProperty_87' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __NameProperty_88) == 0x000070, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__NameProperty_88' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __IntProperty_89) == 0x000078, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__IntProperty_89' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, __StructProperty_90) == 0x000080, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::__StructProperty_90' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000A0, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000120, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x000138, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_2) == 0x000168, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_1) == 0x000198, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult) == 0x0001C8, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_2) == 0x0001F8, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_2) == 0x000228, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_1) == 0x000258, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_1) == 0x000288, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer) == 0x0002B8, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult) == 0x0002E8, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateMachine) == 0x000318, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Slot_1) == 0x000348, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Slot) == 0x000378, "Member 'ABP_Peacekeeper::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Slot' has a wrong offset!");

}

