#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PE_Rune_SideSpecial

#include "Basic.hpp"

#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PE_Rune_SideSpecial.PE_Rune_SideSpecial_C
// 0x0008 (0x0620 - 0x0618)
class APE_Rune_SideSpecial_C final : public AMatchaProjectileEntity
{
public:
	class UNiagaraComponent*                      Niagara;                                           // 0x0618(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PE_Rune_SideSpecial_C">();
	}
	static class APE_Rune_SideSpecial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APE_Rune_SideSpecial_C>();
	}
};
static_assert(alignof(APE_Rune_SideSpecial_C) == 0x000008, "Wrong alignment on APE_Rune_SideSpecial_C");
static_assert(sizeof(APE_Rune_SideSpecial_C) == 0x000620, "Wrong size on APE_Rune_SideSpecial_C");
static_assert(offsetof(APE_Rune_SideSpecial_C, Niagara) == 0x000618, "Member 'APE_Rune_SideSpecial_C::Niagara' has a wrong offset!");

}

