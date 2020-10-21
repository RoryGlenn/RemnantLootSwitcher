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

// BlueprintGeneratedClass Interactive_Campfire.Interactive_Campfire_C
// 0x009F (FullSize[0x0460] - InheritedSize[0x03C1])
class AInteractive_Campfire_C : public AInteractive_Checkpoint_C
{
public:
	unsigned char                                      UnknownData_TO1Q[0x7];                                     // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USoftCollisionCapsuleComponent*              SoftCollisionCapsule;                                      // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_Campfire_Crystal_Fortify_Loop;                           // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_Campfire_Crystal_Fortify;                                // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                             Decal;                                                     // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTweenComponent*                             Tween;                                                     // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Crystal_Campfire;                                          // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_Bonfire_Activate_SC;                                   // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActionComponent*                            Action;                                                    // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMiniMap_Remnant_C*                          MiniMap_Remnant;                                           // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USnapToGroundComponent*                      SnapToGround;                                              // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        SpawnPoint;                                                // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_Bonfire_Loop;                                          // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             ActiveVisuals;                                             // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Fortified;                                                 // 0x0438(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_I9WD[0x7];                                     // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FortifyReqMaterial;                                        // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FortifyReqQuantity;                                        // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NSZT[0x4];                                     // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    crystal_mat;                                               // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NewVar_0_1;                                                // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Campfire.Interactive_Campfire_C");
		return ptr;
	}


	void ReplenishHealthOnly(bool* Result);
	void CanUpgrade(class ACharacter_Master_Player_C* Character, bool* CanUpgrade, struct FText* UpgradeDetails, class UTexture** Icon);
	void RemoveFortifyTag();
	void OnRep_Fortified();
	void DoFortifyVisuals();
	void UpdateCampfireVisuals(bool IsActive, bool BeingLit);
	void StateActivate();
	void StateActive();
	void ReceiveBeginPlay();
	void BeginUseCheckpoint(class ACharacter_Master_Player_C* Character, bool WasSummoned);
	void EndUseCheckpoint(class ACharacter_Master_Player_C* Character);
	void OnUpgrade(class ACharacter_Master_Player_C* Character);
	void TransitionToMenu(class ACharacter_Master_Player_C* Character);
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature(const struct FName& StateName, const struct FName& PreviousStateName);
	void ExecuteUbergraph_Interactive_Campfire(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
