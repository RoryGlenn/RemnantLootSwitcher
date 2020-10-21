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

// BlueprintGeneratedClass Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C
// 0x0047 (FullSize[0x0358] - InheritedSize[0x0311])
class UAction_Mod_Swarm_FireProjectiles_C : public UAction_Mod_MultiTarget_FireProjectiles_C
{
public:
	unsigned char                                      UnknownData_68XC[0x7];                                     // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0318(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                ProjectileCounter;                                         // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_18CP[0x4];                                     // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              Projectiles;                                               // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsDoneFiring;                                              // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NJUM[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              ReturnedProjectiles;                                       // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UParticleSystemComponent*                    CurrentGroupedVFX;                                         // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C");
		return ptr;
	}


	void DestroyVFX();
	void ProcessGroupedVFX();
	void ConditionallyFinish();
	void InitProjectile(class AActor* Target, class ABP_Projectile_Homing_MultiTarget_Base_C* Projectile);
	void OnTick(float DeltaSeconds);
	void FinishFiringProjectiles();
	void OnHomeStatusChanged(class AActor* CurrentProjectile, bool IsHome);
	void OnActionStop();
	void MultiPlayGroupedVFX();
	void MultiDestroyGroupedVFX();
	void ExecuteUbergraph_Action_Mod_Swarm_FireProjectiles(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
