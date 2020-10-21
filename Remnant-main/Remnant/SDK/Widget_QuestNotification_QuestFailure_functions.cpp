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

// Function Widget_QuestNotification_QuestFailure.Widget_QuestNotification_QuestFailure_C.FadeOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_QuestFailure_C::FadeOut(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_QuestFailure.Widget_QuestNotification_QuestFailure_C.FadeOut");

	UWidget_QuestNotification_QuestFailure_C_FadeOut_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_QuestFailure.Widget_QuestNotification_QuestFailure_C.Get_QuestName_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_QuestNotification_QuestFailure_C::Get_QuestName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_QuestFailure.Widget_QuestNotification_QuestFailure_C.Get_QuestName_Text_1");

	UWidget_QuestNotification_QuestFailure_C_Get_QuestName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_QuestNotification_QuestFailure.Widget_QuestNotification_QuestFailure_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_QuestNotification_QuestFailure_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_QuestFailure.Widget_QuestNotification_QuestFailure_C.Construct");

	UWidget_QuestNotification_QuestFailure_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_QuestFailure.Widget_QuestNotification_QuestFailure_C.OnFadeOut
// (BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_QuestFailure_C::OnFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_QuestFailure.Widget_QuestNotification_QuestFailure_C.OnFadeOut");

	UWidget_QuestNotification_QuestFailure_C_OnFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_QuestFailure.Widget_QuestNotification_QuestFailure_C.OnRemoveFromParent
// (BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_QuestFailure_C::OnRemoveFromParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_QuestFailure.Widget_QuestNotification_QuestFailure_C.OnRemoveFromParent");

	UWidget_QuestNotification_QuestFailure_C_OnRemoveFromParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_QuestFailure.Widget_QuestNotification_QuestFailure_C.ExecuteUbergraph_Widget_QuestNotification_QuestFailure
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_QuestFailure_C::ExecuteUbergraph_Widget_QuestNotification_QuestFailure(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_QuestFailure.Widget_QuestNotification_QuestFailure_C.ExecuteUbergraph_Widget_QuestNotification_QuestFailure");

	UWidget_QuestNotification_QuestFailure_C_ExecuteUbergraph_Widget_QuestNotification_QuestFailure_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
