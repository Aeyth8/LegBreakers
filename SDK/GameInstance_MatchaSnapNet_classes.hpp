#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameInstance_MatchaSnapNet

#include "Basic.hpp"

#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GameInstance_MatchaSnapNet.GameInstance_MatchaSnapNet_C
// 0x0000 (0x0770 - 0x0770)
class UGameInstance_MatchaSnapNet_C final : public UMatchaSnapNetGameInstance
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GameInstance_MatchaSnapNet_C">();
	}
	static class UGameInstance_MatchaSnapNet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameInstance_MatchaSnapNet_C>();
	}
};
static_assert(alignof(UGameInstance_MatchaSnapNet_C) == 0x000008, "Wrong alignment on UGameInstance_MatchaSnapNet_C");
static_assert(sizeof(UGameInstance_MatchaSnapNet_C) == 0x000770, "Wrong size on UGameInstance_MatchaSnapNet_C");

}

