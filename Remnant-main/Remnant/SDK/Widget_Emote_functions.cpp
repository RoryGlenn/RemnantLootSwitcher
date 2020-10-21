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

// Function Widget_Emote.Widget_Emote_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Init                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_Emote_C::SetSelected(bool Selected, bool Init)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emote.Widget_Emote_C.SetSelected");

	UWidget_Emote_C_SetSelected_Params params;
	params.Selected = Selected;
	params.Init = Init;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Emote.Widget_Emote_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEmote*                  Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Emote_C::Init(class UEmote* Emote, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emote.Widget_Emote_C.Init");

	UWidget_Emote_C_Init_Params params;
	params.Emote = Emote;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Emote.Widget_Emote_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Emote_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emote.Widget_Emote_C.Construct");

	UWidget_Emote_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Emote.Widget_Emote_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Emote_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emote.Widget_Emote_C.Tick");

	UWidget_Emote_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Emote.Widget_Emote_C.UpdateIcon
// (BlueprintCallable, BlueprintEvent)
void UWidget_Emote_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emote.Widget_Emote_C.UpdateIcon");

	UWidget_Emote_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Emote.Widget_Emote_C.OnIconLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Emote_C::OnIconLoaded(class UClass* Emote, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emote.Widget_Emote_C.OnIconLoaded");

	UWidget_Emote_C_OnIconLoaded_Params params;
	params.Emote = Emote;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Emote.Widget_Emote_C.ExecuteUbergraph_Widget_Emote
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Emote_C::ExecuteUbergraph_Widget_Emote(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emote.Widget_Emote_C.ExecuteUbergraph_Widget_Emote");

	UWidget_Emote_C_ExecuteUbergraph_Widget_Emote_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
