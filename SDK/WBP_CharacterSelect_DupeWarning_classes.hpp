#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterSelect_DupeWarning

#include "Basic.hpp"

#include "OdyUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharacterSelect_DupeWarning.WBP_CharacterSelect_DupeWarning_C
// 0x0010 (0x03A8 - 0x0398)
class UWBP_CharacterSelect_DupeWarning_C final : public UOdyWidget
{
public:
	class UImage*                                 Image_27;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_108;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharacterSelect_DupeWarning_C">();
	}
	static class UWBP_CharacterSelect_DupeWarning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharacterSelect_DupeWarning_C>();
	}
};
static_assert(alignof(UWBP_CharacterSelect_DupeWarning_C) == 0x000008, "Wrong alignment on UWBP_CharacterSelect_DupeWarning_C");
static_assert(sizeof(UWBP_CharacterSelect_DupeWarning_C) == 0x0003A8, "Wrong size on UWBP_CharacterSelect_DupeWarning_C");
static_assert(offsetof(UWBP_CharacterSelect_DupeWarning_C, Image_27) == 0x000398, "Member 'UWBP_CharacterSelect_DupeWarning_C::Image_27' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelect_DupeWarning_C, Image_108) == 0x0003A0, "Member 'UWBP_CharacterSelect_DupeWarning_C::Image_108' has a wrong offset!");

}
