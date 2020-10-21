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

// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ShowJoinSpectateDialog
// (Public, BlueprintCallable, BlueprintEvent)
void ARemnant_SpectatorPawn_C::ShowJoinSpectateDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ShowJoinSpectateDialog");

	ARemnant_SpectatorPawn_C_ShowJoinSpectateDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.GetJoinSpectateDialog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADialog_JoinSpectate_C*  Dialog                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARemnant_SpectatorPawn_C::GetJoinSpectateDialog(class ADialog_JoinSpectate_C** Dialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.GetJoinSpectateDialog");

	ARemnant_SpectatorPawn_C_GetJoinSpectateDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dialog != nullptr)
		*Dialog = params.Dialog;

}


// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ShouldAutoSpectate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ARemnant_SpectatorPawn_C::ShouldAutoSpectate(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ShouldAutoSpectate");

	ARemnant_SpectatorPawn_C_ShouldAutoSpectate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.GetDeathScreen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUIActor*                Dialog                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARemnant_SpectatorPawn_C::GetDeathScreen(class AUIActor** Dialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.GetDeathScreen");

	ARemnant_SpectatorPawn_C_GetDeathScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dialog != nullptr)
		*Dialog = params.Dialog;

}


// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ShowDeathScreen
// (Public, BlueprintCallable, BlueprintEvent)
void ARemnant_SpectatorPawn_C::ShowDeathScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ShowDeathScreen");

	ARemnant_SpectatorPawn_C_ShowDeathScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.OnFinishTravel
// (Event, Public, BlueprintEvent)
void ARemnant_SpectatorPawn_C::OnFinishTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.OnFinishTravel");

	ARemnant_SpectatorPawn_C_OnFinishTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARemnant_SpectatorPawn_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ReceiveTick");

	ARemnant_SpectatorPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.OnInvalidTarget
// (Event, Public, BlueprintEvent)
void ARemnant_SpectatorPawn_C::OnInvalidTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.OnInvalidTarget");

	ARemnant_SpectatorPawn_C_OnInvalidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.OnValidTarget
// (Event, Public, BlueprintEvent)
void ARemnant_SpectatorPawn_C::OnValidTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.OnValidTarget");

	ARemnant_SpectatorPawn_C_OnValidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ExecuteUbergraph_Remnant_SpectatorPawn
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARemnant_SpectatorPawn_C::ExecuteUbergraph_Remnant_SpectatorPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ExecuteUbergraph_Remnant_SpectatorPawn");

	ARemnant_SpectatorPawn_C_ExecuteUbergraph_Remnant_SpectatorPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
