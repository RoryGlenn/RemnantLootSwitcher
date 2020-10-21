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

// BlueprintGeneratedClass Projectile_Mod_Banish.Projectile_Mod_Banish_C
// 0x0014 (FullSize[0x049C] - InheritedSize[0x0488])
class AProjectile_Mod_Banish_C : public AProjectileSphere
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    VFX_Proj;                                                  // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              RandomBounceAngle;                                         // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Mod_Banish.Projectile_Mod_Banish_C");
		return ptr;
	}


	void OnProjectileHit(const struct FHitResult& Hit);
	void ExecuteUbergraph_Projectile_Mod_Banish(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
