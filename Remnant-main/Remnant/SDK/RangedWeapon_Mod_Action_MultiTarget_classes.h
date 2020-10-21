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

// BlueprintGeneratedClass RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C
// 0x0090 (FullSize[0x079C] - InheritedSize[0x070C])
class ARangedWeapon_Mod_Action_MultiTarget_C : public ARangedWeapon_Mod_Action_C
{
public:
	unsigned char                                      UnknownData_DCQ8[0x4];                                     // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0710(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                                PreviewUpdateHandle;                                       // 0x0718(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              TargetRadius;                                              // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumTargets;                                                // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                UpdateTargetsHandle;                                       // 0x0728(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              Indicators;                                                // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      IndicatorClass;                                            // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              CachedTargets;                                             // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               HasCachedTargets;                                          // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2ZRC[0x7];                                     // 0x0759(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMod_MultiTarget_PendingTarget>      PendingTargets;                                            // 0x0760(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	struct FRotator                                    CastDirection;                                             // 0x0770(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldUpdatePlayerFacing;                                  // 0x077C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EB9P[0x3];                                     // 0x077D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FaceCameraInterpSpeed;                                     // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LQ52[0x4];                                     // 0x0784(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  ActivateSound;                                             // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  DeactivateSound;                                           // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetArc;                                                 // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C");
		return ptr;
	}


	void ValidateArc(class ACharacterGunfire* Target, bool* Out);
	void RemoveProjectile(class AActor* Projectile);
	void AddProjectile(class AActor* ForTarget, class AActor* Projectile);
	void ContainsValidProjectile(struct FMod_MultiTarget_PendingTarget* Entry, bool* Out);
	void ValidateCachedTargets();
	void OnUpdatePendingTargets();
	void OnRep_PendingTargets();
	void GetDrawTargets(TArray<class AActor*>* Targets);
	void ClearInvalidTargets(bool RemoveUnfiredProjectiles);
	void DrawIndicators();
	void AddPendingTargets(TArray<class AActor*>* Targets);
	bool CalculateClientAimVector(struct FVector* AimOrigin, struct FVector* AimEnd);
	void PickTarget(TArray<struct FWeightedTargetEntry>* PotentialTargets, int* Target);
	void GetCurrentTargets(bool AllowCached, TArray<class AActor*>* Targets);
	void SelectTargets(TArray<struct FWeightedTargetEntry>* PotentialTargets, TArray<class AActor*>* Targets);
	void CreateIndicator(class AActor** NewIndicator);
	void ClearIndicator(class AActor* Indicator);
	void MoveIndicatorToTarget(class AActor* Indicator, class AActor* Target);
	void WeighTarget(class AActor* Target, float* Weight);
	void ClearPreviewIndicators();
	void UpdatePreviewIndicators();
	void FindTargets(TArray<struct FWeightedTargetEntry>* Targets);
	void OnPreviewStart();
	void OnPreviewEnd();
	void PreviewLoop();
	void UpdateTargets();
	void OnAttached();
	void OnDetached();
	void ReceiveTick(float DeltaSeconds);
	void OnBeginUse();
	void OnEndUse();
	void OnActivate();
	void CustomEvent();
	void OnDeactivate();
	void ExecuteUbergraph_RangedWeapon_Mod_Action_MultiTarget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
