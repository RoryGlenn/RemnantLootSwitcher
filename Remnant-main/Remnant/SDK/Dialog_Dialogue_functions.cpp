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

// Function Dialog_Dialogue.Dialog_Dialogue_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)
void ADialog_Dialogue_C::UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Dialogue.Dialog_Dialogue_C.UnbindEvents");

	ADialog_Dialogue_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Dialogue.Dialog_Dialogue_C.EndDialog
// (Public, BlueprintCallable, BlueprintEvent)
void ADialog_Dialogue_C::EndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Dialogue.Dialog_Dialogue_C.EndDialog");

	ADialog_Dialogue_C_EndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Dialogue.Dialog_Dialogue_C.SetInitiator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Dialogue_C::SetInitiator(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Dialogue.Dialog_Dialogue_C.SetInitiator");

	ADialog_Dialogue_C_SetInitiator_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Dialogue.Dialog_Dialogue_C.SetContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Dialogue_C::SetContext(class AActor* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Dialogue.Dialog_Dialogue_C.SetContext");

	ADialog_Dialogue_C_SetContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Dialogue.Dialog_Dialogue_C.OnBeginDialog
// (Event, Public, BlueprintEvent)
void ADialog_Dialogue_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Dialogue.Dialog_Dialogue_C.OnBeginDialog");

	ADialog_Dialogue_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Dialogue.Dialog_Dialogue_C.OnEndDialog
// (Event, Public, BlueprintEvent)
void ADialog_Dialogue_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Dialogue.Dialog_Dialogue_C.OnEndDialog");

	ADialog_Dialogue_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Dialogue.Dialog_Dialogue_C.ExecuteUbergraph_Dialog_Dialogue
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Dialogue_C::ExecuteUbergraph_Dialog_Dialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Dialogue.Dialog_Dialogue_C.ExecuteUbergraph_Dialog_Dialogue");

	ADialog_Dialogue_C_ExecuteUbergraph_Dialog_Dialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
