#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerNameAndTeam

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OdyUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlayerNameAndTeam.WBP_PlayerNameAndTeam_C
// 0x0018 (0x03B0 - 0x0398)
class UWBP_PlayerNameAndTeam_C final : public UOdyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             PlayerName_Text;                                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TeamGroup_Text;                                    // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_PlayerNameAndTeam(int32 EntryPoint);
	void UpdateInfo(const class FText& PlayerName, int32 TeamNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerNameAndTeam_C">();
	}
	static class UWBP_PlayerNameAndTeam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerNameAndTeam_C>();
	}
};
static_assert(alignof(UWBP_PlayerNameAndTeam_C) == 0x000008, "Wrong alignment on UWBP_PlayerNameAndTeam_C");
static_assert(sizeof(UWBP_PlayerNameAndTeam_C) == 0x0003B0, "Wrong size on UWBP_PlayerNameAndTeam_C");
static_assert(offsetof(UWBP_PlayerNameAndTeam_C, UberGraphFrame) == 0x000398, "Member 'UWBP_PlayerNameAndTeam_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameAndTeam_C, PlayerName_Text) == 0x0003A0, "Member 'UWBP_PlayerNameAndTeam_C::PlayerName_Text' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameAndTeam_C, TeamGroup_Text) == 0x0003A8, "Member 'UWBP_PlayerNameAndTeam_C::TeamGroup_Text' has a wrong offset!");

}

