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

// Function Action_Debuff_Radiation.Action_Debuff_Radiation_C.OnPostComputeStats
// (Event, Public, BlueprintEvent)
void UAction_Debuff_Radiation_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Radiation.Action_Debuff_Radiation_C.OnPostComputeStats");

	UAction_Debuff_Radiation_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Radiation.Action_Debuff_Radiation_C.ExecuteUbergraph_Action_Debuff_Radiation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Debuff_Radiation_C::ExecuteUbergraph_Action_Debuff_Radiation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Radiation.Action_Debuff_Radiation_C.ExecuteUbergraph_Action_Debuff_Radiation");

	UAction_Debuff_Radiation_C_ExecuteUbergraph_Action_Debuff_Radiation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
