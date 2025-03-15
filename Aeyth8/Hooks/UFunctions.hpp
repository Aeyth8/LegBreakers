#pragma once
#include "../../pch.h"
#include "../Config/Global.hpp"
#include "../Tick/Tick.hpp"

class UFunctions
{
public:

	class Helpers
	{
	private:

		inline static std::string FURLParseCache{""};
		inline static SDK::FString FURLParseCacheW{L""};
		inline static SDK::FString SDK::FURL::* FURLPointers[] = {&SDK::FURL::Protocol, &SDK::FURL::Host, &SDK::FURL::Map, &SDK::FURL::RedirectURL, &SDK::FURL::Portal};
		const inline static std::string FURLPointerNames[] = { "Protocol", "Host", "Map", "RedirectURL", "Portal" };

	public:

		inline static std::string FURLParser(SDK::FURL &URL)
		{
			FURLParseCache.clear();
			for (int i{0}; i < 5; ++i)
			{
				if (&URL->*FURLPointers[i]) {
					FURLParseCacheW = &URL->*FURLPointers[i];
					FURLParseCache += ("[" + FURLPointerNames[i] + "]: " + FURLParseCacheW.ToString());
					if (i == 1 && &URL.Port) FURLParseCache += (":" + std::to_string(URL.Port));
					FURLParseCache += " | ";
				}
			}
			if (&URL.Valid) FURLParseCache += ("[Valid]:" + std::to_string(URL.Valid) + " | ");

			if (URL.Op.Num() > 0) { // If a level has been streamed manually it will crash here for some reason.
				FURLParseCache += "[Options]: ";
				for (int i{0}; i < URL.Op.Num(); ++i) FURLParseCache += ("?" + URL.Op[i].ToString());
				FURLParseCache += " | ";
			}

			return FURLParseCache;
		}
	public:

		inline static void ProcessEnd() { Hooks::DisableAllHooks(); Hooks::Uninit(); Logger::Close(); Tick::CloseLoop(); }

	private:

		inline static std::string CommandParsingCache{""};

	public:

		inline static bool CommandParser(const std::string& Command)
		{
			CommandParsingCache.clear();

			for (char Character : Command) {
				Character = std::tolower(Character);
				CommandParsingCache.push_back(Character);
			}
			// WIP
		}

	};


	class Decl
	{
	public:
		typedef void(__thiscall* UConsole)(SDK::UConsole* This, SDK::FString& Command);
		inline static UConsole FC_UConsole{0};

		typedef void(__thiscall* Browse)(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error);
		inline static Browse FC_Browse{0};

		typedef bool(__thiscall* InitListen)(SDK::UIpNetDriver*, SDK::UObject*, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error);
		inline static InitListen FC_InitListen{0};

		typedef void(__thiscall* PreLogin)(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage);
		inline static PreLogin FC_PreLogin{0};

		typedef bool(__thiscall* CreateNamedNetDriver)(SDK::UEngine*, SDK::UWorld* InWorld, SDK::FName NetDriverName, SDK::FName NetDriverDefinition);
		inline static CreateNamedNetDriver FC_CreateNamedNetDriver{0};

		typedef void(__thiscall* AppPreExit)();
		inline static AppPreExit FC_AppPreExit{0};

		typedef void(__thiscall* ProcessEvent)(SDK::UObject* This, SDK::UFunction* Function, LPVOID Parms);
		inline static ProcessEvent FC_ProcessEvent{0};

		typedef bool(__thiscall* DestroyActor)(SDK::AActor* This, bool bNetForce, bool bShouldModifyLevel);
		inline static DestroyActor FC_DestroyActor{0};
	};

	class Func
	{
	public:

		inline static std::string UConsoleTemp{""};
		inline static void UConsole(SDK::UConsole* This, SDK::FString& Command)
		{
			UConsoleTemp = Command.ToString();
			LogA("UConsole", UConsoleTemp);

			// Add custom command parsing

			Decl::FC_UConsole(This, Command);
		}

		inline static void Browse(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error)
		{
			if (!Global::bConstructedUConsole) 
			{ Global::bConstructedUConsole = true; 
				ConstructUConsole(); 
				LogA("Browse","Constructing UConsole early");
			}

			LogA("Browse", Helpers::FURLParser(URL));

			Decl::FC_Browse(This, WorldContext, URL, Error);
		}

		inline static bool InitListen(SDK::UIpNetDriver* This, SDK::UObject* InNotify, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error)
		{
			LogA("InitListen", "[UIpNetDriver]: " + This->GetFullName());
			LogA("InitListen", Helpers::FURLParser(LocalURL));

			Decl::FC_InitListen(This, InNotify, LocalURL, bReuseAddressAndPort, Error);
		}

