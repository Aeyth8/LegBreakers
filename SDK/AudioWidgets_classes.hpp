#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioWidgets

#include "Basic.hpp"

#include "AudioWidgets_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class AudioWidgets.AudioMeter
// 0x0588 (0x0700 - 0x0178)
class UAudioMeter final : public UWidget
{
public:
	TArray<struct FMeterChannelInfo>              MeterChannelInfo;                                  // 0x0178(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TDelegate<void()>                             MeterChannelInfoDelegate;                          // 0x0188(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_198[0x8];                                      // 0x0198(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAudioMeterStyle                       WidgetStyle;                                       // 0x01A0(0x04D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EOrientation                                  Orientation;                                       // 0x0670(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_671[0x3];                                      // 0x0671(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           BackgroundColor;                                   // 0x0674(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MeterBackgroundColor;                              // 0x0684(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MeterValueColor;                                   // 0x0694(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MeterPeakColor;                                    // 0x06A4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MeterClippingColor;                                // 0x06B4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MeterScaleColor;                                   // 0x06C4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MeterScaleLabelColor;                              // 0x06D4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6E4[0x1C];                                     // 0x06E4(0x001C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	TArray<struct FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();
	void SetBackgroundColor(const struct FLinearColor& InValue);
	void SetMeterBackgroundColor(const struct FLinearColor& InValue);
	void SetMeterChannelInfo(const TArray<struct FMeterChannelInfo>& InMeterChannelInfo);
	void SetMeterClippingColor(const struct FLinearColor& InValue);
	void SetMeterPeakColor(const struct FLinearColor& InValue);
	void SetMeterScaleColor(const struct FLinearColor& InValue);
	void SetMeterScaleLabelColor(const struct FLinearColor& InValue);
	void SetMeterValueColor(const struct FLinearColor& InValue);

