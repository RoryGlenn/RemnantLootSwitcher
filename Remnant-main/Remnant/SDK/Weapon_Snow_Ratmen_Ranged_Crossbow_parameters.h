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

// Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.OnFire
struct AWeapon_Snow_Ratmen_Ranged_Crossbow_C_OnFire_Params
{
	struct FVector                                     from;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     to;                                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponSpread;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.DissolveOut
struct AWeapon_Snow_Ratmen_Ranged_Crossbow_C_DissolveOut_Params
{
};

// Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.CustomEvent_1
struct AWeapon_Snow_Ratmen_Ranged_Crossbow_C_CustomEvent_1_Params
{
	unsigned char                                      Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Cause;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.OnEquipped
struct AWeapon_Snow_Ratmen_Ranged_Crossbow_C_OnEquipped_Params
{
};

// Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.ExecuteUbergraph_Weapon_Snow_Ratmen_Ranged_Crossbow
struct AWeapon_Snow_Ratmen_Ranged_Crossbow_C_ExecuteUbergraph_Weapon_Snow_Ratmen_Ranged_Crossbow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
