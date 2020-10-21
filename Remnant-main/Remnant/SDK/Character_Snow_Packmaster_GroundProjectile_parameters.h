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

// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.DetermineForceFeedback
struct ACharacter_Snow_Packmaster_GroundProjectile_C_DetermineForceFeedback_Params
{
	struct FDamageInfo                                 DamageInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.SetHitCharacterCooldown
struct ACharacter_Snow_Packmaster_GroundProjectile_C_SetHitCharacterCooldown_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.ValidateHitCharacterCooldown
struct ACharacter_Snow_Packmaster_GroundProjectile_C_ValidateHitCharacterCooldown_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Rtn;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.TestLineOfSight
struct ACharacter_Snow_Packmaster_GroundProjectile_C_TestLineOfSight_Params
{
	class AActor*                                      to;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.ReceiveBeginPlay
struct ACharacter_Snow_Packmaster_GroundProjectile_C_ReceiveBeginPlay_Params
{
};

// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ACharacter_Snow_Packmaster_GroundProjectile_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.SFX_Shockwave_FadeIn
struct ACharacter_Snow_Packmaster_GroundProjectile_C_SFX_Shockwave_FadeIn_Params
{
};

// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.SFX_Shockwave_FadeOut
struct ACharacter_Snow_Packmaster_GroundProjectile_C_SFX_Shockwave_FadeOut_Params
{
};

// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.ExecuteUbergraph_Character_Snow_Packmaster_GroundProjectile
struct ACharacter_Snow_Packmaster_GroundProjectile_C_ExecuteUbergraph_Character_Snow_Packmaster_GroundProjectile_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
