#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Rasmus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Rasmus.ABP_Rasmus_C.AnimBlueprintGeneratedConstantData
// 0x0BEF (0x0BF0 - 0x0001)
struct ABP_Rasmus::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_379;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_380;                               // 0x0010(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_381;                                // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_382;                                // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_383;                                // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_384;                                 // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_385;                                // 0x003C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_386;                                 // 0x0044(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_387;                                // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_388;                                 // 0x0050(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_389;                                // 0x0054(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_390;                                // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_391;                                  // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_392;                                // 0x0070(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_393;                                // 0x0071(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 __ArrayProperty_394;                               // 0x0078(0x0010)(BlueprintVisible)
	class FName                                   __NameProperty_395;                                // 0x0088(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_396;                                // 0x0090(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_397;                                // 0x0098(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_398;                                 // 0x00A0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_399;                                // 0x00A4(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_400;                               // 0x00A8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_401;                              // 0x00AC(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_402;                               // 0x00D8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_403;                                // 0x00DC(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_404;                                // 0x00DD(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_405;                                // 0x00DE(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DF[0x1];                                       // 0x00DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_406;                                // 0x00E0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_407;                                // 0x00E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_408;                                 // 0x00F0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_409;                                // 0x00F4(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_410;                                 // 0x00FC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_411;                                // 0x0100(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_412;                                // 0x0108(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_413;                                 // 0x0110(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_414;                              // 0x0118(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0138(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x01B8(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                                // 0x01D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                                // 0x0200(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_14;                 // 0x0230(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_13;                 // 0x0260(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_14;                   // 0x0290(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_13;                   // 0x02C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;                     // 0x02F0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_11;                      // 0x0320(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_12;                   // 0x0350(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_10;                      // 0x0380(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine_2;                      // 0x03B0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose_1;                    // 0x03E0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_12;                 // 0x0410(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_11;                 // 0x0440(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_10;                 // 0x0470(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_9;                  // 0x04A0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_8;                  // 0x04D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_7;                  // 0x0500(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_6;                  // 0x0530(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_5;                  // 0x0560(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_4;                  // 0x0590(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_11;                   // 0x05C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_9;                       // 0x05F0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_10;                   // 0x0620(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_9;                    // 0x0650(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_8;                    // 0x0680(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum_1;                   // 0x06B0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_8;                       // 0x06E0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_7;                    // 0x0710(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_7;                       // 0x0740(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_6;                    // 0x0770(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_6;                       // 0x07A0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_5;                    // 0x07D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_4;                    // 0x0800(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_3;                    // 0x0830(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum;                     // 0x0860(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_5;                       // 0x0890(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;                    // 0x08C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_4;                       // 0x08F0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine_1;                      // 0x0920(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;                      // 0x0950(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_3;                  // 0x0980(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_2;                  // 0x09B0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_1;                  // 0x09E0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult;                    // 0x0A10(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;                    // 0x0A40(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_3;                       // 0x0A70(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;                      // 0x0AA0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_2;                       // 0x0AD0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_1;                     // 0x0B00(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_1;                       // 0x0B30(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;                       // 0x0B60(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;                         // 0x0B90(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;                        // 0x0BC0(0x0030)()
};
static_assert(alignof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Rasmus::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData) == 0x000BF0, "Wrong size on ABP_Rasmus::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_379) == 0x000004, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_379' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __ArrayProperty_380) == 0x000010, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__ArrayProperty_380' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_381) == 0x000020, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_381' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_382) == 0x000028, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_382' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_383) == 0x000030, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_383' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __IntProperty_384) == 0x000038, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__IntProperty_384' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_385) == 0x00003C, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_385' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __IntProperty_386) == 0x000044, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__IntProperty_386' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_387) == 0x000048, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_387' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __IntProperty_388) == 0x000050, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__IntProperty_388' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_389) == 0x000054, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_389' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __BlendProfile_390) == 0x000060, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__BlendProfile_390' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __CurveFloat_391) == 0x000068, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__CurveFloat_391' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __EnumProperty_392) == 0x000070, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__EnumProperty_392' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __EnumProperty_393) == 0x000071, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__EnumProperty_393' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __ArrayProperty_394) == 0x000078, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__ArrayProperty_394' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_395) == 0x000088, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_395' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_396) == 0x000090, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_396' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_397) == 0x000098, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_397' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __IntProperty_398) == 0x0000A0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__IntProperty_398' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __BoolProperty_399) == 0x0000A4, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__BoolProperty_399' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __FloatProperty_400) == 0x0000A8, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__FloatProperty_400' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __StructProperty_401) == 0x0000AC, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__StructProperty_401' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __FloatProperty_402) == 0x0000D8, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__FloatProperty_402' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __BoolProperty_403) == 0x0000DC, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__BoolProperty_403' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __EnumProperty_404) == 0x0000DD, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__EnumProperty_404' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __ByteProperty_405) == 0x0000DE, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__ByteProperty_405' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_406) == 0x0000E0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_406' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_407) == 0x0000E8, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_407' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __IntProperty_408) == 0x0000F0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__IntProperty_408' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_409) == 0x0000F4, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_409' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __IntProperty_410) == 0x0000FC, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__IntProperty_410' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_411) == 0x000100, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_411' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __NameProperty_412) == 0x000108, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__NameProperty_412' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __IntProperty_413) == 0x000110, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__IntProperty_413' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, __StructProperty_414) == 0x000118, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::__StructProperty_414' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000138, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0001B8, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x0001D0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Slot) == 0x000200, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_14) == 0x000230, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_13) == 0x000260, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_14) == 0x000290, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_14' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_13) == 0x0002C0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_BlendListByBool) == 0x0002F0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_11) == 0x000320, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_11' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_12) == 0x000350, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_10) == 0x000380, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateMachine_2) == 0x0003B0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SaveCachedPose_1) == 0x0003E0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_12) == 0x000410, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_11) == 0x000440, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_10) == 0x000470, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_9) == 0x0004A0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_8) == 0x0004D0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_7) == 0x000500, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_6) == 0x000530, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_5) == 0x000560, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_4) == 0x000590, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_11) == 0x0005C0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_9) == 0x0005F0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_10) == 0x000620, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_9) == 0x000650, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_8) == 0x000680, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_BlendListByEnum_1) == 0x0006B0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_8) == 0x0006E0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_7) == 0x000710, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_7) == 0x000740, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_6) == 0x000770, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_6) == 0x0007A0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_5) == 0x0007D0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_4) == 0x000800, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_3) == 0x000830, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_BlendListByEnum) == 0x000860, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_5) == 0x000890, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_2) == 0x0008C0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_4) == 0x0008F0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateMachine_1) == 0x000920, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SaveCachedPose) == 0x000950, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_3) == 0x000980, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_2) == 0x0009B0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_1) == 0x0009E0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult) == 0x000A10, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_1) == 0x000A40, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_3) == 0x000A70, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer) == 0x000AA0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_2) == 0x000AD0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_UseCachedPose_1) == 0x000B00, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_1) == 0x000B30, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_UseCachedPose) == 0x000B60, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult) == 0x000B90, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateMachine) == 0x000BC0, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateMachine' has a wrong offset!");

