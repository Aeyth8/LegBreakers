#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QueueButton_MainMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OdyUI_structs.hpp"
#include "OdyUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_QueueButton_MainMenu.WBP_QueueButton_MainMenu_C
// 0x0078 (0x0410 - 0x0398)
class UWBP_QueueButton_MainMenu_C final : public UOdyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ButtonHoverAnim;                                   // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BackgroundSwitcher;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               CornersOverlay;                                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputBinding_C*                    InputBinding;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NormalState;                                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 QueuedState;                                       // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextQueue;                                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TextSwitcher;                                      // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextTime;                                          // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          DebugInQueue;                                      // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F1[0x7];                                      // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Width;                                             // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Height;                                            // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          QueueStart;                                        // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugIsEnabled;                                    // 0x0409(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugIsHovering;                                   // 0x040A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_QueueButton_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_QueueButton_MainMenu_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_QueueButton_MainMenu_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void ChangeEnabled(bool IsEnabled);
	void ChangeState(bool IsHovering);
	void ChangeStateVisual(bool QueueStart_0);
	void ClickQueueButton();
	void ExecuteUbergraph_WBP_QueueButton_MainMenu(int32 EntryPoint);
	void OnAvailableQueuesChanged(class UOdyUIData* UIData_0);
	void OnChangedIsAbleToQueue(bool OldValue, bool NewValue);
	void OnInitialized();
	void OnQueueStatusChanged(bool OldValue, bool NewValue);
	void PreConstruct(bool IsDesignTime);
	void SetSizeMaterial(double Width_0, double Height_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_QueueButton_MainMenu_C">();
	}
	static class UWBP_QueueButton_MainMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_QueueButton_MainMenu_C>();
	}
};
static_assert(alignof(UWBP_QueueButton_MainMenu_C) == 0x000008, "Wrong alignment on UWBP_QueueButton_MainMenu_C");
static_assert(sizeof(UWBP_QueueButton_MainMenu_C) == 0x000410, "Wrong size on UWBP_QueueButton_MainMenu_C");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, UberGraphFrame) == 0x000398, "Member 'UWBP_QueueButton_MainMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, ButtonHoverAnim) == 0x0003A0, "Member 'UWBP_QueueButton_MainMenu_C::ButtonHoverAnim' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, BackgroundSwitcher) == 0x0003A8, "Member 'UWBP_QueueButton_MainMenu_C::BackgroundSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, Button) == 0x0003B0, "Member 'UWBP_QueueButton_MainMenu_C::Button' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, CornersOverlay) == 0x0003B8, "Member 'UWBP_QueueButton_MainMenu_C::CornersOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, InputBinding) == 0x0003C0, "Member 'UWBP_QueueButton_MainMenu_C::InputBinding' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, NormalState) == 0x0003C8, "Member 'UWBP_QueueButton_MainMenu_C::NormalState' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, QueuedState) == 0x0003D0, "Member 'UWBP_QueueButton_MainMenu_C::QueuedState' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, TextQueue) == 0x0003D8, "Member 'UWBP_QueueButton_MainMenu_C::TextQueue' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, TextSwitcher) == 0x0003E0, "Member 'UWBP_QueueButton_MainMenu_C::TextSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, TextTime) == 0x0003E8, "Member 'UWBP_QueueButton_MainMenu_C::TextTime' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, DebugInQueue) == 0x0003F0, "Member 'UWBP_QueueButton_MainMenu_C::DebugInQueue' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, Width) == 0x0003F8, "Member 'UWBP_QueueButton_MainMenu_C::Width' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, Height) == 0x000400, "Member 'UWBP_QueueButton_MainMenu_C::Height' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, QueueStart) == 0x000408, "Member 'UWBP_QueueButton_MainMenu_C::QueueStart' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, DebugIsEnabled) == 0x000409, "Member 'UWBP_QueueButton_MainMenu_C::DebugIsEnabled' has a wrong offset!");
static_assert(offsetof(UWBP_QueueButton_MainMenu_C, DebugIsHovering) == 0x00040A, "Member 'UWBP_QueueButton_MainMenu_C::DebugIsHovering' has a wrong offset!");

}

