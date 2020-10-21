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

// BlueprintGeneratedClass ArmorSkill_Base.ArmorSkill_Base_C
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class UArmorSkill_Base_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Base.ArmorSkill_Base_C");
		return ptr;
	}


	void GetTierDescription(class AActor* Actor, int Tier, struct FText* Out);
	void GetSkillLevel(class AActor* Actor, int* Out);
	void ComputeBonus(float Bonus, float SetBonus, int Level, float* Out);
	void ModifyInspectInfo(class AActor* Actor, int InspectLevel, struct FInspectInfo* Info, bool* Rtn);
	void GetDescription(class AActor* Actor, struct FText* Out);
	void ReleaseLevel();
	bool AllowAction(class UClass* ActionBP, const struct FDamageInfo& InDamageInfo);
	void OnEquipped();
	void ExecuteUbergraph_ArmorSkill_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
