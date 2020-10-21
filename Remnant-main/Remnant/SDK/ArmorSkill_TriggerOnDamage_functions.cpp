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

// Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.Trigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
void UArmorSkill_TriggerOnDamage_C::Trigger(const struct FDamageInfo& Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.Trigger");

	UArmorSkill_TriggerOnDamage_C_Trigger_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.OnHitTarget
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UArmorSkill_TriggerOnDamage_C::OnHitTarget(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.OnHitTarget");

	UArmorSkill_TriggerOnDamage_C_OnHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.ExecuteUbergraph_ArmorSkill_TriggerOnDamage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArmorSkill_TriggerOnDamage_C::ExecuteUbergraph_ArmorSkill_TriggerOnDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.ExecuteUbergraph_ArmorSkill_TriggerOnDamage");

	UArmorSkill_TriggerOnDamage_C_ExecuteUbergraph_ArmorSkill_TriggerOnDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
