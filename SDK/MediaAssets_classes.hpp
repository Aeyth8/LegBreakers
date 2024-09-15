#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaAssets

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MediaAssets_structs.hpp"
#include "AudioMixer_classes.hpp"


namespace SDK
{

// Class MediaAssets.MediaPlayer
// 0x0140 (0x0168 - 0x0028)
class UMediaPlayer final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndReached;                                      // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnMediaClosed;                                     // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnMediaOpened;                                     // 0x0050(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnMediaOpenFailed;                                 // 0x0060(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPlaybackResumed;                                 // 0x0070(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPlaybackSuspended;                               // 0x0080(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSeekCompleted;                                   // 0x0090(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnTracksChanged;                                   // 0x00A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnMetadataChanged;                                 // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FTimespan                              CacheAhead;                                        // 0x00C0(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                              CacheBehind;                                       // 0x00C8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                              CacheBehindGame;                                   // 0x00D0(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          NativeAudioOut;                                    // 0x00D8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PlayOnOpen;                                        // 0x00D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DA[0x2];                                       // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         Shuffle : 1;                                       // 0x00DC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Loop : 1;                                          // 0x00DC(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlaylist*                         Playlist;                                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         PlaylistIndex;                                     // 0x00E8(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              TimeDelay;                                         // 0x00F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         HorizontalFieldOfView;                             // 0x00F8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         VerticalFieldOfView;                               // 0x00FC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                               ViewRotation;                                      // 0x0100(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_118[0x28];                                     // 0x0118(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  PlayerGuid;                                        // 0x0140(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_150[0x18];                                     // 0x0150(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool CanPlaySource(class UMediaSource* MediaSource);
	bool CanPlayUrl(const class FString& URL);
	void Close();
	struct FFloatInterval GetPlaybackTimeRange(EMediaTimeRangeBPType InRangeToGet);
	bool Next();
	bool OpenFile(const class FString& FilePath);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32 Index_0);
	bool OpenSource(class UMediaSource* MediaSource);
	void OpenSourceLatent(const class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess);
	bool OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options);
	bool OpenUrl(const class FString& URL);
	bool Pause();
	bool Play();
	void PlayAndSeek();
	bool Previous();
	bool Reopen();
	bool Rewind();
	bool Seek(const struct FTimespan& Time);
	bool SelectTrack(EMediaPlayerTrack TrackType, int32 TrackIndex);
	void SetBlockOnTime(const struct FTimespan& Time);
	void SetDesiredPlayerName(class FName PlayerName);
	bool SetLooping(bool Looping);
	void SetMediaOptions(const class UMediaSource* Options);
	bool SetNativeVolume(float Volume);
	bool SetPlaybackTimeRange(const struct FFloatInterval& InTimeRange);
	bool SetRate(float Rate);
	void SetTimeDelay(const struct FTimespan& TimeDelay_0);
	bool SetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);
	bool SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate);
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);

	bool CanPause() const;
	int32 GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex) const;
	int32 GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex) const;
	class FString GetAudioTrackType(int32 TrackIndex, int32 FormatIndex) const;
	class FName GetDesiredPlayerName() const;
	struct FTimespan GetDisplayTime() const;
	class UMediaTimeStampInfo* GetDisplayTimeStamp() const;
	struct FTimespan GetDuration() const;
	float GetHorizontalFieldOfView() const;
	TMap<class FString, struct FMediaMetadataItemsBPT> GetMediaMetadataItems() const;
	class FText GetMediaName() const;
	int32 GetNumTrackFormats(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	int32 GetNumTracks(EMediaPlayerTrack TrackType) const;
	class FName GetPlayerName() const;
	class UMediaPlaylist* GetPlaylist() const;
	int32 GetPlaylistIndex() const;
	float GetRate() const;
	int32 GetSelectedTrack(EMediaPlayerTrack TrackType) const;
	void GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned) const;
	struct FTimespan GetTime() const;
	struct FTimespan GetTimeDelay() const;
	class UMediaTimeStampInfo* GetTimeStamp() const;
	class FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	int32 GetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	class FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	class FString GetUrl() const;
	float GetVerticalFieldOfView() const;
	float GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex) const;
	struct FIntPoint GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex) const;
	float GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex) const;
	struct FFloatRange GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex) const;
	class FString GetVideoTrackType(int32 TrackIndex, int32 FormatIndex) const;
	struct FRotator GetViewRotation() const;
	bool HasError() const;
	bool IsBuffering() const;
	bool IsClosed() const;
	bool IsConnecting() const;
	bool IsLooping() const;
	bool IsPaused() const;
	bool IsPlaying() const;
	bool IsPreparing() const;
	bool IsReady() const;
	bool SupportsPlaybackTimeRange() const;
	bool SupportsRate(float Rate, bool Unthinned) const;
	bool SupportsScrubbing() const;
	bool SupportsSeeking() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlayer">();
	}
	static class UMediaPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlayer>();
	}
};
static_assert(alignof(UMediaPlayer) == 0x000008, "Wrong alignment on UMediaPlayer");
static_assert(sizeof(UMediaPlayer) == 0x000168, "Wrong size on UMediaPlayer");
static_assert(offsetof(UMediaPlayer, OnEndReached) == 0x000030, "Member 'UMediaPlayer::OnEndReached' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMediaClosed) == 0x000040, "Member 'UMediaPlayer::OnMediaClosed' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMediaOpened) == 0x000050, "Member 'UMediaPlayer::OnMediaOpened' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMediaOpenFailed) == 0x000060, "Member 'UMediaPlayer::OnMediaOpenFailed' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnPlaybackResumed) == 0x000070, "Member 'UMediaPlayer::OnPlaybackResumed' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnPlaybackSuspended) == 0x000080, "Member 'UMediaPlayer::OnPlaybackSuspended' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnSeekCompleted) == 0x000090, "Member 'UMediaPlayer::OnSeekCompleted' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnTracksChanged) == 0x0000A0, "Member 'UMediaPlayer::OnTracksChanged' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMetadataChanged) == 0x0000B0, "Member 'UMediaPlayer::OnMetadataChanged' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, CacheAhead) == 0x0000C0, "Member 'UMediaPlayer::CacheAhead' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, CacheBehind) == 0x0000C8, "Member 'UMediaPlayer::CacheBehind' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, CacheBehindGame) == 0x0000D0, "Member 'UMediaPlayer::CacheBehindGame' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, NativeAudioOut) == 0x0000D8, "Member 'UMediaPlayer::NativeAudioOut' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, PlayOnOpen) == 0x0000D9, "Member 'UMediaPlayer::PlayOnOpen' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, Playlist) == 0x0000E0, "Member 'UMediaPlayer::Playlist' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, PlaylistIndex) == 0x0000E8, "Member 'UMediaPlayer::PlaylistIndex' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, TimeDelay) == 0x0000F0, "Member 'UMediaPlayer::TimeDelay' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, HorizontalFieldOfView) == 0x0000F8, "Member 'UMediaPlayer::HorizontalFieldOfView' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, VerticalFieldOfView) == 0x0000FC, "Member 'UMediaPlayer::VerticalFieldOfView' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, ViewRotation) == 0x000100, "Member 'UMediaPlayer::ViewRotation' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, PlayerGuid) == 0x000140, "Member 'UMediaPlayer::PlayerGuid' has a wrong offset!");

