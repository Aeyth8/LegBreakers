#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUF_Hack_JetPack

#include "Basic.hpp"

#include "BUF_Hack_Base_classes.hpp"
#include "Matcha_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BUF_Hack_JetPack.BUF_Hack_JetPack_C
// 0x0018 (0x0050 - 0x0038)
class UBUF_Hack_JetPack_C final : public UBUF_Hack_Base_C
{
public:
	class UClass*                                 JumpTimesGE;                                       // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class AMatchaHitVolumeEntity>     JetFlareHV;                                        // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         JumpTimesAmp;                                      // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBuffApplied(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;
	void OnBuffRemoved(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EObjectRarity BuffRarity) const;
	void OnCharacterJump(class AMatchaSnapNetCharacterEntity* BuffedCharacter, EJumpType JumpType, EObjectRarity BuffRarity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUF_Hack_JetPack_C">();
	}
	static class UBUF_Hack_JetPack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUF_Hack_JetPack_C>();
	}
};
static_assert(alignof(UBUF_Hack_JetPack_C) == 0x000008, "Wrong alignment on UBUF_Hack_JetPack_C");
static_assert(sizeof(UBUF_Hack_JetPack_C) == 0x000050, "Wrong size on UBUF_Hack_JetPack_C");
static_assert(offsetof(UBUF_Hack_JetPack_C, JumpTimesGE) == 0x000038, "Member 'UBUF_Hack_JetPack_C::JumpTimesGE' has a wrong offset!");
static_assert(offsetof(UBUF_Hack_JetPack_C, JetFlareHV) == 0x000040, "Member 'UBUF_Hack_JetPack_C::JetFlareHV' has a wrong offset!");
static_assert(offsetof(UBUF_Hack_JetPack_C, JumpTimesAmp) == 0x000048, "Member 'UBUF_Hack_JetPack_C::JumpTimesAmp' has a wrong offset!");

}

