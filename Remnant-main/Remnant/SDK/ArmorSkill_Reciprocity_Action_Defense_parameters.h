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

// Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.FilterIncomingDamage
struct UArmorSkill_Reciprocity_Action_Defense_C_FilterIncomingDamage_Params
{
	struct FDamageInfo                                 DamageInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                             // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.OnReapplyBuff
struct UArmorSkill_Reciprocity_Action_Defense_C_OnReapplyBuff_Params
{
};

// Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Defense
struct UArmorSkill_Reciprocity_Action_Defense_C_ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Defense_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
