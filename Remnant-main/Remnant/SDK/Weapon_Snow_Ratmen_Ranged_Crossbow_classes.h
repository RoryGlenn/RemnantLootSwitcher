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

// BlueprintGeneratedClass Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C
// 0x0028 (FullSize[0x0CF8] - InheritedSize[0x0CD0])
class AWeapon_Snow_Ratmen_Ranged_Crossbow_C : public AWeapon_Gun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDissolveComponent*                          Dissolve;                                                  // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MuzzlePoint;                                               // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ProjectileBP;                                              // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C");
		return ptr;
	}


	void OnFire(const struct FVector& from, const struct FVector& to, float WeaponSpread);
	void DissolveOut();
	void CustomEvent_1(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause);
	void OnEquipped();
	void ExecuteUbergraph_Weapon_Snow_Ratmen_Ranged_Crossbow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
