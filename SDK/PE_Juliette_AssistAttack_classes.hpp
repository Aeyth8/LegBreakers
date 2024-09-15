#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PE_Juliette_AssistAttack

#include "Basic.hpp"

#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PE_Juliette_AssistAttack.PE_Juliette_AssistAttack_C
// 0x0010 (0x0628 - 0x0618)
class APE_Juliette_AssistAttack_C final : public AMatchaProjectileEntity
{
public:
	class UNiagaraComponent*                      Niagara;                                           // 0x0618(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          WorldCollision;                                    // 0x0620(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PE_Juliette_AssistAttack_C">();
	}
	static class APE_Juliette_AssistAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APE_Juliette_AssistAttack_C>();
	}
};
static_assert(alignof(APE_Juliette_AssistAttack_C) == 0x000008, "Wrong alignment on APE_Juliette_AssistAttack_C");
static_assert(sizeof(APE_Juliette_AssistAttack_C) == 0x000628, "Wrong size on APE_Juliette_AssistAttack_C");
static_assert(offsetof(APE_Juliette_AssistAttack_C, Niagara) == 0x000618, "Member 'APE_Juliette_AssistAttack_C::Niagara' has a wrong offset!");
static_assert(offsetof(APE_Juliette_AssistAttack_C, WorldCollision) == 0x000620, "Member 'APE_Juliette_AssistAttack_C::WorldCollision' has a wrong offset!");

}

