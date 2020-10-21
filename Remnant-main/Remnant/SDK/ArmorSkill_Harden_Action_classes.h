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

// BlueprintGeneratedClass ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C
// 0x0019 (FullSize[0x02DC] - InheritedSize[0x02C3])
class UArmorSkill_Harden_Action_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_3FRC[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DamageReductionMod;                                        // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              MoveSpeedMod;                                              // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                PreviousLevel;                                             // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C");
		return ptr;
	}


	void PlayMaterialTransitionSound(int Level);
	void FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
	void OnReapplyBuff();
	void OnLevelChanged();
	void OnActionStart();
	void OnActionStop();
	void ExecuteUbergraph_ArmorSkill_Harden_Action(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
