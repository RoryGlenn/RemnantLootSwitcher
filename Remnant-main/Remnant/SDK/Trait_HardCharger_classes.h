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

// BlueprintGeneratedClass Trait_HardCharger.Trait_HardCharger_C
// 0x000B (FullSize[0x00FC] - InheritedSize[0x00F1])
class UTrait_HardCharger_C : public UBP_RemnantTrait_C
{
public:
	unsigned char                                      UnknownData_A0BB[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MeleeChargeDamageMod;                                      // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MeleeChargeDamageModInc;                                   // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trait_HardCharger.Trait_HardCharger_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, int InspectLevel, struct FInspectInfo* Info, bool* Rtn);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void GetMeleeChargeDamageMod(float* Out);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
