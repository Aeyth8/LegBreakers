#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameMode_MainMenu

#include "Basic.hpp"

#include "Matcha_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GameMode_MainMenu.GameMode_MainMenu_C
// 0x0008 (0x0330 - 0x0328)
class AGameMode_MainMenu_C final : public AMatchaSnapNetGameMode
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GameMode_MainMenu_C">();
	}
	static class AGameMode_MainMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameMode_MainMenu_C>();
	}
};
static_assert(alignof(AGameMode_MainMenu_C) == 0x000008, "Wrong alignment on AGameMode_MainMenu_C");
static_assert(sizeof(AGameMode_MainMenu_C) == 0x000330, "Wrong size on AGameMode_MainMenu_C");
static_assert(offsetof(AGameMode_MainMenu_C, DefaultSceneRoot) == 0x000328, "Member 'AGameMode_MainMenu_C::DefaultSceneRoot' has a wrong offset!");

}
