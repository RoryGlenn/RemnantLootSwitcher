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

// Function Quest_Base.Quest_Base_C.GetHost
struct AQuest_Base_C_GetHost_Params
{
	class AActor*                                      HostTargetPlayer;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Base.Quest_Base_C.SetAIPersistent
struct AQuest_Base_C_SetAIPersistent_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Base.Quest_Base_C.CleanupSpawnsForEventRegion
struct AQuest_Base_C_CleanupSpawnsForEventRegion_Params
{
	class URemnantQuestEventRegion*                    EventRegion;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Kill;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Base.Quest_Base_C.ShowExitPrompt
struct AQuest_Base_C_ShowExitPrompt_Params
{
	class URemnantQuestTile*                           QuestTile;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Base.Quest_Base_C.RemoveKey
struct AQuest_Base_C_RemoveKey_Params
{
	struct FName                                       Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Base.Quest_Base_C.SetKey
struct AQuest_Base_C_SetKey_Params
{
	struct FName                                       Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Base.Quest_Base_C.HasKey
struct AQuest_Base_C_HasKey_Params
{
	struct FName                                       Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Base.Quest_Base_C.SetInvulnerable
struct AQuest_Base_C_SetInvulnerable_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ENUM_InvulnerableType>                 Invulnerability;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Base.Quest_Base_C.TriggerDialogResponseForEventRegion
struct AQuest_Base_C_TriggerDialogResponseForEventRegion_Params
{
	class URemnantQuestEventRegion*                    EventRegion;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DialogResponse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Base.Quest_Base_C.RegisterDefendObjective
struct AQuest_Base_C_RegisterDefendObjective_Params
{
	class URemnantQuestEntity*                         QuestEntity;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Register;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Base.Quest_Base_C.SetRewardTag
struct AQuest_Base_C_SetRewardTag_Params
{
	struct FName                                       Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
