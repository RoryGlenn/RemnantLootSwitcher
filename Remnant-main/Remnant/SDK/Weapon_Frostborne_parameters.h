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

// Function Weapon_Frostborne.Weapon_Frostborne_C.ModifyInspectInfo
struct AWeapon_Frostborne_C_ModifyInspectInfo_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData*                           InInstanceData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Frostborne.Weapon_Frostborne_C.AddFrostbiteStack
struct AWeapon_Frostborne_C_AddFrostbiteStack_Params
{
	class ACharacterGunfire*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Frostborne.Weapon_Frostborne_C.DriftstoneAddStack
struct AWeapon_Frostborne_C_DriftstoneAddStack_Params
{
	class ACharacterGunfire*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Frostborne.Weapon_Frostborne_C.OnHitTarget
struct AWeapon_Frostborne_C_OnHitTarget_Params
{
	struct FDamageInfo                                 DamageInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Weapon_Frostborne.Weapon_Frostborne_C.OnInHand
struct AWeapon_Frostborne_C_OnInHand_Params
{
};

// Function Weapon_Frostborne.Weapon_Frostborne_C.OnNotInHand
struct AWeapon_Frostborne_C_OnNotInHand_Params
{
};

// Function Weapon_Frostborne.Weapon_Frostborne_C.ExecuteUbergraph_Weapon_Frostborne
struct AWeapon_Frostborne_C_ExecuteUbergraph_Weapon_Frostborne_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
