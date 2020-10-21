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

// BlueprintGeneratedClass Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C
// 0x0028 (FullSize[0x04B0] - InheritedSize[0x0488])
class AWeapon_Ratmen_Brute_Shield_C : public ABP_Projectile_Box_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        ChildActor;                                                // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*                  RotatingMovement;                                          // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Brute_Shield;                                              // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_Shield_Loop;                                           // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C");
		return ptr;
	}


	void UpdateCollisionProfiles();
	void ReceiveBeginPlay();
	void OnEvent_Event_1(const struct FName& EventName);
	void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName);
	void OnProjectileHit(const struct FHitResult& Hit);
	void OnProjectileStop();
	void SFX_Shiled_Loop_Start();
	void SFX_Shiled_Loop_Stop();
	void OnDead_Event_1(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause);
	void ExecuteUbergraph_Weapon_Ratmen_Brute_Shield(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