		inline static std::string PreLoginTemp{""};
		inline static void PreLogin(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage)
		{
			PreLoginTemp = This->GetFullName();
			PreLoginTemp += " | [Options]: " + Options->ToString() + " | [Address]: " + Address->ToString();
			LogA("PreLogin", PreLoginTemp);
			//Decl::FC_PreLogin(This, Options, Address, UniqueId, ErrorMessage);
		}

		inline static void AppPreExit()
		{
			ConstructThread(Helpers::ProcessEnd);
			Decl::FC_AppPreExit();
		}


		inline static void SpawnActor(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector* Location, const SDK::FRotator* Rotation, FActorSpawnParameters* SpawnParameters)
		{
			//Log("<FunctionHooks.hpp> / Hooks::Functions::SpawnActor():: " + Class->GetFullName() + " :: FActorSpawnParameters->SpawnCollisionHandlingOverride = " + std::to_string(Param));
			//Log("<FunctionHooks.hpp> / Hooks::Functions::SpawnActor():: Owner = " + SpawnParameters->Owner->GetFullName());

			//PTR::FC_SpawnActor(World, Class, Location, Rotation, SpawnParameters);
		}

		inline static std::string PESpamCache{""};
		inline static void ProcessEvent(SDK::UObject* This, SDK::UFunction* Function, LPVOID Parms)
		{
			
			Decl::FC_ProcessEvent(This, Function, Parms);
		}

		inline static bool DestroyActor(SDK::AActor* This, bool bNetForce, bool bShouldModifyLevel)
		{
			LogA("DestroyActor", This->GetFullName());

			return (*Decl::FC_DestroyActor)(This, bNetForce, bShouldModifyLevel);
		}

	};

};

class Net
{
public:
	enum ENetMode {
		NM_Standalone,
		NM_DedicatedServer,
		NM_ListenServer,
		NM_Client,
		NM_MAX,
		Passthrough // Custom mode
	};
	enum ENetRole
	{
		ROLE_None,
		ROLE_SimulatedProxy, // Default client role
		ROLE_AutonomousProxy,
		ROLE_Authority,
		ROLE_MAX
	};

	const inline static std::string DT_NetMode[] = {"Standalone", "DedicatedServer", "ListenServer", "Client", "MAX"};
	const inline static std::string DT_RemoteRole[] = {"None", "SimulatedProxy", "AutonomousProxy", "Authority", "MAX"};

	typedef ENetMode(__thiscall* UWorldInternalGetNetMode)(SDK::UWorld* World);
	inline static UWorldInternalGetNetMode FC_WorldGetNetMode{0};

	typedef ENetMode(__thiscall* AActorInternalGetNetMode)(SDK::AActor* Actor);
	inline static AActorInternalGetNetMode FC_ActorGetNetMode{0};

	typedef ENetRole(__thiscall* RemoteRole)(__int64, __int64, BYTE*);
	inline static RemoteRole FC_RemoteRole{0};

	typedef ENetRole(__thiscall* LocalRole)(__int64, __int64, BYTE*);
	inline static LocalRole FC_LocalRole{0};

	inline static ENetMode WorldHookMode{ENetMode::NM_ListenServer};
	inline static ENetMode ActorHookMode{ENetMode::NM_ListenServer};

	inline static ENetMode WorldGetNetMode(SDK::UWorld* World) {
		if (WorldHookMode == ENetMode::Passthrough) return FC_WorldGetNetMode(World);
		return WorldHookMode;
	}

	inline static ENetMode ActorGetNetMode(SDK::AActor* Actor) {
		if (ActorHookMode == ENetMode::Passthrough) return FC_ActorGetNetMode(Actor);
		return ActorHookMode;
	}

	inline static void LogWorldNetMode(SDK::UWorld* WorldOverride = World) {
		if (WorldOverride != nullptr && WorldOverride->IsA(SDK::UWorld::StaticClass())) {
			FC_WorldGetNetMode = (UWorldInternalGetNetMode)(GBA + Offsets::WorldGetNetMode);
			int i = FC_WorldGetNetMode(WorldOverride);

			LogA("UWorld::InternalGetNetMode", DT_NetMode[i]);
		}
		else { LogA("LogWorldNetMode", "Failed due to nullptr."); }
	}

	inline static void LogActorNetMode(SDK::AActor* ActorOverride = 0) {
		// This if-chain must exist or it will crash when switching levels.
		if (World) if (World->OwningGameInstance) if (World->OwningGameInstance->LocalPlayers) ActorOverride = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
		if (ActorOverride != nullptr && ActorOverride->IsA(SDK::AActor::StaticClass())) {
			FC_ActorGetNetMode = (AActorInternalGetNetMode)(GBA + Offsets::ActorGetNetMode);
			int i = FC_ActorGetNetMode(ActorOverride);

			LogA("AActor::InternalGetNetMode", DT_NetMode[i]);
		}
		else { LogA("LogActorNetMode", "Failed due to nullptr."); }
	}

	inline static void LogRemoteRole() {

	}

	inline static void LogLocalRole() {

	}
};

