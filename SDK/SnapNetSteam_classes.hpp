#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SnapNetSteam

#include "Basic.hpp"

#include "SnapNet_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class SnapNetSteam.SnapNetSteamTransport
// 0x0198 (0x01C0 - 0x0028)
class USnapNetSteamTransport final : public USnapNetTransport
{
public:
	uint8                                         Pad_28[0x198];                                     // 0x0028(0x0198)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetServerPort(int32 Port);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SnapNetSteamTransport">();
	}
	static class USnapNetSteamTransport* GetDefaultObj()
	{
		return GetDefaultObjImpl<USnapNetSteamTransport>();
	}
};
static_assert(alignof(USnapNetSteamTransport) == 0x000008, "Wrong alignment on USnapNetSteamTransport");
static_assert(sizeof(USnapNetSteamTransport) == 0x0001C0, "Wrong size on USnapNetSteamTransport");

// Class SnapNetSteam.SnapNetSteamInterface
// 0x0000 (0x0028 - 0x0028)
class ISnapNetSteamInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SnapNetSteamInterface">();
	}
	static class ISnapNetSteamInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISnapNetSteamInterface>();
	}
};
static_assert(alignof(ISnapNetSteamInterface) == 0x000008, "Wrong alignment on ISnapNetSteamInterface");
static_assert(sizeof(ISnapNetSteamInterface) == 0x000028, "Wrong size on ISnapNetSteamInterface");

}

