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

// BlueprintGeneratedClass Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C
// 0x0019 (FullSize[0x02DC] - InheritedSize[0x02C3])
class UAction_HealthReduction_SoulEmber_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_9J6C[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              MinionDamageScalar;                                        // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               ExtraBlastDamage;                                          // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_1RJ4[0x3];                                     // 0x02D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeaponDamageScalar;                                        // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C");
		return ptr;
	}


	void CheckTag(bool DoesExtraBlastDamage, float* DamageScalar);
	void HasSoulEmber(class ATrinket_SoulEmber_C** AsTrinket_Soul_Ember);
	void OnComputeStats();
	void OnActionStart();
	void ExecuteUbergraph_Action_HealthReduction_SoulEmber(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
