#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sentry

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Sentry_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class Sentry.SentryAttachment
// 0x0010 (0x0038 - 0x0028)
class USentryAttachment final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void InitializeWithData(const TArray<uint8>& Data, const class FString& Filename, const class FString& ContentType);
	void InitializeWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType);

	class FString GetContentType() const;
	TArray<uint8> GetData() const;
	class FString GetFilename() const;
	class FString GetPath() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SentryAttachment">();
	}
	static class USentryAttachment* GetDefaultObj()
	{
		return GetDefaultObjImpl<USentryAttachment>();
	}
};
static_assert(alignof(USentryAttachment) == 0x000008, "Wrong alignment on USentryAttachment");
static_assert(sizeof(USentryAttachment) == 0x000038, "Wrong size on USentryAttachment");

// Class Sentry.SentryBeforeSendHandler
// 0x0000 (0x0028 - 0x0028)
class USentryBeforeSendHandler final : public UObject
{
public:
	class USentryEvent* HandleBeforeSend(class USentryEvent* Event, class USentryHint* Hint);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SentryBeforeSendHandler">();
	}
	static class USentryBeforeSendHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<USentryBeforeSendHandler>();
	}
};
static_assert(alignof(USentryBeforeSendHandler) == 0x000008, "Wrong alignment on USentryBeforeSendHandler");
static_assert(sizeof(USentryBeforeSendHandler) == 0x000028, "Wrong size on USentryBeforeSendHandler");

// Class Sentry.SentryBreadcrumb
// 0x0010 (0x0038 - 0x0028)
class USentryBreadcrumb final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetCategory(const class FString& Category);
	void SetData(const TMap<class FString, class FString>& Data);
	void SetLevel(ESentryLevel Level);
	void SetMessage(const class FString& Message);
	void SetType(const class FString& Type);

	class FString GetCategory() const;
	TMap<class FString, class FString> GetData() const;
	ESentryLevel GetLevel() const;
	class FString GetMessage() const;
	class FString GetType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SentryBreadcrumb">();
	}
	static class USentryBreadcrumb* GetDefaultObj()
	{
		return GetDefaultObjImpl<USentryBreadcrumb>();
	}
};
static_assert(alignof(USentryBreadcrumb) == 0x000008, "Wrong alignment on USentryBreadcrumb");
static_assert(sizeof(USentryBreadcrumb) == 0x000038, "Wrong size on USentryBreadcrumb");

// Class Sentry.SentryEvent
// 0x0010 (0x0038 - 0x0028)
class USentryEvent final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class USentryEvent* CreateEventWithMessageAndLevel(const class FString& Message, ESentryLevel Level);

	void SetLevel(ESentryLevel Level);
	void SetMessage(const class FString& Message);

	ESentryLevel GetLevel() const;
	class FString GetMessage() const;
	bool IsCrash() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SentryEvent">();
	}
	static class USentryEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USentryEvent>();
	}
};
static_assert(alignof(USentryEvent) == 0x000008, "Wrong alignment on USentryEvent");
static_assert(sizeof(USentryEvent) == 0x000038, "Wrong size on USentryEvent");

// Class Sentry.SentryHint
// 0x0010 (0x0038 - 0x0028)
class USentryHint final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddAttachment(class USentryAttachment* Attachment);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SentryHint">();
	}
	static class USentryHint* GetDefaultObj()
	{
		return GetDefaultObjImpl<USentryHint>();
	}
};
static_assert(alignof(USentryHint) == 0x000008, "Wrong alignment on USentryHint");
static_assert(sizeof(USentryHint) == 0x000038, "Wrong size on USentryHint");

// Class Sentry.SentryId
// 0x0010 (0x0038 - 0x0028)
class USentryId final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class FString ToString() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SentryId">();
	}
	static class USentryId* GetDefaultObj()
	{
		return GetDefaultObjImpl<USentryId>();
	}
};
static_assert(alignof(USentryId) == 0x000008, "Wrong alignment on USentryId");
static_assert(sizeof(USentryId) == 0x000038, "Wrong size on USentryId");

