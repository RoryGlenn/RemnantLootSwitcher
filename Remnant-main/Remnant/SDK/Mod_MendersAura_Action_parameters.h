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

// Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.GetSpawnLocation
struct UMod_MendersAura_Action_C_GetSpawnLocation_Params
{
	struct FVector                                     Out;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.OnActionStart
struct UMod_MendersAura_Action_C_OnActionStart_Params
{
};

// Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.OnActionStop
struct UMod_MendersAura_Action_C_OnActionStop_Params
{
};

// Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.OnDead_Event_1
struct UMod_MendersAura_Action_C_OnDead_Event_1_Params
{
	unsigned char                                      Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Cause;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.ExecuteUbergraph_Mod_MendersAura_Action
struct UMod_MendersAura_Action_C_ExecuteUbergraph_Mod_MendersAura_Action_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
