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

// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ScaleArmorStat
struct UCharacter_Base_ComputedStats_C_ScaleArmorStat_Params
{
	struct FName                                       StatName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Level;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyExperience
struct UCharacter_Base_ComputedStats_C_ModifyExperience_Params
{
	int                                                Level;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyArmorAndResistance
struct UCharacter_Base_ComputedStats_C_ModifyArmorAndResistance_Params
{
	int                                                Level;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyHealth
struct UCharacter_Base_ComputedStats_C_ModifyHealth_Params
{
	int                                                Level;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumPlayers;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyDamage
struct UCharacter_Base_ComputedStats_C_ModifyDamage_Params
{
	int                                                Level;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumPlayers;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.OnPostComputeStats
struct UCharacter_Base_ComputedStats_C_OnPostComputeStats_Params
{
};

// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ExecuteUbergraph_Character_Base_ComputedStats
struct UCharacter_Base_ComputedStats_C_ExecuteUbergraph_Character_Base_ComputedStats_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
