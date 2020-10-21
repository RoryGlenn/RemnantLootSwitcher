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

// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.UpdateCollisionProfiles
struct AWeapon_Ratmen_Brute_Shield_C_UpdateCollisionProfiles_Params
{
};

// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.ReceiveBeginPlay
struct AWeapon_Ratmen_Brute_Shield_C_ReceiveBeginPlay_Params
{
};

// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.OnEvent_Event_1
struct AWeapon_Ratmen_Brute_Shield_C_OnEvent_Event_1_Params
{
	struct FName                                       EventName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature
struct AWeapon_Ratmen_Brute_Shield_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.OnProjectileHit
struct AWeapon_Ratmen_Brute_Shield_C_OnProjectileHit_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.OnProjectileStop
struct AWeapon_Ratmen_Brute_Shield_C_OnProjectileStop_Params
{
};

// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.SFX_Shiled_Loop_Start
struct AWeapon_Ratmen_Brute_Shield_C_SFX_Shiled_Loop_Start_Params
{
};

// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.SFX_Shiled_Loop_Stop
struct AWeapon_Ratmen_Brute_Shield_C_SFX_Shiled_Loop_Stop_Params
{
};

// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.OnDead_Event_1
struct AWeapon_Ratmen_Brute_Shield_C_OnDead_Event_1_Params
{
	unsigned char                                      Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Cause;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.ExecuteUbergraph_Weapon_Ratmen_Brute_Shield
struct AWeapon_Ratmen_Brute_Shield_C_ExecuteUbergraph_Weapon_Ratmen_Brute_Shield_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
