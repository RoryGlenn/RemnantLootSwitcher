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

// BlueprintGeneratedClass Action_Mod_Undying.Action_Mod_Undying_C
// 0x0045 (FullSize[0x0308] - InheritedSize[0x02C3])
class UAction_Mod_Undying_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_UFF4[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Reviving;                                                  // 0x02D0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               HasHealed;                                                 // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F7PM[0x6];                                     // 0x02D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Indicator;                                                 // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EzlansBandCooldownDuration;                                // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WDIY[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UActionBase*>                         CurrentProcessedActions;                                   // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Actions_StatusEffects;                                     // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Undying.Action_Mod_Undying_C");
		return ptr;
	}


	void GetShieldValue(float* ShieldValue);
	void IsInAbortableInteractive(bool* Out);
	float GetOwnerHealth(class ACharacterGunfire** AsCharacter_Gunfire);
	void UpdateReviving();
	void OnRep_Reviving();
	void FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
	void OnStateChanged(const struct FName& StateName, const struct FName& PreviousStateName);
	void OnActionStart();
	void OnActionStop();
	void DamageTaken();
	void ExecuteUbergraph_Action_Mod_Undying(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
