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

// BlueprintGeneratedClass Action_Debuff_Parasite.Action_Debuff_Parasite_C
// 0x0015 (FullSize[0x02D8] - InheritedSize[0x02C3])
class UAction_Debuff_Parasite_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_LDKE[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              HealthReduceScalar;                                        // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              HealthRegen;                                               // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Debuff_Parasite.Action_Debuff_Parasite_C");
		return ptr;
	}


	void OnPostComputeStats();
	void OnActionStop();
	void ExecuteUbergraph_Action_Debuff_Parasite(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
