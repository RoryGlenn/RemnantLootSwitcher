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

// BlueprintGeneratedClass Consumable_LiquidEscape.Consumable_LiquidEscape_C
// 0x000F (FullSize[0x0638] - InheritedSize[0x0629])
class AConsumable_LiquidEscape_C : public AItem_Potion_Base_C
{
public:
	unsigned char                                      UnknownData_Q946[0x7];                                     // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Consumable_LiquidEscape.Consumable_LiquidEscape_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnUse();
	void ExecuteUbergraph_Consumable_LiquidEscape(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
