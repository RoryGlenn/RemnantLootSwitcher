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

// Function Action_HealOverTime.Action_HealOverTime_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_HealOverTime_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealOverTime.Action_HealOverTime_C.OnActionStart");

	UAction_HealOverTime_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_HealOverTime.Action_HealOverTime_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UAction_HealOverTime_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealOverTime.Action_HealOverTime_C.OnComputeStats");

	UAction_HealOverTime_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_HealOverTime.Action_HealOverTime_C.ExecuteUbergraph_Action_HealOverTime
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_HealOverTime_C::ExecuteUbergraph_Action_HealOverTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealOverTime.Action_HealOverTime_C.ExecuteUbergraph_Action_HealOverTime");

	UAction_HealOverTime_C_ExecuteUbergraph_Action_HealOverTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
