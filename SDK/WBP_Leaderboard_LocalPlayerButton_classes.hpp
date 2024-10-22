#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Leaderboard_LocalPlayerButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_MainMenu_Button_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Leaderboard_LocalPlayerButton.WBP_Leaderboard_LocalPlayerButton_C
// 0x0008 (0x0448 - 0x0440)
class UWBP_Leaderboard_LocalPlayerButton_C final : public UWBP_MainMenu_Button_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_Leaderboard_LocalPlayerButton_C; // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void BindData(class UOdyUIData* NewUIData);
	void ExecuteUbergraph_WBP_Leaderboard_LocalPlayerButton(int32 EntryPoint);
	void OnPlayerNameChanged(const class FText& OldValue, const class FText& NewValue);
	void OnRankChanged(int32 OldValue, int32 NewValue);
	void UnbindData(class UOdyUIData* OldUIData);
	void UpdateText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Leaderboard_LocalPlayerButton_C">();
	}
	static class UWBP_Leaderboard_LocalPlayerButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Leaderboard_LocalPlayerButton_C>();
	}
};
static_assert(alignof(UWBP_Leaderboard_LocalPlayerButton_C) == 0x000008, "Wrong alignment on UWBP_Leaderboard_LocalPlayerButton_C");
static_assert(sizeof(UWBP_Leaderboard_LocalPlayerButton_C) == 0x000448, "Wrong size on UWBP_Leaderboard_LocalPlayerButton_C");
static_assert(offsetof(UWBP_Leaderboard_LocalPlayerButton_C, UberGraphFrame_WBP_Leaderboard_LocalPlayerButton_C) == 0x000440, "Member 'UWBP_Leaderboard_LocalPlayerButton_C::UberGraphFrame_WBP_Leaderboard_LocalPlayerButton_C' has a wrong offset!");

}

