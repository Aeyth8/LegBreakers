#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Energized_GrappleGloves_Child

#include "Basic.hpp"

#include "BUF_GrappleGloves_classes.hpp"
#include "Matcha_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_Energized_GrappleGloves_Child.BUF_Energized_GrappleGloves_Child_C
// 0x0000 (0x0040 - 0x0040)
class UBUF_Energized_GrappleGloves_Child_C final : public UBUF_GrappleGloves_C
{
public:
	void OnCharacterMontageStart(class AMatchaSnapNetCharacterEntity* BuffedCharacter, float MontageDuration, EMatchaCharacterMontageType MontageType, EMatchaCharacterMontageType PreviousMontageType, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_Energized_GrappleGloves_Child_C">();
	}
	static class UBUF_Energized_GrappleGloves_Child_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_Energized_GrappleGloves_Child_C>();
	}
};
static_assert(alignof(UBUF_Energized_GrappleGloves_Child_C) == 0x000008, "Wrong alignment on UBUF_Energized_GrappleGloves_Child_C");
static_assert(sizeof(UBUF_Energized_GrappleGloves_Child_C) == 0x000040, "Wrong size on UBUF_Energized_GrappleGloves_Child_C");

}
