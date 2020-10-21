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

// Function Action_UndyingCooldown.Action_UndyingCooldown_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_UndyingCooldown_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_UndyingCooldown.Action_UndyingCooldown_C.OnActionStart");

	UAction_UndyingCooldown_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_UndyingCooldown.Action_UndyingCooldown_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAction_UndyingCooldown_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_UndyingCooldown.Action_UndyingCooldown_C.OnActionStop");

	UAction_UndyingCooldown_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_UndyingCooldown.Action_UndyingCooldown_C.ExecuteUbergraph_Action_UndyingCooldown
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_UndyingCooldown_C::ExecuteUbergraph_Action_UndyingCooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_UndyingCooldown.Action_UndyingCooldown_C.ExecuteUbergraph_Action_UndyingCooldown");

	UAction_UndyingCooldown_C_ExecuteUbergraph_Action_UndyingCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
