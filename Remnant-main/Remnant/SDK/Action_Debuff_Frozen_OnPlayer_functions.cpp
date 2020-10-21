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

// Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.PlayFrozenMeltFX_WithoutSpiceroot
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_Debuff_Frozen_OnPlayer_C::PlayFrozenMeltFX_WithoutSpiceroot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.PlayFrozenMeltFX_WithoutSpiceroot");

	UAction_Debuff_Frozen_OnPlayer_C_PlayFrozenMeltFX_WithoutSpiceroot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAction_Debuff_Frozen_OnPlayer_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.OnActionStop");

	UAction_Debuff_Frozen_OnPlayer_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Debuff_Frozen_OnPlayer_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.OnActionStart");

	UAction_Debuff_Frozen_OnPlayer_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UAction_Debuff_Frozen_OnPlayer_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.OnComputeStats");

	UAction_Debuff_Frozen_OnPlayer_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.SFX_Frozen_DeActivate
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void UAction_Debuff_Frozen_OnPlayer_C::SFX_Frozen_DeActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.SFX_Frozen_DeActivate");

	UAction_Debuff_Frozen_OnPlayer_C_SFX_Frozen_DeActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.ExecuteUbergraph_Action_Debuff_Frozen_OnPlayer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Debuff_Frozen_OnPlayer_C::ExecuteUbergraph_Action_Debuff_Frozen_OnPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.ExecuteUbergraph_Action_Debuff_Frozen_OnPlayer");

	UAction_Debuff_Frozen_OnPlayer_C_ExecuteUbergraph_Action_Debuff_Frozen_OnPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
