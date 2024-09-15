#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Energized_GrantDisguise

#include "Basic.hpp"

#include "BUF_Energized_GrantDisguise_classes.hpp"
#include "BUF_Energized_GrantDisguise_parameters.hpp"


namespace SDK
{

// Function BUF_Energized_GrantDisguise.BUF_Energized_GrantDisguise_C.OnPostApplyIncomingHit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitInstigator                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMatchaHitData                   TakenHitData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bDidResistWithSuperArmor                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWasStunHitInsteadOfKnockBack                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CombinedDamage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CombinedShieldDamage                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_Energized_GrantDisguise_C::OnPostApplyIncomingHit(class AMatchaSnapNetCharacterEntity* BuffedCharacter, class AActor* HitInstigator, const struct FMatchaHitData& TakenHitData, bool bDidResistWithSuperArmor, bool bWasStunHitInsteadOfKnockBack, float CombinedDamage, float CombinedShieldDamage, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_Energized_GrantDisguise_C", "OnPostApplyIncomingHit");

	Params::BUF_Energized_GrantDisguise_C_OnPostApplyIncomingHit Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.HitInstigator = HitInstigator;
	Parms.TakenHitData = std::move(TakenHitData);
	Parms.bDidResistWithSuperArmor = bDidResistWithSuperArmor;
	Parms.bWasStunHitInsteadOfKnockBack = bWasStunHitInsteadOfKnockBack;
	Parms.CombinedDamage = CombinedDamage;
	Parms.CombinedShieldDamage = CombinedShieldDamage;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}

}
