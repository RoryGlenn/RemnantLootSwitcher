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

// BlueprintGeneratedClass BP_Monster.BP_Monster_C
// 0x0128 (FullSize[0x0C18] - InheritedSize[0x0AF0])
class ABP_Monster_C : public AAICharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimatedCameraComponent*                    AnimatedCamera;                                            // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USilhouetteComponent*                        Silhouette;                                                // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDisplayInfoComponent_C*                     DisplayInfoComponent;                                      // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           WindowCapsule;                                             // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_Elite_Stinger;                                         // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWaterFXComponent*                           WaterFX;                                                   // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTargetableComponent*                        Targetable;                                                // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVisualComponent*                            Visual;                                                    // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundSetComponent*                          SoundSet;                                                  // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInputStateComponent*                        InputState;                                                // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStateMachineComponent*                      StateMachine;                                              // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDissolveComponent*                          Dissolve;                                                  // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio;                                                     // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpawnTable*                                 LootTable;                                                 // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               LootTags;                                                  // 0x0B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DissolveOnDeath;                                           // 0x0B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M7OH[0x3];                                     // 0x0B79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DissolveTime;                                              // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayToDissolve;                                           // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GV7E[0x4];                                     // 0x0B84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   DissolveSoundFX;                                           // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             OnHealSFXComp;                                             // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             OnFireSFXComp;                                             // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EMonsterType>                          Type;                                                      // 0x0BA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H7PE[0x7];                                     // 0x0BA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpawnTable*                                 ModTable;                                                  // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpawnTable*                                 SpawnTable;                                                // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InCombat;                                                  // 0x0BB8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_HBA8[0x7];                                     // 0x0BB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   AlertSound;                                                // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                                   Ready_Weapon;                                              // 0x0BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShadowPlay;                                                // 0x0BD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KYKI[0x3];                                     // 0x0BD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StartDelta;                                                // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EndDelta;                                                  // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PG5H[0x4];                                     // 0x0BDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GroupId;                                                   // 0x0BE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     HighlightId;                                               // 0x0BF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FName                                       AlertDialogTrigger;                                        // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              PlayerThreatTargets;                                       // 0x0C08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Monster.BP_Monster_C");
		return ptr;
	}


	bool CanUseItem(class APlayerControllerGunfire* PlayerController, class UClass* ItemClass);
	void EvaluatePlayerTargetSwitch(const struct FName& EventRegionNameID, float TargetSwitchCooldownMin, float TargetSwitchCooldownMax);
	void CleanupSpawns(bool Kill);
	void SpawnCharacter(const struct FTransform& SpawnTransform, class UClass* ActorClass, ESpawnActorCollisionHandlingMethod CollisionHandling, const struct FName& SpawnState, bool AddThreat, float ThreatAmount, class ACharacterGunfire** AsCharacter_Gunfire);
	void GetEncounterMan(class UEncounterManager** EncounterManager);
	void DoEncounter(class USpawnTable* SpawnTable, const struct FName& SpawnTag, bool SetOwnerAsTarget, class UEncounterInstance** EncounterInstance);
	void RunAway();
	void Death_Stingers();
	void OnRep_InCombat();
	void SpawnMinions();
	void GenerateModifier(const struct FName& Tag);
	void SetupModifiers();
	void DropLoot();
	void OnFailure_2FFB5FF44E28076CA52495AF9F4E4361(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_2FFB5FF44E28076CA52495AF9F4E4361(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_79E717164DB60DC5A8B19EAF4871DCA8(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnSuccess_79E717164DB60DC5A8B19EAF4871DCA8(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnShadowPlay(bool ShadowPlay);
	void OnBeginReadyWeapon();
	void MultiCast_OnBeginReadyWeapon();
	void OnAlert();
	void MulticastAlert();
	void CombatEnter();
	void CombatExit();
	void ReceiveBeginPlay();
	void OnDead_Event_2(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause);
	void DisableCollision();
	void EnableCollision();
	void OnVaultOver_Begin();
	void OnVaultOver_End();
	void BndEvt__WindowCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnRunAway();
	void UseItem(class APlayerControllerGunfire* PlayerController, class UClass* ItemClass);
	void ExecuteUbergraph_BP_Monster(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
