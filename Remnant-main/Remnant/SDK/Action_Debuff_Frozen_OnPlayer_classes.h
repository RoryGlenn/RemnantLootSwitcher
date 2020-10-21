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

// BlueprintGeneratedClass Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C
// 0x0019 (FullSize[0x02DC] - InheritedSize[0x02C3])
class UAction_Debuff_Frozen_OnPlayer_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_607P[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              IncomingDamagePercentage;                                  // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              TimeDilation;                                              // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              StaminaRegenDebuff;                                        // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C");
		return ptr;
	}


	void PlayFrozenMeltFX_WithoutSpiceroot();
	void OnActionStop();
	void OnActionStart();
	void OnComputeStats();
	void SFX_Frozen_DeActivate();
	void ExecuteUbergraph_Action_Debuff_Frozen_OnPlayer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
