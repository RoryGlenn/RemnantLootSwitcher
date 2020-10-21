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

// Function Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C.IsValidTarget
struct UAction_AOE_Attack_Hammer_Slam_C_IsValidTarget_Params
{
	class AActor*                                      _Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C.Get Socket Location
struct UAction_AOE_Attack_Hammer_Slam_C_Get_Socket_Location_Params
{
	struct FName                                       InSocketName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
