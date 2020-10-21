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

// BlueprintGeneratedClass Mod_BlinkToken.Mod_BlinkToken_C
// 0x003C (FullSize[0x0748] - InheritedSize[0x070C])
class AMod_BlinkToken_C : public ARangedWeapon_Mod_Action_C
{
public:
	unsigned char                                      UnknownData_EZ0N[0x4];                                     // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0710(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Damage;                                                    // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OJPI[0x4];                                     // 0x071C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Indicator;                                                 // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                PreviewUpdateHandle;                                       // 0x0728(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              TeleportDistance;                                          // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TeleportLift;                                              // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TeleportGroundOffset;                                      // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    CastIdleVFX_1;                                             // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_BlinkToken.Mod_BlinkToken_C");
		return ptr;
	}


	void CheckForFog(const struct FVector& Start, const struct FVector& End, struct FVector* NewEnd);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	bool CalculateClientAimVector(struct FVector* AimOrigin, struct FVector* AimEnd);
	void FindGround(const struct FVector& CurrentPoint, float AboveDistance, float BelowDistance, struct FVector* GroundPoint, bool* HitGround);
	void GetBlinkLocation(bool AddLift, struct FVector* NewLocation);
	void ClearIndicator();
	void UpdateIndicator();
	void DoAction(class UActionComponent* ActionComponent, int* ActionID);
	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnPreviewEnd();
	void PreviewLoop();
	void OnPreviewStart();
	void ExecuteUbergraph_Mod_BlinkToken(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