// Class Sentry.SentryLibrary
// 0x0000 (0x0028 - 0x0028)
class USentryLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class FString ByteArrayToString(const TArray<uint8>& Array);
	static class USentryAttachment* CreateSentryAttachmentWithData(const TArray<uint8>& Data, const class FString& Filename, const class FString& ContentType);
	static class USentryAttachment* CreateSentryAttachmentWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType);
	static class USentryBreadcrumb* CreateSentryBreadcrumb(const class FString& Message, const class FString& Type, const class FString& Category, const TMap<class FString, class FString>& Data, ESentryLevel Level);
	static class USentryEvent* CreateSentryEvent(const class FString& Message, ESentryLevel Level);
	static class USentryUser* CreateSentryUser(const class FString& Email, const class FString& ID, const class FString& UserName, const class FString& IpAddress, const TMap<class FString, class FString>& Data);
	static class USentryUserFeedback* CreateSentryUserFeedback(class USentryId* EventId, const class FString& Name_0, const class FString& Email, const class FString& Comments);
	static class FString SaveStringToFile(const class FString& InString, const class FString& Filename);
	static TArray<uint8> StringToBytesArray(const class FString& InString);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SentryLibrary">();
	}
	static class USentryLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USentryLibrary>();
	}
};
static_assert(alignof(USentryLibrary) == 0x000008, "Wrong alignment on USentryLibrary");
static_assert(sizeof(USentryLibrary) == 0x000028, "Wrong size on USentryLibrary");

// Class Sentry.SentryScope
// 0x0010 (0x0038 - 0x0028)
class USentryScope final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddAttachment(class USentryAttachment* Attachment);
	void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);
	void Clear();
	void ClearAttachments();
	void ClearBreadcrumbs();
	void RemoveContext(const class FString& Key);
	void RemoveExtra(const class FString& Key);
	void RemoveTag(const class FString& Key);
	void SetContext(const class FString& Key, const TMap<class FString, class FString>& Values);
	void SetDist(const class FString& Dist);
	void SetEnvironment(const class FString& Environment);
	void SetExtras(const TMap<class FString, class FString>& Extras);
	void SetExtraValue(const class FString& Key, const class FString& Value);
	void SetFingerprint(const TArray<class FString>& Fingerprint);
	void SetLevel(ESentryLevel Level);
	void SetTags(const TMap<class FString, class FString>& Tags);
	void SetTagValue(const class FString& Key, const class FString& Value);

	class FString GetDist() const;
	class FString GetEnvironment() const;
	TMap<class FString, class FString> GetExtras() const;
	class FString GetExtraValue(const class FString& Key) const;
	TArray<class FString> GetFingerprint() const;
	ESentryLevel GetLevel() const;
	TMap<class FString, class FString> GetTags() const;
	class FString GetTagValue(const class FString& Key) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SentryScope">();
	}
	static class USentryScope* GetDefaultObj()
	{
		return GetDefaultObjImpl<USentryScope>();
	}
};
static_assert(alignof(USentryScope) == 0x000008, "Wrong alignment on USentryScope");
static_assert(sizeof(USentryScope) == 0x000038, "Wrong size on USentryScope");