	TArray<struct FMeterChannelInfo> GetMeterChannelInfo() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMeter">();
	}
	static class UAudioMeter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioMeter>();
	}
};
static_assert(alignof(UAudioMeter) == 0x000010, "Wrong alignment on UAudioMeter");
static_assert(sizeof(UAudioMeter) == 0x000700, "Wrong size on UAudioMeter");
static_assert(offsetof(UAudioMeter, MeterChannelInfo) == 0x000178, "Member 'UAudioMeter::MeterChannelInfo' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterChannelInfoDelegate) == 0x000188, "Member 'UAudioMeter::MeterChannelInfoDelegate' has a wrong offset!");
static_assert(offsetof(UAudioMeter, WidgetStyle) == 0x0001A0, "Member 'UAudioMeter::WidgetStyle' has a wrong offset!");
static_assert(offsetof(UAudioMeter, Orientation) == 0x000670, "Member 'UAudioMeter::Orientation' has a wrong offset!");
static_assert(offsetof(UAudioMeter, BackgroundColor) == 0x000674, "Member 'UAudioMeter::BackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterBackgroundColor) == 0x000684, "Member 'UAudioMeter::MeterBackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterValueColor) == 0x000694, "Member 'UAudioMeter::MeterValueColor' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterPeakColor) == 0x0006A4, "Member 'UAudioMeter::MeterPeakColor' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterClippingColor) == 0x0006B4, "Member 'UAudioMeter::MeterClippingColor' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterScaleColor) == 0x0006C4, "Member 'UAudioMeter::MeterScaleColor' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterScaleLabelColor) == 0x0006D4, "Member 'UAudioMeter::MeterScaleLabelColor' has a wrong offset!");

// Class AudioWidgets.AudioOscilloscope
// 0x0518 (0x0690 - 0x0178)
class UAudioOscilloscope final : public UWidget
{
public:
	uint8                                         Pad_178[0x8];                                      // 0x0178(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAudioOscilloscopePanelStyle           OscilloscopeStyle;                                 // 0x0180(0x04A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UAudioBus*                              AudioBus;                                          // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeWindowMs;                                      // 0x0628(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnalysisPeriodMs;                                  // 0x062C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowTimeGrid;                                     // 0x0630(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EXAxisLabelsUnit                              TimeGridLabelsUnit;                                // 0x0631(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowAmplitudeGrid;                                // 0x0632(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowAmplitudeLabels;                              // 0x0633(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EYAxisLabelsUnit                              AmplitudeGridLabelsUnit;                           // 0x0634(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowTriggerThresholdLine;                         // 0x0635(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_636[0x2];                                      // 0x0636(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TriggerThreshold;                                  // 0x0638(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAudioPanelLayoutType                         PanelLayoutType;                                   // 0x063C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_63D[0x53];                                     // 0x063D(0x0053)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	TArray<float> GetOscilloscopeAudioSamples__DelegateSignature();
	void StartProcessing();
	void StopProcessing();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioOscilloscope">();
	}
	static class UAudioOscilloscope* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioOscilloscope>();
	}
};
static_assert(alignof(UAudioOscilloscope) == 0x000010, "Wrong alignment on UAudioOscilloscope");
static_assert(sizeof(UAudioOscilloscope) == 0x000690, "Wrong size on UAudioOscilloscope");
static_assert(offsetof(UAudioOscilloscope, OscilloscopeStyle) == 0x000180, "Member 'UAudioOscilloscope::OscilloscopeStyle' has a wrong offset!");
static_assert(offsetof(UAudioOscilloscope, AudioBus) == 0x000620, "Member 'UAudioOscilloscope::AudioBus' has a wrong offset!");
static_assert(offsetof(UAudioOscilloscope, TimeWindowMs) == 0x000628, "Member 'UAudioOscilloscope::TimeWindowMs' has a wrong offset!");
static_assert(offsetof(UAudioOscilloscope, AnalysisPeriodMs) == 0x00062C, "Member 'UAudioOscilloscope::AnalysisPeriodMs' has a wrong offset!");
static_assert(offsetof(UAudioOscilloscope, bShowTimeGrid) == 0x000630, "Member 'UAudioOscilloscope::bShowTimeGrid' has a wrong offset!");
static_assert(offsetof(UAudioOscilloscope, TimeGridLabelsUnit) == 0x000631, "Member 'UAudioOscilloscope::TimeGridLabelsUnit' has a wrong offset!");
static_assert(offsetof(UAudioOscilloscope, bShowAmplitudeGrid) == 0x000632, "Member 'UAudioOscilloscope::bShowAmplitudeGrid' has a wrong offset!");
static_assert(offsetof(UAudioOscilloscope, bShowAmplitudeLabels) == 0x000633, "Member 'UAudioOscilloscope::bShowAmplitudeLabels' has a wrong offset!");
static_assert(offsetof(UAudioOscilloscope, AmplitudeGridLabelsUnit) == 0x000634, "Member 'UAudioOscilloscope::AmplitudeGridLabelsUnit' has a wrong offset!");
static_assert(offsetof(UAudioOscilloscope, bShowTriggerThresholdLine) == 0x000635, "Member 'UAudioOscilloscope::bShowTriggerThresholdLine' has a wrong offset!");
static_assert(offsetof(UAudioOscilloscope, TriggerThreshold) == 0x000638, "Member 'UAudioOscilloscope::TriggerThreshold' has a wrong offset!");
static_assert(offsetof(UAudioOscilloscope, PanelLayoutType) == 0x00063C, "Member 'UAudioOscilloscope::PanelLayoutType' has a wrong offset!");

