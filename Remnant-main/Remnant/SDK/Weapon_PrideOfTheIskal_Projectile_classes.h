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

// BlueprintGeneratedClass Weapon_PrideOfTheIskal_Projectile.Weapon_PrideOfTheIskal_Projectile_C
// 0x0018 (FullSize[0x04E0] - InheritedSize[0x04C8])
class AWeapon_PrideOfTheIskal_Projectile_C : public ABP_Projectile_Stick_Sphere_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Trails_Body;                                               // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_Trails1;                                                 // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_PrideOfTheIskal_Projectile.Weapon_PrideOfTheIskal_Projectile_C");
		return ptr;
	}


	void OnProjectileHit(const struct FHitResult& Hit);
	void ExecuteUbergraph_Weapon_PrideOfTheIskal_Projectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
