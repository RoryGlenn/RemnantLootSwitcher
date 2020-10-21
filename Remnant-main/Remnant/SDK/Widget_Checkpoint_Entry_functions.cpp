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

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.ReturnToSurvivalLabyrinth
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Checkpoint_Entry_C::ReturnToSurvivalLabyrinth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.ReturnToSurvivalLabyrinth");

	UWidget_Checkpoint_Entry_C_ReturnToSurvivalLabyrinth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.DoActionConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Checkpoint_Entry_C::DoActionConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.DoActionConfirmed");

	UWidget_Checkpoint_Entry_C_DoActionConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.ShowConfirmDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Caoption                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_Checkpoint_Entry_C::ShowConfirmDialog(const struct FText& Text, const struct FText& Caoption)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.ShowConfirmDialog");

	UWidget_Checkpoint_Entry_C_ShowConfirmDialog_Params params;
	params.Text = Text;
	params.Caoption = Caoption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.TravelToLastCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Checkpoint_Entry_C::TravelToLastCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.TravelToLastCheckpoint");

	UWidget_Checkpoint_Entry_C_TravelToLastCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.IsFocusedVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_Checkpoint_Entry_C::IsFocusedVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.IsFocusedVisibility");

	UWidget_Checkpoint_Entry_C_IsFocusedVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.CanTravel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_Checkpoint_Entry_C::CanTravel(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.CanTravel");

	UWidget_Checkpoint_Entry_C_CanTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.LeaveDungeon
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Checkpoint_Entry_C::LeaveDungeon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.LeaveDungeon");

	UWidget_Checkpoint_Entry_C_LeaveDungeon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.ReturnToTown
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Checkpoint_Entry_C::ReturnToTown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.ReturnToTown");

	UWidget_Checkpoint_Entry_C_ReturnToTown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.FastTravel
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Checkpoint_Entry_C::FastTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.FastTravel");

	UWidget_Checkpoint_Entry_C_FastTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.DoAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Checkpoint_Entry_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.DoAction");

	UWidget_Checkpoint_Entry_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.OnLoaded_74207D154806E394FF9607BD3C1D42DE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Checkpoint_Entry_C::OnLoaded_74207D154806E394FF9607BD3C1D42DE(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.OnLoaded_74207D154806E394FF9607BD3C1D42DE");

	UWidget_Checkpoint_Entry_C_OnLoaded_74207D154806E394FF9607BD3C1D42DE_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Checkpoint_Entry_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Checkpoint_Entry_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Checkpoint_Entry_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Checkpoint_Entry_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Checkpoint_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.Construct");

	UWidget_Checkpoint_Entry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Checkpoint_Entry_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Checkpoint_Entry_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.OnDialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Checkpoint_Entry_C::OnDialogResult(const struct FName& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.OnDialogResult");

	UWidget_Checkpoint_Entry_C_OnDialogResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.ExecuteUbergraph_Widget_Checkpoint_Entry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Checkpoint_Entry_C::ExecuteUbergraph_Widget_Checkpoint_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.ExecuteUbergraph_Widget_Checkpoint_Entry");

	UWidget_Checkpoint_Entry_C_ExecuteUbergraph_Widget_Checkpoint_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
