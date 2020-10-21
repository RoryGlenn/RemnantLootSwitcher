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

// BlueprintGeneratedClass Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C
// 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
class UAction_AOE_Trinket_SoulEmber_C : public UAction_AOE_ForceImpulse_C
{
public:
	float                                              Damage;                                                    // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              WeaponScalar;                                              // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C");
		return ptr;
	}


	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void GetDamage(float* Damage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
