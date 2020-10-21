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

// BlueprintGeneratedClass Quest_POI_Boss.Quest_POI_Boss_C
// 0x0108 (FullSize[0x0690] - InheritedSize[0x0588])
class AQuest_POI_Boss_C : public AQuest_POI_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0588(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URemnantQuestZoneLink*                       Survival_Waypoint;                                         // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        EventTrigger;                                              // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEventRegion*                    EventRegion;                                               // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Boss2_Optional_;                                           // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestAIDirector*                     BossSpawns_Phase2;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestAIDirector*                     BossSpawns_Phase1;                                         // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Minions;                                                   // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Boss;                                                      // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             KillAll;                                                   // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             Fight;                                                     // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Fight_Started;                                             // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TZU0[0x7];                                     // 0x05E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpawnTable*                                 Spawn_Table;                                               // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BossDeaths;                                                // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZZAQ[0x4];                                     // 0x05F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACharacterGunfire*                           BossRef;                                                   // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           Boss2Ref;                                                  // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IntroComplete;                                             // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               HasIntro;                                                  // 0x0609(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               KillSpawnsOnBossDeath;                                     // 0x060A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PO2O[0x5];                                     // 0x060B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              Players_Who_Took_Damage;                                   // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FName                                       QuestCompleteDialogTrigger;                                // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PC;                                                        // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Player_Took_Damage;                                        // 0x0629(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LRHM[0x6];                                     // 0x062A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               Group_Translations;                                        // 0x0630(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CurrentGroupID;                                            // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_POI_Boss.Quest_POI_Boss_C");
		return ptr;
	}


	void IncrementBossCounter();
	class ARemnantCharacter* Setup_Achievement_Tracking();
	void Should_Award_KillBossNoDamage_Achievement_();
	void Reset_Objectives();
	void ActivateSpawnsPhase2();
	void IsIntroComplete_(bool* IntroComplete);
	void CheckIntroCompleted();
	void ActivateSpawnsPhase1();
	void AllSpawnsDestroyed(bool* Out);
	void UserConstructionScript();
	void OnFailure_BC3958DE4DA88E42DEA2B989E764C822(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_BC3958DE4DA88E42DEA2B989E764C822(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_130BD3A5448AC1EE542A568B790B3726(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_130BD3A5448AC1EE542A568B790B3726(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_4B8145CF46F6CB4622D7F4934FD80EF0(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_4B8145CF46F6CB4622D7F4934FD80EF0(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_31418C5A4FDB6D6B6D7D1DA584C10ACC(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_31418C5A4FDB6D6B6D7D1DA584C10ACC(EGfeSDKReturnCode GfeSdkReturnCode);
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
	void BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void IntroCompleted();
	void BndEvt__Fight_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void BndEvt__Minions_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void ReceiveBeginPlay();
	void Notify_Player_Took_Damage(const struct FDamageInfo& DamageInfo);
	void ShowSummary();
	void CloseHighlight();
	void ExecuteUbergraph_Quest_POI_Boss(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
