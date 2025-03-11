#pragma once
#include "../Logger.hpp"

#define EXPORT extern "C" inline __declspec(dllexport) 

extern void Init();

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace Thread
{
	// An easy template to construct new threads.
	inline static DWORD WINAPI ConstructThread(LPVOID Function, LPVOID Parameter = 0) {
		void* Thread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Function, Parameter, 0, 0);
		if (Thread != nullptr) CloseHandle(Thread);
		return 0;
	}
}

namespace Shell32
{
	typedef HINSTANCE(__stdcall* ShellExecute_)(HWND hwnd, LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory, INT nShowCmd);
	inline ShellExecute_ ShellExecute_P{0};

	EXPORT HINSTANCE ShellExecuteA(HWND hwnd, LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory, INT nShowCmd) 
	{ 
		return ShellExecute_P(hwnd, lpOperation, lpFile, lpParameters, lpDirectory, nShowCmd); 
	}
}

namespace XAPOFX1_5
{
	typedef HRESULT(__stdcall* CreateFX_)(REFCLSID clsid, IUnknown** pEffect, const void* pInitDat, UINT32 InitDataByteSize);
	inline CreateFX_ CreateFX_P{0};

	EXPORT HRESULT CreateFX(REFCLSID clsid, IUnknown** pEffect, const void* pInitDat, UINT32 InitDataByteSize)
	{
		return CreateFX_P(clsid, pEffect, pInitDat, InitDataByteSize);
	}
}

namespace UXTheme
{
	typedef HRESULT(__stdcall* SetWindowTheme_)(HWND hwnd, LPCWSTR pszSubAppName, LPCWSTR pszSubIdList);
	inline SetWindowTheme_ SetWindowTheme_P{0};

	EXPORT HRESULT SetWindowTheme(HWND hwnd, LPCWSTR pszSubAppName, LPCWSTR pszSubIdList)
	{
		return SetWindowTheme_P(hwnd, pszSubAppName, pszSubIdList);
	}

}

namespace Proxy
{
	inline static HMODULE hModule{0};
	inline static int AttachCounter{0};
	inline static bool IsInitialized{false};

	// A dynamic variable declared with the default DLL name, it can be changed to allow this proxy to be used for any other DLL (if that proxy is written of course)
	inline static std::wstring ModuleName{ L"\\XAPOFX1_5.dll" };

	inline static bool Attach(HMODULE CurrentModule) {
		WCHAR Path[260]{0}; // Current path of this dll during runtime.

		++AttachCounter;
		if (AttachCounter == 1) Logger::Init();

		Logger::Log << "[Proxy] - ATTACH :: Count = " << AttachCounter << "\n";

		// Grabs the path of the proxy dll, if unsuccessful it will fallback to the default proxy name.
		if (GetModuleFileName(CurrentModule, Path, _countof(Path))) {
			std::wstring RetrievedModule(Path);
			ModuleName = RetrievedModule; // Moves the constructed string to the namespace-scoped "global" variable. 
			size_t ExtractName = ModuleName.find_last_of(L"\\"); // Gets the last backslash in the path
			if (ExtractName != std::wstring::npos) ModuleName = L"\\" + ModuleName.substr(ExtractName + 1); // Substrings the path to only contain the name of the proxy dll
		}

		if (!GetSystemDirectory(Path, _countof(Path))) return false; // Attempts to find System32, or fails doing so.
		std::wstring Sys32(Path); // Turns that path into a wide string
		ModuleName = Sys32 + ModuleName; // Constructs a path combining System32 with the current module name. 

		hModule = LoadLibrary(ModuleName.c_str()); // hModule is a pointer to the real dll located in System32
		if (!hModule) return false;

		// Loop to assign all the proxy functions to point to the real DLL functions in System32.
		UXTheme::SetWindowTheme_P = (UXTheme::SetWindowTheme_)GetProcAddress(CurrentModule, "SetWindowTheme");

		if (!IsInitialized && AttachCounter > 0) { IsInitialized = true;
			Logger::Log << "[Proxy] - Starting up LegBreakers...\n";
			Thread::ConstructThread(Init, hModule);
		}

		

		return true;
	}

	inline static void Detach(HMODULE CurrentModule) { if (hModule != nullptr) FreeLibrary(CurrentModule); }
}