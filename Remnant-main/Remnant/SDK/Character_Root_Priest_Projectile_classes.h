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

// BlueprintGeneratedClass Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C
// 0x0020 (FullSize[0x04F0] - InheritedSize[0x04D0])
class ACharacter_Root_Priest_Projectile_C : public ABP_Projectile_GroundTarget_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    VFX_Trail;                                                 // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        ProjectileMesh;                                            // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatorComponent*                           Rotator;                                                   // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C");
		return ptr;
	}


	void GetCharacter(class ACharacterGunfire** AsCharacter_Gunfire);
	void OnHitGround(const struct FHitResult& Impact, const struct FVector& GroundLocation);
	void ExecuteUbergraph_Character_Root_Priest_Projectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
