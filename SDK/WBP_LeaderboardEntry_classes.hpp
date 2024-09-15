#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LeaderboardEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "OdyUI_structs.hpp"
#include "OdyUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LeaderboardEntry.WBP_LeaderboardEntry_C
// 0x0098 (0x0430 - 0x0398)
class UWBP_LeaderboardEntry_C final : public UOdyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Background;                                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CharacterIcon;                                     // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          KnockoutText;                                      // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          PlayerName;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          PointsText;                                        // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          RankText;                                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          WinCountText;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOdyUINameBinding                      Player_Id;                                         // 0x03D8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMatchaLocalPlayerUIData*               LocalPlayerUIData;                                 // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LocalPlayerHighlightColor;                         // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EvenHighlightColor;                                // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OddHighlightColor;                                 // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BindData(class UOdyUIData* NewUIData);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_LeaderboardEntry(int32 EntryPoint);
	void OnIsLocalPlayerChanged(bool OldValue, bool NewValue);
	void OnRankChanged(int32 OldValue, int32 NewValue);
	void UnbindData(class UOdyUIData* OldUIData);
	void UpdateBackgroundColor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LeaderboardEntry_C">();
	}
	static class UWBP_LeaderboardEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LeaderboardEntry_C>();
	}
};
static_assert(alignof(UWBP_LeaderboardEntry_C) == 0x000008, "Wrong alignment on UWBP_LeaderboardEntry_C");
static_assert(sizeof(UWBP_LeaderboardEntry_C) == 0x000430, "Wrong size on UWBP_LeaderboardEntry_C");
static_assert(offsetof(UWBP_LeaderboardEntry_C, UberGraphFrame) == 0x000398, "Member 'UWBP_LeaderboardEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_LeaderboardEntry_C, Background) == 0x0003A0, "Member 'UWBP_LeaderboardEntry_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_LeaderboardEntry_C, CharacterIcon) == 0x0003A8, "Member 'UWBP_LeaderboardEntry_C::CharacterIcon' has a wrong offset!");
static_assert(offsetof(UWBP_LeaderboardEntry_C, KnockoutText) == 0x0003B0, "Member 'UWBP_LeaderboardEntry_C::KnockoutText' has a wrong offset!");
static_assert(offsetof(UWBP_LeaderboardEntry_C, PlayerName) == 0x0003B8, "Member 'UWBP_LeaderboardEntry_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_LeaderboardEntry_C, PointsText) == 0x0003C0, "Member 'UWBP_LeaderboardEntry_C::PointsText' has a wrong offset!");
static_assert(offsetof(UWBP_LeaderboardEntry_C, RankText) == 0x0003C8, "Member 'UWBP_LeaderboardEntry_C::RankText' has a wrong offset!");
static_assert(offsetof(UWBP_LeaderboardEntry_C, WinCountText) == 0x0003D0, "Member 'UWBP_LeaderboardEntry_C::WinCountText' has a wrong offset!");
static_assert(offsetof(UWBP_LeaderboardEntry_C, Player_Id) == 0x0003D8, "Member 'UWBP_LeaderboardEntry_C::Player_Id' has a wrong offset!");
static_assert(offsetof(UWBP_LeaderboardEntry_C, LocalPlayerUIData) == 0x0003F8, "Member 'UWBP_LeaderboardEntry_C::LocalPlayerUIData' has a wrong offset!");
static_assert(offsetof(UWBP_LeaderboardEntry_C, LocalPlayerHighlightColor) == 0x000400, "Member 'UWBP_LeaderboardEntry_C::LocalPlayerHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_LeaderboardEntry_C, EvenHighlightColor) == 0x000410, "Member 'UWBP_LeaderboardEntry_C::EvenHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_LeaderboardEntry_C, OddHighlightColor) == 0x000420, "Member 'UWBP_LeaderboardEntry_C::OddHighlightColor' has a wrong offset!");

}
