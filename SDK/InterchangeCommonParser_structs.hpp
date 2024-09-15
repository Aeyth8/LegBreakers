#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterchangeCommonParser

#include "Basic.hpp"


namespace SDK
{

// Enum InterchangeCommonParser.EInterchangeCurveInterpMode
// NumValues: 0x0005
enum class EInterchangeCurveInterpMode : uint8
{
	Linear                                   = 0,
	Constant                                 = 1,
	Cubic                                    = 2,
	None                                     = 3,
	EInterchangeCurveInterpMode_MAX          = 4,
};

// Enum InterchangeCommonParser.EInterchangeCurveTangentMode
// NumValues: 0x0005
enum class EInterchangeCurveTangentMode : uint8
{
	Auto                                     = 0,
	User                                     = 1,
	Break                                    = 2,
	None                                     = 3,
	EInterchangeCurveTangentMode_MAX         = 4,
};

// Enum InterchangeCommonParser.EInterchangeCurveTangentWeightMode
// NumValues: 0x0005
enum class EInterchangeCurveTangentWeightMode : uint8
{
	WeightedNone                             = 0,
	WeightedArrive                           = 1,
	WeightedLeave                            = 2,
	WeightedBoth                             = 3,
	EInterchangeCurveTangentWeightMode_MAX   = 4,
};

// ScriptStruct InterchangeCommonParser.InterchangeCurveKey
// 0x001C (0x001C - 0x0000)
struct FInterchangeCurveKey final
{
public:
	EInterchangeCurveInterpMode                   InterpMode;                                        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInterchangeCurveTangentMode                  TangentMode;                                       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInterchangeCurveTangentWeightMode            TangentWeightMode;                                 // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Time;                                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ArriveTangent;                                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ArriveTangentWeight;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LeaveTangent;                                      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LeaveTangentWeight;                                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInterchangeCurveKey) == 0x000004, "Wrong alignment on FInterchangeCurveKey");
static_assert(sizeof(FInterchangeCurveKey) == 0x00001C, "Wrong size on FInterchangeCurveKey");
static_assert(offsetof(FInterchangeCurveKey, InterpMode) == 0x000000, "Member 'FInterchangeCurveKey::InterpMode' has a wrong offset!");
static_assert(offsetof(FInterchangeCurveKey, TangentMode) == 0x000001, "Member 'FInterchangeCurveKey::TangentMode' has a wrong offset!");
static_assert(offsetof(FInterchangeCurveKey, TangentWeightMode) == 0x000002, "Member 'FInterchangeCurveKey::TangentWeightMode' has a wrong offset!");
static_assert(offsetof(FInterchangeCurveKey, Time) == 0x000004, "Member 'FInterchangeCurveKey::Time' has a wrong offset!");
static_assert(offsetof(FInterchangeCurveKey, Value) == 0x000008, "Member 'FInterchangeCurveKey::Value' has a wrong offset!");
static_assert(offsetof(FInterchangeCurveKey, ArriveTangent) == 0x00000C, "Member 'FInterchangeCurveKey::ArriveTangent' has a wrong offset!");
static_assert(offsetof(FInterchangeCurveKey, ArriveTangentWeight) == 0x000010, "Member 'FInterchangeCurveKey::ArriveTangentWeight' has a wrong offset!");
static_assert(offsetof(FInterchangeCurveKey, LeaveTangent) == 0x000014, "Member 'FInterchangeCurveKey::LeaveTangent' has a wrong offset!");
static_assert(offsetof(FInterchangeCurveKey, LeaveTangentWeight) == 0x000018, "Member 'FInterchangeCurveKey::LeaveTangentWeight' has a wrong offset!");

// ScriptStruct InterchangeCommonParser.InterchangeCurve
// 0x0010 (0x0010 - 0x0000)
struct FInterchangeCurve final
{
public:
	TArray<struct FInterchangeCurveKey>           Keys;                                              // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInterchangeCurve) == 0x000008, "Wrong alignment on FInterchangeCurve");
static_assert(sizeof(FInterchangeCurve) == 0x000010, "Wrong size on FInterchangeCurve");
static_assert(offsetof(FInterchangeCurve, Keys) == 0x000000, "Member 'FInterchangeCurve::Keys' has a wrong offset!");

// ScriptStruct InterchangeCommonParser.InterchangeStepCurve
// 0x0088 (0x0088 - 0x0000)
struct FInterchangeStepCurve final
{
public:
	TArray<float>                                 KeyTimes;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_10[0x78];                                      // 0x0010(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInterchangeStepCurve) == 0x000008, "Wrong alignment on FInterchangeStepCurve");
static_assert(sizeof(FInterchangeStepCurve) == 0x000088, "Wrong size on FInterchangeStepCurve");
static_assert(offsetof(FInterchangeStepCurve, KeyTimes) == 0x000000, "Member 'FInterchangeStepCurve::KeyTimes' has a wrong offset!");

}

