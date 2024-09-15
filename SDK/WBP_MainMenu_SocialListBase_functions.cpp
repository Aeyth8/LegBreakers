#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_SocialListBase

#include "Basic.hpp"

#include "WBP_MainMenu_SocialListBase_classes.hpp"
#include "WBP_MainMenu_SocialListBase_parameters.hpp"


namespace SDK
{

// Function WBP_MainMenu_SocialListBase.WBP_MainMenu_SocialListBase_C.ExecuteUbergraph_WBP_MainMenu_SocialListBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_SocialListBase_C::ExecuteUbergraph_WBP_MainMenu_SocialListBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_SocialListBase_C", "ExecuteUbergraph_WBP_MainMenu_SocialListBase");

	Params::WBP_MainMenu_SocialListBase_C_ExecuteUbergraph_WBP_MainMenu_SocialListBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_SocialListBase.WBP_MainMenu_SocialListBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_SocialListBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_SocialListBase_C", "PreConstruct");

	Params::WBP_MainMenu_SocialListBase_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_SocialListBase.WBP_MainMenu_SocialListBase_C.SetVisual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     ColorDetails                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HasBG                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ColorBG                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowHeader                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Header_PaddingLeft                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Header_PaddingRight                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Width_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Height_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_SocialListBase_C::SetVisual(const struct FLinearColor& ColorDetails, bool HasBG, const struct FLinearColor& ColorBG, bool ShowHeader, float Header_PaddingLeft, float Header_PaddingRight, float Width_0, float Height_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_SocialListBase_C", "SetVisual");

	Params::WBP_MainMenu_SocialListBase_C_SetVisual Parms{};

	Parms.ColorDetails = std::move(ColorDetails);
	Parms.HasBG = HasBG;
	Parms.ColorBG = std::move(ColorBG);
	Parms.ShowHeader = ShowHeader;
	Parms.Header_PaddingLeft = Header_PaddingLeft;
	Parms.Header_PaddingRight = Header_PaddingRight;
	Parms.Width_0 = Width_0;
	Parms.Height_0 = Height_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

