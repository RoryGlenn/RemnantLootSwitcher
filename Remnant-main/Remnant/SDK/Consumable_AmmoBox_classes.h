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

// BlueprintGeneratedClass Consumable_AmmoBox.Consumable_AmmoBox_C
// 0x0017 (FullSize[0x0640] - InheritedSize[0x0629])
class AConsumable_AmmoBox_C : public AItem_Potion_Base_C
{
public:
	unsigned char                                      UnknownData_VCO0[0x7];                                     // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URimComponent*                               Rim;                                                       // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Consumable_AmmoBox.Consumable_AmmoBox_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	bool ValidateUse(class AActor* Actor);
	void Regenerate();
	void HasFullAmmo(class AActor* Actor, bool* Out);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Consumable_AmmoBox(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
