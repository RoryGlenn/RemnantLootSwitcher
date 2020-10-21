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

// BlueprintGeneratedClass Trait_Handling.Trait_Handling_C
// 0x0017 (FullSize[0x0108] - InheritedSize[0x00F1])
class UTrait_Handling_C : public UBP_RemnantTrait_C
{
public:
	unsigned char                                      UnknownData_Y0Y9[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              GunMod;                                                    // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GunModInc;                                                 // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trait_Handling.Trait_Handling_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, int InspectLevel, struct FInspectInfo* Info, bool* Rtn);
	void GetGunMod(float* Out);
	void OnComputeStats();
	void ExecuteUbergraph_Trait_Handling(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