// Class MediaAssets.MediaSourceRendererInterface
// 0x0000 (0x0028 - 0x0028)
class IMediaSourceRendererInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaSourceRendererInterface">();
	}
	static class IMediaSourceRendererInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMediaSourceRendererInterface>();
	}
};
static_assert(alignof(IMediaSourceRendererInterface) == 0x000008, "Wrong alignment on IMediaSourceRendererInterface");
static_assert(sizeof(IMediaSourceRendererInterface) == 0x000028, "Wrong size on IMediaSourceRendererInterface");

// Class MediaAssets.MediaTexture
// 0x00E8 (0x0218 - 0x0130)
class UMediaTexture final : public UTexture
{
public:
	ETextureAddress                               AddressX;                                          // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressY;                                          // 0x0131(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AutoClear;                                         // 0x0132(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_133[0x1];                                      // 0x0133(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ClearColor;                                        // 0x0134(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableGenMips;                                     // 0x0144(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         NumMips;                                           // 0x0145(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          NewStyleOutput;                                    // 0x0146(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_147[0x1];                                      // 0x0147(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CurrentAspectRatio;                                // 0x0148(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMediaTextureOrientation                      CurrentOrientation;                                // 0x014C(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14D[0x3];                                      // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           MediaPlayer;                                       // 0x0150(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_158[0xC0];                                     // 0x0158(0x00C0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	void UpdateResource();

