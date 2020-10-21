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

// Function Mod_Wildfire_Projectile.Mod_Wildfire_Projectile_C.ReceiveBeginPlay
struct AMod_Wildfire_Projectile_C_ReceiveBeginPlay_Params
{
};

// Function Mod_Wildfire_Projectile.Mod_Wildfire_Projectile_C.ReceiveTick
struct AMod_Wildfire_Projectile_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Wildfire_Projectile.Mod_Wildfire_Projectile_C.OnProjectileHit
struct AMod_Wildfire_Projectile_C_OnProjectileHit_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Mod_Wildfire_Projectile.Mod_Wildfire_Projectile_C.ExecuteUbergraph_Mod_Wildfire_Projectile
struct AMod_Wildfire_Projectile_C_ExecuteUbergraph_Mod_Wildfire_Projectile_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
