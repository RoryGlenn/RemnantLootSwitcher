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

// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.DamageBreakable
struct ACharacter_Snow_Ratmen_Brute_C_DamageBreakable_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.IsShieldNearby
struct ACharacter_Snow_Ratmen_Brute_C_IsShieldNearby_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ReceiveBeginPlay
struct ACharacter_Snow_Ratmen_Brute_C_ReceiveBeginPlay_Params
{
};

// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ReceiveTick
struct ACharacter_Snow_Ratmen_Brute_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ShieldThrown
struct ACharacter_Snow_Ratmen_Brute_C_ShieldThrown_Params
{
};

// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ShieldPickup
struct ACharacter_Snow_Ratmen_Brute_C_ShieldPickup_Params
{
};

// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ShieldedTag
struct ACharacter_Snow_Ratmen_Brute_C_ShieldedTag_Params
{
};

// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.RemoveShieldedTag
struct ACharacter_Snow_Ratmen_Brute_C_RemoveShieldedTag_Params
{
};

// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.BndEvt__BreakableCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ACharacter_Snow_Ratmen_Brute_C_BndEvt__BreakableCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ExecuteUbergraph_Character_Snow_Ratmen_Brute
struct ACharacter_Snow_Ratmen_Brute_C_ExecuteUbergraph_Character_Snow_Ratmen_Brute_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
