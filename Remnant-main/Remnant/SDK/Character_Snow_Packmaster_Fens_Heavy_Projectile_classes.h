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

// BlueprintGeneratedClass Character_Snow_Packmaster_Fens_Heavy_Projectile.Character_Snow_Packmaster_Fens_Heavy_Projectile_C
// 0x0020 (FullSize[0x04A8] - InheritedSize[0x0488])
class ACharacter_Snow_Packmaster_Fens_Heavy_Projectile_C : public ABP_Projectile_Sphere_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    VFX_Trail;                                                 // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Chunk;                                                  // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatorComponent*                           Rotator;                                                   // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Snow_Packmaster_Fens_Heavy_Projectile.Character_Snow_Packmaster_Fens_Heavy_Projectile_C");
		return ptr;
	}


	void OnProjectileHit(const struct FHitResult& Hit);
	void ExecuteUbergraph_Character_Snow_Packmaster_Fens_Heavy_Projectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
