#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_OnUptiltFireball_Energized_Base

#include "Basic.hpp"

#include "BUF_OnUptiltFireball_Energized_Base_classes.hpp"
#include "BUF_OnUptiltFireball_Energized_Base_parameters.hpp"


namespace SDK
{

// Function BUF_OnUptiltFireball_Energized_Base.BUF_OnUptiltFireball_Energized_Base_C.OnMontageSpawnedHitBox
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AMatchaSnapNetCharacterEntity*    BuffedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EMatchaCharacterMontageType             MontageType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MontageHitBoxCount                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EObjectRarity                           BuffRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUF_OnUptiltFireball_Energized_Base_C::OnMontageSpawnedHitBox(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EMatchaCharacterMontageType MontageType, int32 MontageHitBoxCount, EObjectRarity BuffRarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUF_OnUptiltFireball_Energized_Base_C", "OnMontageSpawnedHitBox");

	Params::BUF_OnUptiltFireball_Energized_Base_C_OnMontageSpawnedHitBox Parms{};

	Parms.BuffedCharacter = BuffedCharacter;
	Parms.MontageType = MontageType;
	Parms.MontageHitBoxCount = MontageHitBoxCount;
	Parms.BuffRarity = BuffRarity;

	UObject::ProcessEvent(Func, &Parms);
}

}
