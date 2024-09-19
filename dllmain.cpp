#include <Windows.h>
#include <stdio.h>
#include "SDK.hpp"

bool F7KeyPressed = false;
bool F7AntiSpam = false;

SDK::UEngine* Engine;
SDK::UWorld* World;
SDK::APlayerController* Player0;
SDK::UIpNetDriver* NetDriver;
SDK::UKismetSystemLibrary* Kismet;
uintptr_t GBA = 0;

void InitVars() {
    Engine = SDK::UEngine::GetEngine();
    World = SDK::UWorld::GetWorld();
    Player0 = World->OwningGameInstance->LocalPlayers[0]->PlayerController;

    //NetDriver = World->NetDriver;
    Kismet = SDK::UKismetSystemLibrary::GetDefaultObj();
}

void EnableConsole() {


    SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"Tilde");

}

void ExecuteConsoleCommand() {
    //Kismet->ExecuteConsoleCommand(World, SDK::FString(L"open AlexTestLevel?Listen?ip=127.0.0.1?port=7777"), Player0);
   // Player0->SwitchLevel(L"BattlefieldMap_BR");
    /*Sleep(3 * 1000);*/
    Kismet->ExecuteConsoleCommand(World, SDK::FString(L"open AlexTestLevel?Listen?ip=127.0.0.1?port=7777"), Player0);
}

void F7ToggleSwitch() {
   // SDK::UCreateSessionCallbackProxy::GetDefaultObj();
    //World->OwningGameInstance
   // SDK::ACE_AiMi_C* Catgirl;
    //SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Catgirl, Engine->GameViewport);
    //SetImguiEnabled
    /*HANDLE TMain = CreateThread(nullptr, 0,
        (LPTHREAD_START_ROUTINE)ExecuteConsoleCommand, 0, 0, 0);
    if (TMain != nullptr)
        CloseHandle(TMain);*/
   // Player0->SwitchLevel(L"Alex_TestLevel");
    SDK::FURL* New = new SDK::FURL();
    New->Map = SDK::FString(L"BattleFieldMap_Offline");
    New->Port = 8743;
    New->Valid = true;
}

/*bool InitListen(SDK::UIpNetDriver* netdriver, SDK::UObject* world) {
    typedef bool(__thiscall* func)(SDK::UIpNetDriver*, SDK::UObject*, SDK::FURL&, bool, SDK::FString&);

    uintptr_t functAddress = GBA + 0x0ba7e80;

    func thefunc = (func)functAddress;

    SDK::FURL* furl = new SDK::FURL();

    furl->Map = SDK::FString(L"BattleFieldMap_Offline");

    furl->Port = 1170;

    furl->Valid = 1;

    SDK::FString* error = new SDK::FString(L"");

    return (*thefunc)(netdriver, world, *furl, false, *error);
}*/

/*
    static bool WriteLeaderboardInteger(class APlayerController* PlayerController, class FName StatName, int32 StatValue);

*/

void MainThread()
{
    InitVars();

    /* Code to open a console window */
    AllocConsole();
    FILE* Console;
    freopen_s(&Console, "CONOUT$", "w", stdout);
    freopen_s(&Console, "CONIN$", "r", stdin);


    /* Print the full-name of an object ("ClassName PackageName.OptionalOuter.ObjectName") */
    //std::cout << Engine->ConsoleClass->GetFullName() << std::endl;

    /* Manually iterating GObjects and printing the FullName of every UObject that is a Pawn (not recommended) */
   /* for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
    {
        SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

        if (!Obj)
            continue;

        if (!Obj->IsDefaultObject())
            continue;*/

        /* Only the 'IsA' check using the cast flags is required, the other 'IsA' is redundant 
        if (Obj->IsA(SDK::APawn::StaticClass()) || Obj->HasTypeFlag(SDK::EClassCastFlags::Pawn))
        {
            std::cout << Obj->GetFullName() << "\n";
        }
    }*/

    /* You might need to loop all levels in UWorld::Levels 
    SDK::ULevel* Level = World->PersistentLevel;
    SDK::TArray<SDK::AActor*>& Actors = Level->Actors;

    for (SDK::AActor* Actor : Actors)
    {*/
        /* The 2nd and 3rd checks are equal, prefer using EClassCastFlags if available for your class.
        if (!Actor || !Actor->IsA(SDK::EClassCastFlags::Pawn) || !Actor->IsA(SDK::APawn::StaticClass()))
            continue;

        SDK::APawn* Pawn = static_cast<SDK::APawn*>(Actor);
        // Use Pawn here
    } */

    /*
    * Changes the keyboard-key that's used to open the UE console
    *
    * This is a rare case of a DefaultObjects' member-variables being changed.
    * By default you do not want to use the DefaultObject, this is a rare exception.
    */

    /* Creates a new UObject of class-type specified by Engine->ConsoleClass */
    SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
   // SDK::UObject* NetDriver = static_cast<SDK::UIpNetDriver*>(MyController->Pawn);
   // MyGamePawn->GameSpecificVariable = 30;
   // SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(NetDriver, Engine->GameViewport);

    /* The Object we created is a subclass of UConsole, so this cast is **safe**. */
    Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);


}

void Togglator() {
    while (true) {
        F7KeyPressed = (GetAsyncKeyState(VK_F7) & 0x8000);
        if (F7KeyPressed && !F7AntiSpam) {
            F7KeyPressed = !F7KeyPressed;
            F7ToggleSwitch();
        }
        Sleep(50);
    }
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    DisableThreadLibraryCalls(hModule);

    if (ul_reason_for_call != DLL_PROCESS_ATTACH)
        return TRUE;

    HANDLE TMain = CreateThread(nullptr, 0,
        (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, 0);
    if (TMain != nullptr)
        CloseHandle(TMain);
    HANDLE TKeyboardSniffer = CreateThread(nullptr, 0,
        (LPTHREAD_START_ROUTINE)Togglator, hModule, 0, 0);
    if (TKeyboardSniffer != nullptr)
        CloseHandle(TKeyboardSniffer);

    return TRUE;
}