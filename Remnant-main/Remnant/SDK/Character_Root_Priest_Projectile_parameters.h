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

// Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.GetCharacter
struct ACharacter_Root_Priest_Projectile_C_GetCharacter_Params
{
	class ACharacterGunfire*                           AsCharacter_Gunfire;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.OnHitGround
struct ACharacter_Root_Priest_Projectile_C_OnHitGround_Params
{
	struct FHitResult                                  Impact;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                     GroundLocation;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.ExecuteUbergraph_Character_Root_Priest_Projectile
struct ACharacter_Root_Priest_Projectile_C_ExecuteUbergraph_Character_Root_Priest_Projectile_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
