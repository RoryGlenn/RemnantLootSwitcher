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

// BlueprintGeneratedClass Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C
// 0x0048 (FullSize[0x0C99] - InheritedSize[0x0C51])
class ACharacter_Swamp_ElfQueen_Bug_Explosive_C : public ACharacter_Swamp_ElfQueen_Bug_C
{
public:
	unsigned char                                      UnknownData_L475[0x7];                                     // 0x0C51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Swamp_Elf_Atk_Bug_Run_Fast_Loop_SC;                        // 0x0C60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Swamp_Elf_Atk_Bug_Run_Normal_Loop_SC;                      // 0x0C68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             HomingTarget;                                              // 0x0C70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            ExplosionRadiusChain;                                      // 0x0C78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            ExplosionRadiusDetect;                                     // 0x0C80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTweenComponent*                             Tween;                                                     // 0x0C88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            ExplosionRadiusPlayer;                                     // 0x0C90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               InPuddle;                                                  // 0x0C98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DoExplosion(bool ShouldChain, const struct FVector& Location);
	void BndEvt__ExplosionRadiusInner_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Explode();
	void ExplodePlayerOnly();
	void ShowSpeedMutation();
	void ChargeStart();
	void ChargeStop();
	void ChargeFastStart();
	void ChargeFastStop();
	void DestroySelf();
	void Escape();
	void OnComputeStats();
	void KilledByPlayer();
	void ExecuteUbergraph_Character_Swamp_ElfQueen_Bug_Explosive(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
