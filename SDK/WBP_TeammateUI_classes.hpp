#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TeammateUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OdyUI_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TeammateUI.WBP_TeammateUI_C
// 0x0068 (0x0400 - 0x0398)
class UWBP_TeammateUI_C final : public UOdyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               Player2Container;                                  // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Player3Container;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PlayerUIContainer;                                 // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TeamCoinAmount;                                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TeamCoinsContainer;                                // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          TeamNameText;                                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerUI_C*                        WBP_Player1;                                       // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerUI_C*                        WBP_Player2;                                       // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerUI_C*                        WBP_Player3;                                       // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TeammateUI_TeamInfo_C*             WBP_TeammateUI_TeamInfo;                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           TeammateBorderColor;                               // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BindData(class UOdyUIData* NewUIData);
	void ExecuteUbergraph_WBP_TeammateUI(int32 EntryPoint);
	void OnInitialized();
	void ResetToEmptyTeam();
	void Set_Player_UI(class UWBP_PlayerUI_C* PlayerUIRef, bool IsValid, int32 AllyNum, class UMatchaPlayerUIData* InputUIData);
	void UnbindData(class UOdyUIData* OldUIData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TeammateUI_C">();
	}
	static class UWBP_TeammateUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TeammateUI_C>();
	}
};
static_assert(alignof(UWBP_TeammateUI_C) == 0x000008, "Wrong alignment on UWBP_TeammateUI_C");
static_assert(sizeof(UWBP_TeammateUI_C) == 0x000400, "Wrong size on UWBP_TeammateUI_C");
static_assert(offsetof(UWBP_TeammateUI_C, UberGraphFrame) == 0x000398, "Member 'UWBP_TeammateUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TeammateUI_C, Player2Container) == 0x0003A0, "Member 'UWBP_TeammateUI_C::Player2Container' has a wrong offset!");
static_assert(offsetof(UWBP_TeammateUI_C, Player3Container) == 0x0003A8, "Member 'UWBP_TeammateUI_C::Player3Container' has a wrong offset!");
static_assert(offsetof(UWBP_TeammateUI_C, PlayerUIContainer) == 0x0003B0, "Member 'UWBP_TeammateUI_C::PlayerUIContainer' has a wrong offset!");
static_assert(offsetof(UWBP_TeammateUI_C, TeamCoinAmount) == 0x0003B8, "Member 'UWBP_TeammateUI_C::TeamCoinAmount' has a wrong offset!");
static_assert(offsetof(UWBP_TeammateUI_C, TeamCoinsContainer) == 0x0003C0, "Member 'UWBP_TeammateUI_C::TeamCoinsContainer' has a wrong offset!");
static_assert(offsetof(UWBP_TeammateUI_C, TeamNameText) == 0x0003C8, "Member 'UWBP_TeammateUI_C::TeamNameText' has a wrong offset!");
static_assert(offsetof(UWBP_TeammateUI_C, WBP_Player1) == 0x0003D0, "Member 'UWBP_TeammateUI_C::WBP_Player1' has a wrong offset!");
static_assert(offsetof(UWBP_TeammateUI_C, WBP_Player2) == 0x0003D8, "Member 'UWBP_TeammateUI_C::WBP_Player2' has a wrong offset!");
static_assert(offsetof(UWBP_TeammateUI_C, WBP_Player3) == 0x0003E0, "Member 'UWBP_TeammateUI_C::WBP_Player3' has a wrong offset!");
static_assert(offsetof(UWBP_TeammateUI_C, WBP_TeammateUI_TeamInfo) == 0x0003E8, "Member 'UWBP_TeammateUI_C::WBP_TeammateUI_TeamInfo' has a wrong offset!");
static_assert(offsetof(UWBP_TeammateUI_C, TeammateBorderColor) == 0x0003F0, "Member 'UWBP_TeammateUI_C::TeammateBorderColor' has a wrong offset!");

}

