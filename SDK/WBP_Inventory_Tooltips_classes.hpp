#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Inventory_Tooltips

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OdyUI_structs.hpp"
#include "OdyUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Inventory_Tooltips.WBP_Inventory_Tooltips_C
// 0x00B0 (0x0448 - 0x0398)
class UWBP_Inventory_Tooltips_C final : public UOdyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_InputBinding_C*                    BindingSlot1;                                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputBinding_C*                    BindingSlot2;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputBinding_C*                    BindingSlot3;                                      // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputBinding_C*                    BindingSlot4;                                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HeldItemContainer;                                 // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventorySlot_C*                   HeldItemSlot;                                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeldSlotToolTip;                                   // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           OverallContainer;                                  // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_KeyboardInventory;                         // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventorySlot_C*                   QuickbarSlot1_Keyboard;                            // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventorySlot_C*                   QuickbarSlot2_Keyboard;                            // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventorySlot_C*                   QuickbarSlot3_Keyboard;                            // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventorySlot_C*                   QuickbarSlot4_Keyboard;                            // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Slot1ToolTip;                                      // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Slot2ToolTip;                                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Slot3ToolTip;                                      // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Slot4ToolTip;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventorySlot_C*                   SoulItemSlot;                                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchaInventoryCategoryUIData*         BoundQuickBarCategoryUIData;                       // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMatchaInventoryCategoryUIData*         BoundHeldCategoryUIData;                           // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMatchaInventoryCategoryUIData*         BoundSoulCategoryUIData;                           // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Bind_Category_Data(class UMatchaInventoryCategoryUIData* CategoryUIData);
	void BindData(class UOdyUIData* NewUIData);
	void ExecuteUbergraph_WBP_Inventory_Tooltips(int32 EntryPoint);
	void HandleHeldItemTTChange();
	void HandleHeldItemVisChange(ESlateVisibility InVisibility);
	void HandleSlot1TTChange();
	void HandleSlot2TTChange();
	void HandleSlot3TTChange();
	void HandleSlot4TTChange();
	void HandleSouSlotTTChange();
	void OnCategoriesUpdated();
	void OnHeldCategoryUpdated(class UMatchaInventoryCategoryUIData* CategoryUIData);
	void OnHeldItemSlotsUpdated();
	void OnInitialized();
	void OnInputMethodChanged_Event(EInputMethod InputMethod);
	void OnSlotsUpdated();
	void OnSoulCategoryUpdated(class UMatchaInventoryCategoryUIData* CategoryUIData);
	void OnSoulItemSlotsUpdated();
	void ResetUI();
	void SetNewToolTip(class UTextLayoutWidget* TextWidget);
	void ShowTooltip(bool Show_0);
	void UnbindCategoryData(class UMatchaInventoryCategoryUIData* OldCategoryUIData);
	void UnbindData(class UOdyUIData* OldUIData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Inventory_Tooltips_C">();
	}
	static class UWBP_Inventory_Tooltips_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Inventory_Tooltips_C>();
	}
};
static_assert(alignof(UWBP_Inventory_Tooltips_C) == 0x000008, "Wrong alignment on UWBP_Inventory_Tooltips_C");
static_assert(sizeof(UWBP_Inventory_Tooltips_C) == 0x000448, "Wrong size on UWBP_Inventory_Tooltips_C");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, UberGraphFrame) == 0x000398, "Member 'UWBP_Inventory_Tooltips_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, BindingSlot1) == 0x0003A0, "Member 'UWBP_Inventory_Tooltips_C::BindingSlot1' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, BindingSlot2) == 0x0003A8, "Member 'UWBP_Inventory_Tooltips_C::BindingSlot2' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, BindingSlot3) == 0x0003B0, "Member 'UWBP_Inventory_Tooltips_C::BindingSlot3' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, BindingSlot4) == 0x0003B8, "Member 'UWBP_Inventory_Tooltips_C::BindingSlot4' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, HeldItemContainer) == 0x0003C0, "Member 'UWBP_Inventory_Tooltips_C::HeldItemContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, HeldItemSlot) == 0x0003C8, "Member 'UWBP_Inventory_Tooltips_C::HeldItemSlot' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, HeldSlotToolTip) == 0x0003D0, "Member 'UWBP_Inventory_Tooltips_C::HeldSlotToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, OverallContainer) == 0x0003D8, "Member 'UWBP_Inventory_Tooltips_C::OverallContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, Overlay_KeyboardInventory) == 0x0003E0, "Member 'UWBP_Inventory_Tooltips_C::Overlay_KeyboardInventory' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, QuickbarSlot1_Keyboard) == 0x0003E8, "Member 'UWBP_Inventory_Tooltips_C::QuickbarSlot1_Keyboard' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, QuickbarSlot2_Keyboard) == 0x0003F0, "Member 'UWBP_Inventory_Tooltips_C::QuickbarSlot2_Keyboard' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, QuickbarSlot3_Keyboard) == 0x0003F8, "Member 'UWBP_Inventory_Tooltips_C::QuickbarSlot3_Keyboard' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, QuickbarSlot4_Keyboard) == 0x000400, "Member 'UWBP_Inventory_Tooltips_C::QuickbarSlot4_Keyboard' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, Slot1ToolTip) == 0x000408, "Member 'UWBP_Inventory_Tooltips_C::Slot1ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, Slot2ToolTip) == 0x000410, "Member 'UWBP_Inventory_Tooltips_C::Slot2ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, Slot3ToolTip) == 0x000418, "Member 'UWBP_Inventory_Tooltips_C::Slot3ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, Slot4ToolTip) == 0x000420, "Member 'UWBP_Inventory_Tooltips_C::Slot4ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, SoulItemSlot) == 0x000428, "Member 'UWBP_Inventory_Tooltips_C::SoulItemSlot' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, BoundQuickBarCategoryUIData) == 0x000430, "Member 'UWBP_Inventory_Tooltips_C::BoundQuickBarCategoryUIData' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, BoundHeldCategoryUIData) == 0x000438, "Member 'UWBP_Inventory_Tooltips_C::BoundHeldCategoryUIData' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_Tooltips_C, BoundSoulCategoryUIData) == 0x000440, "Member 'UWBP_Inventory_Tooltips_C::BoundSoulCategoryUIData' has a wrong offset!");

}
