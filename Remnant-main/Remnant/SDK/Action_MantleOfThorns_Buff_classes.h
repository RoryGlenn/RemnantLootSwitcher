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

// BlueprintGeneratedClass Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C
// 0x0015 (FullSize[0x02D8] - InheritedSize[0x02C3])
class UAction_MantleOfThorns_Buff_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_AVQK[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DamageReflect;                                             // 0x02D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              DamageReduce;                                              // 0x02D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C");
		return ptr;
	}


	void FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	bool IsMeleeClass(class UClass* Class);
	void OnActionStart();
	void OnTakeDamage(const struct FDamageInfo& DamageInfo);
	void OnActionStop();
	void ExecuteUbergraph_Action_MantleOfThorns_Buff(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
