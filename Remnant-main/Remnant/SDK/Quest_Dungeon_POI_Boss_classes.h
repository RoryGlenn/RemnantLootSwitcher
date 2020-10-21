#pragma once

// Name: Remnant, Version: 6


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C
// 0x0168 (FullSize[0x0728] - InheritedSize[0x05C0])
class AQuest_Dungeon_POI_Boss_C : public AQuest_Dungeon_POI_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URemnantQuestZoneLink*                       POI_Checkpoint_Survival;                                   // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Boss2_Optional_;                                           // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        EventTrigger;                                              // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEventRegion*                    EventRegion;                                               // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestAIDirector*                     BossSpawns_Phase2;                                         // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestAIDirector*                     BossSpawns_Phase1;                                         // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Minions;                                                   // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Boss;                                                      // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             KillAll;                                                   // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             Fight;                                                     // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Fight_Started;                                             // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8D6T[0x7];                                     // 0x0619(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpawnTable*                                 Spawn_Table;                                               // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BossDeaths;                                                // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3ZAL[0x4];                                     // 0x062C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACharacterGunfire*                           BossRef;                                                   // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           Boss2Ref;                                                  // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IntroComplete;                                             // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               HasIntro;                                                  // 0x0641(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               KillSpawnsOnBossDeath;                                     // 0x0642(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               StartFightOnBossTargetChange;                              // 0x0643(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       QuestCompleteDialogTrigger;                                // 0x0644(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PC;                                                        // 0x064C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TP3Y[0x3];                                     // 0x064D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HighlightStartDelta;                                       // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HighlightEndDelta;                                         // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGfeSDKHighlightSummaryParams               Summary;                                                   // 0x0658(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGfeSDKHighlightOpenGroupParams             Group;                                                     // 0x0668(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     CurrentGroupID;                                            // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<struct FString, struct FString>               Group_Translations;                                        // 0x06D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C");
		return ptr;
	}


	void IncrementBossCounter();
	void CheckIntroCompleted_boss2_();
	void Reset_Objectives();
	void ActivateSpawnsPhase2();
	void IsIntroComplete_(bool* IntroComplete);
	void CheckIntroCompleted();
	void ActivateSpawnsPhase1();
	void AllSpawnsDestroyed(bool* Out);
	void UserConstructionScript();
	void OnFailure_B2D9F6314CBB67DADCA431A762B1FCB8(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_B2D9F6314CBB67DADCA431A762B1FCB8(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_83BDCD214706A66B8FEAF69ECC91D664(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_83BDCD214706A66B8FEAF69ECC91D664(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_3A0280904CD93F0AC06743A4D7339575(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_3A0280904CD93F0AC06743A4D7339575(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_AED1456F4307B8E50D5D85B4E91E8F05(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_AED1456F4307B8E50D5D85B4E91E8F05(EGfeSDKReturnCode GfeSdkReturnCode);
	void SetupHighlight(class AActor* Actor);
	void HighlightSummary();
	void HighlightClose();
	void BndEvt__BanditCamp_Boss_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void OnQuestComplete(EQuestResult Result);
	void BndEvt__EventRegion_Fight_Space_K2Node_ComponentBoundEvent_1_EventRegionDelegate__DelegateSignature();
	void BndEvt__EventRegion_Fight_Space_K2Node_ComponentBoundEvent_0_EventRegionPlayerDelegate__DelegateSignature(const struct FEventRegionCharacter& Player);
	void BndEvt__Phase1_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature();
	void BndEvt__Phase2_K2Node_ComponentBoundEvent_1_QuestManagerVoidDelegate__DelegateSignature();
	void OnCheckComplete();
	void BndEvt__POI_K2Node_ComponentBoundEvent_0_QuestTileActiveDelegate__DelegateSignature(class URemnantQuestTile* QuestTile, bool Active);
	void OnTargetChanged_Event_1(class AActor* NewTarget);
	void BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void IntroCompleted();
	void BndEvt__Fight_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void BndEvt__Boss2_Optional__K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void BndEvt__Minions_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void ReceiveBeginPlay();
	void ShowSummary();
	void CloseHighlight();
	void ExecuteUbergraph_Quest_Dungeon_POI_Boss(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
