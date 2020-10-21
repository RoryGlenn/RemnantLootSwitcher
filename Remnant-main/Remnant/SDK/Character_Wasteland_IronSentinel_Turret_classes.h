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

// BlueprintGeneratedClass Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C
// 0x00A0 (FullSize[0x0B90] - InheritedSize[0x0AF0])
class ACharacter_Wasteland_IronSentinel_Turret_C : public AAICharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTweenComponent*                             Tween;                                                     // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Feeler_04;                                                 // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Feeler_03;                                                 // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Feeler_02;                                                 // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Feeler_01;                                                 // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USurfaceOrientComponent*                     SurfaceOrient;                                             // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             EyeSocket;                                                 // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Ambient;                                               // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_IronSentinelTurret_Despawn;                            // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_IronSentinelTurret_Spawn;                              // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent*                         Inventory;                                                 // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDissolveComponent*                          Dissolve;                                                  // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStateMachineComponent*                      StateMachine;                                              // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTargetableComponent*                        Targetable;                                                // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              HealthMax;                                                 // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Damage;                                                    // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsDissolving;                                              // 0x0B74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YRHQ[0x3];                                     // 0x0B75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnTime;                                                 // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PAEV[0x4];                                     // 0x0B7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      WeaponCause;                                               // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              WeakSpotMod;                                               // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BuildUpTimeBeforeDetonation;                               // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C");
		return ptr;
	}


	void GetMinionOwner(class AActor** Owner);
	void GetCauseDamageScalar(float* Scalar);
	void MinionHasDamageTag(bool* ExtraDamage, float* DamageScalar);
	void HasSoulEmberTrinket(bool* Out);
	void GetSpawnTime(float* Time);
	void IsValidMinion(bool* Out);
	void GetBrutalMarkDamageMod(const struct FDamageInfo& InputPin, float* DamageMod);
	void GetArmorScalars(const struct FDamageInfo& DamageInfo, float* MinionDamageScalar);
	void GetPunisherDamageMod(class AActor* Target, float* PunisherMod);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void ModifyStats();
	void MC_BuildUp();
	void ReceiveBeginPlay();
	void OnDead_Event_1(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause);
	void MulticastDissolveOut();
	void DissolveOut();
	void OnPostComputeStats();
	void OnDead_Event_2(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause);
	void NotifyHitTarget(const struct FDamageInfo& DamageInfo);
	void DestroyMinion();
	void OnOwnerComputeStats();
	void MC_Explosion();
	void ExecuteUbergraph_Character_Wasteland_IronSentinel_Turret(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
