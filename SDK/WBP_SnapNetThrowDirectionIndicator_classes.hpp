#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SnapNetThrowDirectionIndicator

#include "Basic.hpp"

#include "OdyUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SnapNetThrowDirectionIndicator.WBP_SnapNetThrowDirectionIndicator_C
// 0x0008 (0x03A0 - 0x0398)
class UWBP_SnapNetThrowDirectionIndicator_C final : public UOdyWidget
{
public:
	class UImage*                                 Image_20;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SnapNetThrowDirectionIndicator_C">();
	}
	static class UWBP_SnapNetThrowDirectionIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SnapNetThrowDirectionIndicator_C>();
	}
};
static_assert(alignof(UWBP_SnapNetThrowDirectionIndicator_C) == 0x000008, "Wrong alignment on UWBP_SnapNetThrowDirectionIndicator_C");
static_assert(sizeof(UWBP_SnapNetThrowDirectionIndicator_C) == 0x0003A0, "Wrong size on UWBP_SnapNetThrowDirectionIndicator_C");
static_assert(offsetof(UWBP_SnapNetThrowDirectionIndicator_C, Image_20) == 0x000398, "Member 'UWBP_SnapNetThrowDirectionIndicator_C::Image_20' has a wrong offset!");

}
