#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_MatchSummary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "OdyUI_structs.hpp"
#include "OdyUI_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_MatchSummary.WBP_Menu_MatchSummary_C
// 0x0148 (0x0590 - 0x0448)
class UWBP_Menu_MatchSummary_C final : public UOdyMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       VictoryAnimation;                                  // 0x0450(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ChampionText;                                      // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CharacterSilhouette;                               // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CloseButton;                                       // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              ContentSafeZone;                                   // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftFin;                                           // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MidFin;                                            // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerMatchSummary_C*              Player1Summary;                                    // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerMatchSummary_C*              Player2Summary;                                    // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          ResultText;                                        // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           Retainer;                                          // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightFin;                                          // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          Subtitle;                                          // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          SurvivalTime;                                      // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          TeamKnockouts;                                     // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TeamPanel;                                         // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          TeamRank;                                          // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Tint;                                              // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          TotalTeams;                                        // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           VictoryOverlay;                                    // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ZigZag;                                            // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ZigZagTopPercentile;                               // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ZigZagWinner;                                      // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         NextTeammateIndex;                                 // 0x0510(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TeamKills;                                         // 0x0514(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LocalPlayerStatContainerColor;                     // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            LocalPlayerTextColor;                              // 0x0528(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TopPercentileTextColor;                            // 0x053C(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsWinner;                                          // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_551[0x3];                                      // 0x0551(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            WinnerTintColor;                                   // 0x0554(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         FinishPlaceValue;                                  // 0x0568(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Placement_Value;                                   // 0x056C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ResultIndex;                                       // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TopTeamValue;                                      // 0x0574(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            TopTeamsValueColor;                                // 0x0578(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_Menu_MatchSummary_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Menu_MatchSummary(int32 EntryPoint);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void SetWinnerStyle(int32 PlacementValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_MatchSummary_C">();
	}
	static class UWBP_Menu_MatchSummary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_MatchSummary_C>();
	}
};
static_assert(alignof(UWBP_Menu_MatchSummary_C) == 0x000008, "Wrong alignment on UWBP_Menu_MatchSummary_C");
static_assert(sizeof(UWBP_Menu_MatchSummary_C) == 0x000590, "Wrong size on UWBP_Menu_MatchSummary_C");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, UberGraphFrame) == 0x000448, "Member 'UWBP_Menu_MatchSummary_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, VictoryAnimation) == 0x000450, "Member 'UWBP_Menu_MatchSummary_C::VictoryAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, Background) == 0x000458, "Member 'UWBP_Menu_MatchSummary_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, ChampionText) == 0x000460, "Member 'UWBP_Menu_MatchSummary_C::ChampionText' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, CharacterSilhouette) == 0x000468, "Member 'UWBP_Menu_MatchSummary_C::CharacterSilhouette' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, CloseButton) == 0x000470, "Member 'UWBP_Menu_MatchSummary_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, ContentSafeZone) == 0x000478, "Member 'UWBP_Menu_MatchSummary_C::ContentSafeZone' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, LeftFin) == 0x000480, "Member 'UWBP_Menu_MatchSummary_C::LeftFin' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, MidFin) == 0x000488, "Member 'UWBP_Menu_MatchSummary_C::MidFin' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, Player1Summary) == 0x000490, "Member 'UWBP_Menu_MatchSummary_C::Player1Summary' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, Player2Summary) == 0x000498, "Member 'UWBP_Menu_MatchSummary_C::Player2Summary' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, ResultText) == 0x0004A0, "Member 'UWBP_Menu_MatchSummary_C::ResultText' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, Retainer) == 0x0004A8, "Member 'UWBP_Menu_MatchSummary_C::Retainer' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, RightFin) == 0x0004B0, "Member 'UWBP_Menu_MatchSummary_C::RightFin' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, Subtitle) == 0x0004B8, "Member 'UWBP_Menu_MatchSummary_C::Subtitle' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, SurvivalTime) == 0x0004C0, "Member 'UWBP_Menu_MatchSummary_C::SurvivalTime' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, TeamKnockouts) == 0x0004C8, "Member 'UWBP_Menu_MatchSummary_C::TeamKnockouts' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, TeamPanel) == 0x0004D0, "Member 'UWBP_Menu_MatchSummary_C::TeamPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, TeamRank) == 0x0004D8, "Member 'UWBP_Menu_MatchSummary_C::TeamRank' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, Tint) == 0x0004E0, "Member 'UWBP_Menu_MatchSummary_C::Tint' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, TotalTeams) == 0x0004E8, "Member 'UWBP_Menu_MatchSummary_C::TotalTeams' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, VictoryOverlay) == 0x0004F0, "Member 'UWBP_Menu_MatchSummary_C::VictoryOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, ZigZag) == 0x0004F8, "Member 'UWBP_Menu_MatchSummary_C::ZigZag' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, ZigZagTopPercentile) == 0x000500, "Member 'UWBP_Menu_MatchSummary_C::ZigZagTopPercentile' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, ZigZagWinner) == 0x000508, "Member 'UWBP_Menu_MatchSummary_C::ZigZagWinner' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, NextTeammateIndex) == 0x000510, "Member 'UWBP_Menu_MatchSummary_C::NextTeammateIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, TeamKills) == 0x000514, "Member 'UWBP_Menu_MatchSummary_C::TeamKills' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, LocalPlayerStatContainerColor) == 0x000518, "Member 'UWBP_Menu_MatchSummary_C::LocalPlayerStatContainerColor' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, LocalPlayerTextColor) == 0x000528, "Member 'UWBP_Menu_MatchSummary_C::LocalPlayerTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, TopPercentileTextColor) == 0x00053C, "Member 'UWBP_Menu_MatchSummary_C::TopPercentileTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, IsWinner) == 0x000550, "Member 'UWBP_Menu_MatchSummary_C::IsWinner' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, WinnerTintColor) == 0x000554, "Member 'UWBP_Menu_MatchSummary_C::WinnerTintColor' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, FinishPlaceValue) == 0x000568, "Member 'UWBP_Menu_MatchSummary_C::FinishPlaceValue' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, Placement_Value) == 0x00056C, "Member 'UWBP_Menu_MatchSummary_C::Placement_Value' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, ResultIndex) == 0x000570, "Member 'UWBP_Menu_MatchSummary_C::ResultIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, TopTeamValue) == 0x000574, "Member 'UWBP_Menu_MatchSummary_C::TopTeamValue' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_MatchSummary_C, TopTeamsValueColor) == 0x000578, "Member 'UWBP_Menu_MatchSummary_C::TopTeamsValueColor' has a wrong offset!");

}

