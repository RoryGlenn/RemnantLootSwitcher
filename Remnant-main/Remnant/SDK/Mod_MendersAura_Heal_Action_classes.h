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

// BlueprintGeneratedClass Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C
// 0x0015 (FullSize[0x02D8] - InheritedSize[0x02C3])
class UMod_MendersAura_Heal_Action_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_D70G[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Count;                                                     // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealthRegen;                                               // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C");
		return ptr;
	}


	void Get_Owning_Character(class AActor* Object, class ACharacterGunfire** CharacterRef);
	void Release();
	bool AllowAction(class UClass* ActionBP, const struct FDamageInfo& InDamageInfo);
	void OnActionStart();
	void OnDead_Event_1(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause);
	void OnComputeStats();
	void ExecuteUbergraph_Mod_MendersAura_Heal_Action(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
