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

// Function Quest_POI_Boss.Quest_POI_Boss_C.IncrementBossCounter
struct AQuest_POI_Boss_C_IncrementBossCounter_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.Setup Achievement Tracking
struct AQuest_POI_Boss_C_Setup_Achievement_Tracking_Params
{
	class ARemnantCharacter*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.Should Award KillBossNoDamage Achievement?
struct AQuest_POI_Boss_C_Should_Award_KillBossNoDamage_Achievement__Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.Reset Objectives
struct AQuest_POI_Boss_C_Reset_Objectives_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.ActivateSpawnsPhase2
struct AQuest_POI_Boss_C_ActivateSpawnsPhase2_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.IsIntroComplete?
struct AQuest_POI_Boss_C_IsIntroComplete__Params
{
	bool                                               IntroComplete;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.CheckIntroCompleted
struct AQuest_POI_Boss_C_CheckIntroCompleted_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.ActivateSpawnsPhase1
struct AQuest_POI_Boss_C_ActivateSpawnsPhase1_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.AllSpawnsDestroyed
struct AQuest_POI_Boss_C_AllSpawnsDestroyed_Params
{
	bool                                               Out;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.UserConstructionScript
struct AQuest_POI_Boss_C_UserConstructionScript_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.OnFailure_BC3958DE4DA88E42DEA2B989E764C822
struct AQuest_POI_Boss_C_OnFailure_BC3958DE4DA88E42DEA2B989E764C822_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.OnSuccess_BC3958DE4DA88E42DEA2B989E764C822
struct AQuest_POI_Boss_C_OnSuccess_BC3958DE4DA88E42DEA2B989E764C822_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.OnFailure_130BD3A5448AC1EE542A568B790B3726
struct AQuest_POI_Boss_C_OnFailure_130BD3A5448AC1EE542A568B790B3726_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.OnSuccess_130BD3A5448AC1EE542A568B790B3726
struct AQuest_POI_Boss_C_OnSuccess_130BD3A5448AC1EE542A568B790B3726_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.OnFailure_4B8145CF46F6CB4622D7F4934FD80EF0
struct AQuest_POI_Boss_C_OnFailure_4B8145CF46F6CB4622D7F4934FD80EF0_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.OnSuccess_4B8145CF46F6CB4622D7F4934FD80EF0
struct AQuest_POI_Boss_C_OnSuccess_4B8145CF46F6CB4622D7F4934FD80EF0_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.OnFailure_31418C5A4FDB6D6B6D7D1DA584C10ACC
struct AQuest_POI_Boss_C_OnFailure_31418C5A4FDB6D6B6D7D1DA584C10ACC_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.OnSuccess_31418C5A4FDB6D6B6D7D1DA584C10ACC
struct AQuest_POI_Boss_C_OnSuccess_31418C5A4FDB6D6B6D7D1DA584C10ACC_Params
{
	EGfeSDKReturnCode                                  GfeSdkReturnCode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.SetupHighlight
struct AQuest_POI_Boss_C_SetupHighlight_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.HighlightSummary
struct AQuest_POI_Boss_C_HighlightSummary_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.HighlightClose
struct AQuest_POI_Boss_C_HighlightClose_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.BndEvt__BanditCamp_Boss_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature
struct AQuest_POI_Boss_C_BndEvt__BanditCamp_Boss_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.OnQuestComplete
struct AQuest_POI_Boss_C_OnQuestComplete_Params
{
	EQuestResult                                       Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.BndEvt__EventRegion Fight Space_K2Node_ComponentBoundEvent_1_EventRegionDelegate__DelegateSignature
struct AQuest_POI_Boss_C_BndEvt__EventRegion_Fight_Space_K2Node_ComponentBoundEvent_1_EventRegionDelegate__DelegateSignature_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.BndEvt__EventRegion Fight Space_K2Node_ComponentBoundEvent_0_EventRegionPlayerDelegate__DelegateSignature
struct AQuest_POI_Boss_C_BndEvt__EventRegion_Fight_Space_K2Node_ComponentBoundEvent_0_EventRegionPlayerDelegate__DelegateSignature_Params
{
	struct FEventRegionCharacter                       Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.BndEvt__Phase1_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature
struct AQuest_POI_Boss_C_BndEvt__Phase1_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.BndEvt__Phase2_K2Node_ComponentBoundEvent_1_QuestManagerVoidDelegate__DelegateSignature
struct AQuest_POI_Boss_C_BndEvt__Phase2_K2Node_ComponentBoundEvent_1_QuestManagerVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.OnCheckComplete
struct AQuest_POI_Boss_C_OnCheckComplete_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.BndEvt__POI_K2Node_ComponentBoundEvent_0_QuestTileActiveDelegate__DelegateSignature
struct AQuest_POI_Boss_C_BndEvt__POI_K2Node_ComponentBoundEvent_0_QuestTileActiveDelegate__DelegateSignature_Params
{
	class URemnantQuestTile*                           QuestTile;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.OnTargetChanged_Event_1
struct AQuest_POI_Boss_C_OnTargetChanged_Event_1_Params
{
	class AActor*                                      NewTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature
struct AQuest_POI_Boss_C_BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature
struct AQuest_POI_Boss_C_BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.IntroCompleted
struct AQuest_POI_Boss_C_IntroCompleted_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.BndEvt__Fight_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature
struct AQuest_POI_Boss_C_BndEvt__Fight_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.BndEvt__Boss_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature
struct AQuest_POI_Boss_C_BndEvt__Boss_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.BndEvt__Minions_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature
struct AQuest_POI_Boss_C_BndEvt__Minions_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.ReceiveBeginPlay
struct AQuest_POI_Boss_C_ReceiveBeginPlay_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.Notify Player Took Damage
struct AQuest_POI_Boss_C_Notify_Player_Took_Damage_Params
{
	struct FDamageInfo                                 DamageInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.ShowSummary
struct AQuest_POI_Boss_C_ShowSummary_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.CloseHighlight
struct AQuest_POI_Boss_C_CloseHighlight_Params
{
};

// Function Quest_POI_Boss.Quest_POI_Boss_C.ExecuteUbergraph_Quest_POI_Boss
struct AQuest_POI_Boss_C_ExecuteUbergraph_Quest_POI_Boss_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
