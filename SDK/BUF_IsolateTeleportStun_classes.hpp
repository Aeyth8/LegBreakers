#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_IsolateTeleportStun

#include "Basic.hpp"

#include "Matcha_structs.hpp"
#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_IsolateTeleportStun.BUF_IsolateTeleportStun_C
// 0x0000 (0x0028 - 0x0028)
class UBUF_IsolateTeleportStun_C final : public UMatchaCharacterBuff
{
public:
	void OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_IsolateTeleportStun_C">();
	}
	static class UBUF_IsolateTeleportStun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_IsolateTeleportStun_C>();
	}
};
static_assert(alignof(UBUF_IsolateTeleportStun_C) == 0x000008, "Wrong alignment on UBUF_IsolateTeleportStun_C");
static_assert(sizeof(UBUF_IsolateTeleportStun_C) == 0x000028, "Wrong size on UBUF_IsolateTeleportStun_C");

}

