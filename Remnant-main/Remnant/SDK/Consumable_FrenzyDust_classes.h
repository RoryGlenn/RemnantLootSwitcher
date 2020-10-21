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

// BlueprintGeneratedClass Consumable_FrenzyDust.Consumable_FrenzyDust_C
// 0x0023 (FullSize[0x064C] - InheritedSize[0x0629])
class AConsumable_FrenzyDust_C : public AItem_Potion_Base_C
{
public:
	unsigned char                                      UnknownData_QX2M[0x7];                                     // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URimComponent*                               Rim;                                                       // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReloadSpeedMod;                                            // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FireSpeedMod;                                              // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Consumable_FrenzyDust.Consumable_FrenzyDust_C");
		return ptr;
	}


	void Get_Reload_Speed(float* ReloadSpeed);
	void Get_FireSpeed(float* Out);
	void ParamDuration(float* Out);
	void Get_Ranged_Damage_Mod(float* Out);
	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnActivate();
	void DoAction(class UActionComponent* ActionComponent, class AActor* Cause, class AActor* Target);
	void ExecuteUbergraph_Consumable_FrenzyDust(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
