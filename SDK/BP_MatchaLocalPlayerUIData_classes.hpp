#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MatchaLocalPlayerUIData

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MatchaLocalPlayerUIData.BP_MatchaLocalPlayerUIData_C
// 0x0010 (0x04E0 - 0x04D0)
class UBP_MatchaLocalPlayerUIData_C final : public UMatchaLocalPlayerUIData
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MatchaCharacterUIData_C*            SelectedCharacterUIData;                           // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MatchaLocalPlayerUIData(int32 EntryPoint);
	void OnCharacterSelectChanged(int32 OldValue, int32 NewValue);
	void OnInit(const struct FInstancedStruct& InitParams);
	void OnMasterVolumeChanged(float Volume);
	void OnMusicVolumeChanged(float Volume);
	void OnSFXVolumeChanged(float Volume);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MatchaLocalPlayerUIData_C">();
	}
	static class UBP_MatchaLocalPlayerUIData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MatchaLocalPlayerUIData_C>();
	}
};
static_assert(alignof(UBP_MatchaLocalPlayerUIData_C) == 0x000008, "Wrong alignment on UBP_MatchaLocalPlayerUIData_C");
static_assert(sizeof(UBP_MatchaLocalPlayerUIData_C) == 0x0004E0, "Wrong size on UBP_MatchaLocalPlayerUIData_C");
static_assert(offsetof(UBP_MatchaLocalPlayerUIData_C, UberGraphFrame) == 0x0004D0, "Member 'UBP_MatchaLocalPlayerUIData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MatchaLocalPlayerUIData_C, SelectedCharacterUIData) == 0x0004D8, "Member 'UBP_MatchaLocalPlayerUIData_C::SelectedCharacterUIData' has a wrong offset!");

}

