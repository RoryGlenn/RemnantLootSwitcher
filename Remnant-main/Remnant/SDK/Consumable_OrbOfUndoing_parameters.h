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

// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ModifyInspectInfo
struct AConsumable_OrbOfUndoing_C_ModifyInspectInfo_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData*                           InInstanceData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.OnActivate
struct AConsumable_OrbOfUndoing_C_OnActivate_Params
{
};

// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.OnEquipped
struct AConsumable_OrbOfUndoing_C_OnEquipped_Params
{
};

// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ExecuteUbergraph_Consumable_OrbOfUndoing
struct AConsumable_OrbOfUndoing_C_ExecuteUbergraph_Consumable_OrbOfUndoing_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
