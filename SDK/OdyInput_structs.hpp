#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OdyInput

#include "Basic.hpp"

#include "InputCore_structs.hpp"


namespace SDK
{

// Enum OdyInput.EOdyInputDeviceType
// NumValues: 0x0006
enum class EOdyInputDeviceType : uint8
{
	Custom                                   = 0,
	PS4                                      = 1,
	PS5                                      = 2,
	SwitchPro                                = 3,
	GameCube                                 = 4,
	EOdyInputDeviceType_MAX                  = 5,
};

// Enum OdyInput.EOdyInputButtonState
// NumValues: 0x0005
enum class EOdyInputButtonState : uint8
{
	None                                     = 0,
	Pressed                                  = 1,
	Released                                 = 2,
	StillPressed                             = 3,
	EOdyInputButtonState_MAX                 = 4,
};

// ScriptStruct OdyInput.OdyInputDeviceAxisConfiguration
// 0x0028 (0x0028 - 0x0000)
struct FOdyInputDeviceAxisConfiguration final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   Key;                                               // 0x0008(0x0018)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInvert;                                           // 0x0020(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReportAsButton;                                   // 0x0021(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FOdyInputDeviceAxisConfiguration) == 0x000008, "Wrong alignment on FOdyInputDeviceAxisConfiguration");
static_assert(sizeof(FOdyInputDeviceAxisConfiguration) == 0x000028, "Wrong size on FOdyInputDeviceAxisConfiguration");
static_assert(offsetof(FOdyInputDeviceAxisConfiguration, bEnabled) == 0x000000, "Member 'FOdyInputDeviceAxisConfiguration::bEnabled' has a wrong offset!");
static_assert(offsetof(FOdyInputDeviceAxisConfiguration, Key) == 0x000008, "Member 'FOdyInputDeviceAxisConfiguration::Key' has a wrong offset!");
static_assert(offsetof(FOdyInputDeviceAxisConfiguration, bInvert) == 0x000020, "Member 'FOdyInputDeviceAxisConfiguration::bInvert' has a wrong offset!");
static_assert(offsetof(FOdyInputDeviceAxisConfiguration, bReportAsButton) == 0x000021, "Member 'FOdyInputDeviceAxisConfiguration::bReportAsButton' has a wrong offset!");

// ScriptStruct OdyInput.OdyInputDeviceButtonConfiguration
// 0x0028 (0x0028 - 0x0000)
struct FOdyInputDeviceButtonConfiguration final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   Key;                                               // 0x0008(0x0018)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReportRepeatedPress;                              // 0x0020(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FOdyInputDeviceButtonConfiguration) == 0x000008, "Wrong alignment on FOdyInputDeviceButtonConfiguration");
static_assert(sizeof(FOdyInputDeviceButtonConfiguration) == 0x000028, "Wrong size on FOdyInputDeviceButtonConfiguration");
static_assert(offsetof(FOdyInputDeviceButtonConfiguration, bEnabled) == 0x000000, "Member 'FOdyInputDeviceButtonConfiguration::bEnabled' has a wrong offset!");
static_assert(offsetof(FOdyInputDeviceButtonConfiguration, Key) == 0x000008, "Member 'FOdyInputDeviceButtonConfiguration::Key' has a wrong offset!");
static_assert(offsetof(FOdyInputDeviceButtonConfiguration, bReportRepeatedPress) == 0x000020, "Member 'FOdyInputDeviceButtonConfiguration::bReportRepeatedPress' has a wrong offset!");

// ScriptStruct OdyInput.OdyInputDeviceConfiguration
// 0x0038 (0x0038 - 0x0000)
struct FOdyInputDeviceConfiguration final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOdyInputDeviceType                           DeviceType;                                        // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOdyInputDeviceAxisConfiguration> AxisConfiguration;                                 // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FOdyInputDeviceButtonConfiguration> ButtonConfiguration;                               // 0x0018(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FOdyInputDeviceButtonConfiguration> HatConfiguration;                                  // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOdyInputDeviceConfiguration) == 0x000008, "Wrong alignment on FOdyInputDeviceConfiguration");
static_assert(sizeof(FOdyInputDeviceConfiguration) == 0x000038, "Wrong size on FOdyInputDeviceConfiguration");
static_assert(offsetof(FOdyInputDeviceConfiguration, bEnabled) == 0x000000, "Member 'FOdyInputDeviceConfiguration::bEnabled' has a wrong offset!");
static_assert(offsetof(FOdyInputDeviceConfiguration, DeviceType) == 0x000001, "Member 'FOdyInputDeviceConfiguration::DeviceType' has a wrong offset!");
static_assert(offsetof(FOdyInputDeviceConfiguration, AxisConfiguration) == 0x000008, "Member 'FOdyInputDeviceConfiguration::AxisConfiguration' has a wrong offset!");
static_assert(offsetof(FOdyInputDeviceConfiguration, ButtonConfiguration) == 0x000018, "Member 'FOdyInputDeviceConfiguration::ButtonConfiguration' has a wrong offset!");
static_assert(offsetof(FOdyInputDeviceConfiguration, HatConfiguration) == 0x000028, "Member 'FOdyInputDeviceConfiguration::HatConfiguration' has a wrong offset!");

}

