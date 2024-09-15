#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MinimapIndicator_Base

#include "Basic.hpp"

#include "OdyMinimap_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MinimapIndicator_Base.WBP_MinimapIndicator_Base_C
// 0x0008 (0x03D0 - 0x03C8)
class UWBP_MinimapIndicator_Base_C : public UOdyMinimapIndicatorWidget
{
public:
	class UNamedSlot*                             IndicatorContents;                                 // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MinimapIndicator_Base_C">();
	}
	static class UWBP_MinimapIndicator_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MinimapIndicator_Base_C>();
	}
};
static_assert(alignof(UWBP_MinimapIndicator_Base_C) == 0x000008, "Wrong alignment on UWBP_MinimapIndicator_Base_C");
static_assert(sizeof(UWBP_MinimapIndicator_Base_C) == 0x0003D0, "Wrong size on UWBP_MinimapIndicator_Base_C");
static_assert(offsetof(UWBP_MinimapIndicator_Base_C, IndicatorContents) == 0x0003C8, "Member 'UWBP_MinimapIndicator_Base_C::IndicatorContents' has a wrong offset!");

}

