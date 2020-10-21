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

// BlueprintGeneratedClass Mod_Blizzard.Mod_Blizzard_C
// 0x0028 (FullSize[0x07C4] - InheritedSize[0x079C])
class AMod_Blizzard_C : public ARangedWeapon_Mod_Action_MultiTarget_C
{
public:
	unsigned char                                      UnknownData_JD41[0x4];                                     // 0x079C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URemnantEntitlement_C*                       RemnantEntitlement;                                        // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudTravelDistance;                                       // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RainIcicleFrequency;                                       // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Blizzard.Mod_Blizzard_C");
		return ptr;
	}


	void DoAction(class UActionComponent* ActionComponent, int* ActionID);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnBeginUse();
	void OnEndUse();
	void ExecuteUbergraph_Mod_Blizzard(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
