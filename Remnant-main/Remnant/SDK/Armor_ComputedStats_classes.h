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

// BlueprintGeneratedClass Armor_ComputedStats.Armor_ComputedStats_C
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UArmor_ComputedStats_C : public UComputedStats
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ArmorScalarInc;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Temp;                                                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Armor_ComputedStats.Armor_ComputedStats_C");
		return ptr;
	}


	void OnComputeDerivedStats();
	void ExecuteUbergraph_Armor_ComputedStats(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
