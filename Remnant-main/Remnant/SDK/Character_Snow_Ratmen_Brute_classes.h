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

// BlueprintGeneratedClass Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C
// 0x0059 (FullSize[0x0C71] - InheritedSize[0x0C18])
class ACharacter_Snow_Ratmen_Brute_C : public ABP_Monster_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0C18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             HealthBar;                                                 // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           BreakableCollision;                                        // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               WeaponPhantom_ArmR;                                        // 0x0C30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               WeaponPhantom_ArmL;                                        // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               WeaponPhantom_Shield;                                      // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               WeaponPhantom_Club;                                        // 0x0C48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTweenComponent*                             Tween;                                                     // 0x0C50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Ratmen_Brute_Shield;                                    // 0x0C58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Ratmen_Brute_Club;                                      // 0x0C60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Ratmen_Brute_Cape;                                         // 0x0C68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               HasShield;                                                 // 0x0C70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C");
		return ptr;
	}


	void DamageBreakable(class AActor* Actor);
	bool IsShieldNearby();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShieldThrown();
	void ShieldPickup();
	void ShieldedTag();
	void RemoveShieldedTag();
	void BndEvt__BreakableCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_Character_Snow_Ratmen_Brute(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
