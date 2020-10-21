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

// Function Dialog_Death.Dialog_Death_C.fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFadeDirection                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Immediate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADialog_Death_C::fade(EFadeDirection Direction, bool Immediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Death.Dialog_Death_C.fade");

	ADialog_Death_C_fade_Params params;
	params.Direction = Direction;
	params.Immediate = Immediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Death.Dialog_Death_C.BeginSpectating
// (Public, BlueprintCallable, BlueprintEvent)
void ADialog_Death_C::BeginSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Death.Dialog_Death_C.BeginSpectating");

	ADialog_Death_C_BeginSpectating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Death.Dialog_Death_C.SetContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Death_C::SetContext(class AActor* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Death.Dialog_Death_C.SetContext");

	ADialog_Death_C_SetContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Death.Dialog_Death_C.PostTravel
// (BlueprintCallable, BlueprintEvent)
void ADialog_Death_C::PostTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Death.Dialog_Death_C.PostTravel");

	ADialog_Death_C_PostTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Death.Dialog_Death_C.OnInvalidTarget
// (BlueprintCallable, BlueprintEvent)
void ADialog_Death_C::OnInvalidTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Death.Dialog_Death_C.OnInvalidTarget");

	ADialog_Death_C_OnInvalidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Death.Dialog_Death_C.OnValidTarget
// (BlueprintCallable, BlueprintEvent)
void ADialog_Death_C::OnValidTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Death.Dialog_Death_C.OnValidTarget");

	ADialog_Death_C_OnValidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Death.Dialog_Death_C.EnsureValidTarget
// (BlueprintCallable, BlueprintEvent)
void ADialog_Death_C::EnsureValidTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Death.Dialog_Death_C.EnsureValidTarget");

	ADialog_Death_C_EnsureValidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Death.Dialog_Death_C.OnPushDialog
// (Event, Public, BlueprintEvent)
// Parameters:
// class AUIActor*                Next                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Death_C::OnPushDialog(class AUIActor* Next)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Death.Dialog_Death_C.OnPushDialog");

	ADialog_Death_C_OnPushDialog_Params params;
	params.Next = Next;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Death.Dialog_Death_C.OnPopDialog
// (Event, Public, BlueprintEvent)
// Parameters:
// class AUIActor*                Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Death_C::OnPopDialog(class AUIActor* Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Death.Dialog_Death_C.OnPopDialog");

	ADialog_Death_C_OnPopDialog_Params params;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Death.Dialog_Death_C.ExecuteUbergraph_Dialog_Death
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Death_C::ExecuteUbergraph_Dialog_Death(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Death.Dialog_Death_C.ExecuteUbergraph_Dialog_Death");

	ADialog_Death_C_ExecuteUbergraph_Dialog_Death_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
