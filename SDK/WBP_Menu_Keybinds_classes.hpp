#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Keybinds

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Engine_structs.hpp"
#include "OdyUI_structs.hpp"
#include "OdyUI_classes.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Keybinds.WBP_Menu_Keybinds_C
// 0x0158 (0x05A0 - 0x0448)
class UWBP_Menu_Keybinds_C final : public UOdyMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                        AttackStickModeComboBox;                           // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionTypeBase_C*         AttackStickModeOption;                             // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionTypeBase_C*         AutoDashOption;                                    // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        AutoDashOptionComboBox;                            // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionListForScreen_Item_C*        Clear_Action;                                      // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CloseButton;                                       // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                EffectsAudioSlider;                                // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             EffectsVolumeValue;                                // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionTypeBase_C*         FrameCapSettings;                                  // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        FrameCapSettingsComboBox;                          // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionTypeBase_C*         HeavyAttackFromMoveStickOption;                    // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        HeavyAttackWithMoveStickComboBox;                  // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_172;                                         // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         KeybindActionsPanel;                               // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           KeybindEntries;                                    // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                MasterAudioSlider;                                 // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MasterVolumeValue;                                 // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                MusicAudioSlider;                                  // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MusicVolumeValue;                                  // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionTypeBase_C*         QualitySettings;                                   // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        QualitySettingsComboBox;                           // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Button_C*                 ResetButton;                                       // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionListForScreen_Item_C*        Select_Action;                                     // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          Title;                                             // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionTypeBase_C*         VolumeOption;                                      // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionTypeBase_C*         VolumeOption_1;                                    // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionTypeBase_C*         VolumeOption_2;                                    // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentPage;                                       // 0x0528(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextPage;                                          // 0x052C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevPage;                                          // 0x0530(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Scalability_Level;                                 // 0x0534(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ScalabilityLevel;                                  // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActorDataLayer                        In_Data_Layer;                                     // 0x053C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_544[0x4];                                      // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputMappingContext*                   VisualOnlyClearKeybindIMC;                         // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, EFrameRateCap>            FrameStringToEnum;                                 // 0x0550(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_LocalPlayerOverlay_AudioSlider_K2Node_ComponentBoundEvent_10_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__WBP_Menu_Keybinds_AutoDashOptionComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__WBP_Menu_Keybinds_EffectsAudioSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__WBP_Menu_Keybinds_FrameCapSettingsComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__WBP_Menu_Keybinds_HeavyAttackWithMoveStickComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__WBP_Menu_Keybinds_MusicAudioSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__WBP_Menu_Keybinds_resetbutton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_Menu_Leaderboard_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_MenuPause_AttackStickModeComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__WBP_MenuPause_QualitySettingsComboBox_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void ExecuteUbergraph_WBP_Menu_Keybinds(int32 EntryPoint);
	void OnEntryHoveredChanged_Event(class UWBP_KeybindEntry_C* Widget, bool IsHovered_0);
	void OnInputDeviceChanged(const struct FGameplayTag& InputDeviceTag);
	void OnNavigatedAway(EOdyNavigationDirection NavDirection);
	void OnNavigatedTo(const TMap<class FString, class FString>& Args, const class FString& Action, EOdyNavigationDirection NavDirection);
	void Update();
	void UpdateKeybindActionsVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Keybinds_C">();
	}
	static class UWBP_Menu_Keybinds_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Keybinds_C>();
	}
};
static_assert(alignof(UWBP_Menu_Keybinds_C) == 0x000008, "Wrong alignment on UWBP_Menu_Keybinds_C");
static_assert(sizeof(UWBP_Menu_Keybinds_C) == 0x0005A0, "Wrong size on UWBP_Menu_Keybinds_C");
static_assert(offsetof(UWBP_Menu_Keybinds_C, UberGraphFrame) == 0x000448, "Member 'UWBP_Menu_Keybinds_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, AttackStickModeComboBox) == 0x000450, "Member 'UWBP_Menu_Keybinds_C::AttackStickModeComboBox' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, AttackStickModeOption) == 0x000458, "Member 'UWBP_Menu_Keybinds_C::AttackStickModeOption' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, AutoDashOption) == 0x000460, "Member 'UWBP_Menu_Keybinds_C::AutoDashOption' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, AutoDashOptionComboBox) == 0x000468, "Member 'UWBP_Menu_Keybinds_C::AutoDashOptionComboBox' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, Clear_Action) == 0x000470, "Member 'UWBP_Menu_Keybinds_C::Clear_Action' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, CloseButton) == 0x000478, "Member 'UWBP_Menu_Keybinds_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, EffectsAudioSlider) == 0x000480, "Member 'UWBP_Menu_Keybinds_C::EffectsAudioSlider' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, EffectsVolumeValue) == 0x000488, "Member 'UWBP_Menu_Keybinds_C::EffectsVolumeValue' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, FrameCapSettings) == 0x000490, "Member 'UWBP_Menu_Keybinds_C::FrameCapSettings' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, FrameCapSettingsComboBox) == 0x000498, "Member 'UWBP_Menu_Keybinds_C::FrameCapSettingsComboBox' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, HeavyAttackFromMoveStickOption) == 0x0004A0, "Member 'UWBP_Menu_Keybinds_C::HeavyAttackFromMoveStickOption' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, HeavyAttackWithMoveStickComboBox) == 0x0004A8, "Member 'UWBP_Menu_Keybinds_C::HeavyAttackWithMoveStickComboBox' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, Image_172) == 0x0004B0, "Member 'UWBP_Menu_Keybinds_C::Image_172' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, KeybindActionsPanel) == 0x0004B8, "Member 'UWBP_Menu_Keybinds_C::KeybindActionsPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, KeybindEntries) == 0x0004C0, "Member 'UWBP_Menu_Keybinds_C::KeybindEntries' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, MasterAudioSlider) == 0x0004C8, "Member 'UWBP_Menu_Keybinds_C::MasterAudioSlider' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, MasterVolumeValue) == 0x0004D0, "Member 'UWBP_Menu_Keybinds_C::MasterVolumeValue' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, MusicAudioSlider) == 0x0004D8, "Member 'UWBP_Menu_Keybinds_C::MusicAudioSlider' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, MusicVolumeValue) == 0x0004E0, "Member 'UWBP_Menu_Keybinds_C::MusicVolumeValue' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, QualitySettings) == 0x0004E8, "Member 'UWBP_Menu_Keybinds_C::QualitySettings' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, QualitySettingsComboBox) == 0x0004F0, "Member 'UWBP_Menu_Keybinds_C::QualitySettingsComboBox' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, ResetButton) == 0x0004F8, "Member 'UWBP_Menu_Keybinds_C::ResetButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, Select_Action) == 0x000500, "Member 'UWBP_Menu_Keybinds_C::Select_Action' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, Title) == 0x000508, "Member 'UWBP_Menu_Keybinds_C::Title' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, VolumeOption) == 0x000510, "Member 'UWBP_Menu_Keybinds_C::VolumeOption' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, VolumeOption_1) == 0x000518, "Member 'UWBP_Menu_Keybinds_C::VolumeOption_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, VolumeOption_2) == 0x000520, "Member 'UWBP_Menu_Keybinds_C::VolumeOption_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, CurrentPage) == 0x000528, "Member 'UWBP_Menu_Keybinds_C::CurrentPage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, NextPage) == 0x00052C, "Member 'UWBP_Menu_Keybinds_C::NextPage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, PrevPage) == 0x000530, "Member 'UWBP_Menu_Keybinds_C::PrevPage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, Scalability_Level) == 0x000534, "Member 'UWBP_Menu_Keybinds_C::Scalability_Level' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, ScalabilityLevel) == 0x000538, "Member 'UWBP_Menu_Keybinds_C::ScalabilityLevel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, In_Data_Layer) == 0x00053C, "Member 'UWBP_Menu_Keybinds_C::In_Data_Layer' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, VisualOnlyClearKeybindIMC) == 0x000548, "Member 'UWBP_Menu_Keybinds_C::VisualOnlyClearKeybindIMC' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Keybinds_C, FrameStringToEnum) == 0x000550, "Member 'UWBP_Menu_Keybinds_C::FrameStringToEnum' has a wrong offset!");

}

