#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_Trap_AiMi_NeutralSpecialZone

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_Trap_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass E_Trap_AiMi_NeutralSpecialZone.E_Trap_AiMi_NeutralSpecialZone_C
// 0x0038 (0x0410 - 0x03D8)
class AE_Trap_AiMi_NeutralSpecialZone_C : public AE_Trap_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_E_Trap_AiMi_NeutralSpecialZone_C;   // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      VFX;                                               // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AMatchaSnapNetCharacterEntity*          MostRecentEnemyCharacter;                          // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AMatchaSnapNetCharacterEntity*          OwnerCharEntityRef;                                // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMatchaServerScript*                    ServerScript;                                      // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         GlitchMarkDuration;                                // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DamagePerTick;                                     // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_E_Trap_AiMi_NeutralSpecialZone(int32 EntryPoint);
	void OnCharacterOverlapEnded(class AMatchaSnapNetCharacterEntity* OverlappedCharacter);
	void OnCharacterOverlapStarted(class AMatchaSnapNetCharacterEntity* OverlappedCharacter);
	void OnPeriodicEffectInterval();
	void OnSpawnFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"E_Trap_AiMi_NeutralSpecialZone_C">();
	}
	static class AE_Trap_AiMi_NeutralSpecialZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AE_Trap_AiMi_NeutralSpecialZone_C>();
	}
};
static_assert(alignof(AE_Trap_AiMi_NeutralSpecialZone_C) == 0x000008, "Wrong alignment on AE_Trap_AiMi_NeutralSpecialZone_C");
static_assert(sizeof(AE_Trap_AiMi_NeutralSpecialZone_C) == 0x000410, "Wrong size on AE_Trap_AiMi_NeutralSpecialZone_C");
static_assert(offsetof(AE_Trap_AiMi_NeutralSpecialZone_C, UberGraphFrame_E_Trap_AiMi_NeutralSpecialZone_C) == 0x0003D8, "Member 'AE_Trap_AiMi_NeutralSpecialZone_C::UberGraphFrame_E_Trap_AiMi_NeutralSpecialZone_C' has a wrong offset!");
static_assert(offsetof(AE_Trap_AiMi_NeutralSpecialZone_C, VFX) == 0x0003E0, "Member 'AE_Trap_AiMi_NeutralSpecialZone_C::VFX' has a wrong offset!");
static_assert(offsetof(AE_Trap_AiMi_NeutralSpecialZone_C, Sphere) == 0x0003E8, "Member 'AE_Trap_AiMi_NeutralSpecialZone_C::Sphere' has a wrong offset!");
static_assert(offsetof(AE_Trap_AiMi_NeutralSpecialZone_C, MostRecentEnemyCharacter) == 0x0003F0, "Member 'AE_Trap_AiMi_NeutralSpecialZone_C::MostRecentEnemyCharacter' has a wrong offset!");
static_assert(offsetof(AE_Trap_AiMi_NeutralSpecialZone_C, OwnerCharEntityRef) == 0x0003F8, "Member 'AE_Trap_AiMi_NeutralSpecialZone_C::OwnerCharEntityRef' has a wrong offset!");
static_assert(offsetof(AE_Trap_AiMi_NeutralSpecialZone_C, ServerScript) == 0x000400, "Member 'AE_Trap_AiMi_NeutralSpecialZone_C::ServerScript' has a wrong offset!");
static_assert(offsetof(AE_Trap_AiMi_NeutralSpecialZone_C, GlitchMarkDuration) == 0x000408, "Member 'AE_Trap_AiMi_NeutralSpecialZone_C::GlitchMarkDuration' has a wrong offset!");
static_assert(offsetof(AE_Trap_AiMi_NeutralSpecialZone_C, DamagePerTick) == 0x00040C, "Member 'AE_Trap_AiMi_NeutralSpecialZone_C::DamagePerTick' has a wrong offset!");

}