	float GetAspectRatio() const;
	int32 GetHeight() const;
	class UMediaPlayer* GetMediaPlayer() const;
	int32 GetTextureNumMips() const;
	int32 GetWidth() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaTexture">();
	}
	static class UMediaTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaTexture>();
	}
};
static_assert(alignof(UMediaTexture) == 0x000008, "Wrong alignment on UMediaTexture");
static_assert(sizeof(UMediaTexture) == 0x000218, "Wrong size on UMediaTexture");
static_assert(offsetof(UMediaTexture, AddressX) == 0x000130, "Member 'UMediaTexture::AddressX' has a wrong offset!");
static_assert(offsetof(UMediaTexture, AddressY) == 0x000131, "Member 'UMediaTexture::AddressY' has a wrong offset!");
static_assert(offsetof(UMediaTexture, AutoClear) == 0x000132, "Member 'UMediaTexture::AutoClear' has a wrong offset!");
static_assert(offsetof(UMediaTexture, ClearColor) == 0x000134, "Member 'UMediaTexture::ClearColor' has a wrong offset!");
static_assert(offsetof(UMediaTexture, EnableGenMips) == 0x000144, "Member 'UMediaTexture::EnableGenMips' has a wrong offset!");
static_assert(offsetof(UMediaTexture, NumMips) == 0x000145, "Member 'UMediaTexture::NumMips' has a wrong offset!");
static_assert(offsetof(UMediaTexture, NewStyleOutput) == 0x000146, "Member 'UMediaTexture::NewStyleOutput' has a wrong offset!");
static_assert(offsetof(UMediaTexture, CurrentAspectRatio) == 0x000148, "Member 'UMediaTexture::CurrentAspectRatio' has a wrong offset!");
static_assert(offsetof(UMediaTexture, CurrentOrientation) == 0x00014C, "Member 'UMediaTexture::CurrentOrientation' has a wrong offset!");
static_assert(offsetof(UMediaTexture, MediaPlayer) == 0x000150, "Member 'UMediaTexture::MediaPlayer' has a wrong offset!");

// Class MediaAssets.MediaSource
// 0x0058 (0x0080 - 0x0028)
class UMediaSource : public UObject
{
public:
	uint8                                         Pad_28[0x58];                                      // 0x0028(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMediaOptionBool(const class FName& Key, bool Value);
	void SetMediaOptionFloat(const class FName& Key, float Value);
	void SetMediaOptionInt64(const class FName& Key, int64 Value);
	void SetMediaOptionString(const class FName& Key, const class FString& Value);

	class FString GetUrl() const;
	bool Validate() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaSource">();
	}
	static class UMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaSource>();
	}
};
static_assert(alignof(UMediaSource) == 0x000008, "Wrong alignment on UMediaSource");
static_assert(sizeof(UMediaSource) == 0x000080, "Wrong size on UMediaSource");

// Class MediaAssets.BaseMediaSource
// 0x0008 (0x0088 - 0x0080)
class UBaseMediaSource : public UMediaSource
{
public:
	class FName                                   PlayerName;                                        // 0x0080(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BaseMediaSource">();
	}
	static class UBaseMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseMediaSource>();
	}
};
static_assert(alignof(UBaseMediaSource) == 0x000008, "Wrong alignment on UBaseMediaSource");
static_assert(sizeof(UBaseMediaSource) == 0x000088, "Wrong size on UBaseMediaSource");
static_assert(offsetof(UBaseMediaSource, PlayerName) == 0x000080, "Member 'UBaseMediaSource::PlayerName' has a wrong offset!");

// Class MediaAssets.FileMediaSource
// 0x0028 (0x00B0 - 0x0088)
class UFileMediaSource final : public UBaseMediaSource
{
public:
	class FString                                 FilePath;                                          // 0x0088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PrecacheFile;                                      // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_99[0x17];                                      // 0x0099(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetFilePath(const class FString& Path);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FileMediaSource">();
	}
	static class UFileMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFileMediaSource>();
	}
};
static_assert(alignof(UFileMediaSource) == 0x000008, "Wrong alignment on UFileMediaSource");
static_assert(sizeof(UFileMediaSource) == 0x0000B0, "Wrong size on UFileMediaSource");
static_assert(offsetof(UFileMediaSource, FilePath) == 0x000088, "Member 'UFileMediaSource::FilePath' has a wrong offset!");
static_assert(offsetof(UFileMediaSource, PrecacheFile) == 0x000098, "Member 'UFileMediaSource::PrecacheFile' has a wrong offset!");

