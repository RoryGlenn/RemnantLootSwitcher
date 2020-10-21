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

// Function Dialog_OkDialog.Dialog_OkDialog_C.OnBeginDialog
// (Event, Public, BlueprintEvent)
void ADialog_OkDialog_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_OkDialog.Dialog_OkDialog_C.OnBeginDialog");

	ADialog_OkDialog_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_OkDialog.Dialog_OkDialog_C.OnEndDialog
// (Event, Public, BlueprintEvent)
void ADialog_OkDialog_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_OkDialog.Dialog_OkDialog_C.OnEndDialog");

	ADialog_OkDialog_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_OkDialog.Dialog_OkDialog_C.ExecuteUbergraph_Dialog_OkDialog
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_OkDialog_C::ExecuteUbergraph_Dialog_OkDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_OkDialog.Dialog_OkDialog_C.ExecuteUbergraph_Dialog_OkDialog");

	ADialog_OkDialog_C_ExecuteUbergraph_Dialog_OkDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
