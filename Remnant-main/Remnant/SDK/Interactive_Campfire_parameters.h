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

// Function Interactive_Campfire.Interactive_Campfire_C.ReplenishHealthOnly
struct AInteractive_Campfire_C_ReplenishHealthOnly_Params
{
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Campfire.Interactive_Campfire_C.CanUpgrade
struct AInteractive_Campfire_C_CanUpgrade_Params
{
	class ACharacter_Master_Player_C*                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanUpgrade;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       UpgradeDetails;                                            // (Parm, OutParm)
	class UTexture*                                    Icon;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Campfire.Interactive_Campfire_C.RemoveFortifyTag
struct AInteractive_Campfire_C_RemoveFortifyTag_Params
{
};

// Function Interactive_Campfire.Interactive_Campfire_C.OnRep_Fortified
struct AInteractive_Campfire_C_OnRep_Fortified_Params
{
};

// Function Interactive_Campfire.Interactive_Campfire_C.DoFortifyVisuals
struct AInteractive_Campfire_C_DoFortifyVisuals_Params
{
};

// Function Interactive_Campfire.Interactive_Campfire_C.UpdateCampfireVisuals
struct AInteractive_Campfire_C_UpdateCampfireVisuals_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BeingLit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Campfire.Interactive_Campfire_C.StateActivate
struct AInteractive_Campfire_C_StateActivate_Params
{
};

// Function Interactive_Campfire.Interactive_Campfire_C.StateActive
struct AInteractive_Campfire_C_StateActive_Params
{
};

// Function Interactive_Campfire.Interactive_Campfire_C.ReceiveBeginPlay
struct AInteractive_Campfire_C_ReceiveBeginPlay_Params
{
};

// Function Interactive_Campfire.Interactive_Campfire_C.BeginUseCheckpoint
struct AInteractive_Campfire_C_BeginUseCheckpoint_Params
{
	class ACharacter_Master_Player_C*                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasSummoned;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Campfire.Interactive_Campfire_C.EndUseCheckpoint
struct AInteractive_Campfire_C_EndUseCheckpoint_Params
{
	class ACharacter_Master_Player_C*                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Campfire.Interactive_Campfire_C.OnUpgrade
struct AInteractive_Campfire_C_OnUpgrade_Params
{
	class ACharacter_Master_Player_C*                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Campfire.Interactive_Campfire_C.TransitionToMenu
struct AInteractive_Campfire_C_TransitionToMenu_Params
{
	class ACharacter_Master_Player_C*                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Campfire.Interactive_Campfire_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature
struct AInteractive_Campfire_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PreviousStateName;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Campfire.Interactive_Campfire_C.ExecuteUbergraph_Interactive_Campfire
struct AInteractive_Campfire_C_ExecuteUbergraph_Interactive_Campfire_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
