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

// Function Widget_ItemCard.Widget_ItemCard_C.ModDetect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ItemCard_C::ModDetect(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemCard.Widget_ItemCard_C.ModDetect");

	UWidget_ItemCard_C_ModDetect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function Widget_ItemCard.Widget_ItemCard_C.GetLabel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Out                            (Parm, OutParm)
void UWidget_ItemCard_C::GetLabel(struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemCard.Widget_ItemCard_C.GetLabel");

	UWidget_ItemCard_C_GetLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_ItemCard.Widget_ItemCard_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_ItemCard_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemCard.Widget_ItemCard_C.GetVisibility_2");

	UWidget_ItemCard_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemCard.Widget_ItemCard_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_ItemCard_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemCard.Widget_ItemCard_C.GetVisibility_1");

	UWidget_ItemCard_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemCard.Widget_ItemCard_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ItemCard_C::SetInfo(const struct FInspectInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemCard.Widget_ItemCard_C.SetInfo");

	UWidget_ItemCard_C_SetInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemCard.Widget_ItemCard_C.Get_Quantity_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_ItemCard_C::Get_Quantity_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemCard.Widget_ItemCard_C.Get_Quantity_Visibility_1");

	UWidget_ItemCard_C_Get_Quantity_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemCard.Widget_ItemCard_C.Get_Quantity_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_ItemCard_C::Get_Quantity_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemCard.Widget_ItemCard_C.Get_Quantity_Text_1");

	UWidget_ItemCard_C_Get_Quantity_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemCard.Widget_ItemCard_C.Get_Icon_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UWidget_ItemCard_C::Get_Icon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemCard.Widget_ItemCard_C.Get_Icon_Brush_1");

	UWidget_ItemCard_C_Get_Icon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemCard.Widget_ItemCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ItemCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemCard.Widget_ItemCard_C.Construct");

	UWidget_ItemCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemCard.Widget_ItemCard_C.ZoomIn
// (BlueprintCallable, BlueprintEvent)
void UWidget_ItemCard_C::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemCard.Widget_ItemCard_C.ZoomIn");

	UWidget_ItemCard_C_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemCard.Widget_ItemCard_C.ZoomOut
// (BlueprintCallable, BlueprintEvent)
void UWidget_ItemCard_C::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemCard.Widget_ItemCard_C.ZoomOut");

	UWidget_ItemCard_C_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemCard.Widget_ItemCard_C.ExecuteUbergraph_Widget_ItemCard
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemCard_C::ExecuteUbergraph_Widget_ItemCard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemCard.Widget_ItemCard_C.ExecuteUbergraph_Widget_ItemCard");

	UWidget_ItemCard_C_ExecuteUbergraph_Widget_ItemCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
