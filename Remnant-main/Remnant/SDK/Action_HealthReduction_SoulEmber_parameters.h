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

// Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.CheckTag
struct UAction_HealthReduction_SoulEmber_C_CheckTag_Params
{
	bool                                               DoesExtraBlastDamage;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DamageScalar;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.HasSoulEmber
struct UAction_HealthReduction_SoulEmber_C_HasSoulEmber_Params
{
	class ATrinket_SoulEmber_C*                        AsTrinket_Soul_Ember;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.OnComputeStats
struct UAction_HealthReduction_SoulEmber_C_OnComputeStats_Params
{
};

// Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.OnActionStart
struct UAction_HealthReduction_SoulEmber_C_OnActionStart_Params
{
};

// Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.ExecuteUbergraph_Action_HealthReduction_SoulEmber
struct UAction_HealthReduction_SoulEmber_C_ExecuteUbergraph_Action_HealthReduction_SoulEmber_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