// Class AudioWidgets.AudioRadialSlider
// 0x0218 (0x0390 - 0x0178)
class alignas(0x10) UAudioRadialSlider : public UWidget
{
public:
	float                                         Value;                                             // 0x0178(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             ValueDelegate;                                     // 0x017C(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAudioRadialSliderLayout                      WidgetLayout;                                      // 0x018C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18D[0x3];                                      // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CenterBackgroundColor;                             // 0x0190(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderProgressColor;                               // 0x01A0(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderBarColor;                                    // 0x01B0(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              HandStartEndRatio;                                 // 0x01C0(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   UnitsText;                                         // 0x01D0(0x0010)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                           TextLabelBackgroundColor;                          // 0x01E0(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowLabelOnlyOnHover;                              // 0x01F0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowUnitsText;                                     // 0x01F1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsUnitsTextReadOnly;                               // 0x01F2(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsValueTextReadOnly;                               // 0x01F3(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SliderThickness;                                   // 0x01F4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              OutputRange;                                       // 0x01F8(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnValueChanged;                                    // 0x0208(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_218[0x178];                                    // 0x0218(0x0178)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetOutputValue(const float InSliderValue);
	float GetSliderValue(const float OutputValue);
	void SetCenterBackgroundColor(const struct FLinearColor& InValue);
	void SetHandStartEndRatio(const struct FVector2D& InHandStartEndRatio);
	void SetOutputRange(const struct FVector2D& InOutputRange);
	void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
	void SetShowUnitsText(const bool bShowUnitsText);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetSliderProgressColor(const struct FLinearColor& InValue);
	void SetSliderThickness(const float InThickness);
	void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
	void SetUnitsText(const class FText& Units);
	void SetUnitsTextReadOnly(const bool bIsReadOnly);
	void SetValueTextReadOnly(const bool bIsReadOnly);
	void SetWidgetLayout(EAudioRadialSliderLayout InLayout);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioRadialSlider">();
	}
	static class UAudioRadialSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioRadialSlider>();
	}
};
static_assert(alignof(UAudioRadialSlider) == 0x000010, "Wrong alignment on UAudioRadialSlider");
static_assert(sizeof(UAudioRadialSlider) == 0x000390, "Wrong size on UAudioRadialSlider");
static_assert(offsetof(UAudioRadialSlider, Value) == 0x000178, "Member 'UAudioRadialSlider::Value' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, ValueDelegate) == 0x00017C, "Member 'UAudioRadialSlider::ValueDelegate' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, WidgetLayout) == 0x00018C, "Member 'UAudioRadialSlider::WidgetLayout' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, CenterBackgroundColor) == 0x000190, "Member 'UAudioRadialSlider::CenterBackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, SliderProgressColor) == 0x0001A0, "Member 'UAudioRadialSlider::SliderProgressColor' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, SliderBarColor) == 0x0001B0, "Member 'UAudioRadialSlider::SliderBarColor' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, HandStartEndRatio) == 0x0001C0, "Member 'UAudioRadialSlider::HandStartEndRatio' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, UnitsText) == 0x0001D0, "Member 'UAudioRadialSlider::UnitsText' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, TextLabelBackgroundColor) == 0x0001E0, "Member 'UAudioRadialSlider::TextLabelBackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, ShowLabelOnlyOnHover) == 0x0001F0, "Member 'UAudioRadialSlider::ShowLabelOnlyOnHover' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, ShowUnitsText) == 0x0001F1, "Member 'UAudioRadialSlider::ShowUnitsText' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, IsUnitsTextReadOnly) == 0x0001F2, "Member 'UAudioRadialSlider::IsUnitsTextReadOnly' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, IsValueTextReadOnly) == 0x0001F3, "Member 'UAudioRadialSlider::IsValueTextReadOnly' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, SliderThickness) == 0x0001F4, "Member 'UAudioRadialSlider::SliderThickness' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, OutputRange) == 0x0001F8, "Member 'UAudioRadialSlider::OutputRange' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, OnValueChanged) == 0x000208, "Member 'UAudioRadialSlider::OnValueChanged' has a wrong offset!");

// Class AudioWidgets.AudioVolumeRadialSlider
// 0x0000 (0x0390 - 0x0390)
class UAudioVolumeRadialSlider final : public UAudioRadialSlider
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioVolumeRadialSlider">();
	}
	static class UAudioVolumeRadialSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioVolumeRadialSlider>();
	}
};
static_assert(alignof(UAudioVolumeRadialSlider) == 0x000010, "Wrong alignment on UAudioVolumeRadialSlider");
static_assert(sizeof(UAudioVolumeRadialSlider) == 0x000390, "Wrong size on UAudioVolumeRadialSlider");

// Class AudioWidgets.AudioFrequencyRadialSlider
// 0x0000 (0x0390 - 0x0390)
class UAudioFrequencyRadialSlider final : public UAudioRadialSlider
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioFrequencyRadialSlider">();
	}
	static class UAudioFrequencyRadialSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioFrequencyRadialSlider>();
	}
};
static_assert(alignof(UAudioFrequencyRadialSlider) == 0x000010, "Wrong alignment on UAudioFrequencyRadialSlider");
static_assert(sizeof(UAudioFrequencyRadialSlider) == 0x000390, "Wrong size on UAudioFrequencyRadialSlider");

