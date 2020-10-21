// Name: Remnant, Version: 6

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Actor_Ping_Main.Actor_Ping_Main_C.OnDialogStarted
// (Public, BlueprintCallable, BlueprintEvent)
void AActor_Ping_Main_C::OnDialogStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Actor_Ping_Main.Actor_Ping_Main_C.OnDialogStarted");

	AActor_Ping_Main_C_OnDialogStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Actor_Ping_Main.Actor_Ping_Main_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AActor_Ping_Main_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Actor_Ping_Main.Actor_Ping_Main_C.ReceiveBeginPlay");

	AActor_Ping_Main_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Actor_Ping_Main.Actor_Ping_Main_C.SetPingDetails
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                  Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETailType                      Tail                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AActor_Ping_Main_C::SetPingDetails(float Duration, class UTexture2D* Icon, const struct FColor& Color, ETailType Tail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Actor_Ping_Main.Actor_Ping_Main_C.SetPingDetails");

	AActor_Ping_Main_C_SetPingDetails_Params params;
	params.Duration = Duration;
	params.Icon = Icon;
	params.Color = Color;
	params.Tail = Tail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Actor_Ping_Main.Actor_Ping_Main_C.ExecuteUbergraph_Actor_Ping_Main
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AActor_Ping_Main_C::ExecuteUbergraph_Actor_Ping_Main(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Actor_Ping_Main.Actor_Ping_Main_C.ExecuteUbergraph_Actor_Ping_Main");

	AActor_Ping_Main_C_ExecuteUbergraph_Actor_Ping_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Actor_Ping_Main.Actor_Ping_Main_C.OnContextSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AActor_Ping_Main_C::OnContextSet__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Actor_Ping_Main.Actor_Ping_Main_C.OnContextSet__DelegateSignature");

	AActor_Ping_Main_C_OnContextSet__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
