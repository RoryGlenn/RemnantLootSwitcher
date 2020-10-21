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

// BlueprintGeneratedClass Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C
// 0x0011 (FullSize[0x02D4] - InheritedSize[0x02C3])
class UAction_Debuff_Corrosive_Stacking_OnEnemy_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_A46W[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DamageAmpPerStack;                                         // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C");
		return ptr;
	}


	void FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
	void OnActionStart();
	void OnReapplyBuff();
	void ExecuteUbergraph_Action_Debuff_Corrosive_Stacking_OnEnemy(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
