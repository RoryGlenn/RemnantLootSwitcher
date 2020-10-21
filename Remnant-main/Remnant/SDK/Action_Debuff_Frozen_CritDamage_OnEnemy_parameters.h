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

// Function Action_Debuff_Frozen_CritDamage_OnEnemy.Action_Debuff_Frozen_CritDamage_OnEnemy_C.FilterIncomingDamage
struct UAction_Debuff_Frozen_CritDamage_OnEnemy_C_FilterIncomingDamage_Params
{
	struct FDamageInfo                                 DamageInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                             // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
