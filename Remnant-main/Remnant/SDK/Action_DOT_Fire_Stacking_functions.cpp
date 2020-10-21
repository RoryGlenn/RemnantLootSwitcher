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

// Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.DetermineRollDelta
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_DOT_Fire_Stacking_C::DetermineRollDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.DetermineRollDelta");

	UAction_DOT_Fire_Stacking_C_DetermineRollDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.OnReapplyBuff
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_DOT_Fire_Stacking_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.OnReapplyBuff");

	UAction_DOT_Fire_Stacking_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_DOT_Fire_Stacking_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.OnActionStart");

	UAction_DOT_Fire_Stacking_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.ExecuteUbergraph_Action_DOT_Fire_Stacking
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_DOT_Fire_Stacking_C::ExecuteUbergraph_Action_DOT_Fire_Stacking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.ExecuteUbergraph_Action_DOT_Fire_Stacking");

	UAction_DOT_Fire_Stacking_C_ExecuteUbergraph_Action_DOT_Fire_Stacking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
