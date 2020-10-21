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

// Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.Trigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Power                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArmorSkill_TriggerOnHit_C::Trigger(int Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.Trigger");

	UArmorSkill_TriggerOnHit_C_Trigger_Params params;
	params.Power = Power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.OnTakeDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UArmorSkill_TriggerOnHit_C::OnTakeDamage(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.OnTakeDamage");

	UArmorSkill_TriggerOnHit_C_OnTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.ExecuteUbergraph_ArmorSkill_TriggerOnHit
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArmorSkill_TriggerOnHit_C::ExecuteUbergraph_ArmorSkill_TriggerOnHit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.ExecuteUbergraph_ArmorSkill_TriggerOnHit");

	UArmorSkill_TriggerOnHit_C_ExecuteUbergraph_ArmorSkill_TriggerOnHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
