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

// BlueprintGeneratedClass Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C
// 0x001D (FullSize[0x0CED] - InheritedSize[0x0CD0])
class AWeapon_Swamp_Devastator_C : public AWeapon_LongGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Magazine_Mesh;                                             // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MuzzlePoint;                                               // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                ProjectileCount;                                           // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MagazineOn;                                                // 0x0CEC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C");
		return ptr;
	}


	void OnRep_MagazineOn();
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void OnActivated();
	void OnFire(const struct FVector& from, const struct FVector& to, float WeaponSpread);
	void OnFireEnd();
	void OnServer_End();
	void OnServer_TurnOff();
	void ExecuteUbergraph_Weapon_Swamp_Devastator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
