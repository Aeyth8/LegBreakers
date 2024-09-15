#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_PauseOptions

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OdyUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_PauseOptions.WBP_Menu_PauseOptions_C
// 0x0068 (0x04B0 - 0x0448)
class UWBP_Menu_PauseOptions_C final : public UOdyMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_ActionListForScreen_Item_C*        Back_Action;                                       // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Button_C*                 CharacterButton;                                   // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Button_C*                 ControlsManualButton;                              // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Button_C*                 ExitGameButton;                                    // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FullBodyPortraitReflect;                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeaderForCategory_C*               Header;                                            // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Button_C*                 LeaderboardButton;                                 // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_94;                                    // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_96;                                    // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionListForScreen_Item_C*        Select_Action;                                     // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Button_C*                 SettingsButton;                                    // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Button_C*                 SocialHubButton;                                   // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BindData(class UOdyUIData* NewUIData);
	void BndEvt__WBP_Menu_PauseOptions_CharacterButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__WBP_Menu_PauseOptions_ControlsManualButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_Menu_PauseOptions_ExitGameButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__WBP_Menu_PauseOptions_LeaderboardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_Menu_PauseOptions_SettingsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__WBP_Menu_PauseOptions_SocialHubButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_Menu_PauseOptions(int32 EntryPoint);
	void InpActEvt_IA_Menu_Pause_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void UnbindData(class UOdyUIData* OldUIData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_PauseOptions_C">();
	}
	static class UWBP_Menu_PauseOptions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_PauseOptions_C>();
	}
};
static_assert(alignof(UWBP_Menu_PauseOptions_C) == 0x000008, "Wrong alignment on UWBP_Menu_PauseOptions_C");
static_assert(sizeof(UWBP_Menu_PauseOptions_C) == 0x0004B0, "Wrong size on UWBP_Menu_PauseOptions_C");
static_assert(offsetof(UWBP_Menu_PauseOptions_C, UberGraphFrame) == 0x000448, "Member 'UWBP_Menu_PauseOptions_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PauseOptions_C, Back_Action) == 0x000450, "Member 'UWBP_Menu_PauseOptions_C::Back_Action' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PauseOptions_C, CharacterButton) == 0x000458, "Member 'UWBP_Menu_PauseOptions_C::CharacterButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PauseOptions_C, ControlsManualButton) == 0x000460, "Member 'UWBP_Menu_PauseOptions_C::ControlsManualButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PauseOptions_C, ExitGameButton) == 0x000468, "Member 'UWBP_Menu_PauseOptions_C::ExitGameButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PauseOptions_C, FullBodyPortraitReflect) == 0x000470, "Member 'UWBP_Menu_PauseOptions_C::FullBodyPortraitReflect' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PauseOptions_C, Header) == 0x000478, "Member 'UWBP_Menu_PauseOptions_C::Header' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PauseOptions_C, LeaderboardButton) == 0x000480, "Member 'UWBP_Menu_PauseOptions_C::LeaderboardButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PauseOptions_C, RetainerBox_94) == 0x000488, "Member 'UWBP_Menu_PauseOptions_C::RetainerBox_94' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PauseOptions_C, RetainerBox_96) == 0x000490, "Member 'UWBP_Menu_PauseOptions_C::RetainerBox_96' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PauseOptions_C, Select_Action) == 0x000498, "Member 'UWBP_Menu_PauseOptions_C::Select_Action' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PauseOptions_C, SettingsButton) == 0x0004A0, "Member 'UWBP_Menu_PauseOptions_C::SettingsButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PauseOptions_C, SocialHubButton) == 0x0004A8, "Member 'UWBP_Menu_PauseOptions_C::SocialHubButton' has a wrong offset!");

}

