#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_SocialHub

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OdyUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_SocialHub.WBP_Menu_SocialHub_C
// 0x0060 (0x04A8 - 0x0448)
class UWBP_Menu_SocialHub_C final : public UOdyMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_MainMenu_Button_C*                 CloseButton;                                       // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Button_C*                 ExitToMainMenuButton;                              // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FullBodyPortrait;                                  // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FullBodyPortraitDropShadow;                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameModeSelector_C*                GameModeSelector;                                  // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              ImguiButton;                                       // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerNameAndTeam_C*               PlayerInfo;                                        // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_QueueButton_C*                     QueueButton;                                       // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SocialOptions_C*                   SocialOptions;                                     // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ScalabilityLevel;                                  // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActorDataLayer                        In_Data_Layer;                                     // 0x049C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BindData(class UOdyUIData* NewUIData);
	void BndEvt__WBP_LocalPlayerOverlay_ImguiButton_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__WBP_MainMenu_UI_CloseButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
	void BndEvt__WBP_MenuPause_ExitToMainMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_Menu_SocialHub(int32 EntryPoint);
	void InpActEvt_IA_SwitchMode_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_Queue_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void OnInitialized();
	void OnPlayerNameChanged(const class FText& OldValue, const class FText& NewValue);
	void TeamNumberChanged(int32 OldValue, int32 NewValue);
	void UnbindData(class UOdyUIData* OldUIData);
	void UpdatePlayerInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_SocialHub_C">();
	}
	static class UWBP_Menu_SocialHub_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_SocialHub_C>();
	}
};
static_assert(alignof(UWBP_Menu_SocialHub_C) == 0x000008, "Wrong alignment on UWBP_Menu_SocialHub_C");
static_assert(sizeof(UWBP_Menu_SocialHub_C) == 0x0004A8, "Wrong size on UWBP_Menu_SocialHub_C");
static_assert(offsetof(UWBP_Menu_SocialHub_C, UberGraphFrame) == 0x000448, "Member 'UWBP_Menu_SocialHub_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_SocialHub_C, CloseButton) == 0x000450, "Member 'UWBP_Menu_SocialHub_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_SocialHub_C, ExitToMainMenuButton) == 0x000458, "Member 'UWBP_Menu_SocialHub_C::ExitToMainMenuButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_SocialHub_C, FullBodyPortrait) == 0x000460, "Member 'UWBP_Menu_SocialHub_C::FullBodyPortrait' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_SocialHub_C, FullBodyPortraitDropShadow) == 0x000468, "Member 'UWBP_Menu_SocialHub_C::FullBodyPortraitDropShadow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_SocialHub_C, GameModeSelector) == 0x000470, "Member 'UWBP_Menu_SocialHub_C::GameModeSelector' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_SocialHub_C, ImguiButton) == 0x000478, "Member 'UWBP_Menu_SocialHub_C::ImguiButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_SocialHub_C, PlayerInfo) == 0x000480, "Member 'UWBP_Menu_SocialHub_C::PlayerInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_SocialHub_C, QueueButton) == 0x000488, "Member 'UWBP_Menu_SocialHub_C::QueueButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_SocialHub_C, SocialOptions) == 0x000490, "Member 'UWBP_Menu_SocialHub_C::SocialOptions' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_SocialHub_C, ScalabilityLevel) == 0x000498, "Member 'UWBP_Menu_SocialHub_C::ScalabilityLevel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_SocialHub_C, In_Data_Layer) == 0x00049C, "Member 'UWBP_Menu_SocialHub_C::In_Data_Layer' has a wrong offset!");

}

