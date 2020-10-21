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

// BlueprintGeneratedClass Trinket_StormAmulet.Trinket_StormAmulet_C
// 0x0014 (FullSize[0x05F8] - InheritedSize[0x05E4])
class ATrinket_StormAmulet_C : public AItem_Trinket_TriggerOnEquip_C
{
public:
	unsigned char                                      UnknownData_S56D[0x4];                                     // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ShockDamageMod;                                            // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShockWeaponModsDamageMod;                                  // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trinket_StormAmulet.Trinket_StormAmulet_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnComputeStats();
	void ExecuteUbergraph_Trinket_StormAmulet(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
