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

// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.OnCompleteQuest
struct AQuest_SmallD_IceSkimmer_C_OnCompleteQuest_Params
{
};

// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.TuskTradeArmor
struct AQuest_SmallD_IceSkimmer_C_TuskTradeArmor_Params
{
};

// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.OnQuestComplete
struct AQuest_SmallD_IceSkimmer_C_OnQuestComplete_Params
{
	EQuestResult                                       Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.BndEvt__ApproachLockedDoor_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_SmallD_IceSkimmer_C_BndEvt__ApproachLockedDoor_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.BndEvt__PackmasterSpawnCheck_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature
struct AQuest_SmallD_IceSkimmer_C_BndEvt__PackmasterSpawnCheck_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature_Params
{
	class ARemnantCharacter*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.UpdateEntityVariables
struct AQuest_SmallD_IceSkimmer_C_UpdateEntityVariables_Params
{
};

// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.BndEvt__ArmorSetReward_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature
struct AQuest_SmallD_IceSkimmer_C_BndEvt__ArmorSetReward_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.OnInteract_ArmorSet
struct AQuest_SmallD_IceSkimmer_C_OnInteract_ArmorSet_Params
{
	struct FName                                       StateName;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Other;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.InspectArmor
struct AQuest_SmallD_IceSkimmer_C_InspectArmor_Params
{
};

// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.SetSmiteDoorOpen
struct AQuest_SmallD_IceSkimmer_C_SetSmiteDoorOpen_Params
{
};

// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.ExecuteUbergraph_Quest_SmallD_IceSkimmer
struct AQuest_SmallD_IceSkimmer_C_ExecuteUbergraph_Quest_SmallD_IceSkimmer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
