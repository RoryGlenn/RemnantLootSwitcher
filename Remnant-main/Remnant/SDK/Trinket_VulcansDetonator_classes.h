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

// BlueprintGeneratedClass Trinket_VulcansDetonator.Trinket_VulcansDetonator_C
// 0x0028 (FullSize[0x060C] - InheritedSize[0x05E4])
class ATrinket_VulcansDetonator_C : public AItem_Trinket_TriggerOnEquip_C
{
public:
	unsigned char                                      UnknownData_TBUA[0x4];                                     // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URemnantEntitlement_C*                       RemnantEntitlement;                                        // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              BurnDuration;                                              // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BurnDamage;                                                // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExplosionDamageMod;                                        // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BurnDamageScalarPerLevel;                                  // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BurnChance;                                                // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trinket_VulcansDetonator.Trinket_VulcansDetonator_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnEquipped();
	void OnUnequipped();
	void ExecuteUbergraph_Trinket_VulcansDetonator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