// Class AudioWidgets.AudioSliderBase
// 0x0848 (0x09C0 - 0x0178)
class alignas(0x10) UAudioSliderBase : public UWidget
{
public:
	float                                         Value;                                             // 0x0178(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   UnitsText;                                         // 0x0180(0x0010)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                           TextLabelBackgroundColor;                          // 0x0190(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             TextLabelBackgroundColorDelegate;                  // 0x01A0(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowLabelOnlyOnHover;                              // 0x01B0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowUnitsText;                                     // 0x01B1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsUnitsTextReadOnly;                               // 0x01B2(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsValueTextReadOnly;                               // 0x01B3(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             ValueDelegate;                                     // 0x01B4(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderBackgroundColor;                             // 0x01C4(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             SliderBackgroundColorDelegate;                     // 0x01D4(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderBarColor;                                    // 0x01E4(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             SliderBarColorDelegate;                            // 0x01F4(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderThumbColor;                                  // 0x0204(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             SliderThumbColorDelegate;                          // 0x0214(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           WidgetBackgroundColor;                             // 0x0224(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             WidgetBackgroundColorDelegate;                     // 0x0234(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOrientation                                  Orientation;                                       // 0x0244(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_245[0x3];                                      // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnValueChanged;                                    // 0x0248(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_258[0x768];                                    // 0x0258(0x0768)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetLinValue(const float OutputValue);
	float GetOutputValue(const float InSliderValue);
	float GetSliderValue(const float OutputValue);
	void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
	void SetShowUnitsText(const bool bShowUnitsText);
	void SetSliderBackgroundColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetSliderThumbColor(const struct FLinearColor& InValue);
	void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
	void SetUnitsText(const class FText& Units);
	void SetUnitsTextReadOnly(const bool bIsReadOnly);
	void SetValueTextReadOnly(const bool bIsReadOnly);
	void SetWidgetBackgroundColor(const struct FLinearColor& InValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioSliderBase">();
	}
	static class UAudioSliderBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioSliderBase>();
	}
};
static_assert(alignof(UAudioSliderBase) == 0x000010, "Wrong alignment on UAudioSliderBase");
static_assert(sizeof(UAudioSliderBase) == 0x0009C0, "Wrong size on UAudioSliderBase");
static_assert(offsetof(UAudioSliderBase, Value) == 0x000178, "Member 'UAudioSliderBase::Value' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, UnitsText) == 0x000180, "Member 'UAudioSliderBase::UnitsText' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, TextLabelBackgroundColor) == 0x000190, "Member 'UAudioSliderBase::TextLabelBackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, TextLabelBackgroundColorDelegate) == 0x0001A0, "Member 'UAudioSliderBase::TextLabelBackgroundColorDelegate' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, ShowLabelOnlyOnHover) == 0x0001B0, "Member 'UAudioSliderBase::ShowLabelOnlyOnHover' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, ShowUnitsText) == 0x0001B1, "Member 'UAudioSliderBase::ShowUnitsText' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, IsUnitsTextReadOnly) == 0x0001B2, "Member 'UAudioSliderBase::IsUnitsTextReadOnly' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, IsValueTextReadOnly) == 0x0001B3, "Member 'UAudioSliderBase::IsValueTextReadOnly' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, ValueDelegate) == 0x0001B4, "Member 'UAudioSliderBase::ValueDelegate' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, SliderBackgroundColor) == 0x0001C4, "Member 'UAudioSliderBase::SliderBackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, SliderBackgroundColorDelegate) == 0x0001D4, "Member 'UAudioSliderBase::SliderBackgroundColorDelegate' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, SliderBarColor) == 0x0001E4, "Member 'UAudioSliderBase::SliderBarColor' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, SliderBarColorDelegate) == 0x0001F4, "Member 'UAudioSliderBase::SliderBarColorDelegate' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, SliderThumbColor) == 0x000204, "Member 'UAudioSliderBase::SliderThumbColor' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, SliderThumbColorDelegate) == 0x000214, "Member 'UAudioSliderBase::SliderThumbColorDelegate' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, WidgetBackgroundColor) == 0x000224, "Member 'UAudioSliderBase::WidgetBackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, WidgetBackgroundColorDelegate) == 0x000234, "Member 'UAudioSliderBase::WidgetBackgroundColorDelegate' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, Orientation) == 0x000244, "Member 'UAudioSliderBase::Orientation' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, OnValueChanged) == 0x000248, "Member 'UAudioSliderBase::OnValueChanged' has a wrong offset!");