// Class Sentry.SentrySettings
// 0x0108 (0x0130 - 0x0028)
class USentrySettings final : public UObject
{
public:
	bool                                          InitAutomatically;                                 // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Dsn;                                               // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Debug;                                             // 0x0040(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableAutoCrashCapturing;                          // 0x0041(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Environment;                                       // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SampleRate;                                        // 0x0058(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableAutoLogAttachment;                           // 0x005C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AttachStacktrace;                                  // 0x005D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          SendDefaultPii;                                    // 0x005E(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AttachScreenshot;                                  // 0x005F(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxBreadcrumbs;                                    // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutomaticBreadcrumbs                  AutomaticBreadcrumbs;                              // 0x0064(0x0005)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          EnableAutoSessionTracking;                         // 0x0069(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SessionTimeout;                                    // 0x006C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OverrideReleaseName;                               // 0x0070(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Release;                                           // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseProxy;                                          // 0x0088(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ProxyUrl;                                          // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USentryBeforeSendHandler>   BeforeSendHandler;                                 // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         InAppInclude;                                      // 0x00A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                         InAppExclude;                                      // 0x00B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FTagsPromotion                         TagsPromotion;                                     // 0x00C8(0x0006)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FEnableBuildConfigurations             EnableBuildConfigurations;                         // 0x00CE(0x0005)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FEnableBuildTargets                    EnableBuildTargets;                                // 0x00D3(0x0005)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FEnableBuildPlatforms                  EnableBuildPlatforms;                              // 0x00D8(0x0005)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          EnableForPromotedBuildsOnly;                       // 0x00DD(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UploadSymbolsAutomatically;                        // 0x00DE(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DF[0x1];                                       // 0x00DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ProjectName;                                       // 0x00E0(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 OrgName;                                           // 0x00F0(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AuthToken;                                         // 0x0100(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IncludeSources;                                    // 0x0110(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CrashReporterUrl;                                  // 0x0118(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_128[0x8];                                      // 0x0128(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SentrySettings">();
	}
	static class USentrySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USentrySettings>();
	}
};
static_assert(alignof(USentrySettings) == 0x000008, "Wrong alignment on USentrySettings");
static_assert(sizeof(USentrySettings) == 0x000130, "Wrong size on USentrySettings");
static_assert(offsetof(USentrySettings, InitAutomatically) == 0x000028, "Member 'USentrySettings::InitAutomatically' has a wrong offset!");
static_assert(offsetof(USentrySettings, Dsn) == 0x000030, "Member 'USentrySettings::Dsn' has a wrong offset!");
static_assert(offsetof(USentrySettings, Debug) == 0x000040, "Member 'USentrySettings::Debug' has a wrong offset!");
static_assert(offsetof(USentrySettings, EnableAutoCrashCapturing) == 0x000041, "Member 'USentrySettings::EnableAutoCrashCapturing' has a wrong offset!");
static_assert(offsetof(USentrySettings, Environment) == 0x000048, "Member 'USentrySettings::Environment' has a wrong offset!");
static_assert(offsetof(USentrySettings, SampleRate) == 0x000058, "Member 'USentrySettings::SampleRate' has a wrong offset!");
static_assert(offsetof(USentrySettings, EnableAutoLogAttachment) == 0x00005C, "Member 'USentrySettings::EnableAutoLogAttachment' has a wrong offset!");
static_assert(offsetof(USentrySettings, AttachStacktrace) == 0x00005D, "Member 'USentrySettings::AttachStacktrace' has a wrong offset!");
static_assert(offsetof(USentrySettings, SendDefaultPii) == 0x00005E, "Member 'USentrySettings::SendDefaultPii' has a wrong offset!");
static_assert(offsetof(USentrySettings, AttachScreenshot) == 0x00005F, "Member 'USentrySettings::AttachScreenshot' has a wrong offset!");
static_assert(offsetof(USentrySettings, MaxBreadcrumbs) == 0x000060, "Member 'USentrySettings::MaxBreadcrumbs' has a wrong offset!");
static_assert(offsetof(USentrySettings, AutomaticBreadcrumbs) == 0x000064, "Member 'USentrySettings::AutomaticBreadcrumbs' has a wrong offset!");
static_assert(offsetof(USentrySettings, EnableAutoSessionTracking) == 0x000069, "Member 'USentrySettings::EnableAutoSessionTracking' has a wrong offset!");
static_assert(offsetof(USentrySettings, SessionTimeout) == 0x00006C, "Member 'USentrySettings::SessionTimeout' has a wrong offset!");
static_assert(offsetof(USentrySettings, OverrideReleaseName) == 0x000070, "Member 'USentrySettings::OverrideReleaseName' has a wrong offset!");
static_assert(offsetof(USentrySettings, Release) == 0x000078, "Member 'USentrySettings::Release' has a wrong offset!");
static_assert(offsetof(USentrySettings, UseProxy) == 0x000088, "Member 'USentrySettings::UseProxy' has a wrong offset!");
static_assert(offsetof(USentrySettings, ProxyUrl) == 0x000090, "Member 'USentrySettings::ProxyUrl' has a wrong offset!");
static_assert(offsetof(USentrySettings, BeforeSendHandler) == 0x0000A0, "Member 'USentrySettings::BeforeSendHandler' has a wrong offset!");
static_assert(offsetof(USentrySettings, InAppInclude) == 0x0000A8, "Member 'USentrySettings::InAppInclude' has a wrong offset!");
static_assert(offsetof(USentrySettings, InAppExclude) == 0x0000B8, "Member 'USentrySettings::InAppExclude' has a wrong offset!");
static_assert(offsetof(USentrySettings, TagsPromotion) == 0x0000C8, "Member 'USentrySettings::TagsPromotion' has a wrong offset!");
static_assert(offsetof(USentrySettings, EnableBuildConfigurations) == 0x0000CE, "Member 'USentrySettings::EnableBuildConfigurations' has a wrong offset!");
static_assert(offsetof(USentrySettings, EnableBuildTargets) == 0x0000D3, "Member 'USentrySettings::EnableBuildTargets' has a wrong offset!");
static_assert(offsetof(USentrySettings, EnableBuildPlatforms) == 0x0000D8, "Member 'USentrySettings::EnableBuildPlatforms' has a wrong offset!");
static_assert(offsetof(USentrySettings, EnableForPromotedBuildsOnly) == 0x0000DD, "Member 'USentrySettings::EnableForPromotedBuildsOnly' has a wrong offset!");
static_assert(offsetof(USentrySettings, UploadSymbolsAutomatically) == 0x0000DE, "Member 'USentrySettings::UploadSymbolsAutomatically' has a wrong offset!");
static_assert(offsetof(USentrySettings, ProjectName) == 0x0000E0, "Member 'USentrySettings::ProjectName' has a wrong offset!");
static_assert(offsetof(USentrySettings, OrgName) == 0x0000F0, "Member 'USentrySettings::OrgName' has a wrong offset!");
static_assert(offsetof(USentrySettings, AuthToken) == 0x000100, "Member 'USentrySettings::AuthToken' has a wrong offset!");
static_assert(offsetof(USentrySettings, IncludeSources) == 0x000110, "Member 'USentrySettings::IncludeSources' has a wrong offset!");
static_assert(offsetof(USentrySettings, CrashReporterUrl) == 0x000118, "Member 'USentrySettings::CrashReporterUrl' has a wrong offset!");

