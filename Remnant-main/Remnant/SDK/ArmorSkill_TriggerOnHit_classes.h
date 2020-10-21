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

// BlueprintGeneratedClass ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UArmorSkill_TriggerOnHit_C : public UArmorSkill_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C");
		return ptr;
	}


	void Trigger(int Power);
	void OnTakeDamage(const struct FDamageInfo& DamageInfo);
	void ExecuteUbergraph_ArmorSkill_TriggerOnHit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