// ScriptStruct ABP_Rasmus.ABP_Rasmus_C.AnimBlueprintGeneratedMutableData
// 0x0037 (0x0038 - 0x0001)
struct ABP_Rasmus::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_0;                                 // 0x0008(0x0010)(BlueprintVisible, EditFixedSize)
	uint8                                         __ByteProperty_1;                                  // 0x0018(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_2;                                 // 0x0020(0x0010)(BlueprintVisible, EditFixedSize)
	uint8                                         __ByteProperty_3;                                  // 0x0030(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Rasmus::FAnimBlueprintGeneratedMutableData) == 0x000008, "Wrong alignment on ABP_Rasmus::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_Rasmus::FAnimBlueprintGeneratedMutableData) == 0x000038, "Wrong size on ABP_Rasmus::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedMutableData, __ArrayProperty_0) == 0x000008, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedMutableData::__ArrayProperty_0' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedMutableData, __ByteProperty_1) == 0x000018, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedMutableData::__ByteProperty_1' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedMutableData, __ArrayProperty_2) == 0x000020, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedMutableData::__ArrayProperty_2' has a wrong offset!");
static_assert(offsetof(ABP_Rasmus::FAnimBlueprintGeneratedMutableData, __ByteProperty_3) == 0x000030, "Member 'ABP_Rasmus::FAnimBlueprintGeneratedMutableData::__ByteProperty_3' has a wrong offset!");

}
