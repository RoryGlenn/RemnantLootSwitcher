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

// Function Interactive_Chain_B.Interactive_Chain_B_C.UserConstructionScript
struct AInteractive_Chain_B_C_UserConstructionScript_Params
{
};

// Function Interactive_Chain_B.Interactive_Chain_B_C.ReceiveActorBeginOverlap
struct AInteractive_Chain_B_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Chain_B.Interactive_Chain_B_C.MulticastPushBell
struct AInteractive_Chain_B_C_MulticastPushBell_Params
{
	struct FVector                                     Source;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Velocity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Chain_B.Interactive_Chain_B_C.ExecuteUbergraph_Interactive_Chain_B
struct AInteractive_Chain_B_C_ExecuteUbergraph_Interactive_Chain_B_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
