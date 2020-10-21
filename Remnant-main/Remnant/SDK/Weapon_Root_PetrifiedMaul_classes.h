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

// BlueprintGeneratedClass Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C
// 0x0017 (FullSize[0x0660] - InheritedSize[0x0649])
class AWeapon_Root_PetrifiedMaul_C : public AWeapon_Hammer_C
{
public:
	unsigned char                                      UnknownData_BF50[0x7];                                     // 0x0649(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ImpactScalar;                                              // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaggerDamageBoostProcChanceChargeHit;                     // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void MulticastPetrifiedProcFX(const struct FVector& WorldLocation);
	void ExecuteUbergraph_Weapon_Root_PetrifiedMaul(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
