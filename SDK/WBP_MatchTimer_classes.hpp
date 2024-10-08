#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MatchTimer

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MatchTimer.WBP_MatchTimer_C
// 0x0010 (0x02F0 - 0x02E0)
class UWBP_MatchTimer_C final : public UUserWidget
{
public:
	class UImage*                                 TimerBG;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TimerCountdown;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetTimer(const class FText& Text);
	void SetTimerVisual(const struct FLinearColor& Color);
	void SetVisual(const struct FLinearColor& ColorFill, const struct FLinearColor& ColorBorder);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MatchTimer_C">();
	}
	static class UWBP_MatchTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MatchTimer_C>();
	}
};
static_assert(alignof(UWBP_MatchTimer_C) == 0x000008, "Wrong alignment on UWBP_MatchTimer_C");
static_assert(sizeof(UWBP_MatchTimer_C) == 0x0002F0, "Wrong size on UWBP_MatchTimer_C");
static_assert(offsetof(UWBP_MatchTimer_C, TimerBG) == 0x0002E0, "Member 'UWBP_MatchTimer_C::TimerBG' has a wrong offset!");
static_assert(offsetof(UWBP_MatchTimer_C, TimerCountdown) == 0x0002E8, "Member 'UWBP_MatchTimer_C::TimerCountdown' has a wrong offset!");

}