// Class MediaAssets.MediaComponent
// 0x0010 (0x00B0 - 0x00A0)
class UMediaComponent final : public UActorComponent
{
public:
	class UMediaTexture*                          MediaTexture;                                      // 0x00A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaPlayer*                           MediaPlayer;                                       // 0x00A8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, Interp, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	class UMediaPlayer* GetMediaPlayer() const;
	class UMediaTexture* GetMediaTexture() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaComponent">();
	}
	static class UMediaComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaComponent>();
	}
};
static_assert(alignof(UMediaComponent) == 0x000008, "Wrong alignment on UMediaComponent");
static_assert(sizeof(UMediaComponent) == 0x0000B0, "Wrong size on UMediaComponent");
static_assert(offsetof(UMediaComponent, MediaTexture) == 0x0000A0, "Member 'UMediaComponent::MediaTexture' has a wrong offset!");
static_assert(offsetof(UMediaComponent, MediaPlayer) == 0x0000A8, "Member 'UMediaComponent::MediaPlayer' has a wrong offset!");

// Class MediaAssets.MediaTimeStampInfo
// 0x0010 (0x0038 - 0x0028)
class UMediaTimeStampInfo final : public UObject
{
public:
	struct FTimespan                              Time;                                              // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         SequenceIndex;                                     // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaTimeStampInfo">();
	}
	static class UMediaTimeStampInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaTimeStampInfo>();
	}
};
static_assert(alignof(UMediaTimeStampInfo) == 0x000008, "Wrong alignment on UMediaTimeStampInfo");
static_assert(sizeof(UMediaTimeStampInfo) == 0x000038, "Wrong size on UMediaTimeStampInfo");
static_assert(offsetof(UMediaTimeStampInfo, Time) == 0x000028, "Member 'UMediaTimeStampInfo::Time' has a wrong offset!");
static_assert(offsetof(UMediaTimeStampInfo, SequenceIndex) == 0x000030, "Member 'UMediaTimeStampInfo::SequenceIndex' has a wrong offset!");

// Class MediaAssets.MediaPlayerProxyInterface
// 0x0000 (0x0028 - 0x0028)
class IMediaPlayerProxyInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlayerProxyInterface">();
	}
	static class IMediaPlayerProxyInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMediaPlayerProxyInterface>();
	}
};
static_assert(alignof(IMediaPlayerProxyInterface) == 0x000008, "Wrong alignment on IMediaPlayerProxyInterface");
static_assert(sizeof(IMediaPlayerProxyInterface) == 0x000028, "Wrong size on IMediaPlayerProxyInterface");

// Class MediaAssets.MediaPlaylist
// 0x0010 (0x0038 - 0x0028)
class UMediaPlaylist final : public UObject
{
public:
	TArray<class UMediaSource*>                   Items;                                             // 0x0028(0x0010)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

public:
	bool Add(class UMediaSource* MediaSource);
	bool AddFile(const class FString& FilePath);
	bool AddUrl(const class FString& URL);
	class UMediaSource* Get(int32 Index_0);
	class UMediaSource* GetNext(int32* InOutIndex);
	class UMediaSource* GetPrevious(int32* InOutIndex);
	class UMediaSource* GetRandom(int32* OutIndex);
	void Insert(class UMediaSource* MediaSource, int32 Index_0);
	int32 Num();
	bool Remove(class UMediaSource* MediaSource);
	bool RemoveAt(int32 Index_0);
	bool Replace(int32 Index_0, class UMediaSource* Replacement);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlaylist">();
	}
	static class UMediaPlaylist* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlaylist>();
	}
};
static_assert(alignof(UMediaPlaylist) == 0x000008, "Wrong alignment on UMediaPlaylist");
static_assert(sizeof(UMediaPlaylist) == 0x000038, "Wrong size on UMediaPlaylist");
static_assert(offsetof(UMediaPlaylist, Items) == 0x000028, "Member 'UMediaPlaylist::Items' has a wrong offset!");

// Class MediaAssets.MediaSoundComponent
// 0x00E0 (0x0970 - 0x0890)
class UMediaSoundComponent final : public USynthComponent
{
public:
	EMediaSoundChannels                           Channels;                                          // 0x0890(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DynamicRateAdjustment;                             // 0x0894(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_895[0x3];                                      // 0x0895(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RateAdjustmentFactor;                              // 0x0898(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                            RateAdjustmentRange;                               // 0x089C(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8AC[0x4];                                      // 0x08AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           MediaPlayer;                                       // 0x08B0(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_8B8[0xB8];                                     // 0x08B8(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);
	TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData();
	TArray<struct FMediaSoundComponentSpectralData> GetSpectralData();
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
	void SetEnvelopeFollowingsettings(int32 AttackTimeMsec, int32 ReleaseTimeMsec);
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	void SetSpectralAnalysisSettings(const TArray<float>& InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);

