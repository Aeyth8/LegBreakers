#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OdyServices

#include "Basic.hpp"

#include "OdyServices_structs.hpp"


namespace SDK::Params
{

// Function OdyServices.OdyServicesModelBase.ConnectWebSocket
// 0x0068 (0x0068 - 0x0000)
struct OdyServicesModelBase_ConnectWebSocket final
{
public:
	struct FWebSocketConnectionInfo               ConnectionInfo;                                    // 0x0000(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(OdyServicesModelBase_ConnectWebSocket) == 0x000008, "Wrong alignment on OdyServicesModelBase_ConnectWebSocket");
static_assert(sizeof(OdyServicesModelBase_ConnectWebSocket) == 0x000068, "Wrong size on OdyServicesModelBase_ConnectWebSocket");
static_assert(offsetof(OdyServicesModelBase_ConnectWebSocket, ConnectionInfo) == 0x000000, "Member 'OdyServicesModelBase_ConnectWebSocket::ConnectionInfo' has a wrong offset!");
static_assert(offsetof(OdyServicesModelBase_ConnectWebSocket, ReturnValue) == 0x000060, "Member 'OdyServicesModelBase_ConnectWebSocket::ReturnValue' has a wrong offset!");

// DelegateFunction OdyServices.OdyServicesModelBase.OnStateChangedDynamic__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct OdyServicesModelBase_OnStateChangedDynamic__DelegateSignature final
{
public:
	class UOdyServicesModelBase*                  ServicesModelBase;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OdyServicesModelBase_OnStateChangedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on OdyServicesModelBase_OnStateChangedDynamic__DelegateSignature");
static_assert(sizeof(OdyServicesModelBase_OnStateChangedDynamic__DelegateSignature) == 0x000008, "Wrong size on OdyServicesModelBase_OnStateChangedDynamic__DelegateSignature");
static_assert(offsetof(OdyServicesModelBase_OnStateChangedDynamic__DelegateSignature, ServicesModelBase) == 0x000000, "Member 'OdyServicesModelBase_OnStateChangedDynamic__DelegateSignature::ServicesModelBase' has a wrong offset!");

// Function OdyServices.OdyServicesModelBase.SendWebSocketMessageRaw
// 0x0010 (0x0010 - 0x0000)
struct OdyServicesModelBase_SendWebSocketMessageRaw final
{
public:
	class FString                                 Message;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OdyServicesModelBase_SendWebSocketMessageRaw) == 0x000008, "Wrong alignment on OdyServicesModelBase_SendWebSocketMessageRaw");
static_assert(sizeof(OdyServicesModelBase_SendWebSocketMessageRaw) == 0x000010, "Wrong size on OdyServicesModelBase_SendWebSocketMessageRaw");
static_assert(offsetof(OdyServicesModelBase_SendWebSocketMessageRaw, Message) == 0x000000, "Member 'OdyServicesModelBase_SendWebSocketMessageRaw::Message' has a wrong offset!");

// Function OdyServices.OdyServicesModelBase.GetWebSocketConnectionState
// 0x0001 (0x0001 - 0x0000)
struct OdyServicesModelBase_GetWebSocketConnectionState final
{
public:
	EOdyWebSocketConnectionState                  ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OdyServicesModelBase_GetWebSocketConnectionState) == 0x000001, "Wrong alignment on OdyServicesModelBase_GetWebSocketConnectionState");
static_assert(sizeof(OdyServicesModelBase_GetWebSocketConnectionState) == 0x000001, "Wrong size on OdyServicesModelBase_GetWebSocketConnectionState");
static_assert(offsetof(OdyServicesModelBase_GetWebSocketConnectionState, ReturnValue) == 0x000000, "Member 'OdyServicesModelBase_GetWebSocketConnectionState::ReturnValue' has a wrong offset!");

}

