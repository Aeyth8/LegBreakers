#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameModeSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OdyUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GameModeSelector.WBP_GameModeSelector_C
// 0x0030 (0x03C8 - 0x0398)
class UWBP_GameModeSelector_C final : public UOdyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOdyListView*                           AvailableQueuesList;                               // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextMode;                                          // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputBinding_C*                    WBP_InputBinding;                                  // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TextDescription;                                   // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BindData(class UOdyUIData* NewUIData);
	void BndEvt__WBP_GameModeSelector_AvailableQueuesList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void BndEvt__WBP_MainMenu_UI_AvailableQueuesList_K2Node_ComponentBoundEvent_14_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void DeferredSelectionCheck();
	void ExecuteUbergraph_WBP_GameModeSelector(int32 EntryPoint);
	void OnAvailableQueuesChanged(class UOdyUIData* UIData_0);
	void OnInitialized();
	void OnSelectedQueueIdChanged(class FName OldValue, class FName NewValue);
	void OnSwitchModeSelected();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GameModeSelector_C">();
	}
	static class UWBP_GameModeSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GameModeSelector_C>();
	}
};
static_assert(alignof(UWBP_GameModeSelector_C) == 0x000008, "Wrong alignment on UWBP_GameModeSelector_C");
static_assert(sizeof(UWBP_GameModeSelector_C) == 0x0003C8, "Wrong size on UWBP_GameModeSelector_C");
static_assert(offsetof(UWBP_GameModeSelector_C, UberGraphFrame) == 0x000398, "Member 'UWBP_GameModeSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GameModeSelector_C, AvailableQueuesList) == 0x0003A0, "Member 'UWBP_GameModeSelector_C::AvailableQueuesList' has a wrong offset!");
static_assert(offsetof(UWBP_GameModeSelector_C, TextMode) == 0x0003A8, "Member 'UWBP_GameModeSelector_C::TextMode' has a wrong offset!");
static_assert(offsetof(UWBP_GameModeSelector_C, WBP_InputBinding) == 0x0003B0, "Member 'UWBP_GameModeSelector_C::WBP_InputBinding' has a wrong offset!");
static_assert(offsetof(UWBP_GameModeSelector_C, TextDescription) == 0x0003B8, "Member 'UWBP_GameModeSelector_C::TextDescription' has a wrong offset!");

}