// Class AudioWidgets.AudioSlider
// 0x0010 (0x09D0 - 0x09C0)
class UAudioSlider : public UAudioSliderBase
{
public:
	TWeakObjectPtr<class UCurveFloat>             LinToOutputCurve;                                  // 0x09C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UCurveFloat>             OutputToLinCurve;                                  // 0x09C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioSlider">();
	}
	static class UAudioSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioSlider>();
	}
};
static_assert(alignof(UAudioSlider) == 0x000010, "Wrong alignment on UAudioSlider");
static_assert(sizeof(UAudioSlider) == 0x0009D0, "Wrong size on UAudioSlider");
static_assert(offsetof(UAudioSlider, LinToOutputCurve) == 0x0009C0, "Member 'UAudioSlider::LinToOutputCurve' has a wrong offset!");
static_assert(offsetof(UAudioSlider, OutputToLinCurve) == 0x0009C8, "Member 'UAudioSlider::OutputToLinCurve' has a wrong offset!");

// Class AudioWidgets.AudioVolumeSlider
// 0x0000 (0x09D0 - 0x09D0)
class UAudioVolumeSlider final : public UAudioSlider
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioVolumeSlider">();
	}
	static class UAudioVolumeSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioVolumeSlider>();
	}
};
static_assert(alignof(UAudioVolumeSlider) == 0x000010, "Wrong alignment on UAudioVolumeSlider");
static_assert(sizeof(UAudioVolumeSlider) == 0x0009D0, "Wrong size on UAudioVolumeSlider");

// Class AudioWidgets.AudioFrequencySlider
// 0x0010 (0x09D0 - 0x09C0)
class UAudioFrequencySlider final : public UAudioSliderBase
{
public:
	struct FVector2D                              OutputRange;                                       // 0x09C0(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioFrequencySlider">();
	}
	static class UAudioFrequencySlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioFrequencySlider>();
	}
};
static_assert(alignof(UAudioFrequencySlider) == 0x000010, "Wrong alignment on UAudioFrequencySlider");
static_assert(sizeof(UAudioFrequencySlider) == 0x0009D0, "Wrong size on UAudioFrequencySlider");
static_assert(offsetof(UAudioFrequencySlider, OutputRange) == 0x0009C0, "Member 'UAudioFrequencySlider::OutputRange' has a wrong offset!");

// Class AudioWidgets.AudioVectorscope
// 0x0238 (0x03B0 - 0x0178)
class UAudioVectorscope final : public UWidget
{
public:
	uint8                                         Pad_178[0x8];                                      // 0x0178(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAudioVectorscopePanelStyle            VectorscopeStyle;                                  // 0x0180(0x01C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UAudioBus*                              AudioBus;                                          // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowGrid;                                         // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_349[0x3];                                      // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GridDivisions;                                     // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DisplayPersistenceMs;                              // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAudioPanelLayoutType                         PanelLayoutType;                                   // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_359[0x57];                                     // 0x0359(0x0057)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	TArray<float> GetVectorscopeAudioSamples__DelegateSignature();
	void StartProcessing();
	void StopProcessing();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioVectorscope">();
	}
	static class UAudioVectorscope* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioVectorscope>();
	}
};
static_assert(alignof(UAudioVectorscope) == 0x000010, "Wrong alignment on UAudioVectorscope");
static_assert(sizeof(UAudioVectorscope) == 0x0003B0, "Wrong size on UAudioVectorscope");
static_assert(offsetof(UAudioVectorscope, VectorscopeStyle) == 0x000180, "Member 'UAudioVectorscope::VectorscopeStyle' has a wrong offset!");
static_assert(offsetof(UAudioVectorscope, AudioBus) == 0x000340, "Member 'UAudioVectorscope::AudioBus' has a wrong offset!");
static_assert(offsetof(UAudioVectorscope, bShowGrid) == 0x000348, "Member 'UAudioVectorscope::bShowGrid' has a wrong offset!");
static_assert(offsetof(UAudioVectorscope, GridDivisions) == 0x00034C, "Member 'UAudioVectorscope::GridDivisions' has a wrong offset!");
static_assert(offsetof(UAudioVectorscope, DisplayPersistenceMs) == 0x000350, "Member 'UAudioVectorscope::DisplayPersistenceMs' has a wrong offset!");
static_assert(offsetof(UAudioVectorscope, Scale) == 0x000354, "Member 'UAudioVectorscope::Scale' has a wrong offset!");
static_assert(offsetof(UAudioVectorscope, PanelLayoutType) == 0x000358, "Member 'UAudioVectorscope::PanelLayoutType' has a wrong offset!");

}

