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

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.GetSpawnTags
struct AInteractive_LootContainer_Base_C_GetSpawnTags_Params
{
	TArray<struct FName>                               Out;                                                       // (Parm, OutParm, ZeroConstructor)
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.SpawnItems
struct AInteractive_LootContainer_Base_C_SpawnItems_Params
{
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.DoSpawns
struct AInteractive_LootContainer_Base_C_DoSpawns_Params
{
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.HasSpawnPoints
struct AInteractive_LootContainer_Base_C_HasSpawnPoints_Params
{
	bool                                               Out;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.SpawnSpawnPoints
struct AInteractive_LootContainer_Base_C_SpawnSpawnPoints_Params
{
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.SpawnItem
struct AInteractive_LootContainer_Base_C_SpawnItem_Params
{
	class UClass*                                      ItemBP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Quantity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SpawnPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.Init
struct AInteractive_LootContainer_Base_C_Init_Params
{
	class USpawnTable*                                 SpawnTable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               SpawnTags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.DropLoot
struct AInteractive_LootContainer_Base_C_DropLoot_Params
{
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OnRep_Open
struct AInteractive_LootContainer_Base_C_OnRep_Open_Params
{
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.AnimateOpen
struct AInteractive_LootContainer_Base_C_AnimateOpen_Params
{
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.AnimateOpened
struct AInteractive_LootContainer_Base_C_AnimateOpened_Params
{
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OnOpen
struct AInteractive_LootContainer_Base_C_OnOpen_Params
{
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OverrideLootTable
struct AInteractive_LootContainer_Base_C_OverrideLootTable_Params
{
	class USpawnTable*                                 SpawnTable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               SpawnTags;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.ReceiveBeginPlay
struct AInteractive_LootContainer_Base_C_ReceiveBeginPlay_Params
{
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OnGenerated_Event_1
struct AInteractive_LootContainer_Base_C_OnGenerated_Event_1_Params
{
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.ExecuteUbergraph_Interactive_LootContainer_Base
struct AInteractive_LootContainer_Base_C_ExecuteUbergraph_Interactive_LootContainer_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OnOpened__DelegateSignature
struct AInteractive_LootContainer_Base_C_OnOpened__DelegateSignature_Params
{
	class AInteractive_LootContainer_Base_C*           Container;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
