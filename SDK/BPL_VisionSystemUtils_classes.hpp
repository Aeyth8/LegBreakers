#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_VisionSystemUtils

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_VisionSystemUtils.BPL_VisionSystemUtils_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_VisionSystemUtils_C final : public UBlueprintFunctionLibrary
{
public:
	static void CharRenderShouldBeGameplayVisibleToViewerRender(class ACharacterRenderer_Base_C* ViewerRenderer, class ACharacterRenderer_Base_C* TargetRenderer, class UObject* __WorldContext, bool* ShouldBeVisible);
	static void IsVisibleViaVisibilityTriggerCheck(class ACharacterRenderer_Base_C* Target, class ACharacterRenderer_Base_C* Viewer, class UObject* __WorldContext, bool* IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_VisionSystemUtils_C">();
	}
	static class UBPL_VisionSystemUtils_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_VisionSystemUtils_C>();
	}
};
static_assert(alignof(UBPL_VisionSystemUtils_C) == 0x000008, "Wrong alignment on UBPL_VisionSystemUtils_C");
static_assert(sizeof(UBPL_VisionSystemUtils_C) == 0x000028, "Wrong size on UBPL_VisionSystemUtils_C");

}

