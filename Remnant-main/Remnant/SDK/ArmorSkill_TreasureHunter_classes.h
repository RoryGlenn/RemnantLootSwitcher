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

// BlueprintGeneratedClass ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C
// 0x0010 (FullSize[0x025C] - InheritedSize[0x024C])
class UArmorSkill_TreasureHunter_C : public UArmorSkill_ModifySingleStat_C
{
public:
	unsigned char                                      UnknownData_EBR7[0x4];                                     // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CurrencyMod;                                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C");
		return ptr;
	}


	void GetDescription(class AActor* Actor, struct FText* Out);
	void GetTierDescription(class AActor* Actor, int Tier, struct FText* Out);
	void OnComputeStats();
	void ExecuteUbergraph_ArmorSkill_TreasureHunter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
