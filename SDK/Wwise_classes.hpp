#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wwise

#include "Basic.hpp"

#include "AkAudio_classes.hpp"
#include "AudioLinkCore_classes.hpp"


namespace SDK
{

// Class Wwise.WwiseAudioLinkComponent
// 0x0030 (0x0470 - 0x0440)
class UWwiseAudioLinkComponent final : public UAkComponent
{
public:
	class UWwiseAudioLinkSettings*                Settings;                                          // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                             Sound;                                             // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoPlay;                                         // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_451[0x7];                                      // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        AudioComponent;                                    // 0x0458(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_460[0x10];                                     // 0x0460(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WwiseAudioLinkComponent">();
	}
	static class UWwiseAudioLinkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWwiseAudioLinkComponent>();
	}
};
static_assert(alignof(UWwiseAudioLinkComponent) == 0x000010, "Wrong alignment on UWwiseAudioLinkComponent");
static_assert(sizeof(UWwiseAudioLinkComponent) == 0x000470, "Wrong size on UWwiseAudioLinkComponent");
static_assert(offsetof(UWwiseAudioLinkComponent, Settings) == 0x000440, "Member 'UWwiseAudioLinkComponent::Settings' has a wrong offset!");
static_assert(offsetof(UWwiseAudioLinkComponent, Sound) == 0x000448, "Member 'UWwiseAudioLinkComponent::Sound' has a wrong offset!");
static_assert(offsetof(UWwiseAudioLinkComponent, bAutoPlay) == 0x000450, "Member 'UWwiseAudioLinkComponent::bAutoPlay' has a wrong offset!");
static_assert(offsetof(UWwiseAudioLinkComponent, AudioComponent) == 0x000458, "Member 'UWwiseAudioLinkComponent::AudioComponent' has a wrong offset!");

// Class Wwise.WwiseAudioLinkSettings
// 0x0050 (0x0088 - 0x0038)
class UWwiseAudioLinkSettings final : public UAudioLinkSettingsAbstract
{
public:
	TSoftObjectPtr<class UAkAudioEvent>           StartEvent;                                        // 0x0038(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldClearBufferOnReceipt;                       // 0x0060(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ProducerToConsumerBufferRatio;                     // 0x0064(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InitialSilenceFillRatio;                           // 0x0068(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x14];                                      // 0x006C(0x0014)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          StartEventResolved;                                // 0x0080(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WwiseAudioLinkSettings">();
	}
	static class UWwiseAudioLinkSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWwiseAudioLinkSettings>();
	}
};
static_assert(alignof(UWwiseAudioLinkSettings) == 0x000008, "Wrong alignment on UWwiseAudioLinkSettings");
static_assert(sizeof(UWwiseAudioLinkSettings) == 0x000088, "Wrong size on UWwiseAudioLinkSettings");
static_assert(offsetof(UWwiseAudioLinkSettings, StartEvent) == 0x000038, "Member 'UWwiseAudioLinkSettings::StartEvent' has a wrong offset!");
static_assert(offsetof(UWwiseAudioLinkSettings, bShouldClearBufferOnReceipt) == 0x000060, "Member 'UWwiseAudioLinkSettings::bShouldClearBufferOnReceipt' has a wrong offset!");
static_assert(offsetof(UWwiseAudioLinkSettings, ProducerToConsumerBufferRatio) == 0x000064, "Member 'UWwiseAudioLinkSettings::ProducerToConsumerBufferRatio' has a wrong offset!");
static_assert(offsetof(UWwiseAudioLinkSettings, InitialSilenceFillRatio) == 0x000068, "Member 'UWwiseAudioLinkSettings::InitialSilenceFillRatio' has a wrong offset!");
static_assert(offsetof(UWwiseAudioLinkSettings, StartEventResolved) == 0x000080, "Member 'UWwiseAudioLinkSettings::StartEventResolved' has a wrong offset!");

}

