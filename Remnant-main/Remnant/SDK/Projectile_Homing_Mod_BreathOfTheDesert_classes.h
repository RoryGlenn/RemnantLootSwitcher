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

// BlueprintGeneratedClass Projectile_Homing_Mod_BreathOfTheDesert.Projectile_Homing_Mod_BreathOfTheDesert_C
// 0x0020 (FullSize[0x0500] - InheritedSize[0x04E0])
class AProjectile_Homing_Mod_BreathOfTheDesert_C : public ABP_Projectile_Homing_MultiTarget_Base_C
{
public:
	class UAudioComponent*                             Weapon_Mod_BreatheOfTheDesert_Projectile_Start_SC;         // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        ProjectileMesh;                                            // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatorComponent*                           Rotator;                                                   // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Homing_Mod_BreathOfTheDesert.Projectile_Homing_Mod_BreathOfTheDesert_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
