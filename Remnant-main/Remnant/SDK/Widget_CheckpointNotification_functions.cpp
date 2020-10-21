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

// Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_CheckpointNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.Construct");

	UWidget_CheckpointNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.RemoveSelf
// (BlueprintCallable, BlueprintEvent)
void UWidget_CheckpointNotification_C::RemoveSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.RemoveSelf");

	UWidget_CheckpointNotification_C_RemoveSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.StartCountdown
// (BlueprintCallable, BlueprintEvent)
void UWidget_CheckpointNotification_C::StartCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.StartCountdown");

	UWidget_CheckpointNotification_C_StartCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.ExecuteUbergraph_Widget_CheckpointNotification
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CheckpointNotification_C::ExecuteUbergraph_Widget_CheckpointNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.ExecuteUbergraph_Widget_CheckpointNotification");

	UWidget_CheckpointNotification_C_ExecuteUbergraph_Widget_CheckpointNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
