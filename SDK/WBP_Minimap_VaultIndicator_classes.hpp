#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Minimap_VaultIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_MinimapIndicator_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Minimap_VaultIndicator.WBP_Minimap_VaultIndicator_C
// 0x0018 (0x03E8 - 0x03D0)
class UWBP_Minimap_VaultIndicator_C final : public UWBP_MinimapIndicator_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Icon;                                              // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture*                               Texture;                                           // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Minimap_VaultIndicator(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Minimap_VaultIndicator_C">();
	}
	static class UWBP_Minimap_VaultIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Minimap_VaultIndicator_C>();
	}
};
static_assert(alignof(UWBP_Minimap_VaultIndicator_C) == 0x000008, "Wrong alignment on UWBP_Minimap_VaultIndicator_C");
static_assert(sizeof(UWBP_Minimap_VaultIndicator_C) == 0x0003E8, "Wrong size on UWBP_Minimap_VaultIndicator_C");
static_assert(offsetof(UWBP_Minimap_VaultIndicator_C, UberGraphFrame) == 0x0003D0, "Member 'UWBP_Minimap_VaultIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Minimap_VaultIndicator_C, Icon) == 0x0003D8, "Member 'UWBP_Minimap_VaultIndicator_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Minimap_VaultIndicator_C, Texture) == 0x0003E0, "Member 'UWBP_Minimap_VaultIndicator_C::Texture' has a wrong offset!");

}

