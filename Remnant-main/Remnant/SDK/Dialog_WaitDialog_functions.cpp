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

// Function Dialog_WaitDialog.Dialog_WaitDialog_C.UpdateWidgetCaption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewCaption                     (BlueprintVisible, BlueprintReadOnly, Parm)
void ADialog_WaitDialog_C::UpdateWidgetCaption(const struct FText& NewCaption)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WaitDialog.Dialog_WaitDialog_C.UpdateWidgetCaption");

	ADialog_WaitDialog_C_UpdateWidgetCaption_Params params;
	params.NewCaption = NewCaption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_WaitDialog.Dialog_WaitDialog_C.EndDialogWithFade
// (Public, BlueprintCallable, BlueprintEvent)
void ADialog_WaitDialog_C::EndDialogWithFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WaitDialog.Dialog_WaitDialog_C.EndDialogWithFade");

	ADialog_WaitDialog_C_EndDialogWithFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_WaitDialog.Dialog_WaitDialog_C.EndDialog
// (Public, BlueprintCallable, BlueprintEvent)
void ADialog_WaitDialog_C::EndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WaitDialog.Dialog_WaitDialog_C.EndDialog");

	ADialog_WaitDialog_C_EndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_WaitDialog.Dialog_WaitDialog_C.OnBeginDialog
// (Event, Public, BlueprintEvent)
void ADialog_WaitDialog_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WaitDialog.Dialog_WaitDialog_C.OnBeginDialog");

	ADialog_WaitDialog_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_WaitDialog.Dialog_WaitDialog_C.ExecuteUbergraph_Dialog_WaitDialog
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_WaitDialog_C::ExecuteUbergraph_Dialog_WaitDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WaitDialog.Dialog_WaitDialog_C.ExecuteUbergraph_Dialog_WaitDialog");

	ADialog_WaitDialog_C_ExecuteUbergraph_Dialog_WaitDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
