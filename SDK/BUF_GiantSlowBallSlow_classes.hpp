#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_GiantSlowBallSlow

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_GiantSlowBallSlow.BUF_GiantSlowBallSlow_C
// 0x0008 (0x0030 - 0x0028)
class UBUF_GiantSlowBallSlow_C final : public UMatchaCharacterBuff
{
public:
	class UClass*                                 SpeedGE;                                           // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;
	void OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_GiantSlowBallSlow_C">();
	}
	static class UBUF_GiantSlowBallSlow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_GiantSlowBallSlow_C>();
	}
};
static_assert(alignof(UBUF_GiantSlowBallSlow_C) == 0x000008, "Wrong alignment on UBUF_GiantSlowBallSlow_C");
static_assert(sizeof(UBUF_GiantSlowBallSlow_C) == 0x000030, "Wrong size on UBUF_GiantSlowBallSlow_C");
static_assert(offsetof(UBUF_GiantSlowBallSlow_C, SpeedGE) == 0x000028, "Member 'UBUF_GiantSlowBallSlow_C::SpeedGE' has a wrong offset!");

}

