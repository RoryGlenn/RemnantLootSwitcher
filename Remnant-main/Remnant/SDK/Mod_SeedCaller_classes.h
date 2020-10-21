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

// BlueprintGeneratedClass Mod_SeedCaller.Mod_SeedCaller_C
// 0x000C (FullSize[0x0718] - InheritedSize[0x070C])
class AMod_SeedCaller_C : public ARangedWeapon_Mod_Action_C
{
public:
	float                                              Duration;                                                  // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHealth;                                                 // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_SeedCaller.Mod_SeedCaller_C");
		return ptr;
	}


	void GetSeedCallerHealthScalar(float* Out);
	void DoAction(class UActionComponent* ActionComponent, int* ActionID);
	void GetDuration(float* Out);
	void GetSeedCallerDamage(float* Out);
	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
