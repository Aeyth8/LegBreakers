#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_StartGlitchLaserCeremony

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_StartGlitchLaserCeremony.AnimNotify_StartGlitchLaserCeremony_C
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_StartGlitchLaserCeremony_C final : public UAnimNotify
{
public:
	class FString GetNotifyName() const;
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_StartGlitchLaserCeremony_C">();
	}
	static class UAnimNotify_StartGlitchLaserCeremony_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_StartGlitchLaserCeremony_C>();
	}
};
static_assert(alignof(UAnimNotify_StartGlitchLaserCeremony_C) == 0x000008, "Wrong alignment on UAnimNotify_StartGlitchLaserCeremony_C");
static_assert(sizeof(UAnimNotify_StartGlitchLaserCeremony_C) == 0x000038, "Wrong size on UAnimNotify_StartGlitchLaserCeremony_C");

}
