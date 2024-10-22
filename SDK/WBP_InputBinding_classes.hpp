#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InputBinding

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InputBinding.WBP_InputBinding_C
// 0x0040 (0x0320 - 0x02E0)
class UWBP_InputBinding_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                         RichTextBlock;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RootSizeBox;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputAction*                           InputAction;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FKey                                   Key;                                               // 0x0300(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Size;                                              // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_InputBinding(int32 EntryPoint);
	void Init(class UInputAction* InInputAction, const struct FKey& InKey, double InSize);
	void PreConstruct(bool IsDesignTime);
	void SetInputAction(class UInputAction* InputAction_0);
	void UpdateBinding();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InputBinding_C">();
	}
	static class UWBP_InputBinding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InputBinding_C>();
	}
};
static_assert(alignof(UWBP_InputBinding_C) == 0x000008, "Wrong alignment on UWBP_InputBinding_C");
static_assert(sizeof(UWBP_InputBinding_C) == 0x000320, "Wrong size on UWBP_InputBinding_C");
static_assert(offsetof(UWBP_InputBinding_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_InputBinding_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InputBinding_C, RichTextBlock) == 0x0002E8, "Member 'UWBP_InputBinding_C::RichTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_InputBinding_C, RootSizeBox) == 0x0002F0, "Member 'UWBP_InputBinding_C::RootSizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_InputBinding_C, InputAction) == 0x0002F8, "Member 'UWBP_InputBinding_C::InputAction' has a wrong offset!");
static_assert(offsetof(UWBP_InputBinding_C, Key) == 0x000300, "Member 'UWBP_InputBinding_C::Key' has a wrong offset!");
static_assert(offsetof(UWBP_InputBinding_C, Size) == 0x000318, "Member 'UWBP_InputBinding_C::Size' has a wrong offset!");

}

