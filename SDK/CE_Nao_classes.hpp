#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CE_Nao

#include "Basic.hpp"

#include "SnapNet_structs.hpp"
#include "CharacterEntity_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CE_Nao.CE_Nao_C
// 0x0020 (0x3C80 - 0x3C60)
class ACE_Nao_C final : public ACharacterEntity_Base_C
{
public:
	struct FSnapNetPropertyBoolean                ShouldDroneBeVisible;                              // 0x3C60(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   DroneId;                                           // 0x3C78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CE_Nao_C">();
	}
	static class ACE_Nao_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACE_Nao_C>();
	}
};
static_assert(alignof(ACE_Nao_C) == 0x000010, "Wrong alignment on ACE_Nao_C");
static_assert(sizeof(ACE_Nao_C) == 0x003C80, "Wrong size on ACE_Nao_C");
static_assert(offsetof(ACE_Nao_C, ShouldDroneBeVisible) == 0x003C60, "Member 'ACE_Nao_C::ShouldDroneBeVisible' has a wrong offset!");
static_assert(offsetof(ACE_Nao_C, DroneId) == 0x003C78, "Member 'ACE_Nao_C::DroneId' has a wrong offset!");

}

