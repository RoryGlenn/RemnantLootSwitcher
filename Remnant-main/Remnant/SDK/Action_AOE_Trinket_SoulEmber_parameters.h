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

// Function Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C.ModifyDamage
struct UAction_AOE_Trinket_SoulEmber_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C.GetDamage
struct UAction_AOE_Trinket_SoulEmber_C_GetDamage_Params
{
	float                                              Damage;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
