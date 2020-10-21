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

// Function ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C.OnTakeDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UArmorSkill_Regrowth_Action_StatsStacking_C::OnTakeDamage(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C.OnTakeDamage");

	UArmorSkill_Regrowth_Action_StatsStacking_C_OnTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UArmorSkill_Regrowth_Action_StatsStacking_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C.OnComputeStats");

	UArmorSkill_Regrowth_Action_StatsStacking_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C.OnLevelChanged
// (Event, Public, BlueprintEvent)
void UArmorSkill_Regrowth_Action_StatsStacking_C::OnLevelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C.OnLevelChanged");

	UArmorSkill_Regrowth_Action_StatsStacking_C_OnLevelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UArmorSkill_Regrowth_Action_StatsStacking_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C.OnActionStart");

	UArmorSkill_Regrowth_Action_StatsStacking_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C.ExecuteUbergraph_ArmorSkill_Regrowth_Action_StatsStacking
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArmorSkill_Regrowth_Action_StatsStacking_C::ExecuteUbergraph_ArmorSkill_Regrowth_Action_StatsStacking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C.ExecuteUbergraph_ArmorSkill_Regrowth_Action_StatsStacking");

	UArmorSkill_Regrowth_Action_StatsStacking_C_ExecuteUbergraph_ArmorSkill_Regrowth_Action_StatsStacking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
