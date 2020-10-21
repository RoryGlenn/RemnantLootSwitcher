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

// Function Dialog_KeepSettings.Dialog_KeepSettings_C.OnBeginDialog
// (Event, Public, BlueprintEvent)
void ADialog_KeepSettings_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_KeepSettings.Dialog_KeepSettings_C.OnBeginDialog");

	ADialog_KeepSettings_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_KeepSettings.Dialog_KeepSettings_C.OnEndDialog
// (Event, Public, BlueprintEvent)
void ADialog_KeepSettings_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_KeepSettings.Dialog_KeepSettings_C.OnEndDialog");

	ADialog_KeepSettings_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_KeepSettings.Dialog_KeepSettings_C.ExecuteUbergraph_Dialog_KeepSettings
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_KeepSettings_C::ExecuteUbergraph_Dialog_KeepSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_KeepSettings.Dialog_KeepSettings_C.ExecuteUbergraph_Dialog_KeepSettings");

	ADialog_KeepSettings_C_ExecuteUbergraph_Dialog_KeepSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
