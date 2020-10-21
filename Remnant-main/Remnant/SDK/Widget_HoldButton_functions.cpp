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

// Function Widget_HoldButton.Widget_HoldButton_C.SetImageNameID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ImageNameID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_HoldButton_C::SetImageNameID(const struct FName& ImageNameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HoldButton.Widget_HoldButton_C.SetImageNameID");

	UWidget_HoldButton_C_SetImageNameID_Params params;
	params.ImageNameID = ImageNameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HoldButton.Widget_HoldButton_C.GetPercent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWidget_HoldButton_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HoldButton.Widget_HoldButton_C.GetPercent_1");

	UWidget_HoldButton_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_HoldButton.Widget_HoldButton_C.GetPressTimerPct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CompletionPct                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_HoldButton_C::GetPressTimerPct(float* CompletionPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HoldButton.Widget_HoldButton_C.GetPressTimerPct");

	UWidget_HoldButton_C_GetPressTimerPct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CompletionPct != nullptr)
		*CompletionPct = params.CompletionPct;

}


// Function Widget_HoldButton.Widget_HoldButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_HoldButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HoldButton.Widget_HoldButton_C.Tick");

	UWidget_HoldButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HoldButton.Widget_HoldButton_C.OnButtonPressed
// (BlueprintCallable, BlueprintEvent)
void UWidget_HoldButton_C::OnButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HoldButton.Widget_HoldButton_C.OnButtonPressed");

	UWidget_HoldButton_C_OnButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HoldButton.Widget_HoldButton_C.OnButtonReleased
// (BlueprintCallable, BlueprintEvent)
void UWidget_HoldButton_C::OnButtonReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HoldButton.Widget_HoldButton_C.OnButtonReleased");

	UWidget_HoldButton_C_OnButtonReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HoldButton.Widget_HoldButton_C.OnTimeExpired
// (BlueprintCallable, BlueprintEvent)
void UWidget_HoldButton_C::OnTimeExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HoldButton.Widget_HoldButton_C.OnTimeExpired");

	UWidget_HoldButton_C_OnTimeExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HoldButton.Widget_HoldButton_C.PlayHoldSuccess
// (BlueprintCallable, BlueprintEvent)
void UWidget_HoldButton_C::PlayHoldSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HoldButton.Widget_HoldButton_C.PlayHoldSuccess");

	UWidget_HoldButton_C_PlayHoldSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HoldButton.Widget_HoldButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_HoldButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HoldButton.Widget_HoldButton_C.Construct");

	UWidget_HoldButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HoldButton.Widget_HoldButton_C.OnButtonclick
// (BlueprintCallable, BlueprintEvent)
void UWidget_HoldButton_C::OnButtonclick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HoldButton.Widget_HoldButton_C.OnButtonclick");

	UWidget_HoldButton_C_OnButtonclick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HoldButton.Widget_HoldButton_C.ExecuteUbergraph_Widget_HoldButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_HoldButton_C::ExecuteUbergraph_Widget_HoldButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HoldButton.Widget_HoldButton_C.ExecuteUbergraph_Widget_HoldButton");

	UWidget_HoldButton_C_ExecuteUbergraph_Widget_HoldButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HoldButton.Widget_HoldButton_C.OnPressAndHold__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          CompletionPct                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_HoldButton_C::OnPressAndHold__DelegateSignature(bool Success, float CompletionPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HoldButton.Widget_HoldButton_C.OnPressAndHold__DelegateSignature");

	UWidget_HoldButton_C_OnPressAndHold__DelegateSignature_Params params;
	params.Success = Success;
	params.CompletionPct = CompletionPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
