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

// BlueprintGeneratedClass Trait_Spirit.Trait_Spirit_C
// 0x0017 (FullSize[0x0108] - InheritedSize[0x00F1])
class UTrait_Spirit_C : public UBP_RemnantTrait_C
{
public:
	unsigned char                                      UnknownData_B2L6[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              WeaponPowerBuildUpMod;                                     // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponPowerBuildUpModInc;                                  // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trait_Spirit.Trait_Spirit_C");
		return ptr;
	}


	void GetWeaponPowerBuildUpMod(float* Out);
	void OnComputeStats();
	void ExecuteUbergraph_Trait_Spirit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
