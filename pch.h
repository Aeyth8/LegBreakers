#ifndef PCH_H
#define PCH_H
#ifndef COUT
#define COUT std::cout
#endif
#ifndef WCOUT
#define WCOUT std::wcout
#endif

#include <windows.h>
#include <vector>
#include <ranges>
#include <random>

#include "Aeyth8/Proxy/Proxy.hpp"

#include "Aeyth8/Offsets.hpp"
#include "UnrealContainers.hpp"
#include "SDK.hpp"
#include "PropertyFixup.hpp"
#include "NameCollisions.inl"
#include "MinHook/MinHook.h"

#include "Aeyth8/Logger.hpp"
#include "Aeyth8/Pointers.hpp"
#include "Aeyth8/Hooks/Hooks.hpp"
#include "Aeyth8/Structs.hpp"

#endif //PCH_H
