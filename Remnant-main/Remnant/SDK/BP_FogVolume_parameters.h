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

// Function BP_FogVolume.BP_FogVolume_C.UserConstructionScript
struct ABP_FogVolume_C_UserConstructionScript_Params
{
};

// Function BP_FogVolume.BP_FogVolume_C.Changeopacity
struct ABP_FogVolume_C_Changeopacity_Params
{
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FogVolume.BP_FogVolume_C.UpdateFogVolumeOpacity
struct ABP_FogVolume_C_UpdateFogVolumeOpacity_Params
{
	float                                              from;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              to;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FogVolume.BP_FogVolume_C.ExecuteUbergraph_BP_FogVolume
struct ABP_FogVolume_C_ExecuteUbergraph_BP_FogVolume_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
