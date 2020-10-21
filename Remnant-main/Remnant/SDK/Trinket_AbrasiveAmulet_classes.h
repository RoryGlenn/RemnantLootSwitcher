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

// BlueprintGeneratedClass Trinket_AbrasiveAmulet.Trinket_AbrasiveAmulet_C
// 0x0008 (FullSize[0x05F0] - InheritedSize[0x05E8])
class ATrinket_AbrasiveAmulet_C : public AItem_Trinket_TriggerOnMeleeHit_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trinket_AbrasiveAmulet.Trinket_AbrasiveAmulet_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void Trigger(const struct FDamageInfo& Damage);
	void OnEquipped();
	void OnUnequipped();
	void ExecuteUbergraph_Trinket_AbrasiveAmulet(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
