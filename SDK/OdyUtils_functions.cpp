#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OdyUtils

#include "Basic.hpp"

#include "OdyUtils_classes.hpp"
#include "OdyUtils_parameters.hpp"


namespace SDK
{

// Function OdyUtils.OdyUtilsStatics.FlushPressedKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                InPlayerController                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOdyUtilsStatics::FlushPressedKeys(class APlayerController* InPlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "FlushPressedKeys");

	Params::OdyUtilsStatics_FlushPressedKeys Parms{};

	Parms.InPlayerController = InPlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OdyUtils.OdyUtilsStatics.GetBuildNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UOdyUtilsStatics::GetBuildNumber()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "GetBuildNumber");

	Params::OdyUtilsStatics_GetBuildNumber Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyUtils.OdyUtilsStatics.GetKeyName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                             Key                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UOdyUtilsStatics::GetKeyName(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "GetKeyName");

	Params::OdyUtilsStatics_GetKeyName Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyUtils.OdyUtilsStatics.GetPIEInstanceNumber
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOdyUtilsStatics::GetPIEInstanceNumber(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "GetPIEInstanceNumber");

	Params::OdyUtilsStatics_GetPIEInstanceNumber Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyUtils.OdyUtilsStatics.GetPlatformType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPlatformType                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EPlatformType UOdyUtilsStatics::GetPlatformType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "GetPlatformType");

	Params::OdyUtilsStatics_GetPlatformType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyUtils.OdyUtilsStatics.GetPlayerNickname
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*                InPlayerController                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOdyUtilsStatics::GetPlayerNickname(class APlayerController* InPlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "GetPlayerNickname");

	Params::OdyUtilsStatics_GetPlayerNickname Parms{};

	Parms.InPlayerController = InPlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyUtils.OdyUtilsStatics.GetPlaystationProductId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOdyUtilsStatics::GetPlaystationProductId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "GetPlaystationProductId");

	Params::OdyUtilsStatics_GetPlaystationProductId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyUtils.OdyUtilsStatics.GetPlayStationRegion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPlayStationRegion                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EPlayStationRegion UOdyUtilsStatics::GetPlayStationRegion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "GetPlayStationRegion");

	Params::OdyUtilsStatics_GetPlayStationRegion Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyUtils.OdyUtilsStatics.GetPlayStationType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPlayStationType                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EPlayStationType UOdyUtilsStatics::GetPlayStationType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "GetPlayStationType");

	Params::OdyUtilsStatics_GetPlayStationType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyUtils.OdyUtilsStatics.GetSuggestedResolutions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FIntPoint>                Resolutions                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOdyUtilsStatics::GetSuggestedResolutions(TArray<struct FIntPoint>* Resolutions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "GetSuggestedResolutions");

	Params::OdyUtilsStatics_GetSuggestedResolutions Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Resolutions != nullptr)
		*Resolutions = std::move(Parms.Resolutions);
}


// Function OdyUtils.OdyUtilsStatics.IsAchievementsNecessaryPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOdyUtilsStatics::IsAchievementsNecessaryPlatform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "IsAchievementsNecessaryPlatform");

	Params::OdyUtilsStatics_IsAchievementsNecessaryPlatform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyUtils.OdyUtilsStatics.IsConsolePlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOdyUtilsStatics::IsConsolePlatform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "IsConsolePlatform");

	Params::OdyUtilsStatics_IsConsolePlatform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyUtils.OdyUtilsStatics.IsMobilePlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOdyUtilsStatics::IsMobilePlatform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "IsMobilePlatform");

	Params::OdyUtilsStatics_IsMobilePlatform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyUtils.OdyUtilsStatics.IsPCPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOdyUtilsStatics::IsPCPlatform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "IsPCPlatform");

	Params::OdyUtilsStatics_IsPCPlatform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OdyUtils.OdyUtilsStatics.PostToDiscordWebhook
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           WebhookUrl                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Sender                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Message                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>                   FilesToAttach                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>                   OptionalFileContentTypes                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UOdyUtilsStatics::PostToDiscordWebhook(const class FString& WebhookUrl, const class FString& Sender, const class FString& Message, const TArray<class FString>& FilesToAttach, const TArray<class FString>& OptionalFileContentTypes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OdyUtilsStatics", "PostToDiscordWebhook");

	Params::OdyUtilsStatics_PostToDiscordWebhook Parms{};

	Parms.WebhookUrl = std::move(WebhookUrl);
	Parms.Sender = std::move(Sender);
	Parms.Message = std::move(Message);
	Parms.FilesToAttach = std::move(FilesToAttach);
	Parms.OptionalFileContentTypes = std::move(OptionalFileContentTypes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

