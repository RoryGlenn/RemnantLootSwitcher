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

// BlueprintGeneratedClass Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C
// 0x004C (FullSize[0x0AEC] - InheritedSize[0x0AA0])
class ACharacter_Snow_Packmaster_GroundProjectile_C : public ACharacterGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             PackMaster_Ground_Projectile_Loop_SC;                      // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_GroundProjectile;                                      // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Cube;                                                      // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               CollisionBox;                                              // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStateMachineComponent*                      StateMachine;                                              // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DamageType;                                                // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Lifespawn;                                                 // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SnapToGround;                                              // 0x0ADC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M2BT[0x3];                                     // 0x0ADD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       TargetCooldown;                                            // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetCooldownTime;                                        // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C");
		return ptr;
	}


	void DetermineForceFeedback(const struct FDamageInfo& DamageInfo);
	void SetHitCharacterCooldown(class AActor* Actor);
	void ValidateHitCharacterCooldown(class AActor* Actor, bool* Rtn);
	bool TestLineOfSight(class AActor* to);
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void SFX_Shockwave_FadeIn();
	void SFX_Shockwave_FadeOut();
	void ExecuteUbergraph_Character_Snow_Packmaster_GroundProjectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
