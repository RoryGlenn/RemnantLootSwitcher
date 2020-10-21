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

// Function Widget_Subtitle.Widget_Subtitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Subtitle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.Construct");

	UWidget_Subtitle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Subtitle.Widget_Subtitle_C.OnTextReady
// (BlueprintCallable, BlueprintEvent)
void UWidget_Subtitle_C::OnTextReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.OnTextReady");

	UWidget_Subtitle_C_OnTextReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Subtitle.Widget_Subtitle_C.ExecuteUbergraph_Widget_Subtitle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Subtitle_C::ExecuteUbergraph_Widget_Subtitle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.ExecuteUbergraph_Widget_Subtitle");

	UWidget_Subtitle_C_ExecuteUbergraph_Widget_Subtitle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
