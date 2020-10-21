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

// Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.SetSpawnPosition
struct AInteractive_Campfire_SpawnPoint_C_SetSpawnPosition_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.SetSpawnState
struct AInteractive_Campfire_SpawnPoint_C_SetSpawnState_Params
{
	class ACharacterGunfire*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SpawnState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.OnPreSpawn
struct AInteractive_Campfire_SpawnPoint_C_OnPreSpawn_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.PossessedBy
struct AInteractive_Campfire_SpawnPoint_C_PossessedBy_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.ExecuteUbergraph_Interactive_Campfire_SpawnPoint
struct AInteractive_Campfire_SpawnPoint_C_ExecuteUbergraph_Interactive_Campfire_SpawnPoint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