// Class Sentry.SentrySubsystem
// 0x0040 (0x0070 - 0x0030)
class USentrySubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class USentryBeforeSendHandler*               BeforeSendHandler;                                 // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_48[0x28];                                      // 0x0048(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);
	void AddBreadcrumbWithParams(const class FString& Message, const class FString& Category, const class FString& Type, const TMap<class FString, class FString>& Data, ESentryLevel Level);
	class USentryId* CaptureEvent(class USentryEvent* Event);
	class USentryId* CaptureEventWithScope(class USentryEvent* Event, const TDelegate<void(class USentryScope* Scope)>& OnConfigureScope);
	class USentryId* CaptureMessage(const class FString& Message, ESentryLevel Level);
	class USentryId* CaptureMessageWithScope(const class FString& Message, const TDelegate<void(class USentryScope* Scope)>& OnConfigureScope, ESentryLevel Level);
	void CaptureUserFeedback(class USentryUserFeedback* UserFeedback);
	void CaptureUserFeedbackWithParams(class USentryId* EventId, const class FString& Email, const class FString& Comments, const class FString& Name_0);
	void ClearBreadcrumbs();
	void Close();
	void ConfigureScope(const TDelegate<void(class USentryScope* Scope)>& OnConfigureScope);
	void EndSession();
	void Initialize();
	void InitializeWithSettings(const TDelegate<void(class USentrySettings* Settings)>& OnConfigureSettings);
	bool IsEnabled();
	void RemoveTag(const class FString& Key);
	void RemoveUser();
	void SetContext(const class FString& Key, const TMap<class FString, class FString>& Values);
	void SetLevel(ESentryLevel Level);
	void SetTag(const class FString& Key, const class FString& Value);
	void SetUser(class USentryUser* User);
	void StartSession();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SentrySubsystem">();
	}
	static class USentrySubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<USentrySubsystem>();
	}
};
static_assert(alignof(USentrySubsystem) == 0x000008, "Wrong alignment on USentrySubsystem");
static_assert(sizeof(USentrySubsystem) == 0x000070, "Wrong size on USentrySubsystem");
static_assert(offsetof(USentrySubsystem, BeforeSendHandler) == 0x000040, "Member 'USentrySubsystem::BeforeSendHandler' has a wrong offset!");

// Class Sentry.SentryUser
// 0x0010 (0x0038 - 0x0028)
class USentryUser final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetData(const TMap<class FString, class FString>& Data);
	void SetEmail(const class FString& Email);
	void SetId(const class FString& ID);
	void SetIpAddress(const class FString& IpAddress);
	void SetUsername(const class FString& UserName);

	TMap<class FString, class FString> GetData() const;
	class FString GetEmail() const;
	class FString GetId() const;
	class FString GetIpAddress() const;
	class FString GetUsername() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SentryUser">();
	}
	static class USentryUser* GetDefaultObj()
	{
		return GetDefaultObjImpl<USentryUser>();
	}
};
static_assert(alignof(USentryUser) == 0x000008, "Wrong alignment on USentryUser");
static_assert(sizeof(USentryUser) == 0x000038, "Wrong size on USentryUser");

// Class Sentry.SentryUserFeedback
// 0x0010 (0x0038 - 0x0028)
class USentryUserFeedback final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Initialize(class USentryId* EventId);
	void SetComment(const class FString& Comments);
	void SetEmail(const class FString& Email);
	void SetName(const class FString& Name_0);

	class FString GetComment() const;
	class FString GetEmail() const;
	class FString GetName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SentryUserFeedback">();
	}
	static class USentryUserFeedback* GetDefaultObj()
	{
		return GetDefaultObjImpl<USentryUserFeedback>();
	}
};
static_assert(alignof(USentryUserFeedback) == 0x000008, "Wrong alignment on USentryUserFeedback");
static_assert(sizeof(USentryUserFeedback) == 0x000038, "Wrong size on USentryUserFeedback");

}

