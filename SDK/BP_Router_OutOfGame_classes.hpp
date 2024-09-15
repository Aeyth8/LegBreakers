#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Router_OutOfGame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OdyUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Router_OutOfGame.BP_Router_OutOfGame_C
// 0x0008 (0x0500 - 0x04F8)
class UBP_Router_OutOfGame_C final : public UOdyUIRouter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Router_OutOfGame(int32 EntryPoint);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Router_OutOfGame_C">();
	}
	static class UBP_Router_OutOfGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Router_OutOfGame_C>();
	}
};
static_assert(alignof(UBP_Router_OutOfGame_C) == 0x000008, "Wrong alignment on UBP_Router_OutOfGame_C");
static_assert(sizeof(UBP_Router_OutOfGame_C) == 0x000500, "Wrong size on UBP_Router_OutOfGame_C");
static_assert(offsetof(UBP_Router_OutOfGame_C, UberGraphFrame) == 0x0004F8, "Member 'UBP_Router_OutOfGame_C::UberGraphFrame' has a wrong offset!");

}
