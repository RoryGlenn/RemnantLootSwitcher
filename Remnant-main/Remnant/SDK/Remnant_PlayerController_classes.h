#pragma once

// Name: Remnant Dump, Version: V1


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

// BlueprintGeneratedClass Remnant_PlayerController.Remnant_PlayerController_C
// 0x00C8 (FullSize[0x0B18] - InheritedSize[0x0A50])
class ARemnant_PlayerController_C : public ARemnantPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       WorldResetPostProcess;                                     // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UIdleTimerComponent*                         IdleTimer;                                                 // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*                 WidgetInteraction;                                         // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USubtitlesComponent*                         Subtitles;                                                 // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              WorldReset_NewTrack_0_AFAD16CA44A959917238BBAE4928A5E8;    // 0x0A78(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    WorldReset__Direction_AFAD16CA44A959917238BBAE4928A5E8;    // 0x0A7C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IASB[0x3];                                     // 0x0A7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          WorldReset;                                                // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Loading;                                                   // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_02NO[0x7];                                     // 0x0A89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TScriptInterface<class UUseItemInterface>          test;                                                      // 0x0A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FScriptMulticastDelegate                    FinishedTravel;                                            // 0x0AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsResetComplete;                                           // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasPlayedWorldResetSFX;                                    // 0x0AB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XBRA[0x6];                                     // 0x0AB2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    WorldResetMaterial;                                        // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                ChromaDamageHandler;                                       // 0x0AC0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               InCheckpointMenu;                                          // 0x0AC8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A1TF[0x7];                                     // 0x0AC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnUseItemFail;                                             // 0x0AD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                                HighlightsDisableHandle;                                   // 0x0AE0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                HighlightsPollHandle;                                      // 0x0AE8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnDialogueStarted;                                         // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                StoredPreSurvivalCharacterID;                              // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldCompleteSurvivalQuest;                               // 0x0B04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CachedTutorialSetting;                                     // 0x0B05(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F38R[0x2];                                     // 0x0B06(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ValidSurvivalAccountAwards;                                // 0x0B08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Remnant_PlayerController.Remnant_PlayerController_C");
		return ptr;
	}


	void RemoveStartingLevelEquipment();
	void PlaySurvivalNotification(const struct FName& NameID, float DurationOverride);
	void ShouldShowQuestInventory(bool* ShouldShow);
	void OnSurvivalEndPlay(class AActor* EndingActor, TEnumAsByte<EEndPlayReason> Reason);
	void ResetSurvivalCvars();
	void InitializeSurvivalCvars();
	void ResetSurvivalPawn();
	void NotifySurvivalQuestPendingEnd();
	void CompleteSurvivalQuest();
	void InitializeSurvivalPawn();
	void RevertSurvivalPawn();
	void CheckSurvivalTransition(int Travel_ID);
	void SetPresence();
	void PollHighlights();
	void DisableHighlightsPolling();
	void TogglePollHighlights(bool Enabled);
	void InitShadowPlay();
	void fade(EFadeDirection Direction, const struct FName& Reason, bool Instant);
	bool CanRespawnPlayers();
	void UpdateWorldReset(float Alpha);
	void Lock_Player_Position(bool enable);
	void ShowInGameMenu(class AActor* Context, class ADialog_InGameMenu_C** InGameMenu);
	void Update_Minimap_Scale(float Scale_Delta);
	void CloseDialogs();
	void HideLoadScreen();
	void ShowLoadScreen();
	void WorldReset__FinishedFunc();
	void WorldReset__UpdateFunc();
	void InpActEvt_ToggleHUD_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_F4_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Alt_X_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ServerCheckSurvivalTransition(int TravelID);
	void MultiRevertSurvivalPawn();
	void MultiCompleteSurvivalQuest();
	void MultiResetSurvivalPawn();
	void ClientPlaySurvivalNotification(const struct FName& NameID, float DurationOverride);
	void OnDeceased();
	void HandleSkipIntro();
	void ServerUseConsumable(class UClass* ItemBP);
	void ValidateItemRemoval(class AActor* Source, class UClass* ItemBP, int Quantity);
	void ServerItemRemoval(class AActor* Source, class UClass* ItemBP, int Quantity);
	void ClientValidItemRemoval(class AActor* Source, class UClass* ItemBP, int Quantity);
	void OnInitChroma();
	void SetChromaDefault();
	void SetChromaTravel();
	void SetChromaLowHealth();
	void SetChromaRest();
	void SetChromaDamage();
	void SetChromaTravelFinished();
	void OnChromaDamageEnd();
	void OnBeginTravel(int PendingZoneID);
	void OnFinishTravel();
	void OnFinishTravelLoad();
	void OnServerFinalizeTravel();
	void PostUseWaypoint();
	void Set_Rich_Presence();
	void SetSoftwareOcclusionOverride();
	void DoCreditsFade();
	void OnReadyToTravel(int PendingZoneID);
	void DoPostCreditFadeIn();
	void Server_Inspectable_Next(class ABP_Inspectable_C* Inspectable);
	void Server_Inspectable_Prev(class ABP_Inspectable_C* Inspectable);
	void ServerUseItem(class AActor* Actor, class UClass* ItemBP);
	void ClientUseItemFail();
	void ServerBeginInspect(class ABP_Inspectable_C* Inspectable);
	void ServerEndInspect(class ABP_Inspectable_C* Inspectable);
	void ClientRequestEndInspect(class ABP_Inspectable_C* Inspectable);
	void ServerNotifyCompleteInspect(class ABP_Inspectable_C* Inspectable);
	void EquipMod(int ItemID, unsigned char Slot, int ModItemID);
	void UnequipMod(int ItemID, unsigned char Slot);
	void ServerCreateQuest(int SlotID, const struct FString& QuestID);
	void ServerActivateQuest(class ARemnantQuest* Quest);
	void ServerDestroyQuest(class ARemnantQuest* Quest);
	void ShowDialogue(class AActor* Source, class AActor* Initiator);
	void ShowLootContainer(class AActor* Source);
	void ShowCraftingMenu(class AActor* Source);
	void DialogueSelectOptionByName(class AActor* ContextActor, const struct FName& Option);
	void DialogueAdvance(class AActor* ContextActor);
	void ShowUpgradingMenu(class AActor* Source);
	void EndDialog(class AActor* Source);
	void OpenLootContainer(class ALootContainer* LootContainer);
	void ShowInfusionMenu(class AActor* Source);
	void Join_In_Progress_Dialog_Client(class AActor* Source);
	void Server_State_Machine_Interation(class UStateMachineComponent* State_Machine, const struct FName& Name, class AActor* Outer);
	void DialogueSelectOption(class AActor* ContextActor, unsigned char ID);
	void EndPlayerDialog(class AActor* Source);
	void ShowPlayerDialogue(class AActor* Source);
	void ShowPlayerCraftingMenu(class AActor* Source);
	void ShowPlayerInfusionMenu(class AActor* Source);
	void ShowPlayerLootContainer(class AActor* Source);
	void ShowPlayerUpgradingMenu(class AActor* Source);
	void Event_Show_Character_Select();
	void EventClosedCharacterSelect(const struct FName& Result);
	void ShowTutorial(class UClass* Tutorial, class AActor* ContextActor);
	void ShowJoinSessionCharacterSelect(class ABP_Multispawn_Waypoint_C* BP_Multispawn_Waypoint);
	void FinishedJoinSessionCharacterSelect(class ABP_Multispawn_Waypoint_C* BP_Multispawn_Waypoint);
	void Server_SpectateCharacterSelected();
	void Client_SpectateSwapCharacter();
	void Join_In_Progress_Dialog_Server(class AActor* Actor);
	void ServerTravelToWaypoint(class AActor* Waypoint, const struct FZoneLinkInfo& WaypointInfo);
	void ServerTravelToDestination(class AActor* Link);
	void ServerTransitionToMenu(class AInteractive_Checkpoint_C* Checkpoint, class ACharacter_Master_Player_C* Character);
	void ServerTransitionFromMenu(class AInteractive_Checkpoint_C* Checkpoint, class ACharacter_Master_Player_C* Character);
	void ServerUpgradeCheckpoint(class AInteractive_Checkpoint_C* Checkpoint, class ACharacter_Master_Player_C* Character);
	void ServerTravelToWaypointName(class AActor* Waypoint, const struct FName& WaypointName);
	void ServerUseCheckpoint();
	void ClientBeginUseCheckpoint(class AInteractive_Checkpoint_C* Checkpoint);
	void ClientEndUseCheckpoint(class AInteractive_Checkpoint_C* Checkpoint);
	void ServerLeaveDungeon(class AActor* Waypoint);
	void ServerActivateWaypoint(class ACheckpoint* Checkpoint);
	void OnBeginWorldReset(class ACheckpoint* ActivatedCheckpoint, bool bWasDead);
	void OnFinishWorldReset(class ACheckpoint* ActivatedCheckpoint);
	void SetWorldFadeOut(TEnumAsByte<EWorldResetState> State);
	void PlayWorldReset();
	void StopWorldReset();
	void SetWorldResetTime(float Time);
	void ServerSetInCheckpointMenu(bool InMenu);
	void ReceiveBeginPlay();
	void OnTimeout_Event_1();
	void OnDead();
	void Check_DLC(class ACharacter_Master_Player_C* Player);
	void Server_Remove_DLC_Item(class URemnantPlayerInventoryComponent* Inventory);
	void ExecuteUbergraph_Remnant_PlayerController(int EntryPoint);
	void OnDialogueStarted__DelegateSignature();
	void OnUseItemFail__DelegateSignature();
	void FinishedTravel__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
