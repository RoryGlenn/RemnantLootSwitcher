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

// Function Breakable_Snow_Exploding_FrostPlant.Breakable_Snow_Exploding_FrostPlant_C.OnNotifyTakeDamage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void ABreakable_Snow_Exploding_FrostPlant_C::OnNotifyTakeDamage(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Breakable_Snow_Exploding_FrostPlant.Breakable_Snow_Exploding_FrostPlant_C.OnNotifyTakeDamage");

	ABreakable_Snow_Exploding_FrostPlant_C_OnNotifyTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Breakable_Snow_Exploding_FrostPlant.Breakable_Snow_Exploding_FrostPlant_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_ComputeStatsDelegate__DelegateSignature
// (BlueprintEvent)
void ABreakable_Snow_Exploding_FrostPlant_C::BndEvt__Stats_K2Node_ComponentBoundEvent_1_ComputeStatsDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Breakable_Snow_Exploding_FrostPlant.Breakable_Snow_Exploding_FrostPlant_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_ComputeStatsDelegate__DelegateSignature");

	ABreakable_Snow_Exploding_FrostPlant_C_BndEvt__Stats_K2Node_ComponentBoundEvent_1_ComputeStatsDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Breakable_Snow_Exploding_FrostPlant.Breakable_Snow_Exploding_FrostPlant_C.ExecuteUbergraph_Breakable_Snow_Exploding_FrostPlant
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABreakable_Snow_Exploding_FrostPlant_C::ExecuteUbergraph_Breakable_Snow_Exploding_FrostPlant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Breakable_Snow_Exploding_FrostPlant.Breakable_Snow_Exploding_FrostPlant_C.ExecuteUbergraph_Breakable_Snow_Exploding_FrostPlant");

	ABreakable_Snow_Exploding_FrostPlant_C_ExecuteUbergraph_Breakable_Snow_Exploding_FrostPlant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
