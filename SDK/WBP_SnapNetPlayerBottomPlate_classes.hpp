#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SnapNetPlayerBottomPlate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "OdyUI_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SnapNetPlayerBottomPlate.WBP_SnapNetPlayerBottomPlate_C
// 0x0478 (0x0810 - 0x0398)
class UWBP_SnapNetPlayerBottomPlate_C final : public UOdyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ArmorIcon;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ArmorRemainingIcon;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BootIcon;                                          // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              BottomBox;                                         // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                DamageBorder;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          DamageText;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          DamageText_1;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          DamageTextBG;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          DamageTextBGStroke;                                // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DamageTextBox;                                     // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          DecimalBG;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          DecimalBGStroke;                                   // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOdyTextBlock*                          DecimalText;                                       // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FilledChunk1;                                      // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FilledChunk2;                                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FilledChunk3;                                      // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FilledChunk4;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GloveIcon;                                         // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_334;                                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LethalIcon;                                        // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LethalIcon_2;                                      // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LethalIcon_3;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LethalIconBox;                                     // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Lock1;                                             // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Lock2;                                             // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Lock3;                                             // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Lock4;                                             // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           NewDamageBar;                                      // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                OverlayColor;                                      // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PlayerUIBarBorder1;                                // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PlayerUIBarBorder2;                                // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PlayerUIBarBorder3;                                // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           PlayerUIEnergyBar;                                 // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PlayerUIEnergyBarBorder;                           // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_1;                                     // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TeamArrow;                                         // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TempGearTellUI;                                    // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ThresholdingLockUI;                                // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        Current_Max_Energy_Amount;                         // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentMaxEnergyRatio;                             // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProgressBarStyle                      BaseBarStyleForAllies;                             // 0x04E0(0x0290)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            BaseTint;                                          // 0x0770(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsAlly;                                            // 0x0784(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_785[0x3];                                      // 0x0785(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Enemy_Team_Energy_Color;                           // 0x0788(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LocalPlayerColor;                                  // 0x0798(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LastDamagePercent;                                 // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DamageTextMaterial;                                // 0x07B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DamageAnimationTime;                               // 0x07B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DamageAnimationDuration;                           // 0x07C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayingDamage;                                     // 0x07C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar;                                            // 0x07C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CA[0x2];                                      // 0x07CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            SelectedDamageColor;                               // 0x07CC(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            AllyDamageThresholdColor;                          // 0x07E0(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            EnemyDamageThresholdColor;                         // 0x07F4(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BindData(class UOdyUIData* NewUIData);
	void Construct();
	void ExecuteUbergraph_WBP_SnapNetPlayerBottomPlate(int32 EntryPoint);
	void GetColorForItemRarity(class UMatchaItemAsset* InputObject, struct FLinearColor* Color);
	void OnInitialized();
	void OnSpectatedPlayerChanged(bool OldValue, bool NewValue);
	void OnTeamNumberChanged(int32 OldValue, int32 NewValue);
	void PreConstruct(bool IsDesignTime);
	void Set_Energy_Colors(int32 TeamID, int32 LocalPlayerTeamID);
	void SetCurrentEnergy();
	void SetDamage(double DamagePercent);
	void SetTeamColor(bool IsAlly_0, const struct FLinearColor& TeamColor);
	void SetTeamNumber(int32 TeamNumber);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TryUpdateEnergyChunks(double CurrentEnergy);
	void UnbindData(class UOdyUIData* OldUIData);
	void Update_Energy_Bar(double NewMaxEnergy, double CurrentEnergy);
	void UpdateTempGearTellUI(class UMatchaInventoryComponent* InventoryComponentRef);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SnapNetPlayerBottomPlate_C">();
	}
	static class UWBP_SnapNetPlayerBottomPlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SnapNetPlayerBottomPlate_C>();
	}
};
static_assert(alignof(UWBP_SnapNetPlayerBottomPlate_C) == 0x000010, "Wrong alignment on UWBP_SnapNetPlayerBottomPlate_C");
static_assert(sizeof(UWBP_SnapNetPlayerBottomPlate_C) == 0x000810, "Wrong size on UWBP_SnapNetPlayerBottomPlate_C");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, UberGraphFrame) == 0x000398, "Member 'UWBP_SnapNetPlayerBottomPlate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, ArmorIcon) == 0x0003A0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::ArmorIcon' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, ArmorRemainingIcon) == 0x0003A8, "Member 'UWBP_SnapNetPlayerBottomPlate_C::ArmorRemainingIcon' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, BootIcon) == 0x0003B0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::BootIcon' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, BottomBox) == 0x0003B8, "Member 'UWBP_SnapNetPlayerBottomPlate_C::BottomBox' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, DamageBorder) == 0x0003C0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::DamageBorder' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, DamageText) == 0x0003C8, "Member 'UWBP_SnapNetPlayerBottomPlate_C::DamageText' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, DamageText_1) == 0x0003D0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::DamageText_1' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, DamageTextBG) == 0x0003D8, "Member 'UWBP_SnapNetPlayerBottomPlate_C::DamageTextBG' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, DamageTextBGStroke) == 0x0003E0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::DamageTextBGStroke' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, DamageTextBox) == 0x0003E8, "Member 'UWBP_SnapNetPlayerBottomPlate_C::DamageTextBox' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, DecimalBG) == 0x0003F0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::DecimalBG' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, DecimalBGStroke) == 0x0003F8, "Member 'UWBP_SnapNetPlayerBottomPlate_C::DecimalBGStroke' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, DecimalText) == 0x000400, "Member 'UWBP_SnapNetPlayerBottomPlate_C::DecimalText' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, FilledChunk1) == 0x000408, "Member 'UWBP_SnapNetPlayerBottomPlate_C::FilledChunk1' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, FilledChunk2) == 0x000410, "Member 'UWBP_SnapNetPlayerBottomPlate_C::FilledChunk2' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, FilledChunk3) == 0x000418, "Member 'UWBP_SnapNetPlayerBottomPlate_C::FilledChunk3' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, FilledChunk4) == 0x000420, "Member 'UWBP_SnapNetPlayerBottomPlate_C::FilledChunk4' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, GloveIcon) == 0x000428, "Member 'UWBP_SnapNetPlayerBottomPlate_C::GloveIcon' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, Image_334) == 0x000430, "Member 'UWBP_SnapNetPlayerBottomPlate_C::Image_334' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, LethalIcon) == 0x000438, "Member 'UWBP_SnapNetPlayerBottomPlate_C::LethalIcon' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, LethalIcon_2) == 0x000440, "Member 'UWBP_SnapNetPlayerBottomPlate_C::LethalIcon_2' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, LethalIcon_3) == 0x000448, "Member 'UWBP_SnapNetPlayerBottomPlate_C::LethalIcon_3' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, LethalIconBox) == 0x000450, "Member 'UWBP_SnapNetPlayerBottomPlate_C::LethalIconBox' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, Lock1) == 0x000458, "Member 'UWBP_SnapNetPlayerBottomPlate_C::Lock1' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, Lock2) == 0x000460, "Member 'UWBP_SnapNetPlayerBottomPlate_C::Lock2' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, Lock3) == 0x000468, "Member 'UWBP_SnapNetPlayerBottomPlate_C::Lock3' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, Lock4) == 0x000470, "Member 'UWBP_SnapNetPlayerBottomPlate_C::Lock4' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, NewDamageBar) == 0x000478, "Member 'UWBP_SnapNetPlayerBottomPlate_C::NewDamageBar' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, OverlayColor) == 0x000480, "Member 'UWBP_SnapNetPlayerBottomPlate_C::OverlayColor' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, PlayerUIBarBorder1) == 0x000488, "Member 'UWBP_SnapNetPlayerBottomPlate_C::PlayerUIBarBorder1' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, PlayerUIBarBorder2) == 0x000490, "Member 'UWBP_SnapNetPlayerBottomPlate_C::PlayerUIBarBorder2' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, PlayerUIBarBorder3) == 0x000498, "Member 'UWBP_SnapNetPlayerBottomPlate_C::PlayerUIBarBorder3' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, PlayerUIEnergyBar) == 0x0004A0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::PlayerUIEnergyBar' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, PlayerUIEnergyBarBorder) == 0x0004A8, "Member 'UWBP_SnapNetPlayerBottomPlate_C::PlayerUIEnergyBarBorder' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, RetainerBox_1) == 0x0004B0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::RetainerBox_1' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, TeamArrow) == 0x0004B8, "Member 'UWBP_SnapNetPlayerBottomPlate_C::TeamArrow' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, TempGearTellUI) == 0x0004C0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::TempGearTellUI' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, ThresholdingLockUI) == 0x0004C8, "Member 'UWBP_SnapNetPlayerBottomPlate_C::ThresholdingLockUI' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, Current_Max_Energy_Amount) == 0x0004D0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::Current_Max_Energy_Amount' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, CurrentMaxEnergyRatio) == 0x0004D8, "Member 'UWBP_SnapNetPlayerBottomPlate_C::CurrentMaxEnergyRatio' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, BaseBarStyleForAllies) == 0x0004E0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::BaseBarStyleForAllies' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, BaseTint) == 0x000770, "Member 'UWBP_SnapNetPlayerBottomPlate_C::BaseTint' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, IsAlly) == 0x000784, "Member 'UWBP_SnapNetPlayerBottomPlate_C::IsAlly' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, Enemy_Team_Energy_Color) == 0x000788, "Member 'UWBP_SnapNetPlayerBottomPlate_C::Enemy_Team_Energy_Color' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, LocalPlayerColor) == 0x000798, "Member 'UWBP_SnapNetPlayerBottomPlate_C::LocalPlayerColor' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, LastDamagePercent) == 0x0007A8, "Member 'UWBP_SnapNetPlayerBottomPlate_C::LastDamagePercent' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, DamageTextMaterial) == 0x0007B0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::DamageTextMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, DamageAnimationTime) == 0x0007B8, "Member 'UWBP_SnapNetPlayerBottomPlate_C::DamageAnimationTime' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, DamageAnimationDuration) == 0x0007C0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::DamageAnimationDuration' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, PlayingDamage) == 0x0007C8, "Member 'UWBP_SnapNetPlayerBottomPlate_C::PlayingDamage' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, NewVar) == 0x0007C9, "Member 'UWBP_SnapNetPlayerBottomPlate_C::NewVar' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, SelectedDamageColor) == 0x0007CC, "Member 'UWBP_SnapNetPlayerBottomPlate_C::SelectedDamageColor' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, AllyDamageThresholdColor) == 0x0007E0, "Member 'UWBP_SnapNetPlayerBottomPlate_C::AllyDamageThresholdColor' has a wrong offset!");
static_assert(offsetof(UWBP_SnapNetPlayerBottomPlate_C, EnemyDamageThresholdColor) == 0x0007F4, "Member 'UWBP_SnapNetPlayerBottomPlate_C::EnemyDamageThresholdColor' has a wrong offset!");

}

