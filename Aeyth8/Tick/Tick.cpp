#include "Tick.hpp"
#include "../Hooks/UFunctions.hpp"


void Tick::CustomTickLoop()
{
	while (bThreadAlreadyExists) {
		if (!bShouldTick) continue;
		World = UWorld();

		Net::LogWorldNetMode();
		Net::LogActorNetMode();

		Sleep(1000);
	}

}


void Tick::StartThread() { if (bThreadAlreadyExists) return;
	bThreadAlreadyExists = true;
	ConstructThread(CustomTickLoop);
}