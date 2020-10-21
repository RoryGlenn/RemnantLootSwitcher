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

// BlueprintGeneratedClass Action_Debuff_StaticField.Action_Debuff_StaticField_C
// 0x0091 (FullSize[0x0354] - InheritedSize[0x02C3])
class UAction_Debuff_StaticField_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_Z9YU[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               ActorsInRange;                                             // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Triggered;                                                 // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZZ0X[0x2];                                     // 0x02D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TriggerDistance;                                           // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WarningDistance;                                           // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FarWarningDelay;                                           // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloseWarningDelay;                                         // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JYSC[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class AActor*, float>                         Targets;                                                   // 0x02E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector2D                                   RandomWarningDelay;                                        // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ResultAction;                                              // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WMDJ[0x3];                                     // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SingleTargetDamageScalar;                                  // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PowerOverride;                                             // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SingleTargetRadius;                                        // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DualTargetDamageScalar;                                    // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Debuff_StaticField.Action_Debuff_StaticField_C");
		return ptr;
	}


	void MarkTargetShocked(class AActor* OtherTarget, class UAction_Debuff_StaticField_C* OtherAction, float Closeness);
	void GetSparkPoint(class ACharacterGunfire* Character, float Alpha, struct FVector* Point);
	void UpdatePotentialTarget(class UAction_Debuff_StaticField_C* OtherAction, class ACharacterGunfire* OtherCharacter, float Distance);
	void OnTick(float DeltaSeconds);
	void OnTakeDamage(const struct FDamageInfo& DamageInfo);
	void Trigger(class ACharacterGunfire* OtherCharacter, bool DelayedExplode, class AActor* TriggerCause);
	void DoSpark(class ACharacterGunfire* OtherCharacter, float Closeness);
	void OnActionStart();
	void ListenForShockDamage();
	void ExecuteUbergraph_Action_Debuff_StaticField(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
