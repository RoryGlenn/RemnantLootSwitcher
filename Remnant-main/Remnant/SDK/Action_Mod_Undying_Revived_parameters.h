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

// Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.FilterIncomingDamage
struct UAction_Mod_Undying_Revived_C_FilterIncomingDamage_Params
{
	struct FDamageInfo                                 DamageInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                             // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.OnComputeStats
struct UAction_Mod_Undying_Revived_C_OnComputeStats_Params
{
};

// Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.ExecuteUbergraph_Action_Mod_Undying_Revived
struct UAction_Mod_Undying_Revived_C_ExecuteUbergraph_Action_Mod_Undying_Revived_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
