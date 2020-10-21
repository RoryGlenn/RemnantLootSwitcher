#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.Trigger
struct UArmorSkill_TriggerOnDamage_C_Trigger_Params
{
	struct FDamageInfo                                 Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.OnHitTarget
struct UArmorSkill_TriggerOnDamage_C_OnHitTarget_Params
{
	struct FDamageInfo                                 DamageInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.ExecuteUbergraph_ArmorSkill_TriggerOnDamage
struct UArmorSkill_TriggerOnDamage_C_ExecuteUbergraph_ArmorSkill_TriggerOnDamage_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
