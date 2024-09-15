#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OdyServices

#include "Basic.hpp"


namespace SDK
{

// Enum OdyServices.EOdyWebSocketConnectionState
// NumValues: 0x0006
enum class EOdyWebSocketConnectionState : uint8
{
	Disconnected                             = 0,
	Connecting                               = 1,
	Connected                                = 2,
	Reconnecting                             = 3,
	Failed                                   = 4,
	EOdyWebSocketConnectionState_MAX         = 5,
};

// ScriptStruct OdyServices.OdyServicesWebSocketMessageBase
// 0x0008 (0x0008 - 0x0000)
struct FOdyServicesWebSocketMessageBase final
{
public:
	class FName                                   Type;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOdyServicesWebSocketMessageBase) == 0x000004, "Wrong alignment on FOdyServicesWebSocketMessageBase");
static_assert(sizeof(FOdyServicesWebSocketMessageBase) == 0x000008, "Wrong size on FOdyServicesWebSocketMessageBase");
static_assert(offsetof(FOdyServicesWebSocketMessageBase, Type) == 0x000000, "Member 'FOdyServicesWebSocketMessageBase::Type' has a wrong offset!");

// ScriptStruct OdyServices.WebSocketConnectionInfo
// 0x0060 (0x0060 - 0x0000)
struct FWebSocketConnectionInfo final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>            Headers;                                           // 0x0010(0x0050)(BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWebSocketConnectionInfo) == 0x000008, "Wrong alignment on FWebSocketConnectionInfo");
static_assert(sizeof(FWebSocketConnectionInfo) == 0x000060, "Wrong size on FWebSocketConnectionInfo");
static_assert(offsetof(FWebSocketConnectionInfo, URL) == 0x000000, "Member 'FWebSocketConnectionInfo::URL' has a wrong offset!");
static_assert(offsetof(FWebSocketConnectionInfo, Headers) == 0x000010, "Member 'FWebSocketConnectionInfo::Headers' has a wrong offset!");

// ScriptStruct OdyServices.ErrorResponseV1
// 0x0058 (0x0058 - 0x0000)
struct FErrorResponseV1 final
{
public:
	class FString                                 Message;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Type;                                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Code;                                              // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorTitleLocId;                                   // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ErrorMessageLocId;                                 // 0x0038(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TraceId;                                           // 0x0048(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FErrorResponseV1) == 0x000008, "Wrong alignment on FErrorResponseV1");
static_assert(sizeof(FErrorResponseV1) == 0x000058, "Wrong size on FErrorResponseV1");
static_assert(offsetof(FErrorResponseV1, Message) == 0x000000, "Member 'FErrorResponseV1::Message' has a wrong offset!");
static_assert(offsetof(FErrorResponseV1, Type) == 0x000010, "Member 'FErrorResponseV1::Type' has a wrong offset!");
static_assert(offsetof(FErrorResponseV1, Code) == 0x000020, "Member 'FErrorResponseV1::Code' has a wrong offset!");
static_assert(offsetof(FErrorResponseV1, ErrorTitleLocId) == 0x000028, "Member 'FErrorResponseV1::ErrorTitleLocId' has a wrong offset!");
static_assert(offsetof(FErrorResponseV1, ErrorMessageLocId) == 0x000038, "Member 'FErrorResponseV1::ErrorMessageLocId' has a wrong offset!");
static_assert(offsetof(FErrorResponseV1, TraceId) == 0x000048, "Member 'FErrorResponseV1::TraceId' has a wrong offset!");

// ScriptStruct OdyServices.ErrorResponseContainerV1
// 0x0058 (0x0058 - 0x0000)
struct FErrorResponseContainerV1
{
public:
	struct FErrorResponseV1                       Error;                                             // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};
static_assert(alignof(FErrorResponseContainerV1) == 0x000008, "Wrong alignment on FErrorResponseContainerV1");
static_assert(sizeof(FErrorResponseContainerV1) == 0x000058, "Wrong size on FErrorResponseContainerV1");
static_assert(offsetof(FErrorResponseContainerV1, Error) == 0x000000, "Member 'FErrorResponseContainerV1::Error' has a wrong offset!");

}
