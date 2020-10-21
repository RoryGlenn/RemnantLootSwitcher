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

// Function WidgetPing_Actor.WidgetPing_Actor_C.SetPingContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                  Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETailType                      TailType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidgetPing_Actor_C::SetPingContext(class UTexture2D* Icon, const struct FColor& Color, ETailType TailType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPing_Actor.WidgetPing_Actor_C.SetPingContext");

	UWidgetPing_Actor_C_SetPingContext_Params params;
	params.Icon = Icon;
	params.Color = Color;
	params.TailType = TailType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetPing_Actor.WidgetPing_Actor_C.PingInit
// (Public, BlueprintCallable, BlueprintEvent)
void UWidgetPing_Actor_C::PingInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPing_Actor.WidgetPing_Actor_C.PingInit");

	UWidgetPing_Actor_C_PingInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetPing_Actor.WidgetPing_Actor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidgetPing_Actor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPing_Actor.WidgetPing_Actor_C.Construct");

	UWidgetPing_Actor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetPing_Actor.WidgetPing_Actor_C.Startanimation
// (BlueprintCallable, BlueprintEvent)
void UWidgetPing_Actor_C::Startanimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPing_Actor.WidgetPing_Actor_C.Startanimation");

	UWidgetPing_Actor_C_Startanimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetPing_Actor.WidgetPing_Actor_C.FadeOutAnimation
// (BlueprintCallable, BlueprintEvent)
void UWidgetPing_Actor_C::FadeOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPing_Actor.WidgetPing_Actor_C.FadeOutAnimation");

	UWidgetPing_Actor_C_FadeOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WidgetPing_Actor.WidgetPing_Actor_C.ExecuteUbergraph_WidgetPing_Actor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidgetPing_Actor_C::ExecuteUbergraph_WidgetPing_Actor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPing_Actor.WidgetPing_Actor_C.ExecuteUbergraph_WidgetPing_Actor");

	UWidgetPing_Actor_C_ExecuteUbergraph_WidgetPing_Actor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
