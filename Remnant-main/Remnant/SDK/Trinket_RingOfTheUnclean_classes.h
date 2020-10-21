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

// BlueprintGeneratedClass Trinket_RingOfTheUnclean.Trinket_RingOfTheUnclean_C
// 0x001C (FullSize[0x0600] - InheritedSize[0x05E4])
class ATrinket_RingOfTheUnclean_C : public AItem_Trinket_TriggerOnEquip_C
{
public:
	unsigned char                                      UnknownData_FEVM[0x4];                                     // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URemnantEntitlement_C*                       RemnantEntitlement;                                        // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              UnarmedMeleeDamageMod;                                     // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlopMultiplier;                                            // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trinket_RingOfTheUnclean.Trinket_RingOfTheUnclean_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnPostComputeStats();
	void OnEquipped();
	void OnUnequipped();
	void ExecuteUbergraph_Trinket_RingOfTheUnclean(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
