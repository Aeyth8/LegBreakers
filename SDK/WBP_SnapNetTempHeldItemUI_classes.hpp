#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SnapNetTempHeldItemUI

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "OdyUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SnapNetTempHeldItemUI.WBP_SnapNetTempHeldItemUI_C
// 0x0488 (0x0820 - 0x0398)
class UWBP_SnapNetTempHeldItemUI_C final : public UOdyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                HeldItemBG;                                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_141;                                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox;                                          // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        CurrentTargetConsumeFinishTime;                    // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StartChannelEntityTimeMS;                          // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartedChannelBarUI;                               // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C9[0x7];                                      // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CurrentEntityTimeMS;                               // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LastKnownModeWasCombat;                            // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D9[0x7];                                      // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     AnimPlayer;                                        // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         LastTipID;                                         // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HadCamoArmor;                                      // 0x03EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bStoppedChannelBarUI;                              // 0x03ED(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EE[0x2];                                      // 0x03EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 HeldItemName;                                      // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UAkAudioEvent*                          AkEvent_StartItemChannel;                          // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AkEvent_StopItemChannel;                           // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            RareBGBrush;                                       // 0x0410(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            EpicBGBrush;                                       // 0x04E0(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            CommonBGBrush;                                     // 0x05B0(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            LegendaryBGBush;                                   // 0x0680(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            EmptyBrush;                                        // 0x0750(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_SnapNetTempHeldItemUI(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UnHoldItem();
	void UpdateHeldItem(class UMatchaItemAsset* ItemAssetData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SnapNetTempHeldItemUI_C">();
	}
	static class UWBP_SnapNetTempHeldItemUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SnapNetTempHeldItemUI_C>();
	}
};
static_assert(alignof(UWBP_SnapNetTempHeldItemUI_C) == 0x000010, "Wrong alignment on UWBP_SnapNetTempHeldItemUI_C");
static_assert(sizeof(UWBP_SnapNetTempHeldItemUI_C) == 0x000820, "Wrong size on UWBP_SnapNetTempHeldItemUI_C");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, UberGraphFrame) == 0x000398, "Member 'UWBP_SnapNetTempHeldItemUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, HeldItemBG) == 0x0003A0, "Member 'UWBP_SnapNetTempHeldItemUI_C::HeldItemBG' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, Image_141) == 0x0003A8, "Member 'UWBP_SnapNetTempHeldItemUI_C::Image_141' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, ScaleBox) == 0x0003B0, "Member 'UWBP_SnapNetTempHeldItemUI_C::ScaleBox' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, CurrentTargetConsumeFinishTime) == 0x0003B8, "Member 'UWBP_SnapNetTempHeldItemUI_C::CurrentTargetConsumeFinishTime' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, StartChannelEntityTimeMS) == 0x0003C0, "Member 'UWBP_SnapNetTempHeldItemUI_C::StartChannelEntityTimeMS' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, StartedChannelBarUI) == 0x0003C8, "Member 'UWBP_SnapNetTempHeldItemUI_C::StartedChannelBarUI' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, CurrentEntityTimeMS) == 0x0003D0, "Member 'UWBP_SnapNetTempHeldItemUI_C::CurrentEntityTimeMS' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, LastKnownModeWasCombat) == 0x0003D8, "Member 'UWBP_SnapNetTempHeldItemUI_C::LastKnownModeWasCombat' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, AnimPlayer) == 0x0003E0, "Member 'UWBP_SnapNetTempHeldItemUI_C::AnimPlayer' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, LastTipID) == 0x0003E8, "Member 'UWBP_SnapNetTempHeldItemUI_C::LastTipID' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, HadCamoArmor) == 0x0003EC, "Member 'UWBP_SnapNetTempHeldItemUI_C::HadCamoArmor' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, bStoppedChannelBarUI) == 0x0003ED, "Member 'UWBP_SnapNetTempHeldItemUI_C::bStoppedChannelBarUI' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, HeldItemName) == 0x0003F0, "Member 'UWBP_SnapNetTempHeldItemUI_C::HeldItemName' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, AkEvent_StartItemChannel) == 0x000400, "Member 'UWBP_SnapNetTempHeldItemUI_C::AkEvent_StartItemChannel' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, AkEvent_StopItemChannel) == 0x000408, "Member 'UWBP_SnapNetTempHeldItemUI_C::AkEvent_StopItemChannel' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, RareBGBrush) == 0x000410, "Member 'UWBP_SnapNetTempHeldItemUI_C::RareBGBrush' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, EpicBGBrush) == 0x0004E0, "Member 'UWBP_SnapNetTempHeldItemUI_C::EpicBGBrush' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, CommonBGBrush) == 0x0005B0, "Member 'UWBP_SnapNetTempHeldItemUI_C::CommonBGBrush' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, LegendaryBGBush) == 0x000680, "Member 'UWBP_SnapNetTempHeldItemUI_C::LegendaryBGBush' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetTempHeldItemUI_C, EmptyBrush) == 0x000750, "Member 'UWBP_SnapNetTempHeldItemUI_C::EmptyBrush' has a wrong offset!");

}

