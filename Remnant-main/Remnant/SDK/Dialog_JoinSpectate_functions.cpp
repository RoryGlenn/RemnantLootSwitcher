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

// Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.OnInvalidTarget
// (BlueprintCallable, BlueprintEvent)
void ADialog_JoinSpectate_C::OnInvalidTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.OnInvalidTarget");

	ADialog_JoinSpectate_C_OnInvalidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.OnValidTarget
// (BlueprintCallable, BlueprintEvent)
void ADialog_JoinSpectate_C::OnValidTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.OnValidTarget");

	ADialog_JoinSpectate_C_OnValidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.EvemtClosedCharacterSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_JoinSpectate_C::EvemtClosedCharacterSelect(const struct FName& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.EvemtClosedCharacterSelect");

	ADialog_JoinSpectate_C_EvemtClosedCharacterSelect_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.PostTravel
// (BlueprintCallable, BlueprintEvent)
void ADialog_JoinSpectate_C::PostTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.PostTravel");

	ADialog_JoinSpectate_C_PostTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.ExecuteUbergraph_Dialog_JoinSpectate
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_JoinSpectate_C::ExecuteUbergraph_Dialog_JoinSpectate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.ExecuteUbergraph_Dialog_JoinSpectate");

	ADialog_JoinSpectate_C_ExecuteUbergraph_Dialog_JoinSpectate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
