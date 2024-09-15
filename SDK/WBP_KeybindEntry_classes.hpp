#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_KeybindEntry

#include "Basic.hpp"

#include "EnhancedInput_structs.hpp"
#include "Engine_structs.hpp"
#include "OdyUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_KeybindEntry.WBP_KeybindEntry_C
// 0x00F8 (0x03E0 - 0x02E8)
class UWBP_KeybindEntry_C final : public UUIWidget_InputKeySelector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOdyTextBlock*                          ActionName;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ActionNameFill;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                EntryFill;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HoveredFill;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputBinding_C*                    KeyBindIcon;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ResetButton;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEnhancedInputUserSettings*             UserInputSettings;                                 // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRemapping;                                       // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEnhancedActionKeyMapping              InputMapping;                                      // 0x0330(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          IsControllerInput;                                 // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x3];                                      // 0x0381(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            FocusedSettingTextColor;                           // 0x0384(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                           FocusedSettingColor;                               // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            FocusedSettingTextColorHovered;                    // 0x03A8(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                           FocusedSettingColorHovered;                        // 0x03BC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CC[0x4];                                      // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEntryHoveredChanged;                             // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BindInputMapping(const struct FEnhancedActionKeyMapping& InputMapping_0);
	void BndEvt__WBP_KeybindEntry_OdyInputKeySelector_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void BndEvt__WBP_KeybindEntry_OdyInputKeySelector_K2Node_ComponentBoundEvent_5_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__WBP_KeybindEntry_ResetButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_KeybindEntry(int32 EntryPoint);
	void OnEntryHoveredChanged__DelegateSignature(class UWBP_KeybindEntry_C* Widget, bool IsHovered_0);
	void OnInitialized();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void ResetInputSelector();
	void ResetToDefault();
	void SetDefaultStyle();
	void SetHoveredStyle();
	void SetKeyBind(const struct FKey& Key);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_KeybindEntry_C">();
	}
	static class UWBP_KeybindEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_KeybindEntry_C>();
	}
};
static_assert(alignof(UWBP_KeybindEntry_C) == 0x000008, "Wrong alignment on UWBP_KeybindEntry_C");
static_assert(sizeof(UWBP_KeybindEntry_C) == 0x0003E0, "Wrong size on UWBP_KeybindEntry_C");
static_assert(offsetof(UWBP_KeybindEntry_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_KeybindEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, ActionName) == 0x0002F0, "Member 'UWBP_KeybindEntry_C::ActionName' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, ActionNameFill) == 0x0002F8, "Member 'UWBP_KeybindEntry_C::ActionNameFill' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, EntryFill) == 0x000300, "Member 'UWBP_KeybindEntry_C::EntryFill' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, HoveredFill) == 0x000308, "Member 'UWBP_KeybindEntry_C::HoveredFill' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, KeyBindIcon) == 0x000310, "Member 'UWBP_KeybindEntry_C::KeyBindIcon' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, ResetButton) == 0x000318, "Member 'UWBP_KeybindEntry_C::ResetButton' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, UserInputSettings) == 0x000320, "Member 'UWBP_KeybindEntry_C::UserInputSettings' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, IsRemapping) == 0x000328, "Member 'UWBP_KeybindEntry_C::IsRemapping' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, InputMapping) == 0x000330, "Member 'UWBP_KeybindEntry_C::InputMapping' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, IsControllerInput) == 0x000380, "Member 'UWBP_KeybindEntry_C::IsControllerInput' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, FocusedSettingTextColor) == 0x000384, "Member 'UWBP_KeybindEntry_C::FocusedSettingTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, FocusedSettingColor) == 0x000398, "Member 'UWBP_KeybindEntry_C::FocusedSettingColor' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, FocusedSettingTextColorHovered) == 0x0003A8, "Member 'UWBP_KeybindEntry_C::FocusedSettingTextColorHovered' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, FocusedSettingColorHovered) == 0x0003BC, "Member 'UWBP_KeybindEntry_C::FocusedSettingColorHovered' has a wrong offset!");
static_assert(offsetof(UWBP_KeybindEntry_C, OnEntryHoveredChanged) == 0x0003D0, "Member 'UWBP_KeybindEntry_C::OnEntryHoveredChanged' has a wrong offset!");

}

