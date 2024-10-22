#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InGameUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Matcha_structs.hpp"
#include "OdyUI_structs.hpp"
#include "OdyUI_classes.hpp"
#include "EHUDMapState_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InGameUI.WBP_InGameUI_C
// 0x0160 (0x05A8 - 0x0448)
class UWBP_InGameUI_C final : public UOdyMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_OdyMinimap_C*                      MegaMap;                                           // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MegamapContainer;                                  // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               MegaMapSizer;                                      // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OdyMinimap_C*                      SideMap;                                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SideMapSizer;                                      // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SpectateTooltip;                                   // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SpectateView;                                      // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SpectatingText;                                    // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugConnectionInfo_C*             WBP_DebugConnectionInfo;                           // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FloatingIndicators_Panel_C*        WBP_FloatingIndicators_Panel;                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FullControls_C*                    WBP_FullControls;                                  // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GearTooltips_C*                    WBP_GearTooltips;                                  // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUDFeedback_C*                     WBP_HUDFeedback;                                   // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_MatchTimer_C*               WBP_Ingame_MatchTimer;                             // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InGameInfoBar_C*                   WBP_InGameInfoBar;                                 // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputBinding_C*                    WBP_InputBinding;                                  // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputBinding_C*                    WBP_InputBinding_1;                                // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputBinding_C*                    WBP_InputBinding_80;                               // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_C*                       WBP_Inventory;                                     // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_Tooltips_C*              WBP_Inventory_Tooltips;                            // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KillFeed_C*                        WBP_KillFeed;                                      // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MatchStatusOverlay_C*              WBP_MatchStatusOverlay;                            // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PowerProgressPromptsSection_C*     WBP_PowerProgressPromptsSection;                   // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_QueueButton_MainMenu_C*            WBP_QueueButton_MainMenu;                          // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_QueueIndicator_C*                  WBP_QueueIndicator;                                // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TeammateUI_C*                      WBP_TeammateUI;                                    // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        MegaMap_MetersToShow;                              // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WorldMapMetersToShow;                              // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SideMapMetersToShow;                               // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MegaMapCenterOffset;                               // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WorldCenter;                                       // 0x0548(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 PlayersRemainingThresholds;                        // 0x0560(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MatchStartTotalPlayers;                            // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MapButtonPressed;                                  // 0x0574(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHUDMapState                                  HUDMapState;                                       // 0x0575(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WorldMapPress;                                     // 0x0576(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_577[0x1];                                      // 0x0577(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        WorldMapPressTime;                                 // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                    TooltipWidgets;                                    // 0x0580(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	EMatchaMatchPhase                             LastSeenMatchPhase;                                // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_591[0x7];                                      // 0x0591(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMatchaSnapNetPlayerController*         LocalPlayerControllerRef;                          // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ControlsUIVisible;                                 // 0x05A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BindData(class UOdyUIData* NewUIData);
	void ChangeHUDMap();
	void Construct();
	void ExecuteUbergraph_WBP_InGameUI(int32 EntryPoint);
	void HandleInteractInputUpdated(bool State);
	void HandleMatchPhaseChange(EMatchaMatchPhase PreviousMatchPhase, EMatchaMatchPhase NewMatchPhase);
	void InpActEvt_IA_Menu_SpectatorNext_K2Node_EnhancedInputActionEvent_6(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_Menu_SpectatorPrevious_K2Node_EnhancedInputActionEvent_7(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_OpenMap_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_OpenMap_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_OpenMap_K2Node_EnhancedInputActionEvent_5(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_Queue_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_ViewTooltip_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_ViewTooltip_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void OnGameWorldUIUpdate();
	void OnInitialized();
	void OnInputMethodChanged_Event(EInputMethod InputMethod);
	void OnIsSpectatingChanged(bool OldValue, bool NewValue);
	void OnPlayerAliveCountUpdated(int32 NumLeft);
	void OnUIDataSet(class UOdyUIData* NewUIData);
	void ResetUI();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ToggleControlsUI(bool Visible);
	void TryWarnPlayersNumRemaining(int32 RemainingPlayers, bool IsMatchStart, bool* DidWarning);
	void UnbindData(class UOdyUIData* OldUIData);
	void UpdateMinimap();
	void UpdatePlayersRemainingThresholdAlertArray(int32 StartingTotalPlayers);
	void UpdateUI(class UMatchaGameWorldUIData* GameWorldUIData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InGameUI_C">();
	}
	static class UWBP_InGameUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InGameUI_C>();
	}
};
static_assert(alignof(UWBP_InGameUI_C) == 0x000008, "Wrong alignment on UWBP_InGameUI_C");
static_assert(sizeof(UWBP_InGameUI_C) == 0x0005A8, "Wrong size on UWBP_InGameUI_C");
static_assert(offsetof(UWBP_InGameUI_C, UberGraphFrame) == 0x000448, "Member 'UWBP_InGameUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, MegaMap) == 0x000450, "Member 'UWBP_InGameUI_C::MegaMap' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, MegamapContainer) == 0x000458, "Member 'UWBP_InGameUI_C::MegamapContainer' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, MegaMapSizer) == 0x000460, "Member 'UWBP_InGameUI_C::MegaMapSizer' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, SafeZone_0) == 0x000468, "Member 'UWBP_InGameUI_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, SideMap) == 0x000470, "Member 'UWBP_InGameUI_C::SideMap' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, SideMapSizer) == 0x000478, "Member 'UWBP_InGameUI_C::SideMapSizer' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, SpectateTooltip) == 0x000480, "Member 'UWBP_InGameUI_C::SpectateTooltip' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, SpectateView) == 0x000488, "Member 'UWBP_InGameUI_C::SpectateView' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, SpectatingText) == 0x000490, "Member 'UWBP_InGameUI_C::SpectatingText' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_DebugConnectionInfo) == 0x000498, "Member 'UWBP_InGameUI_C::WBP_DebugConnectionInfo' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_FloatingIndicators_Panel) == 0x0004A0, "Member 'UWBP_InGameUI_C::WBP_FloatingIndicators_Panel' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_FullControls) == 0x0004A8, "Member 'UWBP_InGameUI_C::WBP_FullControls' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_GearTooltips) == 0x0004B0, "Member 'UWBP_InGameUI_C::WBP_GearTooltips' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_HUDFeedback) == 0x0004B8, "Member 'UWBP_InGameUI_C::WBP_HUDFeedback' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_Ingame_MatchTimer) == 0x0004C0, "Member 'UWBP_InGameUI_C::WBP_Ingame_MatchTimer' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_InGameInfoBar) == 0x0004C8, "Member 'UWBP_InGameUI_C::WBP_InGameInfoBar' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_InputBinding) == 0x0004D0, "Member 'UWBP_InGameUI_C::WBP_InputBinding' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_InputBinding_1) == 0x0004D8, "Member 'UWBP_InGameUI_C::WBP_InputBinding_1' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_InputBinding_80) == 0x0004E0, "Member 'UWBP_InGameUI_C::WBP_InputBinding_80' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_Inventory) == 0x0004E8, "Member 'UWBP_InGameUI_C::WBP_Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_Inventory_Tooltips) == 0x0004F0, "Member 'UWBP_InGameUI_C::WBP_Inventory_Tooltips' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_KillFeed) == 0x0004F8, "Member 'UWBP_InGameUI_C::WBP_KillFeed' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_MatchStatusOverlay) == 0x000500, "Member 'UWBP_InGameUI_C::WBP_MatchStatusOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_PowerProgressPromptsSection) == 0x000508, "Member 'UWBP_InGameUI_C::WBP_PowerProgressPromptsSection' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_QueueButton_MainMenu) == 0x000510, "Member 'UWBP_InGameUI_C::WBP_QueueButton_MainMenu' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_QueueIndicator) == 0x000518, "Member 'UWBP_InGameUI_C::WBP_QueueIndicator' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WBP_TeammateUI) == 0x000520, "Member 'UWBP_InGameUI_C::WBP_TeammateUI' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, MegaMap_MetersToShow) == 0x000528, "Member 'UWBP_InGameUI_C::MegaMap_MetersToShow' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WorldMapMetersToShow) == 0x000530, "Member 'UWBP_InGameUI_C::WorldMapMetersToShow' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, SideMapMetersToShow) == 0x000538, "Member 'UWBP_InGameUI_C::SideMapMetersToShow' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, MegaMapCenterOffset) == 0x000540, "Member 'UWBP_InGameUI_C::MegaMapCenterOffset' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WorldCenter) == 0x000548, "Member 'UWBP_InGameUI_C::WorldCenter' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, PlayersRemainingThresholds) == 0x000560, "Member 'UWBP_InGameUI_C::PlayersRemainingThresholds' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, MatchStartTotalPlayers) == 0x000570, "Member 'UWBP_InGameUI_C::MatchStartTotalPlayers' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, MapButtonPressed) == 0x000574, "Member 'UWBP_InGameUI_C::MapButtonPressed' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, HUDMapState) == 0x000575, "Member 'UWBP_InGameUI_C::HUDMapState' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WorldMapPress) == 0x000576, "Member 'UWBP_InGameUI_C::WorldMapPress' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, WorldMapPressTime) == 0x000578, "Member 'UWBP_InGameUI_C::WorldMapPressTime' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, TooltipWidgets) == 0x000580, "Member 'UWBP_InGameUI_C::TooltipWidgets' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, LastSeenMatchPhase) == 0x000590, "Member 'UWBP_InGameUI_C::LastSeenMatchPhase' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, LocalPlayerControllerRef) == 0x000598, "Member 'UWBP_InGameUI_C::LocalPlayerControllerRef' has a wrong offset!");
static_assert(offsetof(UWBP_InGameUI_C, ControlsUIVisible) == 0x0005A0, "Member 'UWBP_InGameUI_C::ControlsUIVisible' has a wrong offset!");

}

