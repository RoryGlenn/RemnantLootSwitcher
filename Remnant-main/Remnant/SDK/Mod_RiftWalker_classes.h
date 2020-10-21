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

// BlueprintGeneratedClass Mod_RiftWalker.Mod_RiftWalker_C
// 0x0030 (FullSize[0x073C] - InheritedSize[0x070C])
class AMod_RiftWalker_C : public ARangedWeapon_Mod_Action_C
{
public:
	unsigned char                                      UnknownData_1EVK[0x4];                                     // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0710(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Damage;                                                    // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    CastIdleVFX_1;                                             // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveSpeedMod;                                              // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AggroDistance;                                             // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageReduction;                                           // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CooldownDuration;                                          // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_RiftWalker.Mod_RiftWalker_C");
		return ptr;
	}


	float GetDamage(bool ApplyDamageScalar);
	void GetPlayerMaxHealth(class AActor* OverrideActor, float* Health);
	void GetHealthMax(class AActor* OverrideActor, float* Out);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void DoAction(class UActionComponent* ActionComponent, int* ActionID);
	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void AddModPower(float Damage, float BonusModPowerMod);
	void ExecuteUbergraph_Mod_RiftWalker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
