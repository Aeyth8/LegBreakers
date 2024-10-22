#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SpawnRegion_Mark

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Matcha_structs.hpp"
#include "OdyUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SpawnRegion_Mark.WBP_SpawnRegion_Mark_C
// 0x0070 (0x0408 - 0x0398)
class UWBP_SpawnRegion_Mark_C final : public UOdyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             CountEnemies_Text;                                 // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Enemies;                                           // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PlayersInRegion;                                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Region;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SpawnRegion_PlayerIcon_C*          WBP_SpawnRegion_PlayerIcon;                        // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SpawnRegion_PlayerIcon_C*          WBP_SpawnRegion_PlayerIcon_1;                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SpawnRegion_PlayerIcon_C*          WBP_SpawnRegion_PlayerIcon_2;                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESpawnRegion                                  SpawnRegion;                                       // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D9[0x7];                                      // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMatchaPlayerUIData*>            PlayersData;                                       // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         EnemiesCounter;                                    // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TeamCounter;                                       // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HigherValueCounter;                                // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MediumValueCounter;                                // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LowValueCount;                                     // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DebugEnemiesCounter;                               // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BindData(class UOdyUIData* NewUIData);
	void ClearPlayersInRegion();
	void Construct();
	void ExecuteUbergraph_WBP_SpawnRegion_Mark(int32 EntryPoint);
	void OnUIDataSet(class UOdyUIData* NewUIData);
	void OnWorldUIDataUpdated();
	void PreConstruct(bool IsDesignTime);
	void SetVisualEnemiesCounter(int32 Value);
	void TeamNumberChanged(int32 OldValue, int32 NewValue);
	void UnbindData(class UOdyUIData* OldUIData);
	void UpdateNumEnemiesInRegion(class UMatchaGameWorldUIData* WorldUIData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SpawnRegion_Mark_C">();
	}
	static class UWBP_SpawnRegion_Mark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SpawnRegion_Mark_C>();
	}
};
static_assert(alignof(UWBP_SpawnRegion_Mark_C) == 0x000008, "Wrong alignment on UWBP_SpawnRegion_Mark_C");
static_assert(sizeof(UWBP_SpawnRegion_Mark_C) == 0x000408, "Wrong size on UWBP_SpawnRegion_Mark_C");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, UberGraphFrame) == 0x000398, "Member 'UWBP_SpawnRegion_Mark_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, CountEnemies_Text) == 0x0003A0, "Member 'UWBP_SpawnRegion_Mark_C::CountEnemies_Text' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, Enemies) == 0x0003A8, "Member 'UWBP_SpawnRegion_Mark_C::Enemies' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, PlayersInRegion) == 0x0003B0, "Member 'UWBP_SpawnRegion_Mark_C::PlayersInRegion' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, Text_Region) == 0x0003B8, "Member 'UWBP_SpawnRegion_Mark_C::Text_Region' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, WBP_SpawnRegion_PlayerIcon) == 0x0003C0, "Member 'UWBP_SpawnRegion_Mark_C::WBP_SpawnRegion_PlayerIcon' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, WBP_SpawnRegion_PlayerIcon_1) == 0x0003C8, "Member 'UWBP_SpawnRegion_Mark_C::WBP_SpawnRegion_PlayerIcon_1' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, WBP_SpawnRegion_PlayerIcon_2) == 0x0003D0, "Member 'UWBP_SpawnRegion_Mark_C::WBP_SpawnRegion_PlayerIcon_2' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, SpawnRegion) == 0x0003D8, "Member 'UWBP_SpawnRegion_Mark_C::SpawnRegion' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, PlayersData) == 0x0003E0, "Member 'UWBP_SpawnRegion_Mark_C::PlayersData' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, EnemiesCounter) == 0x0003F0, "Member 'UWBP_SpawnRegion_Mark_C::EnemiesCounter' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, TeamCounter) == 0x0003F4, "Member 'UWBP_SpawnRegion_Mark_C::TeamCounter' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, HigherValueCounter) == 0x0003F8, "Member 'UWBP_SpawnRegion_Mark_C::HigherValueCounter' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, MediumValueCounter) == 0x0003FC, "Member 'UWBP_SpawnRegion_Mark_C::MediumValueCounter' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, LowValueCount) == 0x000400, "Member 'UWBP_SpawnRegion_Mark_C::LowValueCount' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnRegion_Mark_C, DebugEnemiesCounter) == 0x000404, "Member 'UWBP_SpawnRegion_Mark_C::DebugEnemiesCounter' has a wrong offset!");

}

