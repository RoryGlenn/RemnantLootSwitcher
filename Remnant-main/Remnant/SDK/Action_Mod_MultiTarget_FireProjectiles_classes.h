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

// BlueprintGeneratedClass Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C
// 0x004E (FullSize[0x0311] - InheritedSize[0x02C3])
class UAction_Mod_MultiTarget_FireProjectiles_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_WT3U[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Spread;                                                    // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FName                                       Socket;                                                    // 0x02D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4PXK[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProjectileToFire;                                          // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              InitialVelocity;                                           // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              InitialPitch;                                              // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              MinAimPitch;                                               // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              InitialSpread;                                             // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               FinishActionOnProjectilesFired;                            // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_SC13[0x7];                                     // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMultiTargetProjectileEntry>         ProjectileEntries;                                         // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               UseSpreadForDumbFire;                                      // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_MultiTarget_FireProjectiles.Action_Mod_MultiTarget_FireProjectiles_C");
		return ptr;
	}


	void GetEndProjectileLocation(int ProjectileIndex, struct FVector* EndLocation);
	void FireAllProjectiles();
	void FireAndAddProjectile(const struct FMultiTargetProjectileEntry& ProjectileEntry);
	void InitProjectile(class AActor* Target, class ABP_Projectile_Homing_MultiTarget_Base_C* Projectile);
	void FinishFiringProjectiles();
	void GetFireDirection(struct FVector* Dir);
	void OrderTargets(TArray<class AActor*>* Targets, class ACharacterGunfire* Character, TArray<class AActor*>* OrderedTargets);
	void GetCurrentTarget(TArray<class AActor*>* Targets, int Index, class AActor** Target);
	void Get_Socket_Location_from_owner(struct FVector* SocketLocation);
	void OnActionStart();
	void ExecuteUbergraph_Action_Mod_MultiTarget_FireProjectiles(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
