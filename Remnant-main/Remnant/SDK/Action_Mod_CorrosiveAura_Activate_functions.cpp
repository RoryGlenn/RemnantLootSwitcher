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

// Function Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C.UpdateOverlaps02
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UAction_Mod_CorrosiveAura_Activate_C::UpdateOverlaps02()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C.UpdateOverlaps02");

	UAction_Mod_CorrosiveAura_Activate_C_UpdateOverlaps02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Mod_CorrosiveAura_Activate_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C.OnActionStart");

	UAction_Mod_CorrosiveAura_Activate_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAction_Mod_CorrosiveAura_Activate_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C.OnActionStop");

	UAction_Mod_CorrosiveAura_Activate_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C.ApplyCorrosiveStacks
// (BlueprintCallable, BlueprintEvent)
void UAction_Mod_CorrosiveAura_Activate_C::ApplyCorrosiveStacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C.ApplyCorrosiveStacks");

	UAction_Mod_CorrosiveAura_Activate_C_ApplyCorrosiveStacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C.OnBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_CorrosiveAura_Activate_C::OnBeginOverlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C.OnBeginOverlap");

	UAction_Mod_CorrosiveAura_Activate_C_OnBeginOverlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C.ExecuteUbergraph_Action_Mod_CorrosiveAura_Activate
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_CorrosiveAura_Activate_C::ExecuteUbergraph_Action_Mod_CorrosiveAura_Activate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_CorrosiveAura_Activate.Action_Mod_CorrosiveAura_Activate_C.ExecuteUbergraph_Action_Mod_CorrosiveAura_Activate");

	UAction_Mod_CorrosiveAura_Activate_C_ExecuteUbergraph_Action_Mod_CorrosiveAura_Activate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
