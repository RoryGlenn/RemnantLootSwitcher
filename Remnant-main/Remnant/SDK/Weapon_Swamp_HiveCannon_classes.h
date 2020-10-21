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

// BlueprintGeneratedClass Weapon_Swamp_HiveCannon.Weapon_Swamp_HiveCannon_C
// 0x001C (FullSize[0x0CEC] - InheritedSize[0x0CD0])
class AWeapon_Swamp_HiveCannon_C : public AWeapon_HandGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             VFX_Body;                                                  // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MuzzlePoint;                                               // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Swamp_HiveCannon.Weapon_Swamp_HiveCannon_C");
		return ptr;
	}


	void OnFire(const struct FVector& from, const struct FVector& to, float WeaponSpread);
	void ExecuteUbergraph_Weapon_Swamp_HiveCannon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
