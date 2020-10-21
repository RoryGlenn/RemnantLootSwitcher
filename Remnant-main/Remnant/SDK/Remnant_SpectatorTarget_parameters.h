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

// Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.ReceiveBeginPlay
struct URemnant_SpectatorTarget_C_ReceiveBeginPlay_Params
{
};

// Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.OnDead_Event_1
struct URemnant_SpectatorTarget_C_OnDead_Event_1_Params
{
	unsigned char                                      Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Cause;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.ReceiveEndPlay
struct URemnant_SpectatorTarget_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.ExecuteUbergraph_Remnant_SpectatorTarget
struct URemnant_SpectatorTarget_C_ExecuteUbergraph_Remnant_SpectatorTarget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