	float GetEnvelopeValue() const;
	class UMediaPlayer* GetMediaPlayer() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaSoundComponent">();
	}
	static class UMediaSoundComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaSoundComponent>();
	}
};
static_assert(alignof(UMediaSoundComponent) == 0x000010, "Wrong alignment on UMediaSoundComponent");
static_assert(sizeof(UMediaSoundComponent) == 0x000970, "Wrong size on UMediaSoundComponent");
static_assert(offsetof(UMediaSoundComponent, Channels) == 0x000890, "Member 'UMediaSoundComponent::Channels' has a wrong offset!");
static_assert(offsetof(UMediaSoundComponent, DynamicRateAdjustment) == 0x000894, "Member 'UMediaSoundComponent::DynamicRateAdjustment' has a wrong offset!");
static_assert(offsetof(UMediaSoundComponent, RateAdjustmentFactor) == 0x000898, "Member 'UMediaSoundComponent::RateAdjustmentFactor' has a wrong offset!");
static_assert(offsetof(UMediaSoundComponent, RateAdjustmentRange) == 0x00089C, "Member 'UMediaSoundComponent::RateAdjustmentRange' has a wrong offset!");
static_assert(offsetof(UMediaSoundComponent, MediaPlayer) == 0x0008B0, "Member 'UMediaSoundComponent::MediaPlayer' has a wrong offset!");

// Class MediaAssets.PlatformMediaSource
// 0x0008 (0x0088 - 0x0080)
class UPlatformMediaSource final : public UMediaSource
{
public:
	class UMediaSource*                           MediaSource;                                       // 0x0080(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlatformMediaSource">();
	}
	static class UPlatformMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformMediaSource>();
	}
};
static_assert(alignof(UPlatformMediaSource) == 0x000008, "Wrong alignment on UPlatformMediaSource");
static_assert(sizeof(UPlatformMediaSource) == 0x000088, "Wrong size on UPlatformMediaSource");
static_assert(offsetof(UPlatformMediaSource, MediaSource) == 0x000080, "Member 'UPlatformMediaSource::MediaSource' has a wrong offset!");

// Class MediaAssets.StreamMediaSource
// 0x0010 (0x0098 - 0x0088)
class UStreamMediaSource final : public UBaseMediaSource
{
public:
	class FString                                 StreamUrl;                                         // 0x0088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StreamMediaSource">();
	}
	static class UStreamMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStreamMediaSource>();
	}
};
static_assert(alignof(UStreamMediaSource) == 0x000008, "Wrong alignment on UStreamMediaSource");
static_assert(sizeof(UStreamMediaSource) == 0x000098, "Wrong size on UStreamMediaSource");
static_assert(offsetof(UStreamMediaSource, StreamUrl) == 0x000088, "Member 'UStreamMediaSource::StreamUrl' has a wrong offset!");

// Class MediaAssets.TimeSynchronizableMediaSource
// 0x0018 (0x00A0 - 0x0088)
class UTimeSynchronizableMediaSource final : public UBaseMediaSource
{
public:
	bool                                          bUseTimeSynchronization;                           // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FrameDelay;                                        // 0x008C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        TimeDelay;                                         // 0x0090(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoDetectInput;                                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TimeSynchronizableMediaSource">();
	}
	static class UTimeSynchronizableMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeSynchronizableMediaSource>();
	}
};
static_assert(alignof(UTimeSynchronizableMediaSource) == 0x000008, "Wrong alignment on UTimeSynchronizableMediaSource");
static_assert(sizeof(UTimeSynchronizableMediaSource) == 0x0000A0, "Wrong size on UTimeSynchronizableMediaSource");
static_assert(offsetof(UTimeSynchronizableMediaSource, bUseTimeSynchronization) == 0x000088, "Member 'UTimeSynchronizableMediaSource::bUseTimeSynchronization' has a wrong offset!");
static_assert(offsetof(UTimeSynchronizableMediaSource, FrameDelay) == 0x00008C, "Member 'UTimeSynchronizableMediaSource::FrameDelay' has a wrong offset!");
static_assert(offsetof(UTimeSynchronizableMediaSource, TimeDelay) == 0x000090, "Member 'UTimeSynchronizableMediaSource::TimeDelay' has a wrong offset!");
static_assert(offsetof(UTimeSynchronizableMediaSource, bAutoDetectInput) == 0x000098, "Member 'UTimeSynchronizableMediaSource::bAutoDetectInput' has a wrong offset!");

// Class MediaAssets.MediaBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMediaBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);
	static void EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);
	static void EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaBlueprintFunctionLibrary">();
	}
	static class UMediaBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(UMediaBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on UMediaBlueprintFunctionLibrary");
static_assert(sizeof(UMediaBlueprintFunctionLibrary) == 0x000028, "Wrong size on UMediaBlueprintFunctionLibrary");

}

