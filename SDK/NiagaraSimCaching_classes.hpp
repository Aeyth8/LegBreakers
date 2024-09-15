#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraSimCaching

#include "Basic.hpp"

#include "NiagaraSimCaching_structs.hpp"
#include "MovieSceneTracks_classes.hpp"
#include "MovieScene_classes.hpp"


namespace SDK
{

// Class NiagaraSimCaching.MovieSceneNiagaraCacheSection
// 0x0090 (0x0188 - 0x00F8)
class UMovieSceneNiagaraCacheSection final : public UMovieSceneBaseCacheSection
{
public:
	struct FMovieSceneNiagaraCacheParams          Params_0;                                          // 0x00F8(0x0088)(Edit, NativeAccessSpecifierPublic)
	bool                                          bCacheOutOfDate;                                   // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNiagaraCacheSection">();
	}
	static class UMovieSceneNiagaraCacheSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNiagaraCacheSection>();
	}
};
static_assert(alignof(UMovieSceneNiagaraCacheSection) == 0x000008, "Wrong alignment on UMovieSceneNiagaraCacheSection");
static_assert(sizeof(UMovieSceneNiagaraCacheSection) == 0x000188, "Wrong size on UMovieSceneNiagaraCacheSection");
static_assert(offsetof(UMovieSceneNiagaraCacheSection, Params_0) == 0x0000F8, "Member 'UMovieSceneNiagaraCacheSection::Params_0' has a wrong offset!");
static_assert(offsetof(UMovieSceneNiagaraCacheSection, bCacheOutOfDate) == 0x000180, "Member 'UMovieSceneNiagaraCacheSection::bCacheOutOfDate' has a wrong offset!");

// Class NiagaraSimCaching.MovieSceneNiagaraCacheTrack
// 0x0030 (0x00C8 - 0x0098)
class UMovieSceneNiagaraCacheTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_98[0x10];                                      // 0x0098(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bIsRecording;                                      // 0x00A8(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMovieSceneSection*>             AnimationSections;                                 // 0x00B0(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                          bCacheRecordingEnabled;                            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNiagaraCacheTrack">();
	}
	static class UMovieSceneNiagaraCacheTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNiagaraCacheTrack>();
	}
};
static_assert(alignof(UMovieSceneNiagaraCacheTrack) == 0x000008, "Wrong alignment on UMovieSceneNiagaraCacheTrack");
static_assert(sizeof(UMovieSceneNiagaraCacheTrack) == 0x0000C8, "Wrong size on UMovieSceneNiagaraCacheTrack");
static_assert(offsetof(UMovieSceneNiagaraCacheTrack, bIsRecording) == 0x0000A8, "Member 'UMovieSceneNiagaraCacheTrack::bIsRecording' has a wrong offset!");
static_assert(offsetof(UMovieSceneNiagaraCacheTrack, AnimationSections) == 0x0000B0, "Member 'UMovieSceneNiagaraCacheTrack::AnimationSections' has a wrong offset!");
static_assert(offsetof(UMovieSceneNiagaraCacheTrack, bCacheRecordingEnabled) == 0x0000C0, "Member 'UMovieSceneNiagaraCacheTrack::bCacheRecordingEnabled' has a wrong offset!");

}
