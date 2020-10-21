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

// BlueprintGeneratedClass Action_Debuff_Frozen_CritDamage_OnEnemy.Action_Debuff_Frozen_CritDamage_OnEnemy_C
// 0x0005 (FullSize[0x02C8] - InheritedSize[0x02C3])
class UAction_Debuff_Frozen_CritDamage_OnEnemy_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_D6TV[0x1];                                     // 0x02C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CritDamageMod;                                             // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Debuff_Frozen_CritDamage_OnEnemy.Action_Debuff_Frozen_CritDamage_OnEnemy_C");
		return ptr;
	}


	void FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
