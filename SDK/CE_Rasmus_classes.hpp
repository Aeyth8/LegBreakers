#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CE_Rasmus

#include "Basic.hpp"

#include "CharacterEntity_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CE_Rasmus.CE_Rasmus_C
// 0x0000 (0x3C60 - 0x3C60)
class ACE_Rasmus_C final : public ACharacterEntity_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CE_Rasmus_C">();
	}
	static class ACE_Rasmus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACE_Rasmus_C>();
	}
};
static_assert(alignof(ACE_Rasmus_C) == 0x000010, "Wrong alignment on ACE_Rasmus_C");
static_assert(sizeof(ACE_Rasmus_C) == 0x003C60, "Wrong size on ACE_Rasmus_C");

}

