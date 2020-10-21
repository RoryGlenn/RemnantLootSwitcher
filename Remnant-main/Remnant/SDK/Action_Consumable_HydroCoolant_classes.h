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

// BlueprintGeneratedClass Action_Consumable_HydroCoolant.Action_Consumable_HydroCoolant_C
// 0x0024 (FullSize[0x02F8] - InheritedSize[0x02D4])
class UAction_Consumable_HydroCoolant_C : public UAction_Buff_DurationMod_C
{
public:
	unsigned char                                      UnknownData_J1TM[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FireResistance;                                            // 0x02E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JLHB[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UActionBase*>                         Cached_Array;                                              // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Consumable_HydroCoolant.Action_Consumable_HydroCoolant_C");
		return ptr;
	}


	void PlayFX();
	void OnActionStart();
	void OnComputeStats();
	void OnReapplyBuff();
	void ExecuteUbergraph_Action_Consumable_HydroCoolant(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
