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

// BlueprintGeneratedClass Mod_SporeShot.Mod_SporeShot_C
// 0x0018 (FullSize[0x0728] - InheritedSize[0x0710])
class AMod_SporeShot_C : public ARangedWeapon_Mod_WeaponMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0710(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Damage;                                                    // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DOTDamageScalar;                                           // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_SporeShot.Mod_SporeShot_C");
		return ptr;
	}


	void GetSporeCloudDuration(float* Duration);
	void GetDotDamage(float* Damage);
	void GetDamageScalar(float* Out);
	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void OnFire(const struct FVector& from, const struct FVector& to, float WeaponSpread);
	void ExecuteUbergraph_Mod_SporeShot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
