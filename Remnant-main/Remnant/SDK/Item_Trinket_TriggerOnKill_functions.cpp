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

// Function Item_Trinket_TriggerOnKill.Item_Trinket_TriggerOnKill_C.OnHitTarget
// (BlueprintAuthorityOnly, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AItem_Trinket_TriggerOnKill_C::OnHitTarget(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnKill.Item_Trinket_TriggerOnKill_C.OnHitTarget");

	AItem_Trinket_TriggerOnKill_C_OnHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Trinket_TriggerOnKill.Item_Trinket_TriggerOnKill_C.ExecuteUbergraph_Item_Trinket_TriggerOnKill
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItem_Trinket_TriggerOnKill_C::ExecuteUbergraph_Item_Trinket_TriggerOnKill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnKill.Item_Trinket_TriggerOnKill_C.ExecuteUbergraph_Item_Trinket_TriggerOnKill");

	AItem_Trinket_TriggerOnKill_C_ExecuteUbergraph_Item_Trinket_TriggerOnKill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
