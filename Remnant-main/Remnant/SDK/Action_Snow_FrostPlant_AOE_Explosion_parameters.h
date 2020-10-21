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

// Function Action_Snow_FrostPlant_AOE_Explosion.Action_Snow_FrostPlant_AOE_Explosion_C.DoSecondaryEffect
struct UAction_Snow_FrostPlant_AOE_Explosion_C_DoSecondaryEffect_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Falloff;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDamageInfo                                 DamageInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function Action_Snow_FrostPlant_AOE_Explosion.Action_Snow_FrostPlant_AOE_Explosion_C.ExecuteUbergraph_Action_Snow_FrostPlant_AOE_Explosion
struct UAction_Snow_FrostPlant_AOE_Explosion_C_ExecuteUbergraph_Action_Snow_FrostPlant_AOE_Explosion_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
