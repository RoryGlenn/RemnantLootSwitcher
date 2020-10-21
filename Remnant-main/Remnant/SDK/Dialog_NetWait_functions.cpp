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

// Function Dialog_NetWait.Dialog_NetWait_C.EndDialog
// (Public, BlueprintCallable, BlueprintEvent)
void ADialog_NetWait_C::EndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_NetWait.Dialog_NetWait_C.EndDialog");

	ADialog_NetWait_C_EndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_NetWait.Dialog_NetWait_C.OnBeginDialog
// (Event, Public, BlueprintEvent)
void ADialog_NetWait_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_NetWait.Dialog_NetWait_C.OnBeginDialog");

	ADialog_NetWait_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_NetWait.Dialog_NetWait_C.OnWaitDialog_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADialog_NetWait_C::OnWaitDialog_Event_1(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_NetWait.Dialog_NetWait_C.OnWaitDialog_Event_1");

	ADialog_NetWait_C_OnWaitDialog_Event_1_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_NetWait.Dialog_NetWait_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ADialog_NetWait_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_NetWait.Dialog_NetWait_C.ReceiveDestroyed");

	ADialog_NetWait_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_NetWait.Dialog_NetWait_C.ExecuteUbergraph_Dialog_NetWait
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_NetWait_C::ExecuteUbergraph_Dialog_NetWait(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_NetWait.Dialog_NetWait_C.ExecuteUbergraph_Dialog_NetWait");

	ADialog_NetWait_C_ExecuteUbergraph_Dialog_NetWait_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
