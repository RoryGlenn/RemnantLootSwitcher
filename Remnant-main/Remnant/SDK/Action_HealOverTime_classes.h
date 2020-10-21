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

// BlueprintGeneratedClass Action_HealOverTime.Action_HealOverTime_C
// 0x0014 (FullSize[0x02E8] - InheritedSize[0x02D4])
class UAction_HealOverTime_C : public UAction_Buff_DurationMod_C
{
public:
	unsigned char                                      UnknownData_Q9SX[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              HealthPercent;                                             // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              HealthRegen;                                               // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_HealOverTime.Action_HealOverTime_C");
		return ptr;
	}


	void OnActionStart();
	void OnComputeStats();
	void ExecuteUbergraph_Action_HealOverTime(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
