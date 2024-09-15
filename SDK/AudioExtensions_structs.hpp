#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioExtensions

#include "Basic.hpp"


namespace SDK
{

// Enum AudioExtensions.ESoundWaveCloudStreamingPlatformProjectEnableType
// NumValues: 0x0003
enum class ESoundWaveCloudStreamingPlatformProjectEnableType : uint8
{
	Enabled                                  = 0,
	Disabled                                 = 1,
	ESoundWaveCloudStreamingPlatformProjectEnableType_MAX = 2,
};

// Enum AudioExtensions.ESoundWaveCloudStreamingPlatformEnableType
// NumValues: 0x0004
enum class ESoundWaveCloudStreamingPlatformEnableType : uint8
{
	Inherited                                = 0,
	Disabled                                 = 1,
	SWC_MultipleValues                       = 2,
	ESoundWaveCloudStreamingPlatformEnableType_MAX = 3,
};

// Enum AudioExtensions.EAudioParameterType
// NumValues: 0x000F
enum class EAudioParameterType : uint8
{
	None                                     = 0,
	Boolean                                  = 1,
	Integer                                  = 2,
	Float                                    = 3,
	String                                   = 4,
	Object                                   = 5,
	NoneArray                                = 6,
	BooleanArray                             = 7,
	IntegerArray                             = 8,
	FloatArray                               = 9,
	StringArray                              = 10,
	ObjectArray                              = 11,
	Trigger                                  = 12,
	COUNT                                    = 13,
	EAudioParameterType_MAX                  = 14,
};

// ScriptStruct AudioExtensions.AudioParameter
// 0x00A0 (0x00A0 - 0x0000)
struct FAudioParameter
{
public:
	class FName                                   ParamName;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloatParam;                                        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          BoolParam;                                         // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IntParam;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                ObjectParam;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StringParam;                                       // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                 ArrayFloatParam;                                   // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                  ArrayBoolParam;                                    // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 ArrayIntParam;                                     // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        ArrayObjectParam;                                  // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FString>                         ArrayStringParam;                                  // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	EAudioParameterType                           ParamType;                                         // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TypeName;                                          // 0x0084(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8C[0x14];                                      // 0x008C(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAudioParameter) == 0x000008, "Wrong alignment on FAudioParameter");
static_assert(sizeof(FAudioParameter) == 0x0000A0, "Wrong size on FAudioParameter");
static_assert(offsetof(FAudioParameter, ParamName) == 0x000000, "Member 'FAudioParameter::ParamName' has a wrong offset!");
static_assert(offsetof(FAudioParameter, FloatParam) == 0x000008, "Member 'FAudioParameter::FloatParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, BoolParam) == 0x00000C, "Member 'FAudioParameter::BoolParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, IntParam) == 0x000010, "Member 'FAudioParameter::IntParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ObjectParam) == 0x000018, "Member 'FAudioParameter::ObjectParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, StringParam) == 0x000020, "Member 'FAudioParameter::StringParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayFloatParam) == 0x000030, "Member 'FAudioParameter::ArrayFloatParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayBoolParam) == 0x000040, "Member 'FAudioParameter::ArrayBoolParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayIntParam) == 0x000050, "Member 'FAudioParameter::ArrayIntParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayObjectParam) == 0x000060, "Member 'FAudioParameter::ArrayObjectParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayStringParam) == 0x000070, "Member 'FAudioParameter::ArrayStringParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ParamType) == 0x000080, "Member 'FAudioParameter::ParamType' has a wrong offset!");
static_assert(offsetof(FAudioParameter, TypeName) == 0x000084, "Member 'FAudioParameter::TypeName' has a wrong offset!");

// ScriptStruct AudioExtensions.SoundGeneratorOutput
// 0x0008 (0x0008 - 0x0000)
struct FSoundGeneratorOutput
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSoundGeneratorOutput) == 0x000004, "Wrong alignment on FSoundGeneratorOutput");
static_assert(sizeof(FSoundGeneratorOutput) == 0x000008, "Wrong size on FSoundGeneratorOutput");
static_assert(offsetof(FSoundGeneratorOutput, Name) == 0x000000, "Member 'FSoundGeneratorOutput::Name' has a wrong offset!");

// ScriptStruct AudioExtensions.SoundWaveCloudStreamingPlatformProjectSettings
// 0x0001 (0x0001 - 0x0000)
struct FSoundWaveCloudStreamingPlatformProjectSettings final
{
public:
	ESoundWaveCloudStreamingPlatformProjectEnableType EnablementSetting;                                 // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSoundWaveCloudStreamingPlatformProjectSettings) == 0x000001, "Wrong alignment on FSoundWaveCloudStreamingPlatformProjectSettings");
static_assert(sizeof(FSoundWaveCloudStreamingPlatformProjectSettings) == 0x000001, "Wrong size on FSoundWaveCloudStreamingPlatformProjectSettings");
static_assert(offsetof(FSoundWaveCloudStreamingPlatformProjectSettings, EnablementSetting) == 0x000000, "Member 'FSoundWaveCloudStreamingPlatformProjectSettings::EnablementSetting' has a wrong offset!");

// ScriptStruct AudioExtensions.SoundWaveCloudStreamingPlatformSettings
// 0x0001 (0x0001 - 0x0000)
struct FSoundWaveCloudStreamingPlatformSettings final
{
public:
	ESoundWaveCloudStreamingPlatformEnableType    EnablementSetting;                                 // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSoundWaveCloudStreamingPlatformSettings) == 0x000001, "Wrong alignment on FSoundWaveCloudStreamingPlatformSettings");
static_assert(sizeof(FSoundWaveCloudStreamingPlatformSettings) == 0x000001, "Wrong size on FSoundWaveCloudStreamingPlatformSettings");
static_assert(offsetof(FSoundWaveCloudStreamingPlatformSettings, EnablementSetting) == 0x000000, "Member 'FSoundWaveCloudStreamingPlatformSettings::EnablementSetting' has a wrong offset!");

}

