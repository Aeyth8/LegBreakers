#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WwiseFileHandler

#include "Basic.hpp"

#include "WwiseFileHandler_classes.hpp"
#include "WwiseFileHandler_parameters.hpp"


namespace SDK
{

// Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           ExternalSourceName                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   MediaId                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseExternalSourceStatics::SetExternalSourceMediaById(const class FString& ExternalSourceName, const int32 MediaId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WwiseExternalSourceStatics", "SetExternalSourceMediaById");

	Params::WwiseExternalSourceStatics_SetExternalSourceMediaById Parms{};

	Parms.ExternalSourceName = std::move(ExternalSourceName);
	Parms.MediaId = MediaId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           ExternalSourceName                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           MediaName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseExternalSourceStatics::SetExternalSourceMediaByName(const class FString& ExternalSourceName, const class FString& MediaName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WwiseExternalSourceStatics", "SetExternalSourceMediaByName");

	Params::WwiseExternalSourceStatics_SetExternalSourceMediaByName Parms{};

	Parms.ExternalSourceName = std::move(ExternalSourceName);
	Parms.MediaName = std::move(MediaName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaWithIds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FAkUniqueID                      ExternalSourceCookie                                   (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                                   MediaId                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseExternalSourceStatics::SetExternalSourceMediaWithIds(const struct FAkUniqueID& ExternalSourceCookie, const int32 MediaId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WwiseExternalSourceStatics", "SetExternalSourceMediaWithIds");

	Params::WwiseExternalSourceStatics_SetExternalSourceMediaWithIds Parms{};

	Parms.ExternalSourceCookie = std::move(ExternalSourceCookie);
	Parms.MediaId = MediaId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

