#pragma once
#include "../../pch.h"

// Custom thread to call UFunctions in.
class Tick
{
private:

	inline static bool bThreadAlreadyExists{false};
	//inline static int TickRate{1};

	static void CustomTickLoop();

public:

	inline static bool bShouldTick{true};

	static void StartThread(/*const int& TickRateInSeconds*/);

	inline static void OpenLoop()  { bShouldTick = true;  }
	inline static void CloseLoop() { bShouldTick = false; }


};