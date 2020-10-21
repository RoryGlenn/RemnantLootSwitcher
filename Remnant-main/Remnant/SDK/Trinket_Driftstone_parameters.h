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

// Function Trinket_Driftstone.Trinket_Driftstone_C.ModifyInspectInfo
struct ATrinket_Driftstone_C_ModifyInspectInfo_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData*                           InInstanceData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trinket_Driftstone.Trinket_Driftstone_C.OnEquipped
struct ATrinket_Driftstone_C_OnEquipped_Params
{
};

// Function Trinket_Driftstone.Trinket_Driftstone_C.OnUnequipped
struct ATrinket_Driftstone_C_OnUnequipped_Params
{
};

// Function Trinket_Driftstone.Trinket_Driftstone_C.ExecuteUbergraph_Trinket_Driftstone
struct ATrinket_Driftstone_C_ExecuteUbergraph_Trinket_Driftstone_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
