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

// BlueprintGeneratedClass Trait_Vaccine.Trait_Vaccine_C
// 0x0017 (FullSize[0x0108] - InheritedSize[0x00F1])
class UTrait_Vaccine_C : public UBP_RemnantTrait_C
{
public:
	unsigned char                                      UnknownData_GYFY[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              StatusEffectBuildupScalar;                                 // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StatusEffectBuildupScalarInc;                              // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trait_Vaccine.Trait_Vaccine_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, int InspectLevel, struct FInspectInfo* Info, bool* Rtn);
	void GetStatusEffectBuildupScalar(float* Out);
	void OnPostComputeStats();
	void ExecuteUbergraph_Trait_Vaccine(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
