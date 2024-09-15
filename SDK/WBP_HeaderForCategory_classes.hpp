#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeaderForCategory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HeaderForCategory.WBP_HeaderForCategory_C
// 0x0110 (0x03F0 - 0x02E0)
class UWBP_HeaderForCategory_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 HeaderBG;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeaderText;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Width;                                             // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Height;                                            // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0310(0x0010)(Edit, BlueprintVisible)
	struct FLinearColor                           Color_Text;                                        // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         TextFont;                                          // 0x0330(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FMargin                                Padding_Text;                                      // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Color_BG;                                          // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Bottom_Rotate;                                     // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Bottom_Offset;                                     // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Left_Rotate;                                       // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Left_Offset;                                       // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Right_Rotate;                                      // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Right_Offset;                                      // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Top_Rotate;                                        // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Top_Offset;                                        // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_HeaderForCategory(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetForm(const struct FLinearColor& ColorBG, double BottomRotate, double BottomOffset, double LeftRotate, double LeftOffset, double RightRotate, double RightOffset, double TopRotate, double TopOffset);
	void SetVisual(const class FText& Text_0, const struct FLinearColor& ColorText, const struct FSlateFontInfo& InFontInfo, const struct FMargin& PaddingText, const struct FLinearColor& ColorBG, double BottomRotate, double BottomOffset, double LeftRotate, double LeftOffset, double RightRotate, double RightOffset, double TopRotate, double TopOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HeaderForCategory_C">();
	}
	static class UWBP_HeaderForCategory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HeaderForCategory_C>();
	}
};
static_assert(alignof(UWBP_HeaderForCategory_C) == 0x000008, "Wrong alignment on UWBP_HeaderForCategory_C");
static_assert(sizeof(UWBP_HeaderForCategory_C) == 0x0003F0, "Wrong size on UWBP_HeaderForCategory_C");
static_assert(offsetof(UWBP_HeaderForCategory_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_HeaderForCategory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, HeaderBG) == 0x0002E8, "Member 'UWBP_HeaderForCategory_C::HeaderBG' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, HeaderText) == 0x0002F0, "Member 'UWBP_HeaderForCategory_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, ScaleBox) == 0x0002F8, "Member 'UWBP_HeaderForCategory_C::ScaleBox' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, SizeBox) == 0x000300, "Member 'UWBP_HeaderForCategory_C::SizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Width) == 0x000308, "Member 'UWBP_HeaderForCategory_C::Width' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Height) == 0x00030C, "Member 'UWBP_HeaderForCategory_C::Height' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Text) == 0x000310, "Member 'UWBP_HeaderForCategory_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Color_Text) == 0x000320, "Member 'UWBP_HeaderForCategory_C::Color_Text' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, TextFont) == 0x000330, "Member 'UWBP_HeaderForCategory_C::TextFont' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Padding_Text) == 0x000390, "Member 'UWBP_HeaderForCategory_C::Padding_Text' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Color_BG) == 0x0003A0, "Member 'UWBP_HeaderForCategory_C::Color_BG' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Bottom_Rotate) == 0x0003B0, "Member 'UWBP_HeaderForCategory_C::Bottom_Rotate' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Bottom_Offset) == 0x0003B8, "Member 'UWBP_HeaderForCategory_C::Bottom_Offset' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Left_Rotate) == 0x0003C0, "Member 'UWBP_HeaderForCategory_C::Left_Rotate' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Left_Offset) == 0x0003C8, "Member 'UWBP_HeaderForCategory_C::Left_Offset' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Right_Rotate) == 0x0003D0, "Member 'UWBP_HeaderForCategory_C::Right_Rotate' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Right_Offset) == 0x0003D8, "Member 'UWBP_HeaderForCategory_C::Right_Offset' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Top_Rotate) == 0x0003E0, "Member 'UWBP_HeaderForCategory_C::Top_Rotate' has a wrong offset!");
static_assert(offsetof(UWBP_HeaderForCategory_C, Top_Offset) == 0x0003E8, "Member 'UWBP_HeaderForCategory_C::Top_Offset' has a wrong offset!");

}

