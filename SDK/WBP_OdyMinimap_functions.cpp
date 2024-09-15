#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OdyMinimap

#include "Basic.hpp"

#include "WBP_OdyMinimap_classes.hpp"
#include "WBP_OdyMinimap_parameters.hpp"


namespace SDK
{

// Function WBP_OdyMinimap.WBP_OdyMinimap_C.ApplyZoom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        NewPosition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OdyMinimap_C::ApplyZoom(const struct FVector2D& Position, struct FVector2D* NewPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "ApplyZoom");

	Params::WBP_OdyMinimap_C_ApplyZoom Parms{};

	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);

	if (NewPosition != nullptr)
		*NewPosition = std::move(Parms.NewPosition);
}


// Function WBP_OdyMinimap.WBP_OdyMinimap_C.ChangeMapTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       MinimapTex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_OdyMinimap_C::ChangeMapTexture(class UTexture2D* MinimapTex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "ChangeMapTexture");

	Params::WBP_OdyMinimap_C_ChangeMapTexture Parms{};

	Parms.MinimapTex = MinimapTex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OdyMinimap.WBP_OdyMinimap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_OdyMinimap_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OdyMinimap.WBP_OdyMinimap_C.ExecuteUbergraph_WBP_OdyMinimap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OdyMinimap_C::ExecuteUbergraph_WBP_OdyMinimap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "ExecuteUbergraph_WBP_OdyMinimap");

	Params::WBP_OdyMinimap_C_ExecuteUbergraph_WBP_OdyMinimap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OdyMinimap.WBP_OdyMinimap_C.HandleDrag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    Input                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGeometry                        Geometry                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void UWBP_OdyMinimap_C::HandleDrag(const struct FPointerEvent& Input, const struct FGeometry& Geometry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "HandleDrag");

	Params::WBP_OdyMinimap_C_HandleDrag Parms{};

	Parms.Input = std::move(Input);
	Parms.Geometry = std::move(Geometry);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OdyMinimap.WBP_OdyMinimap_C.OnActorDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_OdyMinimap_C::OnActorDestroyed(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "OnActorDestroyed");

	Params::WBP_OdyMinimap_C_OnActorDestroyed Parms{};

	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OdyMinimap.WBP_OdyMinimap_C.OnActorSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_OdyMinimap_C::OnActorSpawned(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "OnActorSpawned");

	Params::WBP_OdyMinimap_C_OnActorSpawned Parms{};

	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OdyMinimap.WBP_OdyMinimap_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_OdyMinimap_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "OnMouseButtonDown");

	Params::WBP_OdyMinimap_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_OdyMinimap.WBP_OdyMinimap_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_OdyMinimap_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "OnMouseButtonUp");

	Params::WBP_OdyMinimap_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_OdyMinimap.WBP_OdyMinimap_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_OdyMinimap_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "OnMouseMove");

	Params::WBP_OdyMinimap_C_OnMouseMove Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_OdyMinimap.WBP_OdyMinimap_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_OdyMinimap_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "OnMouseWheel");

	Params::WBP_OdyMinimap_C_OnMouseWheel Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_OdyMinimap.WBP_OdyMinimap_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OdyMinimap_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "PreConstruct");

	Params::WBP_OdyMinimap_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OdyMinimap.WBP_OdyMinimap_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OdyMinimap_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "Tick");

	Params::WBP_OdyMinimap_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OdyMinimap.WBP_OdyMinimap_C.UpdateMinimapZoom
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OdyMinimap_C::UpdateMinimapZoom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OdyMinimap_C", "UpdateMinimapZoom");

	UObject::ProcessEvent(Func, nullptr);
}

}
